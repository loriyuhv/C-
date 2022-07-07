// 结构体

// 为什么需要结构体
	// 答：为了表示一些复杂的事物，而普通的基本类型无法满足实际需求。
//什么叫结构体
	// 答：把一些基本类型数据组合在一起形成一个新的数据类型，这个叫做结构体。
//#include<stdio.h>
//
//struct Student {
//	int age;
//	float score;
//	char sex;
//};
//
//
//int main()
//{
//	// 学生：年龄，姓名，性别，成绩
//	// 例1：这样太繁复了。
//	/*int age;
//	float score;
//	char name[100];
//	char sex[10];*/
//	// 例2
//	struct Student st = {80, 66.6, 'F'};
//	return 0;
//}

// 如何定义结构体

// 3种方式
// 第一种方式（强烈建议）
// 注意：这只是定义了一个新的数据类型，没有定义变量
//#include<stdio.h>
//
//struct Student {
//	int age;
//	float score;
//	char sex;
//};
//
//int main()
//{
//	struct Student st = {80, 66.6, 'F'};
//}
// 第二种方式
//#include<stdio.h>
//
//struct Student {
//	int age;
//	float score;
//	char sex;
//} st;
//
//int main()
//{
//	struct Student st = { 80, 66.6, 'F' };
//}
// 第三种
//#include<stdio.h>
//
//struct {
//	int age;
//	float score;
//	char sex;
//} st;
//
//int main()
//{
//	st;
//}

// 怎样使用结构体变量

// 1) 赋值和初始化
// 定义的同时可以整体赋初值
// 如果定义完之后，则只能单个的赋初值
//# include<stdio.h>
//
//struct Student {
//	int age;
//	float score;
//	char sex;
//};
//
//int main()
//{
//	// 第一种
//	struct Student st1 = { 18, 99.99, 'F'}; //初始化 定义的同时赋初值
//	// 第二种 
//	struct Student st2; //垃圾值
//	st2.age = 19;
//	st2.score = 99;
//	st2.sex = 'F';
//	printf("%d, %f, %c\n", st2.age, st2.score, st2.sex);
//	return 0;
//}

// 2）如何去除结构体变量中的每一个成员
// a. 结构体变量名.成员名
// b. 指针变量->成员名
//# include<stdio.h>
//
//struct Student {
//	int age;
//	float score;
//	char sex;
//};
//
//int main()
//{
//	// 第一种
//	struct Student st1 = { 18, 99.99, 'F'}; 
//	printf("%d, %f, %c\n", st1.age, st1.score, st1.sex);
//	
//	// 第二种
//	struct Student st2 = { 20, 80, 'M' };
//	struct Student* pst = &st2;
//	printf("%d, %f, %c\n", pst->age, pst->score, pst->sex); 
//	// 注意：浮点数不能准确存储，因为编码格式问题
//	// st2.age 是通过结构体直接引用 pst.age 是通过指针间接引用
//
//	return 0;
//}
// 注意：
// pst->age 在计算机内部会被转换成（*pst).age 这是一种规定。
// pst->age 等价于（*pst).age 也等价于 st.age
// pst->age的含义：pst所指向的那个结构体变量中的age这个成员。


// 3) 结构体变量的运算

// 4) 结构体变量和结构体变量指针作为函数参数传递的问题
// 通过函数完成对结构体变量的输入和输出
# include<stdio.h>
//# include<string.h>

void inputstudent(struct student* stu);
void outputstudent(struct student* stu);

struct student {
	int age;
	char sex;
	char name[100];
};

int main()
{
	struct student st;
	printf("%d\n", sizeof(st));

	inputstudent(&st);	// 对结构体变量输入 必须发送st的地址
	outputstudent(&st); // 对结构体变量输出 可以发送st的地址，也可以直接发送st
	
	return 0;
}

void inputstudent(struct student* stu) {
	(*stu).age = 10;
	strcpy(stu->name, "张三");
	stu->sex = 'f';
}

// 注意：如果接收地址的话，容易被修改。
// c++ 加个const 就可以实现只能调用地址，但不可以修改。
void outputstudent(struct student* stu) {
	printf("%d, %s, %c", stu->age, stu->name, stu->sex);
}
// 应该发送地址还是发送内容
// 指针的优点之一：
	// 1) 快速地传输数据。
	// 2) 耗用内存小。
	// 3) 执行速度快。



// 举例
// 动态构造存放学生信息的结构体数组。

// 链表