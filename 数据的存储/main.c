#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

	/*int a = 0x12345678;
	float f = 10.0;
	unsigned int d = 1;*/
	//��������
	
	int a = 0x33FF88CC;
	int b = -10;
	/*
	* 
	* 
	* ԭ�뷴�벹��
	* ��Ϊ�޷�������������ȫ��ͬ
	* ��Ϊ�з��ŵ�����������Ҳ��ȫ��ͬ
	* ��������ΪԴ����ֵλ��λȡ��
	* �����Ƿ���+1
	* 
	* 
	* 
	* �����У�a��4���ֽ�
	* 
	* 
	* ��λ����ڵ�λ��ַ�ڡ�
	* ��λ����ڸ�λ��ַ��
	* 
	* 
	* 
	*/

	//�жϻ�����С�˴洢���Ǵ�˴洢
	int c = 1;
	char* pc = &c;
	//�жϵ�һ���ֽ���1����0
	switch ((int)*pc) {//ȡ�������ڴ�ʵ�ʴ洢������
	case 1:
		printf("С��");
		break;
	case 0:
		printf("���");
		break;
	default:
		break;
	}


	return NULL;
}