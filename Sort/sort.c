// Ͱ����

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

// ð������

//#include<stdio.h>
//
//int main() {
//	int a[100], n, i, j, t;
//	scanf_s("%d", &n);	// ����n����
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
//			//4: ������������ѭ��
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
//	for (i = 0; i < 5 - 1; i++) // 5��������ֻ�ý���5-1�� 0 < 4
//		for (j = 0; j < 5 - i - 1; j++) // 0 < 4 3 2 1
//		// �ӵ�1λ��ʼ�Ƚ�ֱ�����һ����δ��Ϊ����
//		// 0: 2 3 5 4 1
//		// 1: 3 5 4 2
//		// 2: 5 4 3
//		// 3: 5 4
//			if (a[j] < a[j + 1]) // �Ƚϴ�С������
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	for (i = 0; i < 5; i++) // ������
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
//	for (i = 0; i < 5 - 1; i++) // 5��������ֻ�ý���5-1�� 0 < 4
//		for (j = 0; j < 5 - i - 1; j++) // 0 < 4 3 2 1
//		// �ӵ�1λ��ʼ�Ƚ�ֱ�����һ����δ��Ϊ����
//		// 0: 2 3 5 4 1
//		// 1: 3 5 4 2
//		// 2: 5 4 3
//		// 3: 5 4
//			if (a[j] < a[j + 1]) // �Ƚϴ�С������
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	for (i = 0; i < 5; i++) // ������
//		printf("%d\t", a[i]);
//	return 0;
//}

// �����ɼ�

//#include<stdio.h>
//
//typedef struct Student {
//	char name[20];	// ����
//	int score;	// ����
//}student; // ���ﴴ����һ���ṹ�������洢�����ͷ���
//
//int main() {
//	struct Student a[100], t;
//	int i, j, n = 3;
//	for (i = 0; i < n; i++) {
//		scanf_s("%s", a[i].name, 20);
//		scanf_s("%d", &a[i].score);
//	}
//
//	// �������Ӹߵ��ͽ�������
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1 - i; j++)
//			if (a[j].score < a[j + 1].score)
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//
//	// �������
//	for (i = 0; i < n; i++)
//		printf("%s��%d\n", a[i].name, a[i].score);
//	return 0;
//}
// ʱ�临�Ӷ�O(N^2)

// ��������

// 6 1 2 7 9 3 4 5 10 8
// ��׼�� 6 Ȼ��Ѵ�ķ��ұߣ�С�ķ����
// 3 1 2 5 4 6 9 7 10 8

//#include<stdio.h>
//int a[100], n = 5;
//
//void quicksort(int left, int right) {
//	int i, j, t, temp;
//	if (left > right)
//		return;
//
//	temp = a[left]; // temp�д���ǻ�׼��
//	i = left;
//	j = right;
//
//	// 6 1 2 7 9 3 4 5 10 8
//	while (i != j) { // 1 5
//		// ˳�����Ҫ��Ҫ�ȴ���������
//		while (a[j] >= temp && i < j) // j 5
//			j--;
//		// �ٴ���������
//		while (a[i] <= temp && i < j) // i:4
//			i++;
//
//		// �����������������е�λ��
//		if (i < j) // ���ڱ�i���ڱ�jû������ʱ
//		{
//			t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	// ���ս���׼����λ
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
//	temp = a[left]; // ��׼��
//	i = left;
//	j = right;
//
//	// ��������i��j.
//	// j����������С�ڻ�׼������
//	// i���������Ҵ��ڻ�׼������
//	while (i != j) { //������ھʹ���������Ȼ���������ֵ�ͻ�׼������
//		while (a[j] >= temp && i < j)
//			j--;
//		while (a[i] <= temp && i < j)
//			i++;
//		if (i < j)
//			t = a[i], a[i] = a[j], a[j] = t;
//	}
//	// ���ս���׼����λ
//	a[left] = a[i];
//	a[i] = temp;
//
//	QuickSort(left, i - 1);
//	QuickSort(i + 1, right);
//}
//
//int main() {
//	int i;
//	// ��������
//	for (i = 1; i <= n; i++)
//		scanf_s("%d", &a[i]);
//
//	QuickSort(1, n); // �����������
//	//quicksort(1, n);
//
//	for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);
//
//	return 0;
//}

// ��������
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
//	while (i != j) { // ��i �� j�������ͽ�����׼��
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
//	srand(time(0)); // ��ʼ�����������
//	for (i = 1; i <= n; i++)
//		a[i] = rand() % 10000 + 1; // �������100���ڵ�����
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
//	srand(time(0)); // ��ʼ�����������
//	for (i = 1; i <= n; i++)
//		a[i] = rand() % 100 + 1; // �������100���ڵ�����
//
//	for (i = 1; i < n; i++)
//		for (j = 1; j <= n - i; j++)
//			if (a[j] > a[j + 1])
//				t = a[j], a[j] = a[j + 1], a[j + 1] = t;
//	for (i = 1; i <= n; i++)
//		printf("%d\t", a[i]);
//	return 0;
//}

