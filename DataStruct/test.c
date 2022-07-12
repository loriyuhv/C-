//# include<stdio.h>
//
//int main() {
//	int i = 0, e = 0;
//	if (i == e)
//		printf("Hello world\n");
//
//	return 0;
//}

// 1 + 。。。 + 100
// 第一种算法 执行了1+(n+1)+n+1=2n+3次
//# include<stdio.h>
//
//int main() {
//	int sum = 0, i, n = 100;	// 执行1次
//	for (i = 1; i <= n; i++) {	// 执行n+1次
//		sum = sum + i; // 执行n次
//	}
//	printf("sum=%d\n", sum); // 执行1次
//	return 0;
//}

// 第二种算法 执行了1+1+1=3次
//  1  2 3 4 5  => 1 1 1 1 1 (1+n) *(n/2)
// 10  9 8 7 6  => n n n n n
//# include<stdio.h>
//
//int main() {
//
//	int sum = 0, n = 100; // 1次
//
//	sum = (1 + n) * (n / 2);  // 1次
//	printf("%d", sum); // 1次
//
//}
// 延伸
//#include<stdio.h>
//
//int main() {
//	int i, j, x = 0, sum = 0, n = 100; // 执行1次
//	for (i = 1; i <= n; i++) { // n + 1次 4次
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
