#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;
}PESSOA;

int comparacao(const void *pessoa1, const void pessoa2)
{
    float pess1 = ((PESSOA)pessoa1)->altura;
    float pess2 = ((PESSOA)pessoa2)->altura;
    if (pess1 < pess2) return -1;
    if (pess1 > pess2) return 1;
    return 0;
}

int main()
{
    struct PESSOA array[10];
    FILE fptr;
    fptr = fopen("./dadospessoas.txt", "r");
    if (fptr == NULL) 
    {
        printf("\nErro na abertura do arquivo\n");
        exit(1);
    }
    int x = 0;
    while (!feof(fptr))
    {
        fscanf(fptr, "%s", array[x].nome);
        fscanf(fptr, "%d", array[x].idade);
        fscanf(fptr, "%f", array[x].altura);
        x++;
    }

    qsort(array, sizeof(PESSOA), comparacao);
    for (int y = 0, y < x - 1; y++) 
    {
        printf("Nome %s", array[y].nome);
        printf("Nome %d", array[y].idade);
        printf("Nome %.2f", array[y].altura);
    }
    fclose(fptr);
    return 0;

}
