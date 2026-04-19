#include <stdio.h>
int main()
{
    char str1[100], str2[100], rev[100];
    int i=0, j, len=0, equal=1, found=0;
    printf("Enter both string: ");
    scanf("%s%s", str1, str2);
    while (str1[len]!='\0')
    {
        len++;
    }
    printf("Length of str1 = %d\n", len);
    for(i=0; i<len; i++)
    {
        rev[i] = str1[len-i-1];
    }
    rev[len]='\0';
    printf("Reversed string = %s\n", rev);
    for(i=0; i<len; i++)
    {
        if(str1[i]!=rev[i])
        {
            equal=0;
            break;
        }
    }
    if(equal==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    i=0;
    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            equal=0;
            break;
        }
        i++;
    }
    if(equal==1)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    for(i=0; str1[i]!='\0'; i++)
    {
        j=0;
        while(str2[j]!='\0' && str1[i+j]==str2[j])
        {
            j++;
        }
        if(str2[j]=='\0')
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Substring found\n");
    }
    else
    {
        printf("Substring not found\n");
    }
    return 0;
}