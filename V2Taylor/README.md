- Como compilar o programa 

Desta vez, utilizamos o Linux para realizar esta etapa, porém o repl.it também foi utilizado como suporte.

Caso for testar no Linux, entre na pasta V2Taylor, e os códigos que utilizamos, utilizando o OpenMP, foi, projv2taylor.c e projv2taylorwithoutcritical.c e dentro do código há os comandos para compilar o código. 

- Como executar o programa 

Caso seja no Linux, utilize: gcc -g -Wall -fopenmp -o projv2taylor projv2taylor.c

gcc -g -Wall -fopenmp -o projv2taylorwithoutcritical projv2taylorwithoutcritical.c

./projv2taylor (e o número de threads que queira usar, exemplo 6)

No repl.it os comandos serão o mesmo. 

- Como comprovar que os resultados propostos foram alcançados.

Conforme o requisitado, seguindo o exemplo acima de 6 threads, teremos o seguinte print:

Hello from thread 3 of 6 -> soma= 0.776

Hello from thread 0 of 6 -> soma= 21.994

Hello from thread 1 of 6 -> soma= 0.693

Hello from thread 2 of 6 -> soma= inf

Hello from thread 5 of 6 -> soma= 0.883

Hello from thread 4 of 6 -> soma= inf

ln(1000000000) = inf
