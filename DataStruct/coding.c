// �������ԡ������ݽṹ��
// ���Ա�Ķ���
// ���Ա�List):�����������Ԫ�ص���������
// (a[1], ..., a[i-1], a[i], a[i+1], ..., an)
// ��a[i-1]��a[i]��ֱ��ǰ��Ԫ��
// a[i+1]��a[i]��ֱ�Ӻ��Ԫ��
// ���Ա�Ԫ�صĸ���n(n>=0)����Ϊ���Ա�ĳ��ȣ���n=0ʱ����Ϊ�ձ�

# include<stdio.h>
# include<stdio.h>
# include<stdlib.h>
# define bool char
# define true 1
# define false 0
typedef struct Arr {
	int* pBase; // �����һ��Ԫ�صĵ�ַ
	int len; // ������������Ԫ�ص�������
	int cnt; // ��ǰ������ЧԪ�صĸ���
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
// ȥ��
bool DropDuplicates(PARR pArr);

int main() {
	ARR arr1, arr2;
	int value;

	init_arr(&arr1, 15);
	init_arr(&arr2, 6);
	for (int i = 0; i < 6; i++)
	{
		if (append_arr(&arr1, i * 2))
			printf("���%d�ɹ�\n", i * 2);
		else
			printf("���%dʧ��\n", i * 2);
		if (append_arr(&arr2, i * 3))
			printf("���%d�ɹ�\n", i * 3);
		else
			printf("���%dʧ��\n", i * 3);
	}
	//append_arr(&arr1, 2);
	//printf("\n");
	// ʵ��ȥ��
	
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
		printf("\narr1λ��8��ֵ��%d\n", value);*/
	printf("array1:\n");
	ListTraverse(&arr1);
	printf("array1:\n");
	/*ListInser(&arr1, 7, 88);*/
	ListTraverse(&arr2);
	printf("array1��array2�Ĳ�����:\n");
	unionList(&arr1, &arr2);
	ListTraverse(&arr1);
	/*DropDuplicates(&arr1);
	ListTraverse(&arr1);
	int ack = LocateElem(&arr1, 2);
	if (ack == 0)
		printf("\nδ�ҵ�Ԫ��2!!!\n");
	else
		printf("\n�ҵ�Ԫ��2�������%d\n", ack);
	printf("\n");
	ListTraverse(&arr1);*/

	//printf("\narr1�ĳ���Ϊ%d��arr2�ĳ���Ϊ%d\n", ListLength(&arr1), ListLength(&arr2));

	return 0;
}

void init_arr(PARR pArr, int len) {
	pArr->pBase = (int*)malloc(sizeof(int) * len);
	if (NULL == pArr) {
		printf("��̬�ڴ����ʧ�ܣ�����\n");
		exit(-1);
	}
	pArr->len = len;
	pArr->cnt = 0;
	return;
}
void ListTraverse(PARR pArr) {
	if (ListEmpty(pArr))
		printf("����Ϊ�գ�����\n");
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
		printf("�������Ϊ��Ҳ�������������\n");
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
			//printf("���������%d\n", e);
			ListInser(pArr, pArr->cnt + 1, e);
		}
			
	}

}
bool ListInser(PARR pArr, int pos, int e) {
	if (pos < 0 || pos > pArr->cnt + 1)
		return false;
	if (ListFull(pArr)) {
		printf("��������������\n");
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

