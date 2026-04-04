#include "myheader.h"

/*
*************************************************
*** User defined function for string operatoin **
*************************************************
1)  char *stringCopy(char *dest, char *src);
2)  int stringCmpr(char *s1, char *s2);
3)  char *stringCncat(char *dest, char *src);
4)  char *stringRev(char *ptr);
5)  char *LowToUp(char *ptr);

**String Searching & Parsing:
1)  void cntConsoVowels(char *ptr, int *conso, int *vowel)
2)  char *findCharInString(char *ptr, char ch)
3)  int findSubstring(char *str, char *substr)
4)  int countSubstring(char *str, char *substr)

Note : For the defination please refer "myheader.h".
*/

int main(){

    char s1[20],ch;
    char s2[10];
    int conso, vowels, pos;

    char * (*FP)(char *)=LowToUp;
    
    printf("Enter a string.\n");
    scanf("%[^\n]",s1);
    printf("%s\n",FP(s1));


    return 0;
}
  