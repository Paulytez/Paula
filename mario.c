#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;


    do

    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);


    for (int i = 0; i < n; i++) //n == 4
    {

        for (int g = 0; g < n - i - 1 ; g++) // 1 == 3; - > 4
        {
            printf(" ");
        }

        for (int j = 0; j < i + 1 ; j++)
        {
            printf("#");
        }



        printf("\n");
    }
}
