#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

	/*int a = 0x12345678;
	float f = 10.0;
	unsigned int d = 1;*/
	//构造类型
	
	int a = 0x33FF88CC;
	int b = -10;
	/*
	* 
	* 
	* 原码反码补码
	* 作为无符号数，三者完全相同
	* 作为有符号的正数，三者也完全相同
	* 负数反码为源码数值位按位取反
	* 补码是反码+1
	* 
	* 
	* 
	* 本案中，a是4个字节
	* 
	* 
	* 低位存放在低位地址内、
	* 高位存放在高位地址内
	* 
	* 
	* 
	*/

	//判断机器是小端存储还是大端存储
	int c = 1;
	char* pc = &c;
	//判断第一个字节是1还是0
	switch ((int)*pc) {//取出的是内存实际存储的内容
	case 1:
		printf("小端");
		break;
	case 0:
		printf("大端");
		break;
	default:
		break;
	}


	return NULL;
}