#include <stdio.h>
#include <string.h>

// Replace a character in a string with another character

void replace(char *string, char replace, char new);

int main(){
    char my_string[] = "my string";
    char replaced_char = 'y';
    char new_char = 'a';
    replace(my_string, replaced_char, new_char);
    return 0;
}

void replace(char *string, char replace, char new){
    int len_string = strlen(string);
    for(int i = 0; i<len_string; i++){
        if(string[i]==replace){
            string[i] = new;
        }
    }
    printf("new string is: %s\n", string);
}