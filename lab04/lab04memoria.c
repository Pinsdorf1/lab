/*Grupo:
  Calebe de Sa Ferreira | TIA: 3208816
  Mateus de Pasquali da Silva | TIA: 32086997
  Nicolas Pinsdorf | TIA: 32036108
*/

#include  <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main()
{
    //o processo pai e o processo filho compartilhem uma variável simples (por exemplo, inteiro - valor 1)

    pid_t childpid;
    int shm_id; 

    shm_id = shmget(IPC_PRIVATE, 1024, IPC_CREAT |  0660);
         if (shm_id < 0) {
             printf("shmget error\n");
        }
    int *shrd = (int*)shmat(shm_id, NULL, 0);


    *shrd = 1;


    //o processo pai imprime o valor inicial dessa variável,em seguida, cria o processo filho e espera-o
    printf("Valor inicial da variável compartilhada é %i\n",*shrd);
    childpid = fork();
    //o processo filho acessa esta variável, realiza uma operação (por exemplo, adição), modificando o valor; em seguida, o processo filho termina
    if (childpid == 0)
    {     
        *shrd+= 2;  

        printf("O valor da variavel compartilhada ao somar 2: %i\n",*shrd);    
    }
    else{
        //o processo pai realiza uma outra operação (por exemplo, multiplicação - valor 4, totalizando 12), modificando novamente o valor, e imprime novamente a variável 
        wait(NULL);     
        *shrd *= 4 ;

        printf("O valor da variavel compartilhada ao multiplicar por  4: %i\n",*shrd);    

    }


    return 0;
}
