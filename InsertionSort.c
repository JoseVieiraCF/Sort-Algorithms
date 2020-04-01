#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[] = {100,3,6,750,12};
    int key, i , j;
    for ( i = 1; i < 5; i++)
    {
        key = vetor[i];
        for ( j = i; (j >0) && (key < vetor[j - 1]) ; j--)
        {
            vetor[j] = vetor[j - 1];
        }
        vetor[j] = key;
        
    }
    for (int f = 0; f < 5; f++)
    {
        printf("%d ",vetor[f]);
    }
    
       

    return 0;
}
