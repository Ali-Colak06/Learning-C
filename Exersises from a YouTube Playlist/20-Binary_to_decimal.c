#include <stdio.h>
#include <string.h>
#include <math.h>

int convert(char *binary);

int main(){
    char binary_number[] = "110101";
    double decimal_number = convert(binary_number);
    printf("decimal number: %.2f", decimal_number);

    return 0;
}

int convert(char *binary){
    int len_char = strlen(binary);
    int decimal = 0;
    int j = 0;
    for (int i=(len_char-1); i>=0; i--){
        printf("i: %d, j: %d\n", i, j);
        if (binary[i]== '1'){
            printf("decimal: %d, decimal + %.2f: %.2f\n",decimal, pow(2,j), (decimal + pow(2,j)));
            decimal += pow(2,j);
        }
        j++;
    }
    return decimal;
}