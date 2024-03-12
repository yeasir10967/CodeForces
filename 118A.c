#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[101], str2[201];
    gets(str);
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        char lowercase = tolower(ch);

        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u' || lowercase == 'y') {
            continue; // Skip the vowels
        } else {
            str2[j] = '.';
            j++;
            str2[j] = lowercase;
            j++;
        }
    }

    str2[j] = '\0'; 

    printf("%s\n", str2);

    return 0;
}
