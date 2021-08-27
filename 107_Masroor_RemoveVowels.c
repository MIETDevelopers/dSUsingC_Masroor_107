//Name: Masroor Hussain Shah
//Program: Printing a string without vowels 


#include<stdio.h>
#include<stdlib.h>

int isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1;
    default:
        return 0;
    }
}

int main()
{
    char *str;
    int i = 0;
    int j = 0;
    str = malloc(sizeof(char) * 256);
    printf("Enter a string : ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isVowel(str[i]) == 0)
        {
            //8
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("%s\n", str);
}

