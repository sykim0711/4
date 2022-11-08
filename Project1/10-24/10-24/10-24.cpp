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
//	SCHOOL myS = { "lee","국어",90 };
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
	//	.author = "김성엽",
	//	.price = 25000
	////};
	//printf("이 책의 저자는 %s, 가격은 %d  입니다.", mybook.author, mybook.price );
	//t_student myStudent[2] = {
	//	{"lee", "수학", "90"}, {"kim","수학","100"}
	//};
	//t_student* pStudent = &myStudent;
	//t_student myStudent = {
	//	.name = "lee",
	//	.subject = "수학",
	//	.score = "90"
	//};
	//for (int i = 0; i < 2; i++) {

	//	printf("첫번째 학생의 이름은  %s 입니다.\n", myStudent[i].name);
	//}
	//printf("학생의 이름은 (*pStudnet).name : %s 입니다.\n", (*pStudent).name);
	//printf("학생의 이름은 pStudnet->name : %s 입니다.\n", pStudent->name);
	//printf("학생의 이름은 myStudnet.name : %s 입니다.\n", myStudent.name);
	//printf("학생의 이름을 입력하세요.");
	//scanf("%s", &myStudent.name);
	//printf("학생의 이름은 : %s입니다.", myStudent.name);
//}
								/*예제 1-1*/

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
								/*예제 1-2*/
//typedef struct {
//	char subject_name[20];
//	int mScore;
//	int fScore;
//} data1;
//void main() {
//	data1  data;
// for (int i =0; i< 3; i++){
//	scanf("%s" "%d" "%d", &data.subject[1]_name, &data[i].mScore, &data[i].Score);
// 	printf("과목명과 중간 고사 점수와 기말고사 점수를 입력하세요\n->");
//	printf("%s의 총점은 %d입니다.", data.subject_name, data.mScore+data.fScore);
//}
								/*예제 1-3*/
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
//	printf("검색할 이름을 입력하세요\n 이름:");
//	scanf("%s", &input);
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		if (strcmp((char*)&input, (char*)&person[i].name) == 0) {
//			printf("%s의 번호는 %s입니다.", input, person[i].number);
//				break;
//		}
//		if (i >= 5) {
//			printf("입력한 이름의 정보가 존재하지 않습니다.");
//		}
//	}
//}
//***********************************메모리**************************************** 
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
//	printf("사용할 최대 개수를 입력하세요. :");
//	scanf("%d", &limit);
//	p_num_list = (int*)malloc(sizeof(int) * limit);
//	while (count < limit) {
//		printf("숫자를 입력하세요(9999)를 누르면 종료): ");
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
//	printf("응시자의 접수를 입력하세요\n->\n");
//	scanf("%d", &num);
//	pList = (int*)malloc(sizeof(int) * num);
//	while (count < num); {
//		printf("9999을 누르면 종료됩니다.");
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
//	printf("응시자 수를 입력하세요\n");
//	scanf("%d", &candidate);
//	score = (int*)malloc(sizeof(int) * candidate);
//	for (int i = 0; i < candidate; i++) {
//		printf("점수를 입력하세요\n");
//		scanf("%d", &score[i]);
//		sum += score[i];
//	}
//	printf(" 이번 회차 총 응시자 수는 %d명 평균 점수는 %d입니다.", candidate, sum / candidate);
//	free(score);
//}
//void main(void) {
//	int data = 3, * p, ** q;
//	p = &data;
//	q = (int**)&p;
//	printf("data의 주소 : %p 값 : %d\n", &data, data);
//	printf("p의 주소 : %p, 값 : %p, p가 가르키는 주소의 값 : %d\n", &p, p, * p);
//	printf("q의 주소 : %p, 값 : %p\n", &q, q);
//	printf("q의 첫번째 대상의 값 : %p\n", *q);
//	printf("q의 두번째 대상의 값 : %d\n", **q);
//}
//void main(void) {
//	int data = 3;
//	int* p = &data;
//	int** pp = &p;
//	printf("data : %d\n", 3);
//	printf("data 주소: %x\n\n", &data);
//	printf(" p  : %x\n", p);
//	printf(" p 값: %x\n\n", &p);
//	printf(" pp 값: %x\n", pp);
//	printf(" pp 주소: %x\n", &pp);
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
//		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
//		printf("이 연령대는 몇 명입니까?");
//		scanf("%d", &temp);
//		limit_table[age] = (unsigned char)temp;
//		p[age] = (unsigned char*)malloc(limit_table[age]);
//		for (member = 0; member < limit_table[age]; member++) {
//			printf("%dth : ", member + 1);
//			scanf("%d", &temp);
//			*(p[age] + member) = (unsigned char)temp;
//		}
//	}
//	printf("\n\n연령별 평균 윗몸 일이키기 횟수\n");
//	for (age = 0; age < 3; age++) {
//		sum = 0;
//		printf("%d0대 :", age + 2);
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
	printf("20대부터 시작해서 연령층이 몇 개 인가요 :\n");
	scanf("%d", &age_step);

	p_limit_table = (unsigned char*)malloc(age_step);
	p = (unsigned char**)malloc(sizeof(unsigned char*) * age_step);
	for (age = 0; age < age_step; age++) {
		printf("\n%d대 연령의 윗몸 일이키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까?\n");
		scanf("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;
		*(p + age) = (unsigned char*) malloc(*(p_limit_table + age));
		for (member = 0; member < *(p_limit_table + age); member++) {
			printf("%dth : ", member + 1);
			scanf("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}
	printf("\n\n연령별 평균 윗몸 일이키기 횟수\n");
	for (age = 0; age < age_step; age++) {
		sum = 0;
		printf("%d대 :", age + 2);
		for (member = 0; member < *(p_limit_table + age); member) {
			sum = sum + *(*(p + age) + member);
		}
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		free(*(p + age));
	}
	free(p);
	free(p_limit_table);
}