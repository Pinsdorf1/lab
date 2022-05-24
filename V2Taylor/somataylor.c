/*Grupo:
  Calebe de Sa Ferreira | TIA: 3208816
  Mateus de Pasquali da Silva | TIA: 32086997
  Nicolas Pinsdorf | TIA: 32036108
*/

#include <stdio.h>

int main(void)
{
  double i;
  double sum = 0;

  for (i = 1; i<=1000000000; i++) //ln(1000000000), ou seja, soma infinitesimal de Taylor até T = 1000000000
    {
    sum+=1/(double)i;
    }
  printf("Código que envolve a soma infinitesimal para solução de ln(1000000000) em séries de Taylor\n");
  printf("O resultado é: %f", sum);

return 0;
}


