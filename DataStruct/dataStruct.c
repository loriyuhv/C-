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

//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
//
//// ������һ���������ͣ����������͵����ֽ���struct Arr,
//// ���������ͺ���������Ա���ֱ���pBase, len, cnt
//struct Arr {
//	int* pBase;	// �洢���������һ��Ԫ�صĵ�ַ
//	int len;	// �����������ɵ����Ԫ�صĸ���
//	int cnt;	// ��ǰ������ЧԪ�ظ���
//}; 
//
//void init_arr(struct Arr*, int); //	��ʼ��
//bool append(struct Arr* pArr, int val);	// ׷��
//bool insert_arr();
//bool delete_arr();
//int get();
//bool is_empty(struct Arr* pArr);
//bool is_full(struct Arr* pArr);
//void sort_arr();
//void show_arr(struct Arr* pArr);
//void inversion_arr();
//
//int main()
//{
//	struct Arr arr;
//	init_arr(&arr, 6);
//	show_arr(&arr);
//	//printf("%d\n", arr.len);
//	//int increment; // �Զ��������ӡ�
//
//	//pBase = (int*)malloc(sizeof(int) * len);
//	return 0;
//}
//
//void init_arr(struct Arr* pArr, int length) {
//	pArr->pBase = (struct Arr*)malloc(sizeof(int) * length);
//	if (NULL == pArr->pBase) {
//		printf("��̬�ڴ����ʧ��");
//		exit(-1);
//	}
//	else {
//		pArr->len = length;
//		pArr->cnt = 0;
//	}
//	return;
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
//
//void show_arr(struct Arr* pArr) {
//	if (is_empty(pArr))
//		printf("����Ϊ��!\n");
//	else
//	{
//		for (int i = 0; i < pArr->cnt; i++)
//			printf("%d\t", pArr->pBase[i]);
//		printf("\n");
//	}
//}
//
//bool append(struct Arr* pArr, int val) {
//	// ���Ƿ���false
//	if (is_full(pArr))
//		return false;
//	// ����ʱ׷��
//	pArr->pBase[pArr->cnt] = val;
//	pArr->cnt++;
//	return true;
//}

// ��̬�ڴ������ͷ�
// ��̬����һά����
// ���趯̬����һ��int������
# include<stdio.h>
# include<malloc.h>

int main()
{
	int* p = (int*)malloc(4);

}

// 2) ��ɢ�洢(����
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