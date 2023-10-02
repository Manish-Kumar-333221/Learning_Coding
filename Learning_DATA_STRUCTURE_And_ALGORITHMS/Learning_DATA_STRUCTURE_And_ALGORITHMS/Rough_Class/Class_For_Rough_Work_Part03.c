#include<stdio.h>

int getLength(char *a)
{
    int i = 0;
    while (a[i] != '\0')
        {
            i++;
        }
    return i;
}

int main()
{
    char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 ~`|^={}\\%[]<>@#$_&-+()/*\"\':;!\?,."};

    puts(a);

    printf("\n");

    for (int i = 0; a[i] != '\0'; i++)
        {
            printf("(%d = %c), ", i, a[i]);
        }

    printf("\n\nlength = %d\n\n", getLength(a));

    for (int i = 32; i < 127 ; i++)
        {
            printf("(%d = %c), ", i, i);
        }

    return 0;
} 