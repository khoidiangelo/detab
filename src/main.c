#include <stdio.h>
#include "readline.c"
#include "detab.c"
#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];
    int lengthline = readline(line, MAXLINE);
    if (lengthline != 0) {
        lengthline = detab(line, lengthline);
        printf("length: %d\n%s", lengthline, line);
    }
    return 0;
}