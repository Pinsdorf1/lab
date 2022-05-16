//Projeto V2 utilizando OpenMP e # pragma omp critical
/*
Grupo: 
Calebe de Sa Ferreira | TIA: 32088116
Mateus de Pasquali da Silva | TIA: 32086997
Nicolas Pinsdorf | TIA: 32036108
*/
//comando para rodar o código: gcc -g -Wall -fopenmp -o nome_do_projeto nome_do_projeto.c
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

long int T = 1000000000;

void taylor(double* resultado_final);//A variávl resultado_final se trata de uma variável global

int main(int argc, char* argv[]) {

  double resultado_final = 0.0;
  int thread_count;

  thread_count = strtol(argv[1], NULL, 10);

# pragma omp parallel num_threads(thread_count)
  taylor(&resultado_final);
  
  printf("ln(%ld) = %.3f\n", T, resultado_final);
  
  return 0;
}

void taylor(double* resultado_final) {
  double local_result = 0.0;
  int local_rank = omp_get_thread_num();//A variávl local_rank se trata de uma variável local 
  int thread_count = omp_get_num_threads();

  long int first_num = (local_rank * 2000000000) + 1;
  
  for (long int i = first_num; i < (first_num+2000000000); i++) {
    local_result += 1/ (double) i;
  }

# pragma omp critical
  *resultado_final += local_result;
  
  printf("Hello from thread %d of %d -> soma= %.3f\n", local_rank, thread_count, local_result);

}
