#include <stdio.h>
#include <string.h>

char *position(char *s1, char c) {

    int i=1;
    int len1 = strlen(s1);
    printf("%d\n\n", s1[0]);

    while (s1[i] != c && i!=len1){
        i++;
    }
    return i;
}

int main()
{
    printf("%d", position("Elena", 'a')+1);
    return 0;
}
