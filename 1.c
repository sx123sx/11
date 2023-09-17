#题目概述：输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
#Input：输入数据有多组，每组占一行，有三个字符组成，之间无空格。
#Output：对于每组输入数据，输出一行，字符中间用一个空格分开。
/*Sample Input
qwe
asd
zxc 
Sample Output
e q w
a d s
c x z
*/
#include<stdio.h>
int main()
{
	char a,b,c,tmp;
	while(scanf("%c%c%c%*c",&a,&b,&c)!=EOF)//用"%*c"(空字符，不存储字符的字符)滤掉回车;EOF为文件结束符。
	{
		if(a>b) {
			tmp=a;a=b;b=tmp;
		}
		if(a>c) tmp=a,a=c,c=tmp;
		if(b>c) tmp=b,b=c,c=tmp;
		printf("%c %c %c\n",a,b,c);
	}
	return 0;
}
