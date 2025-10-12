#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Sum the Values in an Array

void addition(int sum, int len, int array[]);

int main(){
    int my_array[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(my_array) / sizeof(my_array[0]);
    int sum = my_array[0];
    addition(sum, len, my_array);

    return 0;
}
void addition(int sum, int len, int array[]){
    for (int i = 1; i<len; i++){
        sum += array[i];
    }
    printf("sum:%d\n",sum);
}