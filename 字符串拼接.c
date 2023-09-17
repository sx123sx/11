#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    //使用 {'\0'} 初始化它们的意思是，这两个数组的第一个元素被设置为 \0。其余元素默认初始化为 \0
	//（在C中，如果只初始化了部分数组元素，其余元素会默认初始化为0，对于字符数组，这意味着它们会被初始化为 \0）。
    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
char *str_cat( char *s, char *t )
{
	char *p;
	p=s;
	for(;*s!='\0';s++);
	for(;*t!='\0';s++,t++){
		*s=*t;
	}
	*s='\0';
	return p;
} 

