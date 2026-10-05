#include <stdio.h>

int my_array[] = {10,3,2,6,5,8,1,0,4,7,9,-1};
int len = sizeof(my_array)/sizeof(int);

int main(){
    int min_num = my_array[0];
    for(int i = 1; i < len; i++){
        if (min_num > my_array[i]){
            min_num = my_array[i];
        }
    }
    printf("The mininmum value:%d\n", min_num);
    return 0;   
}