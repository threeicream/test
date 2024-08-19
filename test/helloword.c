//#include<stdio.h>
//
//struct student
//{
//	char num[11];
//	char name[21];
//	int age;
//	float score;
//};
//
//int main(void)
//{
//	struct student st1 = { "10006","张三丰",19,600 }, st2;
//	st2 = st1;
//	//printf("%s", &st2.name);
//	//char str[] = "hello";
//	//printf("%s", str);  // 输出结果为：hello
//	printf("学号\t姓名\t年龄\t成绩\n");
//	printf("%s\t%s\t%d\t%.2f\n",&st2.num,&st2.name,st2.age,st2.score);
//	return 0;
//}