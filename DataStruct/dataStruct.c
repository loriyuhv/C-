#define bool char
#define true 1
#define false 0
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
//bool append(struct Arr* pArr, int val);	// 追加
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
//	//int increment; // 自动增长因子。
//
//	//pBase = (int*)malloc(sizeof(int) * len);
//	return 0;
//}
//
//void init_arr(struct Arr* pArr, int length) {
//	pArr->pBase = (struct Arr*)malloc(sizeof(int) * length);
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
//bool append(struct Arr* pArr, int val) {
//	// 满是返回false
//	if (is_full(pArr))
//		return false;
//	// 不满时追加
//	pArr->pBase[pArr->cnt] = val;
//	pArr->cnt++;
//	return true;
//}

// 动态内存分配和释放
// 动态构造一维数组
// 假设动态构造一个int型数组
# include<stdio.h>
# include<malloc.h>

int main()
{
	int* p = (int*)malloc(4);

}

// 2) 离散存储(链表）
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