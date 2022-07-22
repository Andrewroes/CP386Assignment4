#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <ctype.h>

#define MAX = 1000000 - 1;

int main() {
    char input[20];
    printf(MAX);
    while(strcmp(input,"Exit")) {
        printf("Enter your option (1, 2, 3, or 'Exit'): ");
        scanf("%s", input);

    }
    return 0;
}

