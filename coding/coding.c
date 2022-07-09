// �����洢����

//# include<stdio.h>
//# include<malloc.h>
//# include<stdlib.h>
//
//# define bool char
//# define true 1
//# define false 0
//
//struct Arr {
//	int* pBase;		//�洢���������һ��Ԫ�صĵ�ַ
//	int len;		//�����������ɵ����Ԫ�صĸ���
//	int cnt;		//��ǰ������ЧԪ�ظ���
//};
//void init_arr(struct Arr* pArr, int length);
//void inversion_arr(struct Arr* pArr);
//void sort_arr(struct Arr* pArr);
//bool show_arr(struct Arr* pArr);
//bool append_arr(struct Arr* pArr, int val);
//bool insert_arr(struct Arr* pArr, int pos, int val);
//bool delete_arr(struct Arr* pArr, int pos, int* val);
//bool is_empty(struct Arr*);
//bool is_full(struct Arr*);
//
//int main() {
//	struct Arr arr;
//	int i, value;
//	// ��ʼ��
//	init_arr(&arr, 6);
//	// ���Ԫ��
//	for (i = 0; i < 5; i++) {
//		if (append_arr(&arr, i))
//			printf("���%d�ɹ�������\n", i);
//		else
//			printf("���%dʧ�ܣ�����\n", i);
//	}
//	// ɾ��Ԫ��
//	//delete_arr(&arr, 2, &value);
//	//printf("ɾ����Ԫ��%d!!!\n", value);
//	
//	// ����Ԫ��
//	//insert_arr(&arr, 1, 99);
//
//	// ��תԪ��
//	//inversion_arr(&arr);
//
//	// ���򣺽���
//	sort_arr(&arr);
//
//	// ���Ԫ��
//	show_arr(&arr);
//
//
//	return 0;
//}
//
//void init_arr(struct Arr* pArr, int length) {
//	pArr->pBase = (int*)malloc(sizeof(int));
//	if (NULL == pArr->pBase) {
//		printf("��̬�ڴ����ʧ�ܣ�����");
//		exit(-1);
//	}
//	else {
//		pArr->len = length;
//		pArr->cnt = 0;
//	}
//}
//
//void inversion_arr(struct Arr* pArr) {
//	int i = 0, j = pArr->cnt - 1, t;
//
//	while (i < j) {
//		t = pArr->pBase[i];
//		pArr->pBase[i] = pArr->pBase[j];
//		pArr->pBase[j] = t;
//		i++;
//		j--;
//	}
//}
//
//void sort_arr(struct Arr* pArr) {
//	int i, j, t;
//	for (i = 0; i < pArr->cnt - 1; i++) {
//		for (j = 0; j < pArr->cnt - 1 - i; j++) {
//			if (pArr->pBase[j] < pArr->pBase[j + 1]) {
//				t = pArr->pBase[j];
//				pArr->pBase[j] = pArr->pBase[j+1];
//				pArr->pBase[j+1] = t;
//			}
//		}
//	}
//}
//
//bool show_arr(struct Arr* pArr) {
//	if (is_empty(pArr))
//		printf("����Ϊ�գ�����\n");
//	else {
//		for (int i = 0; i < pArr->cnt; i++)
//			printf("%d\t", pArr->pBase[i]);
//		printf("\n");
//	}
//}
//
//bool append_arr(struct Arr* pArr, int val) {
//	if (is_full(pArr))
//		return false;
//	pArr->pBase[pArr->cnt] = val;
//	pArr->cnt++;
//	return true;
//}
//
//bool delete_arr(struct Arr* pArr, int pos, int* val) {
//	if (is_empty(pArr))
//		return false;
//	if (pos < 0 || pos > pArr->cnt)
//		return false;
//	*val = pArr->pBase[pos - 1];
//	for (int i = pos - 1; i < pArr->cnt; i++) {
//		pArr->pBase[i] = pArr->pBase[i + 1];
//	}
//	(pArr->cnt)--;
//
//}
//
//bool insert_arr(struct Arr* pArr, int pos, int val) {
//	// ���ܣ��û�ֻ����1 ~ �������޸����м����;
//	if (is_full(pArr))
//		return false;
//	if (pos < 1 || pos > pArr->len)
//		return false;
//	for (int i = pArr->cnt - 1; i >= pos - 1; i--) {
//		pArr->pBase[i + 1] = pArr->pBase[i];
//	}
//	pArr->pBase[pos - 1] = val;
//	pArr->cnt++;
//	return true;
//}
//
//bool is_empty(struct Arr* pArr) {
//	if (pArr->cnt == 0)
//		return true;
//	else
//		return false;	
//}
//
//bool is_full(struct Arr* pArr) {
//	if (pArr->cnt == pArr->len)
//		return true;
//	else
//		return false;
//}


// ������

//# include<stdio.h>
//# include<malloc.h>
//# include<stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* pNext;
//}*PNODE, NODE;
//
//PNODE create_list();
//void traverse_list(PNODE);
//
//int main() {
//	PNODE pHead = NULL;
//	pHead = create_list();
//	traverse_list(pHead);
//	return 0;
//}
//
//PNODE create_list() {
//	int len; // �ڵ����
//	int val;
//	int i;
//	PNODE pHead = NULL;
//	pHead = (NODE*)malloc(sizeof(NODE));
//	if (NULL == pHead) {
//		printf("�ڴ����ʧ�ܣ�����");
//		exit(-1);
//	}
//	PNODE pTail = NULL;
//	pTail = pHead;
//	pTail->pNext = NULL;
//
//	printf("������Ҫ���켸���ڵ㣺");
//	scanf_s("%d", &len);
//
//	for (i = 0; i < len; i++) {
//		printf("�������%d���ڵ��ֵ:", i + 1);
//		scanf_s("%d", &val);
//
//		PNODE pNew = (NODE*)malloc(sizeof(NODE));
//		if (NULL == pNew) {
//			printf("�ڴ����ʧ�ܣ�����");
//			exit(-1);
//		}
//		pNew->data = val;
//		pTail->pNext = pNew;
//		pNew->pNext = NULL;
//		pTail = pNew;
//	}
//	return pHead;
//}
//
//void traverse_list(PNODE pHead) {
//	PNODE p = pHead->pNext;
//
//	while (NULL != p) {
//		printf("%d\t", p->data);
//		p = p->pNext;
//	}
//}
//
//# include<stdio.h>
//# include<malloc.h>
//# include<stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* pNext;
//}* PNODE, NODE;
//
//PNODE create_list();
//void traverse_list(PNODE pHead);
//
//int main() {
//	PNODE pHead = NULL;
//	pHead = create_list();
//	traverse_list(pHead);
//	return 0;
//}
//
//PNODE create_list() {
//	int len;
//	int val;
//	int i;
//	PNODE pHead = NULL;
//	pHead = (PNODE)malloc(sizeof(NODE));
//	if (NULL == pHead) {
//		printf("����ʧ�ܣ�������ֹ������\n");
//		exit(-1);
//	}
//
//	PNODE pTail = pHead;
//	pTail->pNext = NULL;
//
//	printf("������Ҫ����һ���ڵ㣺");
//	scanf_s("%d", &len);
//
//	for (i = 0; i < len; i++) {
//		printf("�������%d���ڵ��ֵ��", i + 1);
//		scanf_s("%d", &val);
//		
//		PNODE pNew = (PNODE)malloc(sizeof(NODE));
//		pNew->data = val; // 1
//		pTail->pNext = pNew;
//		pNew->pNext = NULL;
//		pTail = pNew;
//	}
//
//	return pHead;
//}
//
//void traverse_list(PNODE pHead) {
//	PNODE p = pHead->pNext;
//	while (NULL != p) {
//		printf("%d\t", p->data);
//		p = p->pNext;
//	}
//}

# include<stdio.h>
# include<malloc.h>
# include<stdlib.h>

# define bool char
# define true 1
# define false 0

typedef struct Arr {
	int* pBase;	// �����һ��Ԫ�صĵ�ַ
	int len; // ����ĳ���
	int cnt; // ���鵱ǰ��Ԫ�ظ���
}*PARR, ARR;

bool init_arr(PARR pArr, int len);
bool append_arr(PARR pArr, int val);
bool insert_arr(PARR pArr, int pos, int val);
bool is_full(PARR pArr);
bool is_empty(PARR pArr);
void show_arr(PARR pArr);

int main() {
	ARR arr;
	// ��ʼ��
	init_arr(&arr, 6);
	// ׷����ֵ
	for (int i = 0; i < 3; i++) {
		if (append_arr(&arr, i + 1))
			printf("�����ֵ%d�ɹ�\n", i + 1);
		else
			printf("�����ֵ%dʧ��\n", i + 1);
	}
	// ������ֵ
	insert_arr(&arr, 2, 99);
	// չʾ��ֵ
	show_arr(&arr);

	return 0;
}

bool init_arr(PARR pArr, int len) {
	pArr->pBase = (int*)malloc(sizeof(int));
	if (pArr->pBase == NULL) {
		printf("�����ڴ�ʧ�ܣ�������ֹ������\n");
		exit(-1);
	}
	pArr->len = len;
	pArr->cnt = 0;
}
bool append_arr(PARR pArr, int val) {
	if (is_full(pArr))
		return false;
	pArr->pBase[pArr->cnt] = val;
	pArr->cnt++;
	return true;
}
bool is_full(PARR pArr) {
	if (pArr->cnt == pArr->len)
		return true;
	else
		return false;
}
bool is_empty(PARR pArr) {
	if (pArr->cnt == 0)
		return true;
	else
		return false;
}
bool insert_arr(PARR pArr, int pos, int val) {
	if (pos < 1 || pos >= pArr->len)
		return false;
	if (is_full(pArr))
		return false;
	// 1 2 3    2 1
	for (int i = pArr->cnt - 1; i >= pos - 1; i--)
		pArr->pBase[i + 1] = pArr->pBase[i];
	pArr->pBase[pos - 1] = val;
	pArr->cnt++;
	return true;
}
void show_arr(PARR pArr) {
	if (is_empty(pArr))
		printf("����Ϊ�գ�����");
	else {
		for (int i = 0; i < pArr->cnt; i++)
			printf("%d\t", pArr->pBase[i]);
	}
}