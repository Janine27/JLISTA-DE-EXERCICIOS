#include <stdio.h>

#define MAX_NUMEROS 100

void bubbleSortDecrescente(int arr[], int n) {
    
    int i, j;
    int temp;
    int trocou;
    
    for (i = 0; i < n-1; i++) {
        trocou = 0;
        
        for (j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                trocou = 1;
            }
        }
        
        if (!trocou) {
            break;
        }
    }
}

int main() {

int numeros[MAX_NUMEROS];
int i = 0;
int c;

    printf("Digite vários números inteiros (aperte enter para terminar):\n");
    while (scanf("%d", &c) == 1 && i < MAX_NUMEROS) {
        numeros[i++] = c;
        }
        bubbleSortDecrescente(numeros, i);
        
        printf("Números ordenados em ordem decrescente: ");
        for (int j = 0; j < i; j++) {
            printf("%d ", numeros[j]);
            
        }
        printf("\n");
        
    return 0;
}
