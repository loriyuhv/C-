#define bool char
#define true 1
#define false 0
// ���ݽṹ
// ���壺������ΰ���ʵ�д��������ӵ��������ض����������ͺ��ض�
// �Ĵ洢�ṹ���浽���洢�����ڴ棩�У��Լ��ڴ˻�����Ϊʵ��ĳ��
// ���ܣ��������ĳ��Ԫ�أ�ɾ��ĳ��Ԫ�أ�������Ԫ�ؽ������򣩶�
// ִ�е���Ӧ�����������Ӧ�Ĳ���Ҳ���㷨��
// ���ݽṹ = ���� + ����Ĺ�ϵ
// �㷨 = �Դ洢���ݵĲ���

// �㷨
// ����ķ����Ͳ���
// �����㷨�ı�׼
// a. ʱ�临�Ӷ�
	// ��ų���Ҫִ�еĴ���������ִ�е�ʱ��
// b. �ռ临�Ӷ�
	// �㷨ִ�й����д����ռ�õ�����ڴ�
// c. ���׳̶�
// d. ��׳��

// ���ݽṹ�ĵ�λ
// ���ݽṹ�����������ĵĿγ�
// ���� = ���ݵĴ洢 + ���ݵĲ��� + ���Ա������ִ�е�����


// ģ��һ�����Խṹ �������еĽ����һ��ֱ�ߴ�������
// 1) �����洢(���飩
// a. ʲô������ Ԫ��������ͬ����С���
// b. �������ȱ�㡣

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

// ������һ���������ͣ����������͵����ֽ���struct Arr,
// ���������ͺ���������Ա���ֱ���pBase, len, cnt
struct Arr {
	int* pBase;	// �洢���������һ��Ԫ�صĵ�ַ
	int len;	// �����������ɵ����Ԫ�صĸ���
	int cnt;	// ��ǰ������ЧԪ�ظ���
}; 

void init_arr(struct Arr*, int); //	��ʼ��
bool append_arr(struct Arr* pArr, int val);	// ׷��
bool insert_arr(struct Arr* pArr, int pos, int val); // pos��ֵ��1��ʼ
bool delete_arr(struct Arr* pArr, int pos, int *pVal);
int get();
bool is_empty(struct Arr* pArr);
bool is_full(struct Arr* pArr);
void sort_arr(struct Arr* pArr);
void show_arr(struct Arr* pArr);
void inversion_arr(struct Arr* pArr);

int main()
{
	struct Arr arr;
	int i, val;

	// Ϊʲô��ʼ������Ϊ����struct Arr���������Ա��������ֵ
	init_arr(&arr, 6);
	
	show_arr(&arr);
	delete_arr(&arr, 1, &val);
	for (i = 1; i <= 3; i++) {
		if (append_arr(&arr, i))
			printf("%d׷�ӳɹ�\n", i);
		else
			printf("%d׷��ʧ��\n", i);
	}
	//insert_arr(&arr, 4, 99);
	show_arr(&arr);
	/*if (delete_arr(&arr, 1, &val)) {
		printf("ɾ���ɹ���\n");
		printf("��ɾ����Ԫ���ǣ�%d\n", val);
	}
	else
		printf("ɾ��ʧ�ܣ�����\n");
		

	show_arr(&arr);
	inversion_arr(&arr);
	show_arr(&arr);
	sort_arr(&arr);
	show_arr(&arr);*/

	//printf("%d\n", arr.len);
	//int increment; // �Զ��������ӡ�

	//pBase = (int*)malloc(sizeof(int) * len);
	return 0;
}

void init_arr(struct Arr* pArr, int length) {
	pArr->pBase = (int*)malloc(sizeof(int) * length);
	if (NULL == pArr->pBase) {
		printf("��̬�ڴ����ʧ��");
		exit(-1);
	}
	else {
		pArr->len = length;
		pArr->cnt = 0;
	}
	return;
}

bool is_empty(struct Arr* pArr) {
	if (pArr->cnt == 0)
		return true;
	else
		return false;
}

bool is_full(struct Arr* pArr) {
	if (pArr->cnt == pArr->len)
		return true;
	else
		return false;
}

void show_arr(struct Arr* pArr) {
	if (is_empty(pArr))
		printf("����Ϊ��!\n");
	else
	{
		for (int i = 0; i < pArr->cnt; i++)
			printf("%d\t", pArr->pBase[i]);
		printf("\n");
	}
}

bool append_arr(struct Arr* pArr, int val) {
	// ���Ƿ���false
	if (is_full(pArr))
		return false;
	// ����ʱ׷��
	pArr->pBase[pArr->cnt] = val;
	pArr->cnt++;
	return true;
}

bool insert_arr(struct Arr* pArr, int pos, int val) {
	int i;
	if (is_full(pArr))
		return false;
	if (pos < 1 || pos >= pArr->len)
		return false;
	for (i = pArr->cnt - 1; i >= pos - 1; i--) {
		pArr->pBase[i + 1] = pArr->pBase[i];
	}
	pArr->pBase[pos - 1] = val;
	(pArr->cnt)++;
	return true;
}

bool delete_arr(struct Arr* pArr, int pos, int* pVal) {
	if (is_empty(pArr))
		return false;
	if (pos < 1 || pos > pArr->cnt)
		return false;
	*pVal = pArr->pBase[pos - 1];
	for (int i = pos; i < pArr->cnt; i++) {
		pArr->pBase[i - 1] = pArr->pBase[i];	
	}
	(pArr->cnt)--;
}

void inversion_arr(struct Arr* pArr) {
	int i = 0;
	int j = pArr->cnt - 1;
	int t;
	while (i < j)
	{
		t = pArr->pBase[i];
		pArr->pBase[i] = pArr->pBase[j];
		pArr->pBase[j] = t;
		i++;
		j--;
	}
	return;
}

void sort_arr(struct Arr* pArr) {
	int i, j, temp;
	for (i = 0; i < pArr->cnt - 1; i++) {
		for (j = 0; j < pArr->cnt - 1 - i; j++) {
			if (pArr->pBase[j] < pArr->pBase[j + 1]) {
				temp = pArr->pBase[j];
				pArr->pBase[j] = pArr->pBase[j + 1];
				pArr->pBase[j + 1] = temp;
			}
		}
	}
}


// typedef
/*
//# include<stdio.h>
//
//typedef int a; 
//// Ϊint�����¶�ȡһ�����֣�a�ȼ���int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}ST;
//
//int main() {
//	//int i = 10; // �ȼ��� a i = 10;
//	//a j = 20;
//	//printf("%d\n", j);
//
//	struct Student st;	// �ȼ��� ST st;
//	struct Student* ps = &st;
//	// �ȼ���ST* ps = &st;
//
//	ST st2;
//	st2.id = 20197360;
//	printf("%d\n", st2.id);
//
//	return 0;
//}
// ����һ��
//# include<stdio.h>
//
//typedef int a; 
//// Ϊint�����¶�ȡһ�����֣�a�ȼ���int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}* PST; // PST �ȼ��� struct Student*
//
//int main() {
//	struct Student st;
//	PST ps = &st;
//	ps->id = 20197360;
//	printf("%d\n", ps->id);
//	
//	return 0;
//}
// ������һ��
//# include<stdio.h>
//
//typedef int a;
//// Ϊint�����¶�ȡһ�����֣�a�ȼ���int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}*PST, ST; // PST �ȼ��� struct Student*
//// ST �ȼ��� struct Student
//
//int main() {
//	ST st;
//	PST pst = &st;
//	st.id = 20197360;
//	printf("%d, %d\n", st.id, pst->id);
//
//	return 0;
//}
*/

// 2) ��ɢ�洢(����
// a. ���壺
	// n���ڵ���ɢ���䣻
	// �˴�ͨ��ָ��������
	// ÿ���ڵ�ֻ��һ��ǰ���ڵ㣬ÿ���ڵ�ֻ��һ�������ڵ㣻
	// �׽ڵ�û��ǰ���ڵ㣬β�ڵ�û�к����ڵ�
	// רҵ����
		// �׽ڵ㣺
			// ��һ����Ч�ڵ�
		// β�ڵ㣺
			// ���һ����Ч�ڵ�
		// ͷ�ڵ㣺
			// ��һ����Ч�ڵ�֮ǰ�Ľڵ㣻
			// ͷ��㲢�������Ч����
			// ��ͷ����Ŀ����Ҫ��Ϊ�˷��������Ĳ���
		// ͷָ�룺
			// ָ��ͷ����ָ�����
		// βָ��
			// ָ��β����ָ�����
	// ���ϣ��ͨ��һ����������������д���
	// ����������Ҫ�����������Щ������
		// ֻ��Ҫһ��������ͷָ��
		// ��Ϊ����ͨ��ͷָ�������������������������Ϣ

//# include<stdio.h>
//
//typedef struct Node {
//	int data; // ������
//	struct Node* pNext; // ָ����
//}*PNODE, NODE; // NODE �ȼ��� struct Node
//// PNODE �ȼ��� struct Node*
//
//int main() {
//
//	return 0;
//}

// b. ����
	// ������
	// ˫����
	// ÿһ���ڵ�������ָ����
	// ѭ������
	// ��ͨ���κ�һ���ڵ��ҵ��������еĽڵ㡣
	// ��ѭ������
// c. �㷨
	// ����
	// ����
	// ���
	// ����
	// �󳤶�
	// ���� 
// coding
//# include<stdio.h>
//# include<malloc.h>
//# include<stdlib.h>
//
//typedef struct Node {
//	int data;	// ������
//	struct Node* pNext;	// ָ����
//}*PNODE, NODE;
//
//PNODE create_list();
//void traverse_list(PNODE pHead);
//
//int main() {
//	PNODE pHead = NULL;
//	// ����һ����ѭ�������������������ͷ���ĵ�ַ����pHead
//	pHead = create_list(); 
//	printf("%x\n", pHead);
//	//traverse_list(pHead);
//	return 0;
//}
//
//PNODE create_list() {
//	int len;	// ������Žڵ�ĸ���
//	int i;
//	int val; // ������ʱ����û�����ڵ��ֵ��
//	
//	// ������һ���������Ч���ݵ�ͷ���
//	PNODE pHead = (PNODE)malloc(sizeof(NODE));
//	printf("%x\n", pHead);
//
//	if (NULL == pHead) {
//		printf("����ʧ�ܣ�������ֹ������\n");
//		exit(-1);
//	}
//
//	PNODE pTail = pHead;
//	pTail->pNext = NULL;
//	printf("%x\n", pTail);
//
//	printf("����������Ҫ���ɵ�����ڵ�ĸ�����len=");
//	scanf_s("%d", &len);
//
//	for (i = 0; i < len; i++) {
//		printf("�������%d���ڵ��ֵ��", i + 1);
//		scanf_s("%d", &val);
//
//		PNODE pNew = (PNODE)malloc(sizeof(NODE));
//		printf("��%d���ڵ��ַ��%x\n", i + 1, pNew);
//		if (NULL == pNew) {
//			printf("����ʧ�ܣ�������ֹ������\n");
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
//	printf("\n");
//	return;
//}

// 3) ���Խṹ������Ӧ��֮һ ջ
// 4) ���Խṹ������Ӧ��֮һ ����
// ר��: �ݹ�
// a. 1+2+3+4+...+100�ĺ�
// b. ��׳�
// c. ������
// d. ���Թ�

// ģ����������Խṹ
// ��
// ͼ

// ģ���� ���Һ�����
// a. �۰����
// b. ����