#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 5; i <= 20; i = i + 2)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
