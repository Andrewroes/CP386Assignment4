#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int alloc_mem;
typedef struct open_node{
    char name[20];
    int size;
    int start;
    int end;
    struct open_node *next;
} open;
typedef struct memory_node{
    char name[20];
    int size;
    int start;
    int end;
    char memory;
    struct memory_node *next;
    
} closed;

void closed_mem(open **free_memory,closed **allocated_memory,char alg, char*procname, int size );
void open_mem(open **free_memory, closed **alloc_memory, char *procname);

int main() {
    const int MAX = 1048576 - 1; // given from make file
    char input[20];

    printf("Max memory: %d", MAX);
    while(strcmp(input,"Exit")) {
        printf("\nEnter your option, type '1' for Best Fit, type '2' for Worst Fit, type '3' for First Fit, or type 'Exit' to end program): ");
        scanf("%s", input);
        switch(input[0]) {
            case '1':
                // Go to the Best Fit code section
                break; 
            case '2':
                // Go to the Worst Fit code section
                break;
            case '3':
                // Go to the First Fit code section
                break;
            default:
                printf("Option invalid, please try again\n");
        }
    }
    return 0;
}
