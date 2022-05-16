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

  for (i = 1; i<=10000000000; i++)
    {
    sum+=1/(double)i;
    }
  printf("Código que envolve a soma infinitesimal para solução de ln(10) em séries de Taylor\n");
  printf("O resultado é: %.3f", sum);

return 0;
}
