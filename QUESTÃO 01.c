#include <stdio.h>

#define MAX_LETRAS 100  

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                
                
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
}

int main () {
    char letras[MAX_LETRAS];
    int i = 0;
    char c;
    
    printf("Digite várias letras:\n");
    
    while ((c = getchar ()) != '\n' && i < MAX_LETRAS) {
        if (c != ' ') {
            letras[i++] = c;
            
        }
    }
    
    bubbleSort(letras, i);
    printf("letras ordenadas: ");
    for (int j = 0; j < i; j++) {
        printf("%c ", letras[j]);
        }
        printf("\n");
        
        return 0;
        
}
