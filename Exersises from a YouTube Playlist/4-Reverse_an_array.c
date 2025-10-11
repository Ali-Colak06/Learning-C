#include <stdio.h>

// Reverse An Array

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int p = 0;

    for (int i = 9; i >= 5; i -= 1){
        printf("------------------------------------------------------------------------\n");
        printf("i: %d\n", i);
        printf("p: %d\n", p);
        
        printf("Let variable 'a' be equal to the element at array index %d (value: %d)\n", p, array[p]);
        int a = array[p];
        
        printf("Let array index %d (value: %d) be equal to array index %d (value: %d).\n", p, array[p], i, array[i]);
        array[p++] = array[i];
        
        printf("Let array index %d be equal to 'a' (value: %d).\n", i, a);
        array[i] = a;
    }
    printf("****************************************************************************************\n");
    printf("Final state of the array:\n"); 
    for (int z = 0; z < 10; z++){
        printf("%d / ", array[z]);
    }
    
    return 0;
}