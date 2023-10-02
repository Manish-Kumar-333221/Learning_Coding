#include<stdio.h>

int main()
{
    char C[50] = {"Hello C"};
    char CPP[50] = {"Hello C"};
    printf("equal = %d\n", strcmp(C, CPP));

    char c[10000][50] = {{"Hello C"}, {"Hello C"}};
    printf("equal = %d", strcmp(c[0], c[1]));
    puts(c[0]);

    return 0;
}