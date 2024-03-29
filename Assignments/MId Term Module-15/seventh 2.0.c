#include <stdio.h>


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    printf("Enter first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string: ");
    fgets(str2,sizeof(str2),stdin);


    /* Call strcmp() to compare both strings and stores result in res */
    res = strcmp(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res == -1)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}
