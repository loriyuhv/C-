// 声明
// 本程序用于复习pointer.c文件知识

// 指针变量初始化和应用

//# include<stdio.h>
//
//int main() {
//	int i = 10, * p = &i;
//	printf("%d", *p);
//}

// 经典指针程序_互换两个数字

//# include<stdio.h>
//
//void swap(int*, int*);
//
//int main() {
//	int i = 5, j = 10;
//
//	swap(&i, &j);
//	printf("i = %d, j = %d\n", i, j);
//	return 0;
//}
//
//void swap(int* p, int* q) {
//	int t;
//	t = *p;
//	*p = *q;
//	*q = t;
//}

// 指针使函数返回一个以上的值

//# include<stdio.h>
//# define _CRT_SECURE_NO_WARNINGS
//
//void multiplication(float* sum, float* difference, float* product, float* quotient);
//
//int main() {
//	float sum = 0, difference, product, quotient;
//	multiplication(&sum, &difference, &product, &quotient);
//	printf("和是%f，差是%f，积是%f，商是%f。\n", sum, difference, product, quotient);
//	return 0;
//}
//
//void multiplication(float* sum, float* difference, float* product, float* quotient) {
//	int a, b;
//	printf("请输入两个a和b两个数：");
//	scanf_s("%d%d", &a, &b);
//	*sum = a + b;
//	*difference = a - b;
//	*product = a * b;
//	*quotient = a / b;
//	return;
//}

// 指针和一维数组

//#include<stdio.h>
//
//int main() {
//	int a[10] = { 1, 2, 3, 4, 5 };
//	// 输出值 都一样
//	printf("%d, %d\n", *a, a[0]);
//	// 输出地址 都一样
//	printf("%x, %x", a, &a[0]);
//	return 0;
//}

// 确定一个一维数组需要几个参数，如果一个函数要处理一个一维数组，
	// 则需要接受该数组的哪些信息

// 答：一个是数组首元素的地址，一个是数组的长度
// 需求：我需要通过函数把a[3]的元素改成88，只能通过指针
//#include<stdio.h> 
//
//void function(int* pArr, int len) {
//	*(pArr + 3) = 88;
//}
//
//int main() {
//	int a[5] = { 1, 2, 3, 4, 5 };
//	function(a, 5);
//	for (int i = 0; i < 5; i++)
//		printf("%d\t", *(a + i));
//	return 0;
//}

