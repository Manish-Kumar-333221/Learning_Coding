#include<stdio.h>
#include<stdlib.h>

#define size (95)
char e[size];

char getChar(int i)
{
    char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 ~`|^={}\\%[]<>@#$_&-+()/*\"\':;!\?,."};

    return a[i];
}
/*
int getRandomNo()
{
    return (rand() % size) + 0;
}

int get(int array[], int index)
{
    int g = getRandomNo();

    for(int j = 0; j < index; j++)
        {
            if (g == array[j])
                {printf("j = %d, index = %d, g1 = %d, ", j, index, g);
                    g = getRandomNo();printf("g2 = %d\n", g);
                    j = 0;
                }
        }

    array[index] = g;
    return g;
}
*/
void generate(int a)
{
    int array[size];
    int i = 0;

    while (i < a)
        {
            e[i] = getChar(get(array, i));
            i++;
        }
}

void generateRandomString()
{
    generate(size);

    puts(e);

    printf("%d\n", strlen(e));
}
int main()
{
    srand(time(0));

    generateRandomString();

    return 0;
}