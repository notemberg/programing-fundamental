#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    for (int i = 1; i <= 5; i++)
    {
        int sy = rand() % 2, a, b, upr =99, lowr=10, count =2;

        for (int j = 0; j < count; j++)
        {
            a = (rand() % (upr - lowr + 1)) + lowr;
            b = (rand() % (upr - lowr + 1)) + lowr;
        }

        if (sy == 0)
        {
            printf("%d + %d = \n", a, b);
        }
        else if (sy == 1)
        {
            printf("%d - %d = \n", a, b);
        }
    }
}
