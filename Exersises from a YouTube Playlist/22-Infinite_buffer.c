#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Infinite Input Buffer

int main(){

    int size = 2;
    int input = 0;
    int input_data = 0;
    int *buffer = malloc(sizeof(int) * size);
    while(true){
        if (input_data == size){
            size *= 2;
            buffer = realloc(buffer, sizeof(int) * size);
            printf("Buffer size: %d\n", size);
        }
        printf("Enter (-1 for EXIT):");
        scanf("%d", &input);
        if(input == -1) break;
        else{
            buffer[input_data] = input;
            input_data++;
        }
    }
    for(int i=0; i<input_data; i++){
        printf("buffer[%d]: %d\n", i, buffer[i]);
    }
    
    return 0;
}