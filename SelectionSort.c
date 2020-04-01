#include <stdio.h>

void selection_sort (int vetor[],int n) {
    int i, j, min, aux;
  
    for (i = 0; i < (n - 1); i++) {
        min = i;

        for (j = i+1; j < n; j++) {

            if (vetor[j] < vetor[min]) {
                min = j;
            }

    }

    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
    for (i = 0; i < n; i++) {
        printf ("%d ",vetor[i]);
    }
    printf ("\n");
}

int main(int argc, char const *argv[]) {
    int vetor[] = {100,3,6,750,12};
  
    selection_sort (vetor, 5);

    return 0;
  
}