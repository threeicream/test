#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct stu 
{
	char name[20];
	int age;
	char sex[10];
	float score;
};

struct student
{
	char num[11];
	char name[21];
	int age;
	float score;
};

void main()
{
	struct student st, * p = &st;
	printf("请输入学号、姓名、年龄、成绩：\n");
	gets((*p).num);//等同于gets(st.num);
	gets((*p).name);//等同于gets(st.name);
	scanf_s("%d%f", &(*p).age, &(*p).score);
	printf("学号\t姓名\t年龄\t成绩\n");
	printf("%s\t%s\t%d\t%.2f\n", (*p).num, (*p).name, (*p).age, (*p).score);

	//char a[2]="a";
	//char b[1];
	////scanf("%s%s", a,&b);
	//printf("%s\n%s", a+1,b);
	//char a1[6] = { 'a', 98, 'c','d','e','f' };
	//char a2[] = "abcdef";
	//printf("%s\n%s", a1, a2);
	/*int a[2];
	a[1] = 333;
	scanf("%d", &a[0]);
	printf("%d\n%d\n%d", a[0], a[1],a);*/
}

//void main()
//{
//	struct stu s1 = { "hj1",20,"m",100 };
//	struct stu s4 = s1;
//	struct stu s2 = { "faf1",20,"f",90 };
//	struct stu s3 = { "fa1",30,"m",80 };
//	printf("%s %d %s %1.f\n", s1.name, s1.age, s1.sex, s1.score);
//	printf("%s %d %s %1.f\n", &s4.name, s4.age, &s4.sex, s4.score);
//	struct stu* ps = &s2;
//	printf("%s %d %s %1.f\n", (*ps).name,(*ps).age, (*ps).sex, (*ps).score);
//	struct stu* pss = &s3;
//	printf("%s %d %s %1.f\n", pss->name, pss->age, pss->sex, pss->score);
//}

//void main()
//{
//	int a, * p;
//	p = &a;
//	*p = 123;
//	printf("%d\n", a);
//}