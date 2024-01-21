#include <stdio.h>
#include<string.h>
#include <xkeycheck.h>
int main() 
{
	/*
	字符串！
	C语言中没有String类型 只有Char类型
	那么怎么接收字符串呢？
	方法是用字符数组来接受
	例如
	char arr[]="Test字符串";
	在C里数组没指明长度的话，看初始化时的值。
	char arr1[6]={'T','e','s','t','字','符','串'};
	这2个数组看上去内容一样，长度一样。
	但其实内容不一样，长度也不一样

	这时候就要引出C语言中字符串的特性了
	为了知道字符串什么时候结束，数组会在字符串内容的最后加上 "\0" 表示字符串结束
	否则打印时不知道什么时候停止，会打印出内存中的脏内容,直到遇见\0
	输出长度也是这个逻辑
	strlen(内容) 返回长度
	*/
	char arr[] = "Test字符串";
	char arr1[7] = { 'T','e','s','t','字','符','串' };
	char arr2[8] = { 'T','e','s','t','字','符','串','\0'};
	printf("%s \n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//打印长度
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	printf("%d", strlen(arr2));
	printf("\a");



	//分支语句没变化 if if else swich
	if ("true")
	{
		printf("\n只能在这里");
	}
	else
	{
		
	}
	int test = 0;
	switch (test)
	{
	default:
		break;
	}
	//循环语句 没变化 while for do while 还有打断关键字
	while ("true")
	{

	}
	for (size_t i = 0; i < test; i++)
	{

	}
	do
	{

	} while ("true");
	{
	
	}
	//注释的方式
	//操作符
	//关键字
	//看到了20
	return 0;
}