/*Grupo:
  Calebe de Sa Ferreira | TIA: 3208816
  Mateus de Pasquali da Silva | TIA: 32086997
  Nicolas Pinsdorf | TIA: 32036108
*/

#include <stdio.h>

int main(void)
{ 
  float sum = 0;
  float i;

  for (i = 1; i<=10; i++)
    {
    sum+=1/i;
    }
  printf("Código que envolve a soma infinitesimal para solução de ln(10) em séries de Taylor ");
  printf("\n");
  printf("O resultado é: %f", sum);

return 0;
}
