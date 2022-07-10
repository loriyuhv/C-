//#define bool char
//#define true 1
//#define false 0
// 数据结构
// 定义：我们如何把现实中大量而复杂的问题以特定的数据类型和特定
// 的存储结构保存到主存储器（内存）中，以及在此基础上为实现某个
// 功能（比如查找某个元素，删除某个元素，对所有元素进行排序）而
// 执行的相应操作，这个相应的操作也叫算法。
// 数据结构 = 个体 + 个体的关系
// 算法 = 对存储数据的操作

// 算法
// 解题的方法和步骤
// 衡量算法的标准
// a. 时间复杂度
	// 大概程序要执行的次数，而非执行的时间
// b. 空间复杂度
	// 算法执行过程中大概所占用的最大内存
// c. 难易程度
// d. 健壮性

// 数据结构的地位
// 数据结构是软件中最核心的课程
// 程序 = 数据的存储 + 数据的操作 + 可以被计算机执行的语言


// 模块一：线性结构 （把所有的结点用一根直线穿起来）
// 1) 连续存储(数组）
// a. 什么叫数组 元素类型相同，大小相等
// b. 数组的优缺点。

//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
//
//// 定义了一个数据类型，该数据类型的名字叫做struct Arr,
//// 该数据类型含有三个成员，分别是pBase, len, cnt
//struct Arr {
//	int* pBase;	// 存储的是数组第一个元素的地址
//	int len;	// 数组所能容纳的最大元素的个数
//	int cnt;	// 当前数组有效元素个数
//}; 
//
//void init_arr(struct Arr*, int); //	初始化
//bool append_arr(struct Arr* pArr, int val);	// 追加
//bool insert_arr(struct Arr* pArr, int pos, int val); // pos的值从1开始
//bool delete_arr(struct Arr* pArr, int pos, int *pVal);
//int get();
//bool is_empty(struct Arr* pArr);
//bool is_full(struct Arr* pArr);
//void sort_arr(struct Arr* pArr);
//void show_arr(struct Arr* pArr);
//void inversion_arr(struct Arr* pArr);
//
//int main()
//{
//	struct Arr arr;
//	int i, val;
//
//	// 为什么初始化，因为类型struct Arr里的三个成员都是垃圾值
//	init_arr(&arr, 6);
//	
//	show_arr(&arr);
//	delete_arr(&arr, 1, &val);
//	for (i = 1; i <= 3; i++) {
//		if (append_arr(&arr, i))
//			printf("%d追加成功\n", i);
//		else
//			printf("%d追加失败\n", i);
//	}
//	//insert_arr(&arr, 4, 99);
//	show_arr(&arr);
//	/*if (delete_arr(&arr, 1, &val)) {
//		printf("删除成功！\n");
//		printf("您删除的元素是：%d\n", val);
//	}
//	else
//		printf("删除失败！！！\n");
//		
//
//	show_arr(&arr);
//	inversion_arr(&arr);
//	show_arr(&arr);
//	sort_arr(&arr);
//	show_arr(&arr);*/
//
//	//printf("%d\n", arr.len);
//	//int increment; // 自动增长因子。
//
//	//pBase = (int*)malloc(sizeof(int) * len);
//	return 0;
//}
//
//void init_arr(struct Arr* pArr, int length) {
//	pArr->pBase = (int*)malloc(sizeof(int) * length);
//	if (NULL == pArr->pBase) {
//		printf("动态内存分配失败");
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
//		printf("数组为空!\n");
//	else
//	{
//		for (int i = 0; i < pArr->cnt; i++)
//			printf("%d\t", pArr->pBase[i]);
//		printf("\n");
//	}
//}
//
//bool append_arr(struct Arr* pArr, int val) {
//	// 满是返回false
//	if (is_full(pArr))
//		return false;
//	// 不满时追加
//	pArr->pBase[pArr->cnt] = val;
//	pArr->cnt++;
//	return true;
//}
//
//bool insert_arr(struct Arr* pArr, int pos, int val) {
//	int i;
//	if (is_full(pArr))
//		return false;
//	if (pos < 1 || pos >= pArr->len)
//		return false;
//	for (i = pArr->cnt - 1; i >= pos - 1; i--) {
//		pArr->pBase[i + 1] = pArr->pBase[i];
//	}
//	pArr->pBase[pos - 1] = val;
//	(pArr->cnt)++;
//	return true;
//}
//
//bool delete_arr(struct Arr* pArr, int pos, int* pVal) {
//	if (is_empty(pArr))
//		return false;
//	if (pos < 1 || pos > pArr->cnt)
//		return false;
//	*pVal = pArr->pBase[pos - 1];
//	for (int i = pos; i < pArr->cnt; i++) {
//		pArr->pBase[i - 1] = pArr->pBase[i];	
//	}
//	(pArr->cnt)--;
//}
//
//void inversion_arr(struct Arr* pArr) {
//	int i = 0;
//	int j = pArr->cnt - 1;
//	int t;
//	while (i < j)
//	{
//		t = pArr->pBase[i];
//		pArr->pBase[i] = pArr->pBase[j];
//		pArr->pBase[j] = t;
//		i++;
//		j--;
//	}
//	return;
//}
//
//void sort_arr(struct Arr* pArr) {
//	int i, j, temp;
//	for (i = 0; i < pArr->cnt - 1; i++) {
//		for (j = 0; j < pArr->cnt - 1 - i; j++) {
//			if (pArr->pBase[j] < pArr->pBase[j + 1]) {
//				temp = pArr->pBase[j];
//				pArr->pBase[j] = pArr->pBase[j + 1];
//				pArr->pBase[j + 1] = temp;
//			}
//		}
//	}
//}


// typedef
/*
//# include<stdio.h>
//
//typedef int a; 
//// 为int再重新多取一个名字，a等价于int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}ST;
//
//int main() {
//	//int i = 10; // 等价于 a i = 10;
//	//a j = 20;
//	//printf("%d\n", j);
//
//	struct Student st;	// 等价于 ST st;
//	struct Student* ps = &st;
//	// 等价于ST* ps = &st;
//
//	ST st2;
//	st2.id = 20197360;
//	printf("%d\n", st2.id);
//
//	return 0;
//}
// 复杂一点
//# include<stdio.h>
//
//typedef int a; 
//// 为int再重新多取一个名字，a等价于int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}* PST; // PST 等价于 struct Student*
//
//int main() {
//	struct Student st;
//	PST ps = &st;
//	ps->id = 20197360;
//	printf("%d\n", ps->id);
//	
//	return 0;
//}
// 更复杂一点
//# include<stdio.h>
//
//typedef int a;
//// 为int再重新多取一个名字，a等价于int
//
//typedef struct Student {
//	int id;
//	char name[100];
//	char sex;
//}*PST, ST; // PST 等价于 struct Student*
//// ST 等价于 struct Student
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

// 2) 离散存储(链表）
// a. 定义：
	// n个节点离散分配；
	// 彼此通过指针相连；
	// 每个节点只有一个前驱节点，每个节点只有一个后续节点；
	// 首节点没有前驱节点，尾节点没有后续节点
	// 专业术语
		// 首节点：
			// 第一个有效节点
		// 尾节点：
			// 最后一个有效节点
		// 头节点：
			// 第一个有效节点之前的节点；
			// 头结点并不存放有效数据
			// 加头结点的目的主要是为了方便对链表的操作
		// 头指针：
			// 指向头结点的指针变量
		// 尾指针
			// 指向尾结点的指针变量
	// 如果希望通过一个函数来对链表进行处理，
	// 我们至少需要接收链表的哪些参数：
		// 只需要一个参数：头指针
		// 因为我们通过头指针可以推算出链表的其他所有信息

//# include<stdio.h>
//
//typedef struct Node {
//	int data; // 数据域
//	struct Node* pNext; // 指针域
//}*PNODE, NODE; // NODE 等价于 struct Node
//// PNODE 等价于 struct Node*
//
//int main() {
//
//	return 0;
//}

// b. 分类
	// 单链表
	// 双链表
	// 每一个节点有两个指针域
	// 循环链表
	// 能通过任何一个节点找到其他所有的节点。
	// 非循环链表
// c. 算法
	// 狭义的算法是与数据存数方式密切相关。
	// 广义的算法是数据的存储方式无关。
	// 泛型：利用某种技术大到的效果就是：不同的存数方式，执行的操作时一样的。
	// 遍历
	// 查找
	// 清空
	// 销毁
	// 求长度
	// 排序 
// coding
# include<stdio.h>
# include<malloc.h>
# include<stdlib.h>

# define bool char
# define true 1
# define false 0

typedef struct Node {
	int data;	// 数据域
	struct Node* pNext;	// 指针域
}*PNODE, NODE;

PNODE create_list();
void traverse_list(PNODE pHead);
bool is_empty(PNODE pHead);
int length_list(PNODE pHead);
bool insert_list(PNODE pHead, int pos, int val);
bool delete_list(PNODE pHead, int pos, int* value);
void sort_list(PNODE pHead);

int main() {
	PNODE pHead = NULL;
	// 创建一个非循环单链表，并将该链表的头结点的地址赋给pHead
	pHead = create_list(); 
	//printf("%x\n", pHead);
	//is_empty(pHead);
	//printf("链表长度为：%d\n", length_list(pHead));
	//sort_list(pHead);
	//insert_list(pHead, 1, 88);
	int val;
	traverse_list(pHead);
	delete_list(pHead, 3, &val);
	printf("删除了元素%d\n", val);
	traverse_list(pHead);
	return 0;
}

PNODE create_list() {
	int len;	// 用来存放节点的个数
	int i;
	int val; // 用来临时存放用户输入节点的值。
	
	// 分配了一个不存放有效数据的头结点
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	printf("%x\n", pHead);

	if (NULL == pHead) {
		printf("分配失败，程序终止！！！\n");
		exit(-1);
	}

	PNODE pTail = pHead;
	pTail->pNext = NULL;
	printf("%x\n", pTail);

	printf("请输入您需要生成的链表节点的个数：len=");
	scanf_s("%d", &len);

	loop: if (len < 1) {
		printf("输入错误，请输入大于1的整数：");
		scanf_s("%d", &len);
		goto loop;
	}

	for (i = 0; i < len; i++) {
		printf("请输入第%d个节点的值：", i + 1);
		scanf_s("%d", &val);

		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		printf("第%d个节点地址：%x\n", i + 1, pNew);
		if (NULL == pNew) {
			printf("分配失败，程序终止！！！\n");
			exit(-1);
		}
		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}
void traverse_list(PNODE pHead) {
	PNODE p = pHead->pNext;

	while (NULL != p) {
		printf("%d\t", p->data);
		p = p->pNext;
	}
	printf("\n");
	return;
}
bool is_empty(PNODE pHead) {
	if (pHead->pNext == NULL) {
		printf("链表为空！！！\n");
		return true;
	}
	else {
		printf("链表不空！！！");
		return false;
	}
}
int length_list(PNODE pHead) {
	PNODE p = pHead->pNext;
	int i = 0;
	while (NULL != p) {
		i++;
		p = p->pNext;
	}
	return i;
}

bool insert_list(PNODE pHead, int pos, int val) {
	int i = 0;
	PNODE p = pHead;
	// 1 2 3   2 88   1 88 2 3
	while (NULL != p && i < pos - 1) {
		p = p->pNext;
		i++;
	}
	if (i > pos - 1 || NULL == p)
		return false;
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if (NULL == pNew) {
		printf("动态内存分配失败！！！\n");
		exit(-1);
	}
	/*pNew->data = val;
	PNODE q = p->pNext;
	p->pNext = pNew;
	pNew->pNext = q;*/
	// 改写
	pNew->data = val;
	pNew->pNext = p->pNext;
	p->pNext = pNew;
	return;
}
// 错误 当节点为1个时
// 输出 
// 删除了元素-858993460
// 1
bool delete_list(PNODE pHead, int pos, int* value) {
	PNODE p = pHead;
	int i = 0;
	while (NULL != p && i < pos - 1) {
		p = p->pNext;
		i++;
	}
	// 1 2 3  2   1 3
	// p = 1
	// 原代码
	/*if (NULL == p || 1 < pos - 1)
		return false;*/
	// 修改后的代码
	printf("Hello world\n");
	*value = p->pNext->data;
	PNODE q = p->pNext->pNext;
	free(p->pNext);
	p->pNext = q;
	return;
}
void sort_list(PNODE pHead) {
	PNODE p, q;
	int i, j, t, len = length_list(pHead);

	for (i = 0, p = pHead->pNext; i < len - 1; i++, p = p->pNext) {
		for (j = i + 1, q = p->pNext; j < len; j++, q = q->pNext) {
			if (p->data > q->data) {
				t = p->data;
				p->data = q->data;
				q->data = t;
			}
		}
	}

}

// 排序（沉底法）

//# include<stdio.h>
//
//int main() {
//	int i, j, t;
//	int a[5] = { 3, 2, 4, 1, 5 };
//
//	for (i = 0; i < 4; i++)
//		for (j = i + 1; j < 5; j++) {
//			if (a[i] < a[j]) {
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//
//	for (i = 0; i <= 4; i++)
//		printf("%d\t", a[i]);
//}


// 3) 线性结构的两种应用之一 栈
// 4) 线性结构的两种应用之一 队列
// 专题: 递归
// a. 1+2+3+4+...+100的和
// b. 求阶乘
// c. 汉若塔
// d. 走迷宫

// 模块二：非线性结构
// 树
// 图

// 模块三 查找和排序
// a. 折半查找
// b. 排序