#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct school {
	char name[20];
	char school[20];
	int grade;
} SCHOOL;

//void main(void) {
//	SCHOOL myS = { "lee","����",90 };
//	printf("%s", myS.name);
//}




//typedef struct book {
//	char title[30];
//	char author[30];
//	int price;
//} test_book;
//typedef struct book {
//	char name[20];
//	char subject[20];
//	int score;
//} t_student;
//void main(void) {
	//test_book mybook = {
	//	.title = "Do it!",
	//	.author = "�輺��",
	//	.price = 25000
	////};
	//printf("�� å�� ���ڴ� %s, ������ %d  �Դϴ�.", mybook.author, mybook.price );
	//t_student myStudent[2] = {
	//	{"lee", "����", "90"}, {"kim","����","100"}
	//};
	//t_student* pStudent = &myStudent;
	//t_student myStudent = {
	//	.name = "lee",
	//	.subject = "����",
	//	.score = "90"
	//};
	//for (int i = 0; i < 2; i++) {

	//	printf("ù��° �л��� �̸���  %s �Դϴ�.\n", myStudent[i].name);
	//}
	//printf("�л��� �̸��� (*pStudnet).name : %s �Դϴ�.\n", (*pStudent).name);
	//printf("�л��� �̸��� pStudnet->name : %s �Դϴ�.\n", pStudent->name);
	//printf("�л��� �̸��� myStudnet.name : %s �Դϴ�.\n", myStudent.name);
	//printf("�л��� �̸��� �Է��ϼ���.");
	//scanf("%s", &myStudent.name);
	//printf("�л��� �̸��� : %s�Դϴ�.", myStudent.name);
//}
								/*���� 1-1*/

/*typedef struct {
	char name[20];
	char school[20];
	int grade;
} exe1;
int main() {
	exe1 School = {0,	};
	scanf("%s %s %d", &School.name, &School.school, &School.grade);
	printf("Name : %s:\n School: %s:\n Grade: %d:\n", School.name, School.school, School.grade);
}
								/*���� 1-2*/
//typedef struct {
//	char subject_name[20];
//	int mScore;
//	int fScore;
//} data1;
//void main() {
//	data1  data;
// for (int i =0; i< 3; i++){
//	scanf("%s" "%d" "%d", &data.subject[1]_name, &data[i].mScore, &data[i].Score);
// 	printf("������ �߰� ��� ������ �⸻��� ������ �Է��ϼ���\n->");
//	printf("%s�� ������ %d�Դϴ�.", data.subject_name, data.mScore+data.fScore);
//}
								/*���� 1-3*/
typedef struct {
	char name[30];
	char number[30];
} user;
//void main() {
//	user person[] = {
//		{"kim", "010-4151-2515"},
//		{"lee", "010-5123-5213"},
//		{"park", "010-9431-2127"},
//		{"choi", "010-4541-4102"},
//		{"gang", "010-5431-4123"}
//	};
//	char input[20];
//	printf("�˻��� �̸��� �Է��ϼ���\n �̸�:");
//	scanf("%s", &input);
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		if (strcmp((char*)&input, (char*)&person[i].name) == 0) {
//			printf("%s�� ��ȣ�� %s�Դϴ�.", input, person[i].number);
//				break;
//		}
//		if (i >= 5) {
//			printf("�Է��� �̸��� ������ �������� �ʽ��ϴ�.");
//		}
//	}
//}
//***********************************�޸�**************************************** 
//	char* p_name;
//	p_name = (char*)malloc(32);
//	if (p_name != NULL) {
//		printf("Your name : ");
//		scanf("%s", p_name);
//
//		printf("Hi~ %s\n", p_name);
//		free(p_name);
//
//		printf("Hi~ %s\n", p_name);
//		printf("Hi~ %p\n", p_name);
//	}
//	else {
//		printf("Memory allocations error!!");
//	}
//}
//void main(void) {
//	int* p_num_list, count = 0, sum = 0, limit = 0, i;
//	printf("����� �ִ� ������ �Է��ϼ���. :");
//	scanf("%d", &limit);
//	p_num_list = (int*)malloc(sizeof(int) * limit);
//	while (count < limit) {
//		printf("���ڸ� �Է��ϼ���(9999)�� ������ ����): ");
//		scanf("%d", p_num_list + count);
//		if (*(p_num_list + count) == 9999) break;
//		count++;
//	}
//	for (i = 0; i < count; i++) {
//		if (i > 0) printf(" + ");
//		printf("%d", *(p_num_list + i));
//		sum = sum + *(p_num_list + i);
//	}
//	printf(" = %d\n", sum);
//	free(p_num_list);
//}

//void main(void) {
//	int* pList, count = 0, avg = 0, score = 0, num = 0, sum = 0, i =0; 
//	printf("�������� ������ �Է��ϼ���\n->\n");
//	scanf("%d", &num);
//	pList = (int*)malloc(sizeof(int) * num);
//	while (count < num); {
//		printf("9999�� ������ ����˴ϴ�.");
//		scanf("%d", pList + count); 
//		if (*(pList + count) == 9999) break;
//		count++;
//		for (i < 0; i < count; i++) {
//			if (i > 0) num += i;
//			printf("%d", num);
//			printf("%d", num / count);
//		}
//			
//	}
//		
//}
//void main(void) {
//	int* score;
//	int candidate = 0, sum = 0;
//	printf("������ ���� �Է��ϼ���\n");
//	scanf("%d", &candidate);
//	score = (int*)malloc(sizeof(int) * candidate);
//	for (int i = 0; i < candidate; i++) {
//		printf("������ �Է��ϼ���\n");
//		scanf("%d", &score[i]);
//		sum += score[i];
//	}
//	printf(" �̹� ȸ�� �� ������ ���� %d�� ��� ������ %d�Դϴ�.", candidate, sum / candidate);
//	free(score);
//}
//void main(void) {
//	int data = 3, * p, ** q;
//	p = &data;
//	q = (int**)&p;
//	printf("data�� �ּ� : %p �� : %d\n", &data, data);
//	printf("p�� �ּ� : %p, �� : %p, p�� ����Ű�� �ּ��� �� : %d\n", &p, p, * p);
//	printf("q�� �ּ� : %p, �� : %p\n", &q, q);
//	printf("q�� ù��° ����� �� : %p\n", *q);
//	printf("q�� �ι�° ����� �� : %d\n", **q);
//}
//void main(void) {
//	int data = 3;
//	int* p = &data;
//	int** pp = &p;
//	printf("data : %d\n", 3);
//	printf("data �ּ�: %x\n\n", &data);
//	printf(" p  : %x\n", p);
//	printf(" p ��: %x\n\n", &p);
//	printf(" pp ��: %x\n", pp);
//	printf(" pp �ּ�: %x\n", &pp);
//}
//void main(void) {
//	short** pp;
//	printf("%d", sizeof(short*));
//	pp = (short**)malloc(sizeof(short*));
//	*pp = (short*)malloc(sizeof(short));
//	**pp = 10;
//	printf("%x\n", *pp);
//	printf("%x\n", &(**pp));
//	printf(" **pp : %d\n", **pp);
//	free(*pp);
//	free(pp);
//}
//void main(void) {
//	unsigned char limit_table[3] = { 4,2,3 };
//	unsigned char* p[3];
//	int age=0;
//	for (age = 0; age < 3; age++){
//		p[age] = (unsigned char*)malloc(limit_table[age]);
//	}
//	for (age = 0; age < 3; age++) free(p[age]);
//}
//void main(void) {
//	unsigned char limit_table[3];
//	unsigned char* p[3];
//	int age, temp, sum;
//	int member = 0;
//	for (age = 0; age < 3; age++) {
//		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
//		printf("�� ���ɴ�� �� ���Դϱ�?");
//		scanf("%d", &temp);
//		limit_table[age] = (unsigned char)temp;
//		p[age] = (unsigned char*)malloc(limit_table[age]);
//		for (member = 0; member < limit_table[age]; member++) {
//			printf("%dth : ", member + 1);
//			scanf("%d", &temp);
//			*(p[age] + member) = (unsigned char)temp;
//		}
//	}
//	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
//	for (age = 0; age < 3; age++) {
//		sum = 0;
//		printf("%d0�� :", age + 2);
//		for (member = 0; member < limit_table[age]; member++) {
//			sum = sum + *(p[age] + member);
//
//		}
//	}
//	printf("%5.3f\n", (double)sum / limit_table[age]);
//	free(p[age]);
//}
void main() {
	unsigned char* p_limit_table;
	unsigned char** p;
	int age, age_step, member, temp, sum;
	printf("20����� �����ؼ� �������� �� �� �ΰ��� :\n");
	scanf("%d", &age_step);

	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step);
	for (age = 0; age < age_step; age++) {
		printf("\n%d�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�?\n");
		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		*(p + age) = (unsigned char*) malloc(*(p_limit_table + age));
		for (member = 0; member < *(p_limit_table + age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}
	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
	for (age = 0; age < age_step; age++) {
		sum = 0;
		printf("%d�� :", age + 2);
		for (member = 0; member < *(p_limit_table + age); member) {
			sum = sum + *(*(p + age) + member);
		}
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		free(*(p + age));
	}
	free(p);
	free(p_limit_table);
}