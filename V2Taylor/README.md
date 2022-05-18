#Como compilar o programa 

Desta vez, utilizamos o Linux para realizar esta etapa, porém o repl.it também foi utilizado como suporte.

Caso for testar no Linux, entre na pasta V2Taylor, e os códigos que utilizamos, utilizando o OpenMP, foi, v2projtaylor.c e v2projtaylorsemcrit.c e dentro do código há os comandos para compilar o código. 

#Como executar o programa 

Caso seja no Linux, utilize: 

 $gcc -g -Wall -fopenmp -o v2projtaylor v2projtaylor.c
 $gcc -g -Wall -fopenmp -o v2projtaylorsemcrit v2projtaylorsemcrit.c
 

 ./v2projtaylor 10 (e o número de threads que queira usar, exemplo que usamos foi 10)

 ./v2projtaylorsemcrit 10 
 
No repl.it os comandos serão o mesmo. 

#Como comprovar que os resultados propostos foram alcançados.

Conforme o requisitado, seguindo o exemplo acima de 10 threads, teremos o seguinte print:

Hello from thread 9 of 10, soma = 0.105361
Hello from thread 6 of 10, soma = 0.154151
Hello from thread 1 of 10, soma = 0.693147
Hello from thread 3 of 10, soma = 0.287682
Hello from thread 7 of 10, soma = 0.133531
Hello from thread 2 of 10, soma = 0.405465
Hello from thread 0 of 10, soma = 19.691044
Hello from thread 4 of 10, soma = 0.223144
Hello from thread 8 of 10, soma = 0.117783
Hello from thread 5 of 10, soma = 0.182322
ln(T)(1000000000) = 21.993629
