#include <stdio.h>

int main() {
   char ch;
   scanf("%d",&ch);
   (ch=='a'||'e'||'i'||'o'||'u')?printf("Vowel"):printf("Consonant");
    return 0;
}