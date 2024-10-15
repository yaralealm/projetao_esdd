#include <stdio.h>
#include "lib.h"
#include "impl.c"
#define tam 100
#define index 10

int main()
{
    
   int vet[tam]; 
   int kindex[index]; 

   gerar_crescente(vet,tam); 
   imprime_vetor(vet,tam); 

    int j=0; 
   for (int i=1; i <= tam; i++)
   {
    if (i % 10 == 0)
    {
        kindex[j] = vet[i]; 
        j++; 
    }
    
   }

   printf("--------------------------------------------\n"); 

   imprime_vetor(kindex,index); 
   






}
