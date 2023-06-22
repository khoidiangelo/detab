#define TABSTOP 4
int detab(char s[], int limit) {
    for (int i = 0; i < limit; ++i) {
        if (s[i] == '\t') {
            for (int j = limit + TABSTOP; j > i; --j) {
                s[j] = s[j-TABSTOP+1];
            }
            for (int j = i; j < i+TABSTOP; ++j) {
                s[j] = ' ';
            }
            limit += TABSTOP;
        }
    }
    s[limit] = '\0';
    return limit;
}