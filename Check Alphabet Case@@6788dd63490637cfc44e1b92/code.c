#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
   if (ch>=97 && ch<=122){
    printf("Lowercase");
    }
    else if(ch>=65 && ch<=90){
        printf("Uppercase");
    }
    else {
printf("Not an alphabet");
        }
            return 0;
}