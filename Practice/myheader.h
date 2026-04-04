#include<stdio.h>


///////////////////////Basic String Operations///////////////////
/*
*************************************************************
**  Defination  : Copy string from source to destination.  **
**  Argumants   : 1. Destination string, 2. Srouce string. **
**  Return Type : the destination string address.          **  
*************************************************************
*/
char *stringCopy(char *dest, char *src)
{
    int i,j;

    for(i=0;*(src+i);i++)
    {
        *(dest+i)=*(src+i);
    }
    *(dest+i) = '\0';

    return dest;
}

/*
****************************************************
****************************************************
*/
int stringCmpr(char *s1, char *s2)
{
    int i;
    for(i=0;*(s1+i)||*(s2+i);i++)
    {
        if(*(s1+i) < *(s2+i)){
            return -1;
        }else if(*(s1+i) > *(s2+i)){
            return 1;
        }
    }
    return 0;
}

/*
****************************************************
****************************************************
*/
char *stringCncat(char *dest, char *src)
{
    int i=0,j=0;
    while(*(dest+(i++)));
    i--;
    printf("%d\n",i);
    
    while(*(src+(j)))
    {
        *(dest+i)=*(src+j);
        i++;
        j++;
    }
    *(dest+i)='\0';

    return dest;
    
}

/*
****************************************************
****************************************************
*/
char *stringRev(char *ptr)
{
    char *str=ptr;
    int i,j,len;
    char temp;

    for(len=0;*(ptr+len);len++);
    printf("i = %d\n",len); 
    for(i=0,j=len-1;j>i;i++,j--)
    {
        temp        = *(ptr+i);
        *(ptr+i)    = *(ptr+j);
        *(ptr+j)    = temp;
    }

    return ptr;
}

/*
**************************************************************************************
** Defination   :                                                                   **
** Parameter1   :                                                                   **
** Parameter2   :                                                                   **
** Parameter3   :                                                                   **
** Return       :                                                                   **
**************************************************************************************
*/
char *LowToUp(char *ptr)
{
    int i;
    for(i=0;*(ptr+i);i++)
    {
        if(*(ptr+i)>96 && *(ptr+i)<123)
        {
            *(ptr+i)=*(ptr+i)-32;
        }
    }

    return ptr;
}

/////////////////////////////////String Searching & Parsing///////////////////////////
/*
**************************************************************************************
** Defination   : Function to count the number of vowels and consonants in a string **
** Parameter1   : Char pointer for Source string.                                   **
** Parameter2   : int pointer for Consonents variable.                              **
** Parameter3   : int pointer for Vowels variavle.                                  **
** Return       : NA                                                                **
**************************************************************************************
*/

void cntConsoVowels(char *ptr, int *conso, int *vowel)
{
    char *str=ptr;
    int count1=0,count2=0;
    int i;
    for(i=0;*(str+i);i++)
    {
        if( *(str+i)=='A' || *(str+i)=='a' || 
            *(str+i)=='E' || *(str+i)=='e' || 
            *(str+i)=='I' || *(str+i)=='i' || 
            *(str+i)=='O' || *(str+i)=='o' || 
            *(str+i)=='U' || *(str+i)=='u' )
        {
            count1++;
        }else{
            count2++;
        }
    }

    *conso = count2;
    *vowel = count1;
}

/*
**************************************************************************************
** Defination   : Function to find the first occurrence of a character in a string  **
** Parameter1   : Char poiter for the string.                                       **
** Parameter2   : Character                                                         **
** Return       : Position of the Charecter.                                        **
**************************************************************************************
*/
int findCharInString(char *ptr, char ch)
{
    char *chptr;
    int i;
    for(i=0;*(ptr+i);i++)
    {
        if(*(ptr+i) == ch)
        {
            return i;
        }
    }

    printf("%c not found in given string!\n",ch);
    return -1;
}

/*
**************************************************************************************
** Defination   : Function to find a substring inside a string                      **
** Parameter1   : Char pointer for the string.                                      **
** Parameter2   : Char pointer for the substring                                    **
** Return       : integer (1->found, 0 not found).                                  **
**************************************************************************************
*/

int findSubstring(char *str, char *substr)
{
    int i,j;

    for(i=0,j=0;*(str+i);i++)
    {
        if(*(str+i)==*(substr+j))
        {
            for(;*(str+j);j++)
            {
                if(*(str+i+j)!=*(substr+j))
                {
                    break;
                }
            }
            if(*(substr+j)=='\0')
            {
                return 1;
            }else{
                j=0;
            }
        }
    }
    return 0;
}

/*
**************************************************************************************
** Defination   : Function to count a substring inside a string                     **
** Parameter1   : Char pointer for the string.                                      **
** Parameter2   : Char pointer for the substring                                    **
** Return       : return count (-1 if not found)                                    **
**************************************************************************************
*/

int countSubstring(char *str, char *substr)
{
    int i,j,count=0;

    for(i=0,j=0;*(str+i);i++)
    {
        if(*(str+i)==*(substr+j))
        {
            for(;*(str+j);j++)
            {
                if(*(str+i+j)!=*(substr+j))
                {
                    break;
                }
            }
            if(*(substr+j)=='\0')
            {
                count++;
                i=i+j;
                j=0;
            }else{
                j=0;
            }
        }
    }
    return count;
}