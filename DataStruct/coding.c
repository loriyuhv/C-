// 以下来自《大话数据结构》
// 线性表的定义
// 线性表（List):零个或多个数据元素的有限序列
// (a[1], ..., a[i-1], a[i], a[i+1], ..., an)
// 称a[i-1]是a[i]的直接前驱元素
// a[i+1]是a[i]的直接后继元素
// 线性表元素的个数n(n>=0)定义为线性表的长度，当n=0时，称为空表。

# include<stdio.h>
# include<stdio.h>
# include<stdlib.h>
# define bool char
# define true 1
# define false 0
typedef struct Arr {
	int* pBase; // 数组第一个元素的地址
	int len; // 数组所能容纳元素的最大个数
	int cnt; // 当前数组有效元素的个数
}*PARR, ARR;
void init_arr(PARR pArr, int len);
void ListTraverse(PARR pArr);
bool unionList(PARR pArr, PARR pArr1);
bool GetElem(PARR pArr, int pos, int* e);
bool append_arr(PARR pArr, int val);
bool ListFull(PARR pArr);
bool ListEmpty(PARR pArr);
bool ListInser(PARR pArr, int pos, int e);
int ListLength(PARR pArr);
int LocateElem(PARR pArr, int e);
// 去重
bool DropDuplicates(PARR pArr);

int main() {
	ARR arr1, arr2;
	int value;

	init_arr(&arr1, 15);
	init_arr(&arr2, 6);
	for (int i = 0; i < 6; i++)
	{
		if (append_arr(&arr1, i * 2))
			printf("添加%d成功\n", i * 2);
		else
			printf("添加%d失败\n", i * 2);
		if (append_arr(&arr2, i * 3))
			printf("添加%d成功\n", i * 3);
		else
			printf("添加%d失败\n", i * 3);
	}
	//append_arr(&arr1, 2);
	//printf("\n");
	// 实验去重
	
	// 1 2 3 2 4 5
	/*append_arr(&arr1, 1);
	append_arr(&arr1, 2);
	append_arr(&arr1, 3);
	append_arr(&arr1, 2);
	append_arr(&arr1, 4);
	append_arr(&arr1, 5);
	DropDuplicates(&arr1);
	ListTraverse(&arr1);*/

	/*if (GetElem(&arr1, 8, &value))
		printf("\narr1位置8的值是%d\n", value);*/
	printf("array1:\n");
	ListTraverse(&arr1);
	printf("array1:\n");
	/*ListInser(&arr1, 7, 88);*/
	ListTraverse(&arr2);
	printf("array1和array2的并集是:\n");
	unionList(&arr1, &arr2);
	ListTraverse(&arr1);
	/*DropDuplicates(&arr1);
	ListTraverse(&arr1);
	int ack = LocateElem(&arr1, 2);
	if (ack == 0)
		printf("\n未找到元素2!!!\n");
	else
		printf("\n找到元素2，序号是%d\n", ack);
	printf("\n");
	ListTraverse(&arr1);*/

	//printf("\narr1的长度为%d，arr2的长度为%d\n", ListLength(&arr1), ListLength(&arr2));

	return 0;
}

void init_arr(PARR pArr, int len) {
	pArr->pBase = (int*)malloc(sizeof(int) * len);
	if (NULL == pArr) {
		printf("动态内存分配失败！！！\n");
		exit(-1);
	}
	pArr->len = len;
	pArr->cnt = 0;
	return;
}
void ListTraverse(PARR pArr) {
	if (ListEmpty(pArr))
		printf("数组为空！！！\n");
	else
		for (int i = 0; i < pArr->cnt; i++) {
			printf("%d\t", pArr->pBase[i]);
		}
	printf("\n");
	return;
}
bool append_arr(PARR pArr, int val) {
	if (ListFull(pArr))
		return false;
	pArr->pBase[pArr->cnt] = val;
	pArr->cnt++;
}
bool ListFull(PARR pArr) {
	if (pArr->cnt == pArr->len)
		return true;
	else
		return false;
}
bool GetElem(PARR pArr, int pos, int* e) {
	if (pos > pArr->cnt || ListEmpty(pArr)) {
		printf("数组可能为空也可能溢出！！！\n");
		return false;
	}	
	*e = pArr->pBase[pos - 1];
	return true;
}
bool ListEmpty(PARR pArr) {
	if (pArr->cnt == 0)
		return true;
	else
		return false;
}
bool DropDuplicates(PARR pArr) {
	int i, j;
	for (i = 0; i < pArr->cnt - 1; i++) { // cnt:6 1
		for (j = i + 1; j < pArr->cnt; j++) { // 1 2 3 2 4 5  1 3
			if (pArr->pBase[i] == pArr->pBase[j]) {
				for (; i < pArr->cnt; i++)
					pArr->pBase[i] = pArr->pBase[i + 1];
				pArr->cnt--;
			}
		}
	}
}
int ListLength(PARR pArr) {
	return pArr->cnt;
}
int LocateElem(PARR pArr, int e) {
	int v = 0; // 0
	for (int i = 0; i < pArr->cnt; i++) {
		//printf("e: %d, pBase[i]:%d\n", e, pArr->pBase[i]);
		if (e != pArr->pBase[i]) {
			v = 0;
		}
		else {
			v = i + 5;
			break;
		}	
			
	}
	//printf("v: %d\n", v);
	return v;
}
bool unionList(PARR pArr, PARR pArr1) {
	if (ListEmpty(pArr) || ListEmpty(pArr1))
		return false;
	DropDuplicates(pArr);
	DropDuplicates(pArr1);
	int arr1_len, arr2_len, i, e;
	arr1_len = ListLength(pArr);
	arr2_len = ListLength(pArr1);
	for (i = 1; i <= arr2_len; i++) {
		GetElem(pArr1, i, &e);
		//printf("e: %d\n", e);
		int ack = LocateElem(pArr, e);
		//printf("e:%d, ack: %d\n", e, ack);
		if (!ack) {
			//printf("向数组添加%d\n", e);
			ListInser(pArr, pArr->cnt + 1, e);
		}
			
	}

}
bool ListInser(PARR pArr, int pos, int e) {
	if (pos < 0 || pos > pArr->cnt + 1)
		return false;
	if (ListFull(pArr)) {
		printf("数组已满！！！\n");
		return false;
	}
	//printf("yun\n");
	// 1 2 3 4 5    6 88  
	for (int i = pArr->cnt; i >= pos - 1; i--) { // i >= 5
		//printf("i = %d, pos - 1 = %d\n", i, pos - 1);
		//printf("%d\n", pArr->pBase[i - 1]);
		pArr->pBase[i] = pArr->pBase[i - 1];
		//printf("[i] = %d\n", pArr->pBase[i]);
	}
	pArr->pBase[pos - 1] = e;
	//printf("%d\n", pArr->pBase[pos - 1]);
	pArr->cnt++;
	return true;
}

