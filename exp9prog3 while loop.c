#include <stdio.h>

void Uppercase(char *s) {
    while (*s) {
        if (*s>='a'&&*s<='z') {
            *s =*s-32;
        }
        s++;
    }
}

int main() {
    char str[100];
    
    printf("Enter string : ");
    
    scanf("\n", str); 

    Uppercase(str);
    
    printf("Result is: %s\n", str);
    return 0;
}
