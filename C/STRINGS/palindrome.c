//not Complete

#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];
    char pal[20];
    printf("Enter your string:");
    scanf("%[^\n]s", ch);

    int n;
    n = sizeof(ch) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        pal[i] = ch[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        if (pal[i] == ch[n - 1 - i])
        {
            printf("Palindrome");
        }

        else
        {
            printf("Not Palindrome");
        }
    }
}