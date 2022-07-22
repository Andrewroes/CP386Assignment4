#include <pthread.h>
#include <ctype.h>

#define MAX = 1000000 - 1;
int alloc_mem;
struct open_node{
    int size;
    int start;
    int end;
    struct open_node *next;
} open;
struct memory_node{
    int size;
    int start;
    int end;
    char memory;
    struct memory_node *next;
    
} closed;

void closed_mem(open **free_memory,closed **allocated_memory,char alg, char*procname, int size );
void open_mem(open **free_memory, closed **alloc_memory, char *procname);

int main() {
    char input[20];
    printf(MAX);
    while(strcmp(input,"Exit")) {
        printf("Enter your option (1, 2, 3, or 'Exit'): ");
        scanf("%s", input);

    }
    return 0;
}
