#include <stdio.h>

// Find the Minimum Number in an Array

int main(){
    
    int my_array[] = {2,5,3,6,8,9,1};
    int min = my_array[0];
    int len_array = sizeof(my_array) / sizeof(my_array[0]);
    for(int i = 1; i < len_array; i++){
        if(my_array[i] < min){
            min = my_array[i];
        }
    }
    printf("The minimum value is: %d\n", min);
    return 0;
}