#include <stdio.h>
#include <ctype.h>

int main(int argc, char * argv[]) {
    FILE * fp;
    int c;
    int in_word = 0;
    long count = 0;

    if(argc != 2){
        printf("Usuage: %s filename\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");

    if(fp == NULL){
        perror(argv[1]);
        return 1;
    }

    while((c = fgetc(fp)) != EOF){
        if(isspace(c)){
            in_word = 0;
        } else if(in_word == 0){
            in_word = 1;
            count++;
        }
    }

    if(ferror(fp)){
        printf("Error while reading %s\n", argv[1]);
        fclose(fp);
        return 1;
    }

    if (fclose(fp) == EOF){
        perror("fclose");
        return 1;
    }

    printf("Number of words: %ld\n", count);
    return 0;
}