#include<stdio.h>//standard input output
//int Ϊ���ͣ�mainǰint��ʾ�������÷���һ������ֵ
int main()//������-�������ڣ����ҽ���һ����
{
	int age = 20;
	printf("%d\n", age);
	float fl = 0.2;//short long double
	//char--�ַ����� %d--��ӡ���� %c--��ӡ�ַ� %f--��ӡ������С�� %p--��ַ��ʽ��ӡ %x--16�������� 
	char ch = 'A';//�ڴ�
	printf("%c\n",ch);//%c--��ӡ�ַ�������
	printf("hello world\nhello world\n");
	printf("%d\n", sizeof(long long));
	return 0;
}