#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 

int compare(char * str1, char * str2);


int main()
{ 
    
    char str1[MAX_SIZE];
    int res;
    char search1, search2;
    gets(str1);

    search1 = '(';
    search2 = ')';


    i=0;
    while(str[i]!='\0')
    {

        if(str[i] == search1 || str[i] == search2)
        {
            l = strlen(str1); 

    for (i = 1; i < l; i++) {
        for (j = 0; j < l - i; j++) {
            if (str[j] > str[j + 1]) { /
                ch = str[j]; 
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }
        }

        i++;
    }

    return 0;
}


/**
 * Compares two strings lexicographically. 
 * Returns 0 if both strings are equal, 
 *         negative if first string is smaller
 *         otherwise returns a positive value
 */
int compare(char * str1, char * str2)
{
    int i = 0;

    /* Iterate till both strings are equal */
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    // Return the difference of current characters.
    return str1[i] - str2[i];
}
