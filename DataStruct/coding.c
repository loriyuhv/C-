// �������ԡ������ݽṹ��
// ���Ա�Ķ���
// ���Ա�List):�����������Ԫ�ص���������
// (a[1], ..., a[i-1], a[i], a[i+1], ..., an)
// ��a[i-1]��a[i]��ֱ��ǰ��Ԫ��
// a[i+1]��a[i]��ֱ�Ӻ��Ԫ��
// ���Ա�Ԫ�صĸ���n(n>=0)����Ϊ���Ա�ĳ��ȣ���n=0ʱ����Ϊ�ձ�
//
//# include<stdio.h>
//# include<stdio.h>
//# include<stdlib.h>
//
//# define bool char
//# define true 1
//# define false 0
//
//typedef struct Arr {
//	int* pBase; // �����һ��Ԫ�صĵ�ַ
//	int len; // ������������Ԫ�ص�������
//	int cnt; // ��ǰ������ЧԪ�صĸ���
//}*PARR, ARR;
//
//void init_arr(PARR pArr, int len);
//void ListTraverse(PARR pArr);
//bool unionList(PARR pArr, PARR pArr1);
//bool GetElem(PARR pArr, int pos, int* e);
//bool append_arr(PARR pArr, int val);
//bool ListFull(PARR pArr);
//bool ListEmpty(PARR pArr);
//bool ListInser(PARR pArr, int pos, int e);
//int ListLength(PARR pArr);
//int LocateElem(PARR pArr, int e);
//// ȥ��
//bool DropDuplicates(PARR pArr);
//
//int main() {
//	ARR arr1, arr2;
//	int value;
//
//	init_arr(&arr1, 15);
//	init_arr(&arr2, 6);
//	for (int i = 0; i < 6; i++)
//	{
//		if (append_arr(&arr1, i * 2))
//			printf("���%d�ɹ�\n", i * 2);
//		else
//			printf("���%dʧ��\n", i * 2);
//		if (append_arr(&arr2, i * 3))
//			printf("���%d�ɹ�\n", i * 3);
//		else
//			printf("���%dʧ��\n", i * 3);
//	}
//	//append_arr(&arr1, 2);
//	//printf("\n");
//	// ʵ��ȥ��
//	
//	// 1 2 3 2 4 5
//	/*append_arr(&arr1, 1);
//	append_arr(&arr1, 2);
//	append_arr(&arr1, 3);
//	append_arr(&arr1, 2);
//	append_arr(&arr1, 4);
//	append_arr(&arr1, 5);
//	DropDuplicates(&arr1);
//	ListTraverse(&arr1);*/
//
//	/*if (GetElem(&arr1, 8, &value))
//		printf("\narr1λ��8��ֵ��%d\n", value);*/
//	printf("array1:\n");
//	ListTraverse(&arr1);
//	printf("array1:\n");
//	/*ListInser(&arr1, 7, 88);*/
//	ListTraverse(&arr2);
//	printf("array1��array2�Ĳ�����:\n");
//	unionList(&arr1, &arr2);
//	ListTraverse(&arr1);
//	/*DropDuplicates(&arr1);
//	ListTraverse(&arr1);
//	int ack = LocateElem(&arr1, 2);
//	if (ack == 0)
//		printf("\nδ�ҵ�Ԫ��2!!!\n");
//	else
//		printf("\n�ҵ�Ԫ��2�������%d\n", ack);
//	printf("\n");
//	ListTraverse(&arr1);*/
//
//	//printf("\narr1�ĳ���Ϊ%d��arr2�ĳ���Ϊ%d\n", ListLength(&arr1), ListLength(&arr2));
//
//	return 0;
//}
//
//void init_arr(PARR pArr, int len) {
//	pArr->pBase = (int*)malloc(sizeof(int) * len);
//	if (NULL == pArr) {
//		printf("��̬�ڴ����ʧ�ܣ�����\n");
//		exit(-1);
//	}
//	pArr->len = len;
//	pArr->cnt = 0;
//	return;
//}
//void ListTraverse(PARR pArr) {
//	if (ListEmpty(pArr))
//		printf("����Ϊ�գ�����\n");
//	else
//		for (int i = 0; i < pArr->cnt; i++) {
//			printf("%d\t", pArr->pBase[i]);
//		}
//	printf("\n");
//	return;
//}
//bool append_arr(PARR pArr, int val) {
//	if (ListFull(pArr))
//		return false;
//	pArr->pBase[pArr->cnt] = val;
//	pArr->cnt++;
//}
//bool ListFull(PARR pArr) {
//	if (pArr->cnt == pArr->len)
//		return true;
//	else
//		return false;
//}
//bool GetElem(PARR pArr, int pos, int* e) {
//	if (pos > pArr->cnt || ListEmpty(pArr)) {
//		printf("�������Ϊ��Ҳ�������������\n");
//		return false;
//	}	
//	*e = pArr->pBase[pos - 1];
//	return true;
//}
//bool ListEmpty(PARR pArr) {
//	if (pArr->cnt == 0)
//		return true;
//	else
//		return false;
//}
//bool DropDuplicates(PARR pArr) {
//	int i, j;
//	for (i = 0; i < pArr->cnt - 1; i++) { // cnt:6 1
//		for (j = i + 1; j < pArr->cnt; j++) { // 1 2 3 2 4 5  1 3
//			if (pArr->pBase[i] == pArr->pBase[j]) {
//				for (; i < pArr->cnt; i++)
//					pArr->pBase[i] = pArr->pBase[i + 1];
//				pArr->cnt--;
//			}
//		}
//	}
//}
//int ListLength(PARR pArr) {
//	return pArr->cnt;
//}
//int LocateElem(PARR pArr, int e) {
//	int v = 0; // 0
//	for (int i = 0; i < pArr->cnt; i++) {
//		//printf("e: %d, pBase[i]:%d\n", e, pArr->pBase[i]);
//		if (e != pArr->pBase[i]) {
//			v = 0;
//		}
//		else {
//			v = i + 5;
//			break;
//		}	
//			
//	}
//	//printf("v: %d\n", v);
//	return v;
//}
//bool unionList(PARR pArr, PARR pArr1) {
//	if (ListEmpty(pArr) || ListEmpty(pArr1))
//		return false;
//	DropDuplicates(pArr);
//	DropDuplicates(pArr1);
//	int arr1_len, arr2_len, i, e;
//	arr1_len = ListLength(pArr);
//	arr2_len = ListLength(pArr1);
//	for (i = 1; i <= arr2_len; i++) {
//		GetElem(pArr1, i, &e);
//		//printf("e: %d\n", e);
//		int ack = LocateElem(pArr, e);
//		//printf("e:%d, ack: %d\n", e, ack);
//		if (!ack) {
//			//printf("���������%d\n", e);
//			ListInser(pArr, pArr->cnt + 1, e);
//		}
//			
//	}
//
//}
//bool ListInser(PARR pArr, int pos, int e) {
//	if (pos < 0 || pos > pArr->cnt + 1)
//		return false;
//	if (ListFull(pArr)) {
//		printf("��������������\n");
//		return false;
//	}
//	//printf("yun\n");
//	// 1 2 3 4 5    6 88  
//	for (int i = pArr->cnt; i >= pos - 1; i--) { // i >= 5
//		//printf("i = %d, pos - 1 = %d\n", i, pos - 1);
//		//printf("%d\n", pArr->pBase[i - 1]);
//		pArr->pBase[i] = pArr->pBase[i - 1];
//		//printf("[i] = %d\n", pArr->pBase[i]);
//	}
//	pArr->pBase[pos - 1] = e;
//	//printf("%d\n", pArr->pBase[pos - 1]);
//	pArr->cnt++;
//	return true;
//}

//# include<stdio.h>
//# include<malloc.h>
//# include<stdlib.h>
//
//# define bool char
//# define true 1
//# define false 0
//
//// �ṹ��
//typedef struct List {
//	int* p;
//	int len;
//	int cnt;
//}*PL, L;
//
//// Operation
//void InitList(PL pL, int len);
//void TraverseList(PL pL);
//bool ListInsert(PL pL, int i, int e);
//bool AddList(PL pL, int e);
//bool ListEmpty(PL pL);
//bool ListFull(PL pL);
//bool ListDelete(PL pL, int i, int* e);
//int ListLength(PL pL);
//
//int main() {
//	L La;
//	int value;
//	InitList(&La, 6);
//	for (int i = 1; i <= 5; i++) {
//		AddList(&La, i);
//	}
//	TraverseList(&La);
//	if (ListDelete(&La, 0, &value)) {
//		printf("λ��%dɾ���ɹ���ɾ����Ԫ��%d����!\n", 0, value);
//	}
//	else {
//		printf("Failed������\n");
//	}
//	
//	TraverseList(&La);
//	//printf("���Ա�LaԪ�ظ���Ϊ��%d", ListLength(&La));
//	return 0;
//}
//
//void InitList(PL pL, int len) {
//	// ��ʼ������
//	pL->p = (int*)malloc(sizeof(int) * len);
//	if (NULL == pL) {
//		printf("��̬�ڴ����ʧ�ܣ�����\n");
//		exit(-1);
//	}
//
//	pL->len = len;
//	pL->cnt=0;
//	return;
//}
//void TraverseList(PL pL) {
//	if (ListEmpty(pL))
//		printf("�б�Ϊ�գ�����\n");
//
//	for (int i = 0; i < pL->cnt; i++)
//		printf("%d\t", pL->p[i]);
//	printf("\n");
//	return;
//}
//bool ListEmpty(PL pL) {
//	if (pL->cnt == 0)
//		return true;
//	else
//		return false;
//}
//bool ListFull(PL pL) {
//	if (pL->cnt == pL->len)
//		return true;
//	else
//		return false;
//}
//bool AddList(PL pL, int e) {
//	if (ListFull(pL)) {
//		printf("�б�����������\n");
//		printf("%d׷��ʧ�ܣ�����\n", e);
//		return false;
//	}
//	pL->p[pL->cnt] = e;
//	pL->cnt++;
//	printf("%d׷�ӳɹ�������\n", e);
//	return true;
//}
//bool ListInsert(PL pL, int i, int e) {
//	if (ListFull(pL)) {
//		printf("�б�����������");
//		return false;
//	}
//	if (i < 1 || i > pL->cnt + 1) {
//		printf("��ֵ%d����λ���д�����ʧ�ܣ�����\n", e);
//		return false;
//	}
//	for (int j = pL->cnt; j > i - 1; j--) { // 1 2 3 4 5   6 88  5 5
//		pL->p[j] = pL->p[j - 1];
//	}
//	printf("��ֵ%d����λ��%d�ɹ�������\n", e, i);
//	pL->p[i - 1] = e;
//	pL->cnt++;
//	return true;
//}
//bool ListDelete(PL pL, int i, int* e) {
//	if (ListEmpty(pL)) {
//		printf("���Ա�Ϊ�գ�����\n");
//		return false;
//	}
//	if (i < 1 || i > pL->cnt + 1) {
//		printf("����λ�ô��󣬲��ɲ���������\n");
//		return false;
//	}
//	*e = pL->p[i - 1];
//	// 1 2 3 4 5  4 5
//	for (int j = i; j < pL->cnt; j++) {
//		pL->p[j - 1] = pL->p[j];
//	}
//	pL->cnt--;
//	return true;
//}
//int ListLength(PL pL) {
//	return pL->cnt;
//}

// ������

//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
//
//#define bool char
//#define true 1
//#define false 0
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//}*LinkList, Node;
//
//LinkList InitList(LinkList pHead);
//void ShowList(LinkList);
//bool GetElem(LinkList pHead, int i, int* e);
//bool ListInsert01(LinkList pHead, int i, int e);
//bool ListInsert(LinkList pHead, int i, int e);
//bool listinsert02(LinkList phead, int i, int e);
//bool ListDelete(LinkList pHead, int i, int* e);
//bool ListEmpty(LinkList);
//int ListLength(LinkList);
//
//
//int main() {
//	LinkList pHead = NULL;
//	pHead = InitList(&pHead);
//	ShowList(pHead);
//	//printf("����ĳ�����%d\n", ListLength(pHead));
//
//	int val, pos = 3;
//
//	//loop: printf("������ڵ�λ��:");
//	//scanf_s("%d%d", &pos, &val);
//	//if (ListInsert(pHead, 1, 88))
//	//	printf("%d�ڵ����ֵ%d�ɹ�������\n", 1, 88);
//	//else {
//	//	printf("����λ�ô������������룺");
//	//	//goto loop;
//	//}	
//	/*ListInsert(pHead, 3, 88);*/
//	if (ListDelete(pHead, pos, &val))
//		printf("%dλ��ɾ����ֵ��%d\n", pos, val);
//	else
//		printf("��ǰλ����ֵ�����������룡����\n");
//	ShowList(pHead);
//
//// �õ��ڵ�λ��ֵ
////loop: printf("������ڵ�λ��:");
////	scanf_s("%d", &pos);
////	if (GetElem(pHead, pos, &val))
////		printf("�ڵ�%d��ֵ��%d\n", pos, val);
////	else {
////		printf("����λ�ô������������룺");
////		goto loop;
////	}	
//	return 0;
//}
//
//LinkList InitList(LinkList pHead) {
//	int len, i, val;
//
//	pHead = (LinkList)malloc(sizeof(Node));
//	if (NULL == pHead) {
//		printf("��̬�ڴ����ʧ�ܣ�����\n");
//		exit(-1);
//	}
//	LinkList pTail = pHead;
//	pTail->next = NULL;
//
//	printf("������Ҫ���������ڵ㣺");
//	scanf_s("%d", &len);
//	for (i = 0; i < len; i++) {
//		printf("�������%d���ڵ��ֵ��", i + 1);
//		scanf_s("%d", &val);
//
//		LinkList pNew = (LinkList)malloc(sizeof(Node));
//		if (NULL == pNew) {
//			printf("��̬�ڴ����ʧ�ܣ�����\n");
//			exit(-1);
//		}
//
//		pNew->data = val;
//		pTail->next = pNew;
//		pNew->next = NULL;
//		pTail = pNew;
//	}
//	return pHead;
//}
//void ShowList(LinkList pHead) {
//	LinkList p = pHead->next;
//	if (ListEmpty(pHead))
//	{
//		printf("����Ϊ�գ���\n");
//		return false;
//	}
//	while (NULL != p) {
//		printf("%d\t", p->data);
//		p = p->next;
//	}	
//	printf("\n");
//	return;
//}
//bool ListEmpty(LinkList pHead) {
//	if (pHead->next == NULL)
//		return true;
//	else
//		return false;
//}
//bool GetElem(LinkList pHead, int i, int* e) {
//	int j, len = ListLength(pHead);
//	if (i < 1 || i > len)
//		return false;
//	LinkList p = pHead->next;
//	for (j = 0; j < i; j++) {
//		*e = p->data;
//		p = p->next;
//	}
//	return true;
//}
//int ListLength(LinkList pHead) {
//	LinkList p = pHead->next;
//	int len = 0;
//	while (NULL != p) {
//		len++;
//		p = p->next;
//	}
//	return len;
//}
//bool ListInsert01(LinkList pHead, int i, int e) {
//	int j = 0, len = ListLength(pHead);
//	if (i < 1 || i > len + 1) {
//		return false;
//	}
//	LinkList p = pHead;
//	/*while (NULL != p && j < i - 1) {
//		p = p->next;
//		j++;
//	}*/
//	while (NULL != p && j < i - 1) {
//			p = p->next;
//			i++;
//	}
//
//	LinkList pNew = (LinkList)malloc(sizeof(Node));
//	if (NULL == pNew) {
//		printf("��̬�ڴ����ʧ�ܣ���\n");
//		exit(-1);
//	}
//	pNew->data = e;
//	pNew->next = p->next;
//	p->next = pNew;
//	return true;
//}
//bool listinsert02(LinkList phead, int i, int e) {
//	int j;
//	LinkList p, s;
//	p = phead;
//	j = 1;
//	// Ѱ�ҵ�i - 1���ڵ�
//	while (p && j < i) {
//		p = p->next;
//		++j;
//	}
//
//	if (!p || j > 1)
//		return false; // ��i���ڵ㲻����
//
//	s = (LinkList)malloc(sizeof(Node));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//bool ListInsert(LinkList pHead, int i, int e) {
//	int j;
//	LinkList p, s;
//	p = pHead;
//	j = 1;
//
//	while (p && j < i) { // ȡ��i-1�ĵ�ַ
//		p = p->next;
//		++j;
//	}
//
//	if (!p || j > i)
//		return false;
//	s = (LinkList)malloc(sizeof(Node));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//bool ListDelete(LinkList pHead, int i, int* e) {
//	int j = 1;
//	LinkList p = pHead, q;
//	while (p && j < i) {
//		p = p->next;
//		++j;
//	}
//
//	if (!p || j > i - 1)
//		return false;
//	
//	/**e = p->next->data;
//	q = = p->next->next;
//	free(p->next);
//	p->next = q;*/
//	*e = p->next->data;
//	q = p->next->next;
//	free(p->next);
//	p->next = q;
//	return false;
//}

// �������������
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//typedef int ElemType;
//
////���Ա�����洢�ṹ
//typedef struct Node {
//    ElemType data; // �������Ԫ�ص�������
//    struct Node* next; // ��ź�̽���ַ��ָ����
//}Node;
//
//typedef Node* LinkList;
//
//void CreateListHead(LinkList* L, int n);
//
//int main() {
//
//    return 0;
//}
//
//// �������n��Ԫ�ص�ֵ����������ͷ���ĵ������Ա�L��ͷ�巨��
//void CreateListHead(LinkList* L, int n) {
//    LinkList p;
//    int i;
//    srand(time(0)); // ��ʼ�����������
//    *L = (LinkList)malloc(sizeof(Node));
//    (*L)->next = NULL;
//
//
//    return;
//}

// �༶ָ��
#include<stdio.h>

int main() {
	// LinkList* List;
	// list = 
	// c(&List);
	int i = 10;
	int* p = &i;
	int** q = &p;
	int*** r = &q;
	printf("%p, %p", p, *q);

}



