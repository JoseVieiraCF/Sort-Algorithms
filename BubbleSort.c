#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vet[] = {1,8,5,2,3};
    int aux = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vet[j] > vet[j+1])
            {
                aux = vet[j];
                vet[j] = vet[j +1 ];
                vet[j+1] = aux;
            }
            
        }
        
    }
    
    printf("Vetor ordenado: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",vet[i]);
    }
    
    return 0;
}
