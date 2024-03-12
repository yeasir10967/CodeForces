#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    gets(str);

    int found = 0; 

    for (int i = 0; i < strlen(str); i++) {
        if(str[i]>=33&&str[i]<=126)
        {
        if (str[i] == 'H' || str[i] == 'Q'|| str[i] == '9' ) {
            found = 1; 
            break;     
        }
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
