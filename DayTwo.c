#include <stdio.h>
#include<string.h>
#include <xkeycheck.h>
int main() 
{
	/*
	�ַ�����
	C������û��String���� ֻ��Char����
	��ô��ô�����ַ����أ�
	���������ַ�����������
	����
	char arr[]="Test�ַ���";
	��C������ûָ�����ȵĻ�������ʼ��ʱ��ֵ��
	char arr1[6]={'T','e','s','t','��','��','��'};
	��2�����鿴��ȥ����һ��������һ����
	����ʵ���ݲ�һ��������Ҳ��һ��

	��ʱ���Ҫ����C�������ַ�����������
	Ϊ��֪���ַ���ʲôʱ���������������ַ������ݵ������� "\0" ��ʾ�ַ�������
	�����ӡʱ��֪��ʲôʱ��ֹͣ�����ӡ���ڴ��е�������,ֱ������\0
	�������Ҳ������߼�
	strlen(����) ���س���
	*/
	char arr[] = "Test�ַ���";
	char arr1[7] = { 'T','e','s','t','��','��','��' };
	char arr2[8] = { 'T','e','s','t','��','��','��','\0'};
	printf("%s \n", arr);
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//��ӡ����
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	printf("%d", strlen(arr2));
	printf("\a");



	//��֧���û�仯 if if else swich
	if ("true")
	{
		printf("\nֻ��������");
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
	//ѭ����� û�仯 while for do while ���д�Ϲؼ���
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
	//ע�͵ķ�ʽ
	//������
	//�ؼ���
	//������20
	return 0;
}