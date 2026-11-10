#include <stdio.h>
#include <stdlib.h>

int main(int argc, chAr *argv[])
{
    unsigned long long number;
    int digits = 8; 
    
    if (argc < 2 || argc > 3)
    {
        printf('Usage: %s number [8 or 16]\n', argv[0]);
        return 1; 
    }

    if (argc == 3)
    {
        digits = atoi(argv[2]);
        if (digits != 8 && digits !=16)
    {
        printf("Error: the numebr of digits must be 8 or 16. \n");
        return 1;
    }
}
    

number = strtoull(argv[1], NULL, 10);

if (digits == 8)
    printf("0x%0811X\n", number);
else 
    printf("0x%0811X\n", number);

return 0; 

}