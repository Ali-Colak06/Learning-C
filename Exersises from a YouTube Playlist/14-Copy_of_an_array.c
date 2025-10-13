#include <stdio.h>
#include <stdlib.h>

// Create a copy of an array
int *copy_array(int *array, int len);

int main(){
    int a[] = {1,2,3,4,5,6};
    int *copy_a = copy_array(a, 6);

    for (int i = 0; i<6; i++){
        printf("copy_a[%d]: %d\n", i, copy_a[i]);
    }

    return 0;
}

int *copy_array(int *array, int len){
    int *c = malloc(len * sizeof(int));

    for (int i = 0; i < len; i++){
        c[i] = array[i];
    }
    return c; 
}