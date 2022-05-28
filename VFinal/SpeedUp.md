# Speed Up 

SpeedUp = Tempo serial / Tempo paralelo

Nesta entrega utilizamos o código serial(somataylorserial.c) e o código paralelo(vfinaltaylor.c) para fazer o cálculo do speedup. Também usamos como parâmetro o número de threads por execução.
    
Para calcular os tempos de execução paralelo e o serial testamos a função time do Linux:

Primeiro fizemos o time ./somataylorserial:

Tempo serial: 67m18,497s

Após testamos o código com a versão paralela utilizando o OpenMP, o que teve a melhor performance foi com 4 threads e 2 threads
 
$time ./vfinaltaylor 4

$time ./vfinaltaylor 2

Tempo paralelo com # pragma omp critical com 4 threads: 14m40,571s 

Tempo paralelo com # pragma omp critical com 2 threads: 13m45,069s → Melhor tempo

