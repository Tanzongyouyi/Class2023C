//#include <stdio.h>
//
//struct stu //创建一个学生
//{
//	char name[20]; //成员变量
//	int age;
//	double score;
//};
//
//struct book //创建一本书
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "张三",20,85.5 }; //结构体创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score); //结构体变量.成员变量
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score); //结构体指针->成员变量名
//	return 0;
//}