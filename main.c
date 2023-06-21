#include <stdio.h>
#include "readline.c"
#include "detab.c"
#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];
    int lengthline = readline(line, MAXLINE);
    detab(line);
    printf("length: %d\n%s", lengthline, line);
    return 0;
}