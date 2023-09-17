#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); 

int main()
{
    char s[MAXS], t[MAXS], *pos;
    
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}
void ReadString(char s[]) {
    fgets(s, MAXS, stdin);//从 stdin（即，从键盘）读取字符。
    //最多读取 MAXS-1 个字符，然后再加上一个终止字符 '\0'。这确保了字符数组 s 不会溢出。
    //将读取的字符存储在字符数组 s 中。
    // 移除可能的换行符
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}


char *search( char *s, char *t )
{
    int i=0,j=0,flag=0;
    char *k;
    for(j=0;s[j]!='\0';j++)
    {
        if(t[0]==s[j])
        {
            k=&s[j];
            for(i=0;t[i]!='\0';i++)
            {
                flag=0;
                if(t[i]==s[j++]){
                    flag=1;
                }else{
                    break;
                }
            }
        }
        if(flag){
            break;
        }
    }
    if(flag)
    {
        return k;
    }else{
        return NULL;
    }
}
