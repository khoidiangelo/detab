#include <stdio.h>
#define TABSTOP 4
#define MAXLINE 1000

void detab(char s[]) {
    char temp[MAXLINE];
    int t = 0;
    for (int i = 0; s[i] != '\n' && s[i] != EOF; ++i) {
        if (s[i] == '\t') {
            for (int j = 0; j < TABSTOP; ++j) {
                temp[t+j] = ' ';
            }
            t += TABSTOP;
        } else {
            temp[t] = s[i];
            ++t;
        }
    }
    for (int i = 0; i <= t; ++i) {
        s[i] = temp[i];
    }
    s[t] = '\n';
    s[t+1] = '\0';
}