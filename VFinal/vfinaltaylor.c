/*
Grupo: 
Calebe de Sa Ferreira | TIA: 32088116
Mateus de Pasquali da Silva | TIA: 32086997
Nicolas Pinsdorf | TIA: 32036108
*/
//Projeto V2 Série de Taylor, utilizando o OpenMP e # pragma omp critical
//Comando para rodar o código: gcc -g -Wall -fopenmp -o nome_do_projeto nome_do_projeto.c
// ./nome_do_projeto 10(Número de Threads)
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int ln_T = 1000000000000;

void taylor(double* resultado_global);

int main(int argc, char* argv[]) {

  double resultado_global = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel num_threads(thread_count)
  taylor(&resultado_global);
  
  printf("ln(T)(%ld) = %f\n", ln_T, resultado_global);
  
  return 0;
}

void taylor(double* resultado_global) {
  double resultado_local = 0.0;
  int my_local_rank = omp_get_thread_num(); 
  int thread_count = omp_get_num_threads();

  long int get_first_num = (my_local_rank * 2 * 100000000000) + 1;
  
  for (long int i = get_first_num; i < (get_first_num + 2 * 100000000000); i++) {
    resultado_local += 1/ (double) i;
  }

# pragma omp critical
  *resultado_global += resultado_local;
  
  printf("Hello from thread %d of %d, soma = %f\n", my_local_rank, thread_count, resultado_local);

}
