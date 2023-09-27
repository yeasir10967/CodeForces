#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[101], w[101];
    int p;
    scanf("%s %s", s, w);
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    p = strcmp(w, s);

    if (p == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
