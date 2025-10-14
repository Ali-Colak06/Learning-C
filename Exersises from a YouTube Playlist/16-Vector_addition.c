#include <stdio.h>

void dot_product(float vector1[], float vector2[], float final_vector[]);

int main(){
    float v1[] = {1,2,3};
    float v2[] = {3,4,5};
    float v_result[3];
    dot_product(v1, v2, v_result);

    return 0;
}

void dot_product(float vector1[], float vector2[], float final_vector[]){
    for (int i = 0; i<3; i++){
        final_vector[i] = vector1[i] + vector2[i];
        printf("final_vector[%d]:%f\n", i, final_vector[i]);
    }
}