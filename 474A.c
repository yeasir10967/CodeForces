#include<stdio.h>
#include<string.h>

int main() {
    char c;
    char str[100];
    char str1[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '\0'};
    char str2[] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\0'};
    char str3[] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '\0'};
    scanf("%c", &c);
    scanf("%s", str);

    if (c == 'L') {
        for (int i = 0; i < strlen(str); i++) {
            for (int j = 0; j < 9; j++) {
                if (str[i] == str1[j]) {
                    str[i] = str1[j + 1];
                    break;
                } else if (str[i] == str2[j]) {
                    str[i] = str2[j + 1];
                    break;
                } else if (str[i] == str3[j]) {
                    str[i] = str3[j + 1];
                    break;
                }
            }
        }
        printf("%s\n", str);
    } else if (c == 'R') {
        for (int i = 0; i < strlen(str); i++) {
            for (int j = 0; j < 9; j++) {
                if (str[i] == str1[j + 1]) {
                    str[i] = str1[j];
                    break;
                } else if (str[i] == str2[j + 1]) {
                    str[i] = str2[j];
                    break;
                } else if (str[i] == str3[j + 1]) {
                    str[i] = str3[j];
                    break;
                }
            }
        }
        printf("%s\n", str);
    }

    return 0;
}
