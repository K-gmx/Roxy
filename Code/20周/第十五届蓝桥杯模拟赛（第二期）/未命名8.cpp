#include <stdio.h>
#include <string.h>

int main() {
    char s[81][81] = {0};  
    char sep; 
    char str[81], ch;
    int i, j = 0, x = 0;

    scanf("%c", &ch);
    while (ch != '\n') {
        if (ch != ' ' && ch != '\t') { 
            str[x++] = ch;
        }
        scanf("%c", &ch);
        
    }
    str[x] = '\0'; 
    scanf("\n");
    scanf("%c", &sep);

    if (str[x - 1] == '\n') { 
        str[x - 1] = '\0';
        x--;
    }

    int k = 0;
    for (i = 0; i < x; i++) {
        if (str[i] == sep) {
            s[k][j] = '\0';
            k++;
            j = 0;
        } else {
            s[k][j] = str[i];
            j++;
        }
    }
    s[k][j] = '\0';

    for (i = 0; i <= k; i++) {
        for (j = i + 1; j <= k; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                char temp[81];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\n");
    for (i = 0; i <= k; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}
