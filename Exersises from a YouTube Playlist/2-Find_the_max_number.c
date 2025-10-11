#include <stdio.h>

// Find the Maximum Number in an Array

int main(){
    int my_array[] = {10,8,4,5,-2,9,6,4,1,3,2,37,-3};
    int len_list = sizeof(my_array) / sizeof(my_array[0]);
    int max = my_array[0];
    for(int i=1; i<=12; i++){
        if (my_array[i] > max){
            max = my_array[i];
        }
    }
    printf("The maximum number is: %d", max);

    return 0;
}