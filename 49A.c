// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char str[1000];
//     fgets(str, sizeof(str), stdin);

//     int i = 0;
//     char lastChar = '\0';

//     while (str[i] != '\0') {
//         if (isalpha(str[i])) {
//             lastChar = tolower(str[i]);
//         }
//         i++;
//     }

//     if (lastChar == 'a' || lastChar == 'e' || lastChar == 'i' || lastChar == 'o' || lastChar == 'u' || lastChar == 'y') {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #include <string.h>
// #include <ctype.h>
// int main() {
//     char str[1000];
//     fgets(str, sizeof(str), stdin);
//     int l = strlen(str);
//     int a = l - 3; 
    
//     if (str[l-3]==' ')
//     {
//        char lastChar = toupper(str[l-4]);
//        if (lastChar == 'A' || lastChar == 'E' || lastChar == 'I' || lastChar == 'O' || lastChar == 'U' || lastChar == 'Y') {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//     }

//   else if (str[l-3]!=' ')
//   {
//     char lastChar = toupper(str[l-3]);
//     if(lastChar == 'A' || lastChar == 'E' || lastChar == 'I' || lastChar == 'O' || lastChar == 'U' || lastChar == 'Y') {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//   }
  
//     return 0;
// } 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int l = strlen(str);
    int a = l - 3; 
    
  for(int i=l-1;i>=0 ;i--) 
    {
        if(str[i]>='A' && str[i]<='Z'|| str[i]>='a' && str[i]<='z')
        {
             char lastChar = toupper(str[i]);
       if (lastChar == 'A' || lastChar == 'E' || lastChar == 'I' || lastChar == 'O' || lastChar == 'U' || lastChar == 'Y') {
        printf("YES\n");
        break;
    } else {
        printf("NO\n");
        break;
    }
        }
      
    }

//   if (str[l-3]!=' ')
//   {
//     char lastChar = toupper(str[l-3]);
//     if(lastChar == 'A' || lastChar == 'E' || lastChar == 'I' || lastChar == 'O' || lastChar == 'U' || lastChar == 'Y') {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//   }
  
    return 0;
} 