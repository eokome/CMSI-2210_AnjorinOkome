#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    unsigned int number;
    int i;

    if (argc != 2)
    {
        printf("Usage: %s number\n", argv[0]);
        return 1;
    }

    number = strtoul (argv[1], NULL, 10);

    for (i = 31; i >= 0; i--)
    {

        if ((number >> i) & 1)
           // you had this. notice missing semicolon:
           //   printf ("1")  <--
           // should be this:
            printf ("1");
        else
            printf("0");
    }
   // you had this. notice missing semicolon:
   //   printf ("\n")  <--
   // should be this:
    printf("\n");

    return 0;
    }
