#include<stdio.h>
#include<string.h>
int main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Digite a quantos nomes serão organizados:\n");
   scanf("%d",&n);
   printf("Digite os nomes fora de ordem:\n");
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("\nOs nomes organizados:\n");
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }
}
