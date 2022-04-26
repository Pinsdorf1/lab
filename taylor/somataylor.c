/*Grupo:
  Calebe de Sa Ferreira | TIA: 3208816
  Mateus de Pasquali da Silva | TIA: 32086997
  Nicolas Pinsdorf | TIA: 32036108
*/

#include<stdio.h>
#include<math.h>

int main()
{
  int x,y;
  int fact = 1,n;
  float soma=0;

  printf("Digite quantos valores serão para ln(T):");
  //Exemplo de In(10)
  scanf("%d",&x);

  printf("\nDigite quantos valores a série tem:");
  //Exemplo 1/1 seria 2 (ou seja, dois números a serem divididos) a ser digitado, como na série são 10 valores que seriam somados, então o código já identifica que será a seguir série: 1/1 + 1/2 + 1/3 + 1/4 ...  1/T
  scanf("%d",&n);

  for(y=1;y<n;y++)
  {
    fact = fact*y;
    soma = soma + (pow(x,y)/fact) ;
    }
    soma= soma +1; 

    printf("\nSoma da série (aproximado) de Taylor: %.2f\n\n",soma);

    return 0;
}
