#define _CRT_SECURE_NO_WARNINGS
// �ṹ��

// Ϊʲô��Ҫ�ṹ��
	// ��Ϊ�˱�ʾһЩ���ӵ��������ͨ�Ļ��������޷�����ʵ������
//ʲô�нṹ��
	// �𣺰�һЩ�����������������һ���γ�һ���µ��������ͣ���������ṹ�塣
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
//	// ѧ�������䣬�������Ա𣬳ɼ�
//	// ��1������̫�����ˡ�
//	/*int age;
//	float score;
//	char name[100];
//	char sex[10];*/
//	// ��2
//	struct Student st = {80, 66.6, 'F'};
//	return 0;
//}

// ��ζ���ṹ��

// 3�ַ�ʽ
// ��һ�ַ�ʽ��ǿ�ҽ��飩
// ע�⣺��ֻ�Ƕ�����һ���µ��������ͣ�û�ж������
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
// �ڶ��ַ�ʽ
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
// ������
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

// ����ʹ�ýṹ�����

// 1) ��ֵ�ͳ�ʼ��
// �����ͬʱ�������帳��ֵ
// ���������֮����ֻ�ܵ����ĸ���ֵ
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
//	// ��һ��
//	struct Student st1 = { 18, 99.99, 'F'}; //��ʼ�� �����ͬʱ����ֵ
//	// �ڶ��� 
//	struct Student st2; //����ֵ
//	st2.age = 19;
//	st2.score = 99;
//	st2.sex = 'F';
//	printf("%d, %f, %c\n", st2.age, st2.score, st2.sex);
//	return 0;
//}

// 2�����ȥ���ṹ������е�ÿһ����Ա
// a. �ṹ�������.��Ա��
// b. ָ�����->��Ա��
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
//	// ��һ��
//	struct Student st1 = { 18, 99.99, 'F'}; 
//	printf("%d, %f, %c\n", st1.age, st1.score, st1.sex);
//	
//	// �ڶ���
//	struct Student st2 = { 20, 80, 'M' };
//	struct Student* pst = &st2;
//	printf("%d, %f, %c\n", pst->age, pst->score, pst->sex); 
//	// ע�⣺����������׼ȷ�洢����Ϊ�����ʽ����
//	// st2.age ��ͨ���ṹ��ֱ������ pst.age ��ͨ��ָ��������
//
//	return 0;
//}
// ע�⣺
// pst->age �ڼ�����ڲ��ᱻת���ɣ�*pst).age ����һ�ֹ涨��
// pst->age �ȼ��ڣ�*pst).age Ҳ�ȼ��� st.age
// pst->age�ĺ��壺pst��ָ����Ǹ��ṹ������е�age�����Ա��


// 3) �ṹ�����������

// �ṹ�����������ӣ����������Ҳ�����໥�˳�
// ���ṹ����������໥��ֵ��
//# include<stdio.h>
////# include<string.h>
//
//struct student {
//	int age;
//	char sex;
//	char name[100];
//};
//
//int main()
//{
//	struct student st;
//	struct student st1;
//	st.age = 18;
//	st.sex = 'F';
//	strcpy(st.name, "����");
//	st1 = st;
//	printf("%d, %c, %s\n", st1.age, st1.sex, st1.name);
//	return 0;
//}


// 4) �ṹ������ͽṹ�����ָ����Ϊ�����������ݵ�����
// ͨ��������ɶԽṹ���������������
//# include<stdio.h>
////# include<string.h>
//
//void inputstudent(struct student* stu);
//void outputstudent(struct student* stu);
//
//struct student {
//	int age;
//	char sex;
//	char name[100];
//};
//
//int main()
//{
//	struct student st;
//	printf("%d\n", sizeof(st));
//
//	inputstudent(&st);	// �Խṹ��������� ���뷢��st�ĵ�ַ
//	outputstudent(&st); 
//	// �Խṹ�������� ���Է���st�ĵ�ַ��Ҳ����ֱ�ӷ���st
//	// ��Ϊ�˼����ڴ�ĺķѣ�ҲΪ�����ִ���ٶȣ��Ƽ����͵�ַ��
//	
//	return 0;
//}
//
//void inputstudent(struct student* stu) {
//	(*stu).age = 10;
//	strcpy(stu->name, "����");
//	stu->sex = 'f';
//}
//
//// ע�⣺������յ�ַ�Ļ������ױ��޸ġ�
//// c++ �Ӹ�const �Ϳ���ʵ��ֻ�ܵ��õ�ַ�����������޸ġ�
//void outputstudent(struct student* stu) {
//	printf("%d, %s, %c", stu->age, stu->name, stu->sex);
//}
// Ӧ�÷��͵�ַ���Ƿ�������
// ָ����ŵ�֮һ��
	// 1) ���ٵش������ݡ�
	// 2) �����ڴ�С��
	// 3) ִ���ٶȿ졣

// ð������

// ����
//# include<stdio.h>
//
//int main()
//{
//	int a[10] = { 9, 7, 8, 6, 2, 1, 0, 3, 4, 5 }, i, j, temp;
//
//	for (i = 0; i < 9; i++) {
//		for (j = 0; j < 9 - i; j++) {
//			if (a[j] < a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//		printf("%d\t", a[i]);
//
//	return 0;
//}


// ����
// ��̬������ѧ����Ϣ�Ľṹ�����顣
// Ȼ�󰴷����������
//#include<stdio.h>
//#include<malloc.h>
//
//struct Student {
//	int age;
//	float score;
//	char name[100];
//};
//
//void sort(struct Student* pArr, int len) {
//
//	int i, j;
//	struct Student temp;
//
//	for (i = 0; i < len - 1; i++) {
//		for (j = 0; j < (len - 1) - i; j++) {
//			if (pArr[j].score < pArr[j + 1].score) {
//				temp = pArr[j];
//				pArr[j] = pArr[j + 1];
//				pArr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < len; i++) {
//		printf("�������%d��ѧ����Ϣ��", i + 1);
//		printf("age = %d, name = %s, score = %f\n", pArr[i].age, pArr[i].name, pArr[i].score);
//	}
//
//	return;
//}
//
//int main()
//{
//	int len, i;
//	struct Student* pArr;
//
//	// ��̬�Ĺ���һά����
//	printf("������ѧ���ĸ�����");
//	scanf_s("%d", &len);
//	pArr = (struct Student *)malloc(len * sizeof(int));
//
//	// ����
//	for (i = 0; i < len; i++) {
//		printf("�������%d��ѧ����Ϣ��\n", i + 1);
//		printf("age = ");
//		scanf("%d", &pArr[i].age);
//		printf("name = ");
//		//name����������������Ѿ�����Ԫ�صĵ�ַ��
//		scanf("%s", pArr[i].name);
//		printf("score = ");
//		scanf("%f", &pArr[i].score);
//	}
//
//	// ���
//	for (i = 0; i < len; i++) {
//		printf("�������%d��ѧ����Ϣ��", i + 1);
//		printf("age = %d, name = %s, score = %f\n", pArr[i].age, pArr[i].name, pArr[i].score);
//	}
//
//	sort(pArr, len);
//
//	return 0;
//}


// ö��
# include<stdio.h>

// ֻ������һ���������ͣ���û�ж�����������������͵�������enum WeekDay
enum WeekDay {
	Monday, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};

int main()
{
	enum WeekDay day = WednesDay;
	printf("%d\n", day);
	return 0;
}


// ����

// ָ�����Ҫ��
	// ��ʾһЩ���ӵ����ݽṹ��
	// ���ٵĴ������ݣ��������ڴ�ĺ��ã��ص㣩
	// ʹ��������һ�����ϵ�ֵ�����ص㣩
	// ��ֱ�ӷ���Ӳ����
	// �ܹ�����Ĵ����ַ�����
	// ���������������������õĻ�����