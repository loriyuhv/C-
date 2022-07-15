// 排序算法
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void BubbleSort(int* a, int n) {
//	int i, j, t;
//	for (i = 1; i < n; i++)
//		for (j = 1; j <= n - i; j++)
//			if (a[j] < a[j + 1])
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//}
//void QuickSort(int left, int right, int* a) {
//	if (left > right)
//		return;
//	int i, j, temp, t;
//	temp = a[left];
//	i = left;
//	j = right;
//
//	while (i != j) {
//		while (a[j] >= temp && i < j) {
//			j--;
//		}
//		while (a[i] <= temp && i < j) {
//			i++;
//		}
//		if (i < j)
//			t = a[i], a[i] = a[j], a[j] = t;
//	}
//	a[left] = a[i];
//	a[i] = temp;
//
//	QuickSort(left, i - 1, a);
//	QuickSort(i + 1, right, a);
//}
//
//int main() {
//	clock_t start, finish;
//	double Total_time;
//	start = clock();
//
//	int a[100001], i, j, t, n = 100000;
//	srand(time(0));
//	for (i = 1; i <= n; i++)
//		a[i] = rand() % 100000;
//		//a[i] = rand() % 1000 + 1;
//	
//	// 冒泡排序
//	BubbleSort(a, n);
//	// 23.725000 seconds
//	// 快速排序
//	//QuickSort(1, n, a);
//	// 0.026000 seconds
//	/*for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);*/
//	printf("排序成功！！！\n");
//	finish = clock();
//	Total_time = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("\n%f seconds\n", Total_time);
//	return 0;
//}

// 桶排序

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main() {
//	clock_t start, finish;
//	double Total_time;
//	start = clock();
//	int a[100001] = { 0 }, i, j, n = 100000;
//	srand(time(0));
//	for (i = 1; i <= n; i++) {
//		j = rand() % 1000;
//		printf("%d\n", j);
//		a[j]++;
//	}
//	// 重复值不能显示
//	/*for (i = 1; i <= n; i++) {
//		while (a[i] != 0) {
//			printf("%d\t", i);
//			break;
//		}
//			
//	}*/
//	// 改进
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= a[i]; j++)
//			printf("%d\t", i);
//	finish = clock();
//	Total_time = (double)(finish - start) / CLOCKS_PER_SEC;
//	printf("%f seconds\n", Total_time);
//	// 7.20300
//	return 0;
//}