#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
   if (ch>=97 && ch<=122){
    printf("Lowercase")}
    else if(ch>!97 && ch<!122){
        printf("Not an alphabat");
    }
    else {
printf("Uppercase");
        }
            return 0;
}