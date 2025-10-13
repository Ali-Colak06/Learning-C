#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Flip a string's lowercase characters to uppercase

void lower_to_upper(char s[], int l);

int main(){
    char my_string[] = "aBcDeF";
    int len = strlen(my_string);

    lower_to_upper(my_string, len);

    return 0;
}

void lower_to_upper(char s[], int l){
    for (int i = 0; i<l; i++){  // If the letter is lowercase
        if (islower(s[i])){
            s[i] = toupper(s[i]);
            printf("%c",s[i]);
        }
        else if (isupper(s[i])){ // If the letter is upperrcase
            s[i] = tolower(s[i]);
            printf("%c",s[i]);
        }
    }

}