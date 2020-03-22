#include <stdio.h>
#include <string.h>

char* concat(char *s1, char *s2) {

    int i = 0, j = 0;
    int len1 = strlen(s1), len2 = strlen(s2);
    char *result = (char *) malloc(len1 + len2 + 1);

    while (i != len1){
        result[i] = s1[i];
        i++;
    }
    while (j != len2){
        result[i+j] = s2[j];
        j++;
    }

    return result;
}

int main()
{
    puts(concat("abc", "def"));
    return 0;
}
