//#include <stdio.h>
//
//struct stu //����һ��ѧ��
//{
//	char name[20]; //��Ա����
//	int age;
//	double score;
//};
//
//struct book //����һ����
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "����",20,85.5 }; //�ṹ�崴���ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score); //�ṹ�����.��Ա����
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score); //�ṹ��ָ��->��Ա������
//	return 0;
//}