#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat( char *s, char *t );

int main()
{
    char *p;
    char str1[MAXS+MAXS] = {'\0'}, str2[MAXS] = {'\0'};
    //ʹ�� {'\0'} ��ʼ�����ǵ���˼�ǣ�����������ĵ�һ��Ԫ�ر�����Ϊ \0������Ԫ��Ĭ�ϳ�ʼ��Ϊ \0
	//����C�У����ֻ��ʼ���˲�������Ԫ�أ�����Ԫ�ػ�Ĭ�ϳ�ʼ��Ϊ0�������ַ����飬����ζ�����ǻᱻ��ʼ��Ϊ \0����
    scanf("%s%s", str1, str2);
    p = str_cat(str1, str2);
    printf("%s\n%s\n", p, str1);
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
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

