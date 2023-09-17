#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}
char *match( char *s, char ch1, char ch2 )
{
    char a[MAXS] = "",*p;
    int i =  0, j = 0;
    while(*(s + i) != ch1 && *(s + i) != '\0')
    {
        i++;
    }
    p = s + i;
    a[j] = *(s + i);
    i++;j++;
    while(*(s + i) != ch2 && *(s + i) != '\0')
    {
        a[j] = *(s + i);
        i++;
        j++;
    }
    a[j] = *(s + i);
    printf("%s\n",a);
    return p;
}


