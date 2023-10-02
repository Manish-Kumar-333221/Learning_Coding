#include<stdio.h>
#include<stdlib.h>
#include<time.h>

unsigned long returnHashValue(unsigned long hashCode[], int index)
{
    unsigned long random = (rand() % 9999999999L) + 1111111111L;

    for (int i = 0; i < index; i++)
        {
            if (hashCode[i] == random)
                {
                    random = returnHashValue(hashCode, index);
                }
        }

    return random;
}

void generate()
{
    unsigned long hashCode[97];
    int index = 0;

    while (index < 97)
        {
            hashCode[index] = returnHashValue(hashCode, index);
            index++;
        }

    for (int i = 0; i < 97; i++)
        {
            printf("%lu, ", hashCode[i]);
        }

    printf("\n\n");
}
int main()
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
        generate();

    return 0;
}