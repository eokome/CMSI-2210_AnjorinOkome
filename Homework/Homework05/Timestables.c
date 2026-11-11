#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, row, col;
    int biggest, width;

    if (argc != 2)
    {
        printf("Usage: %s N\n", argv[0]);
        return 1; 
    }

    n = atoi(argv[1]);
    if (n < 2)
    {
        printf("Error: N must be 2 or more.\n");
        return 1;
    }

    biggest = n * n;
    width = 0;
    while (biggest > 0)
    {
        biggest = biggest / 10;
        width++;
    }

    for (col = 2; col <= n; col++)
    {
        printf(" %*d ", width, col);
    }
    
    printf("\n");
    
    for (row = 2; row <= n; row++)
    {
        for (col = 2; col <= n; col++)
        {
            printf(" %*d ", width, row * col);
        }
        printf("\n");
    }
    return 0;
}