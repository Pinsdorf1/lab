# Como compilar o programa 

Desta vez, utilizamos o linux para realizar esta etapa, porém o repl.it também foi utilizado como suporte.

Caso for testar no linux, entre na pasta VFinal, e os códigos que utilizamos(utilizando o OpenMP) foi, somataylorserial.c e vfinaltaylor.c e dentro do código há os comandos para compilar o código. 

Mas no caso, para compilar o código serial é: gcc -o somataylorserial somataylorserial.c e esperar o código ser compilado após é ./somataylorserial.

E para compilar o código paralelo, que é o vfinaltaylor.c, o comando será: 

gcc -g -Wall -fopenmp -o vfinaltaylor vfinaltaylor.c

# Como executar o programa 

Caso seja no Linux, utilize: 

   - gcc -o somataylorserial somataylorserial.c ( isso para o código serial), no caso o arquivo somataulor.c

   - gcc -g -Wall -fopenmp -o vfinaltaylor vfinaltaylor.c (isso para o código paralelo, no caso o arquivo vfinaltaylor.c


./somataylorserial 

./vfinaltaylor 2 ou 4 ((e o número de threads que queira usar)

No repl.it os comandos serão o mesmo. 

# Como comprovar que os resultados propostos foram alcançados.

Para esta entrega final, realizamos diversos testes com os códigos. Para o serial, verificamos até onde o código suportava o número máximo para o ln(T), que no caso foi 1000000000000( ou 10**12). Portanto usamos o mesmo ln(T) para o código paralelo, porém realizamos uma série de testes, utilizando diferentes valores para os números de threads. Testamos com 2, 4, 6, 8 e 10 threads para ver qual teria o melhor tempo de execução. 

O teste que teve melhor execução foi com 2 threads: 

Hello from thread 0 of 2, soma = 26.598799

Hello from thread 1 of 2, soma = 0.693147

ln(T)(1000000000000) = 27.291946
