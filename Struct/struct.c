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

// 4) �ṹ������ͽṹ�����ָ����Ϊ�����������ݵ�����
// ͨ��������ɶԽṹ���������������
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

	inputstudent(&st);	// �Խṹ��������� ���뷢��st�ĵ�ַ
	outputstudent(&st); // �Խṹ�������� ���Է���st�ĵ�ַ��Ҳ����ֱ�ӷ���st
	
	return 0;
}

void inputstudent(struct student* stu) {
	(*stu).age = 10;
	strcpy(stu->name, "����");
	stu->sex = 'f';
}

// ע�⣺������յ�ַ�Ļ������ױ��޸ġ�
// c++ �Ӹ�const �Ϳ���ʵ��ֻ�ܵ��õ�ַ�����������޸ġ�
void outputstudent(struct student* stu) {
	printf("%d, %s, %c", stu->age, stu->name, stu->sex);
}
// Ӧ�÷��͵�ַ���Ƿ�������
// ָ����ŵ�֮һ��
	// 1) ���ٵش������ݡ�
	// 2) �����ڴ�С��
	// 3) ִ���ٶȿ졣



// ����
// ��̬������ѧ����Ϣ�Ľṹ�����顣

// ����