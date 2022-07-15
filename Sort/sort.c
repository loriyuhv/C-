// 桶排序

//#include<stdio.h>
//
//int main() {
//	int a[11] = { 0 }, i, j, t;
//
//	/*for (i = 0; i <= 9; i++) {
//		printf("%d\t", a[i]);
//	}*/
//	for (i = 1; i <= 5; i++) {
//		scanf_s("%d", &t);
//		a[t]++;
//	}
//	// 2 3 5 5 8
//	for (i = 0; i <= 10; i++) {
//		for (j = 1; j <= a[i]; j++) {
//			printf("%d\t", i);
//		}
//	}
//
//	return 0;
//}

// 冒泡排序

//#include<stdio.h>
//
//int main() {
//	int a[100], n, i, j, t;
//	scanf_s("%d", &n);	// 输入n个数
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	/*
//	// error
//	//for (i = 0; i < n - 2; i++) {
//	//	for (j = 1; j <= n - i; j++)	// 5
//	//		if (a[i] < a[j])
//	//			t = a[i], a[i] = a[j], a[j] = t;
//	//}
//	*/
//	// 2 1 4 3 5 
//	for (i = 0; i < n - 1; i++) {		// 0 < 4   0 1 2 3 4
//		for (j = 0; j < n - i - 1; j++) { // j < 4 3 2 1 
//			//0: 2 4 3 5 1
//			//1: 4 3 5 2
//			//2: 4 5 3
//			//3: 5 4
//			//4: 不成立，结束循环
//			if (a[j] < a[j + 1]) {
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//		printf("%d\t", a[i]);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a[5] = { 2, 3, 1, 4, 5 };
//	int i, j, t;
//
//	// 2 1 3 5 4
//	for (i = 0; i < 5 - 1; i++) // 5个数排序，只用进行5-1趟 0 < 4
//		for (j = 0; j < 5 - i - 1; j++) // 0 < 4 3 2 1
//		// 从第1位开始比较直到最后一个尚未归为的数
//		// 0: 2 3 5 4 1
//		// 1: 3 5 4 2
//		// 2: 5 4 3
//		// 3: 5 4
//			if (a[j] < a[j + 1]) // 比较大小并交换
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	for (i = 0; i < 5; i++) // 输出结果
//		printf("%d\t", a[i]);
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int a[5] = { 2, 3, 1, 4, 5 };
//	int i, j, t;
//
//	// 2 1 3 5 4
//	for (i = 0; i < 5 - 1; i++) // 5个数排序，只用进行5-1趟 0 < 4
//		for (j = 0; j < 5 - i - 1; j++) // 0 < 4 3 2 1
//		// 从第1位开始比较直到最后一个尚未归为的数
//		// 0: 2 3 5 4 1
//		// 1: 3 5 4 2
//		// 2: 5 4 3
//		// 3: 5 4
//			if (a[j] < a[j + 1]) // 比较大小并交换
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	for (i = 0; i < 5; i++) // 输出结果
//		printf("%d\t", a[i]);
//	return 0;
//}

// 排名成绩

//#include<stdio.h>
//
//typedef struct Student {
//	char name[20];	// 姓名
//	int score;	// 分数
//}student; // 这里创建了一个结构体用来存储姓名和分数
//
//int main() {
//	struct Student a[100], t;
//	int i, j, n = 3;
//	for (i = 0; i < n; i++) {
//		scanf_s("%s", a[i].name, 20);
//		scanf_s("%d", &a[i].score);
//	}
//
//	// 按分数从高到低进行排序
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1 - i; j++)
//			if (a[j].score < a[j + 1].score)
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	// 输出人名
//	for (i = 0; i < n; i++)
//		printf("%s：%d\n", a[i].name, a[i].score);
//	return 0;
//}
// 时间复杂度O(N^2)

// 快速排序

// 6 1 2 7 9 3 4 5 10 8
// 基准数 6 然后把大的房右边，小的放左边
// 3 1 2 5 4 6 9 7 10 8

//#include<stdio.h>
//int a[100], n = 5;
//
//void quicksort(int left, int right) {
//	int i, j, t, temp;
//	if (left > right)
//		return;
//
//	temp = a[left]; // temp中存的是基准数
//	i = left;
//	j = right;
//
//	// 6 1 2 7 9 3 4 5 10 8
//	while (i != j) { // 1 5
//		// 顺序很重要，要先从右往左走
//		while (a[j] >= temp && i < j) // j 5
//			j--;
//		// 再从左往右走
//		while (a[i] <= temp && i < j) // i:4
//			i++;
//
//		// 交换两个数在数组中的位置
//		if (i < j) // 当哨兵i和哨兵j没有相遇时
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	// 最终将基准数归位
//	a[left] = a[i];
//	a[i] = temp;
//
//	quicksort(left, i - 1);
//	quicksort(i + 1, right);
//	return;
//}
//
//void QuickSort(int left, int right) {
//	int i, j, temp, t;
//	if (left > right)
//		return;
//	temp = a[left]; // 基准数
//	i = left;
//	j = right;
//
//	// 两个变量i，j.
//	// j从右往左找小于基准数的数
//	// i从左往右找大于基准数的数
//	while (i != j) { //如果等于就代表相遇，然后把相遇的值和基准数互换
//		while (a[j] >= temp && i < j)
//			j--;
//		while (a[i] <= temp && i < j)
//			i++;
//		if (i < j)
//			t = a[i], a[i] = a[j], a[j] = t;
//	}
//	// 最终将基准数归位
//	a[left] = a[i];
//	a[i] = temp;
//
//	QuickSort(left, i - 1);
//	QuickSort(i + 1, right);
//}
//
//int main() {
//	int i;
//	// 读入数据
//	for (i = 1; i <= n; i++)
//		scanf_s("%d", &a[i]);
//
//	QuickSort(1, n); // 快速排序调用
//	//quicksort(1, n);
//
//	for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);
//
//	return 0;
//}

// 快速排序
//#include<stdio.h>
//#include<stdlib.h>
//
//void QuickSort(int left, int right, int* a) {
//	int i, j, temp, t;
//	if (left > right)
//		return;
//	temp = a[left];
//	i = left;
//	j = right;
//	
//	while (i != j) { // 当i 与 j相遇，就交换基准数
//		while (a[j] >= temp && i < j)
//			j--;
//		while (a[i] <= temp && i < j)
//			i++;
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
//	int a[10001], i, j, n = 10000;
//	srand(time(0)); // 初始化随机数种子
//	for (i = 1; i <= n; i++)
//		a[i] = rand() % 10000 + 1; // 随机生成100以内的数字
//
//	QuickSort(1, n, a);
//
//	for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main() {
//	int a[101], i, j, n = 10, t;
//	srand(time(0)); // 初始化随机数种子
//	for (i = 1; i <= n; i++)
//		a[i] = rand() % 100 + 1; // 随机生成100以内的数字
//
//	for (i = 1; i < n; i++)
//		for (j = 1; j <= n - i; j++)
//			if (a[j] > a[j + 1])
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//	for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);
//	return 0;
//}

