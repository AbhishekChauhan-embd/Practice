#include<stdio.h>
void strRev(char *ptr, int len);
void main(){

    char str[]="Abhishek";

    int i,j,len;

    printf("%s\n",str);
    strRev(str, sizeof(str));
    printf("%s\n",str);    
}

void strRev(char *ptr, int len)
{
    char *str=ptr;
    int i,j;
    char temp;
    printf("i = %d\n",len); 
    for(i=0,j=len-2;j>i;i++,j--)
    {
            temp        = *(ptr+i);
            printf("i = %c\n",*(ptr+i)); 
            *(ptr+i)    = *(ptr+j);
            printf("j = %c\n",*(ptr+j));
            *(ptr+j)    = temp;
            printf("j = %c\n",*(ptr+j));
            
    }
}