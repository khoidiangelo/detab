#include <stdio.h>
int readline(char s[], int limit) {
    int c, i;
    for (i = 0; i <= limit -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i+1] = '\0';
    return i;
}