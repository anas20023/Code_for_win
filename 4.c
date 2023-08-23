#include <stdio.h>

int Table(int n); /// perameter
int count;

int main()
{

    int count;
    printf("Enter a Value of Table:");
    scanf("%d", &count);
    Table(count); // Argument

    return 0;
}

int Table(int n) /// Pass the perameter
{

    for (int i = 0; i < count; i++)
    {
        printf("%d", n * i);
    }
}