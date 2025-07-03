#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int d1,d2,total;
    char name[100];
    
    srand(time(NULL));
    
    printf("What is your name?\n>");
    scanf("%99s", name);
    printf("Hello, %s!\n", name);

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    total = d1 + d2;
    printf("Rolling dice...\n");
    printf("Die 1: %d\n", d1);
    printf("Die 2: %d\n", d2);
    printf("Total value: %d\n", total);

    if(total > 7){
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }

    return 0;
}    