#include <stdio.h>
#include <string.h>

char* double_str(char *s1) {

    int i = 0;
    int len1 = strlen(s1);

    char *result = (char *) malloc(len1*2 + 1);

    while (i != len1){
        result[i] = s1[i];
        result[i+len1]= s1[i];
        i++;
    }

    return result;
}

int main()
{
    printf(double_str("abcd"));
    return 0;
}
