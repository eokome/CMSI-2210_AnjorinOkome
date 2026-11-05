#include <stdio.h>

int main(void){
    int n;
    int ch;

    printf("Enter a positive whole number: ");
    scanf("%d", &n);

    while(n <=0) {
        printf("That is not valid. Enter a number that is greater than zero: ");

        while ((ch = getchar()) != '\n') {
        }

        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++){
        if (i % 15 == 0){
            printf("fizz-buzz\n");
        } else if (i % 3 == 0){
            printf("fizz\n");
        } else if (i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    
    return 0;
}