#include<stdio.h>//standard input output
//int 为整型，main前int表示函数调用返回一个整型值
int main()//主程序-程序的入口，有且仅有一个！
{
	int age = 20;
	printf("%d\n", age);
	float fl = 0.2;//short long double
	//char--字符类型 %d--打印整型 %c--打印字符 %f--打印浮点型小数 %p--地址形式打印 %x--16进制数字 
	char ch = 'A';//内存
	printf("%c\n",ch);//%c--打印字符的数据
	printf("hello world\nhello world\n");
	printf("%d\n", sizeof(long long));
	return 0;
}