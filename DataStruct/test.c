//# include<stdio.h>
//
//int main() {
//	int i = 0, e = 0;
//	if (i == e)
//		printf("Hello world\n");
//
//	return 0;
//}

// 1 + ������ + 100
// ��һ���㷨 ִ����1+(n+1)+n+1=2n+3��
//# include<stdio.h>
//
//int main() {
//	int sum = 0, i, n = 100;	// ִ��1��
//	for (i = 1; i <= n; i++) {	// ִ��n+1��
//		sum = sum + i; // ִ��n��
//	}
//	printf("sum=%d\n", sum); // ִ��1��
//	return 0;
//}

// �ڶ����㷨 ִ����1+1+1=3��
//  1  2 3 4 5  => 1 1 1 1 1 (1+n) *(n/2)
// 10  9 8 7 6  => n n n n n
//# include<stdio.h>
//
//int main() {
//
//	int sum = 0, n = 100; // 1��
//
//	sum = (1 + n) * (n / 2);  // 1��
//	printf("%d", sum); // 1��
//
//}
// ����
//#include<stdio.h>
//
//int main() {
//	int i, j, x = 0, sum = 0, n = 100; // ִ��1��
//	for (i = 1; i <= n; i++) { // n + 1�� 4��
//		for (j = 1; j <= n; j++) {
//			x++;
//			sum = sum + x;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//# include<stdio.h>
//
//int main() {
//
//	int z = 0, y = 0;
//	int i = 0, n = 1;
//	for (; i < n; i++)
//		;
//	printf("%d\n", i);
//}

//# include<stdio.h>
//
//int main() {
//	int* p = NULL;
//	int i = 6, j = 1;
//	while (!p && i > 5) {
//		printf("Hello world!\n");
//		p = 5;
//		break;
//	}
//	printf("Hello apple!!\n");
//	
//	return 0;
//}
