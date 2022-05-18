# SpeedUp 

SpeedUp = Tempo serial / Tempo paralelo 

Nesta entrega colocamos todos os códigos relacionados ao projeto, a primeira versão serial (somataylor.c); a versão utilizando Threads (v1projtaylor.py); e por fim as duas versões utilizando o OpenMP(v2projtaylor.c, v2projtaylorsemcrit.c).

Para calcular os tempos de execução paralelo e o serial testamos a função time do Linux:

Primeiro fizemos o time ./somataylor ( código serial) : 

Tempo serial: 0m3,602s

Após testamos o código com a versão paralela utilizando o OpenMP com e sem # pragma omp critical

 $time ./v2projtaylor 10

 $time ./v2projtaylor 10

Tempo paralelo com # pragma omp critical com 10 threads: 0m2,239s
Tempo paralelo sem # pragma omp critical com 6 threads: 0m1,123s → Melhor tempo
