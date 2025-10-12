#include <stdio.h>

void average(int list[], int l);

int main(){
    int my_array[] = {1,2,3,4,5,6,7,8,9}; // 5
    int len = sizeof(my_array) / sizeof(my_array[0]);
    average(my_array, len);
    return 0;
}

void average(int list[], int l){
    int sum = 0;
    for(int i=0; i<l; i++){
        sum += list[i];
    }
    printf("Sum:%d, Average:%d\n", sum, (sum/l));
}