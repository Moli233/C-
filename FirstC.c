#define _CRT_SECURE_NO_WARNINGS 1
/*
第一个C语言程序
1.创建main函数
2.在main函数中写东西
*/
#include <stdio.h>
//#include 引用头文件 英文含义是 包含 包括
int main() 
{
	printf("第一个C语言程序");//printf 打印函数 需要引用stdio.h头文件
	printf("数据类型\n 字符型 char 占%d个字符\n 整型short 占%d个字符\n 短整型 int 占%d个字符\n 长整型long 占%d个字符\n 更长整型 long long 占%d个字符\n 浮点型 float 占%d个字符\n 双精度浮点型 double 占%d个字符\n",sizeof(char),sizeof(short),sizeof(int),sizeof(long), sizeof(long long),sizeof(float),sizeof(double));
	//%d 是占位符 %是引导符 d表示为10进制整数型式
	// sizeof()是关键字！！！！（一开始真感觉像函数 C#导致的！）  可以让我们知道括号内的东西占多少字节 如果传入函数也不会执行 就如效果一般 只会返回所占字节
	//计算机中最小的单位为bit（比特）占一个字节 可以容纳1或0（二进制是这样的）
	//而一个byte为8个bit 再往上就是kb 1024个byte 往上都是1024一个阶层
	int a=0;
	int b=0;
	printf("输入2个数用空格分隔，程序计算总和\n");
	scanf("%d %d",&a,&b);
	printf("输入2数的和为%d",a+b);
	/*
	作用域
	局部变量的作用域范围即是上级花括号内
	全局变量的作用域范围则是整个项目（工程）只是需要声明引用
	*/
	/*
	生命周期
	局部变量的生命周期即创建变量开始 退出作用域结束
	全局变量的生命周期和程序一样，什么时候mian函数结束，什么时候结束
	总结销毁即死亡，创建即开始。
	*/
	/*
	1.字面常量
	例如
	3.14
	"呃呃"
	这种，文字上是常量，但一般没有意义。
	2.常变量
	const修饰的变量就为常变量了 一旦声明 无法改变 但需要正规常量的地方不能代替常量
	例如
	const int n = 10; //这是一个值为10的常变量
	int arr[n]={0}; //这样会报错，原因是别人只要常量，常变量虽然不会变，但始终不是常量
	3.#define 定义标识符常量
	4.枚举常量
	可以列举的常量
	声明方式就是menu 枚举名{ 常量,常量1...... };
	然后再enum 枚举名 常量名 = 枚举内常量；
	枚举体内的值默认从零开始
	*/
#define test  10000
	int arr[test] = { 0 };
	enum MyEnum
	{
		boy,
		girl 
	};
	enum MyEnum sex = boy;
	return 0;
}