// ����
// ���������ڸ�ϰpointer.c�ļ�֪ʶ

// ָ�������ʼ����Ӧ��

//# include<stdio.h>
//
//int main() {
//	int i = 10, * p = &i;
//	printf("%d", *p);
//}

// ����ָ�����_������������

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

// ָ��ʹ��������һ�����ϵ�ֵ

//# include<stdio.h>
//# define _CRT_SECURE_NO_WARNINGS
//
//void multiplication(float* sum, float* difference, float* product, float* quotient);
//
//int main() {
//	float sum = 0, difference, product, quotient;
//	multiplication(&sum, &difference, &product, &quotient);
//	printf("����%f������%f������%f������%f��\n", sum, difference, product, quotient);
//	return 0;
//}
//
//void multiplication(float* sum, float* difference, float* product, float* quotient) {
//	int a, b;
//	printf("����������a��b��������");
//	scanf_s("%d%d", &a, &b);
//	*sum = a + b;
//	*difference = a - b;
//	*product = a * b;
//	*quotient = a / b;
//	return;
//}

// ָ���һά����

//#include<stdio.h>
//
//int main() {
//	int a[10] = { 1, 2, 3, 4, 5 };
//	// ���ֵ ��һ��
//	printf("%d, %d\n", *a, a[0]);
//	// �����ַ ��һ��
//	printf("%x, %x", a, &a[0]);
//	return 0;
//}

// ȷ��һ��һά������Ҫ�������������һ������Ҫ����һ��һά���飬
	// ����Ҫ���ܸ��������Щ��Ϣ

// ��һ����������Ԫ�صĵ�ַ��һ��������ĳ���
// ��������Ҫͨ��������a[3]��Ԫ�ظĳ�88��ֻ��ͨ��ָ��
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

