#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    FILE *ptr;
    char nomeArquivo[20], caracter;
    scanf("%s", nomeArquivo);
    ptr = fopen(nomeArquivo, "rt");
    if (ptr==NULL) {
        printf("Arquivo inexistente.");
        exit(1);
    }
    caracter=getc(ptr);
    while (caracter!=EOF){
        printf("%c", caracter);
        caracter=getc(ptr);
    }
    return 0;
}
