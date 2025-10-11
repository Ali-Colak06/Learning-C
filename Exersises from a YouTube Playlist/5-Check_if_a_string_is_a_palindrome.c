#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Check If A String Is A Palindrome

bool is_true(char string[]);

int main(){
    char my_string[] = "abccba";
    if(is_true(my_string)) printf("This string is a palindrome.\n");
    else printf("This string is not a palindrome.\n");
    
    return 0;
}

bool is_true(char string[]){
    int len = strlen(string);

    for(int i = 0; i < len; i++){
        printf("string[%d]: %c, string[%d]: %c\n", i, string[i], (len - 1 - i), string[len - 1 - i]);
        if(string[i] != string[len - 1 - i]){
            return false;
        }
    }
    return true;
}