#include <stdio.h>

// Count the Occurrences of a Value in an Array

int main (){
    int list[] = {1,3,6,4,1,9,5,1,4,5,6,7,8,5,1,1,7,8,5,3,5,7,9};
    int count = 0;

    for (int i = 0; i < (sizeof(list) / sizeof(list[0])); i++){
        if (list[i] == 1){
            count += 1;
        }
    }
    
    printf("The number 1 appears %d times in the list.\n", count); 
    
    return 0;
}