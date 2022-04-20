- Como compilar o programa na plataforma disponibilizada;

- Como executar o programa;

O código foi feito no repl.it, portanto recomendamos que seja compilado no mesmo. 

- Como comprovar que os resultados propostos foram alcançados.

O código cria os processos(pai e filho), além de realizar as operações(soma e multiplicação) com a memória compartilhada utilizando o shmget() e fork(). Portanto realizamos o que foi pedido! O código utiliza shmget() e fork(); cria os 2 processos(pai e filho): os processos compartilham memória através de uma variável simples(no caso, 1); o processo pai imprime o valor inicial dessa variável; em seguida, cria o processo filho e espera-o; então o processo filho acessa está variável e realiza a operação de soma(2+1) e o resultado é armazenado e atualizado na memória compartilhada(resultado:3); por fim o processo pai acessa a memória compartilhada e realiza a operação de multiplicação(3(variável compartilhada atualizada)*4). 
