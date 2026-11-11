#include <stdio.h>
#include <time.h>

int main(void){
    time_t start;
    time_t end;
    int total;
    int minutes;
    int seconds;
    int c;

printf("This program will time how long you can hold your breath. Take a deep breath, then press the 'Enter' key. When you absolutely have to exhale, press the enter key again. The duration will be displayed in minutes and seconds.\n");

c = getchar();

while(c != '\n' && c != EOF) {
    c = getchar();
}

start = time(NULL);

printf("Timing... hold it!\n");

c = getchar();

while (c != '\n' && c != EOF) {
    c = getchar();
}

end = time(NULL);

total = (int)difftime(end, start);

minutes = total / 60;
seconds = total % 60;

printf("You held your breath for %d minutes and %d seconds.\n", minutes, seconds);

return 0;
}