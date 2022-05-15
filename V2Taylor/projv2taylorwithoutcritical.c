/*
Grupo: 
Calebe de Sa Ferreira | TIA: 32088116
Mateus de Pasquali da Silva | TIA: 32086997
Nicolas Pinsdorf | TIA: 32036108
*/
//Projeto V2 Série de Taylor, utilizando o OpenMP, porém sem # pragma omp critical
//Comando para rodar o código: gcc -g -Wall -fopenmp -o nome_do_projeto nome_do_projeto.c
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>


long int T = 1000000000;

double taylor(double* resultado_final);

int main(int argc, char* argv[]) {

  double resultado_final = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel for num_threads(thread_count) \
    reduction(+: resultado_final)

  for (long int i = 1; i <= T; i++) {
    resultado_final += 1 / (double) i;
  }
 
  printf("ln(%ld) = %.3f\n", T, resultado_final);
  
  return 0;
}
