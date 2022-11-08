#include <stdio.h>
#include <string.h>
#include <malloc.h>
/**********************************말록함수 사용******************************/
//void main(void) {
//	char* p_name; 
//	p_name = (char*)malloc(32);
//	if (p_name != NULL) {
//		printf("Your name: ");
//		scanf("%s", p_name);
//		printf("Hi~ %s\n", p_name);
//		free(p_name);
//	}
//	else("Memory alloctaions error!!");
//}
/******************************동적할당을 이용하여 점수의 합을 구하기**************************/
//void main(void) {
//	int* p_num_list, sum = 0, limit = 0;
//	printf("몇 개 입력할거니?\n");
//	scanf("%d", &limit);
//	p_num_list = (int*)malloc(sizeof(int) * limit); // -> 4byte int 4개 들어감
//	for (int i = 0; i < limit; i++) {
//		printf("숫자를 입력하세요\n");
//		scanf("%d", p_num_list+i);
//		sum += *(p_num_list + i);
//		}
//	printf("입력한 수의 합계는 %d 입니다.", sum);
//	free(p_num_list);
//}
/***********************************다차원 포인터*****************************/
//void main(void) {
//	int data = 3;
//	int* p;
//	int** pp;
//	p = &data;
//	printf("data의 주소          : %p\n", &data);
//	printf("1차원 포인터 p의 값   : %p\n", p);
//	printf("1차원 포인터의 주소   : %p\n", &p);
//	printf("2차원 포인터 p의 값   : %p\n", pp);
//	printf("2차원 포인터 >1차원 포인터의 값   : %p\n", *pp);
//	printf("------------------------------------------------\n");
//	printf("data의 값           : %d\n", data);
//	printf("1차원 포인터 p주소의 값: %d\n", *(p));
//	printf("2차원 포인터>2차원의값 : %d\n", *pp);
//	printf("------------------------------------------------\n");
//}
/***********************2차원 포인터 매개변수로 받으면 오류 해결***************************/
//void GetMyData(int**);
//void mian(void) {
//	int* p;
//	GetMyData(&p);
//	*p = 5;
//	free(p);
//}
//void GetMyData(int** q) {
//	*q = (int*)malloc(8);
//
//}
/*********************************다차원 포인터 예제 2-4*****************************/
//void exe2_4() {
//	int class = 0, sum = 0, student = 0;
//	int* class;
//	int** class;
//	printf(" 총 몇 학급인가요?\n");
//	scanf("%d", &class);
//	int** pclass = (int**)malloc(sizeof(int*)*class);
//	int* pStudent = (int*)malloc(sizeof(int) * class);
//	for (int i = 0; i < class; i++) {
//		printf("%d반은 총 몇 명인가요?\n", i + 1);
//		scanf("%d", &student);
//		*(pclass + i) = (int*)malloc(sizeof(int) * student);
//		*(pStudent + i) = student;
//		for (int j = 0; j < student; j++) {
//			scanf("%d", &(pclass[i][j]));
//		}
//	}
//	for (int i = 0; i < class; i++) {
//		printf("%d반 평균 : ", i + 1);
//		for (int j = 0; j < *(pStudent + i); j++) {
//			sum += pclass[i][j];
//		}
//		printf("%d\n", sum / *(pStudent + i));
//		free(pclass[i]);
//		sum = 0;
//	}
//	free(pclass);
//	free(pStudent);
//}
/********************************새로운 노드 추가하는 함수*****************************/
//typedef struct node {
//	int number;
//	struct node* p_next;
//}NODE;
//void AddNumber(NODE** pp_head, int data);
//void main(void) {
//	NODE* p_head = NULL;
//	int input = 0, sum = 0;
//	scanf("%d", &input);
//	AddNumber(&p_head, input);
//	printf("입력값 : %d", p_head->number);
//	free(p_head);
//}
//void AddNumber(NODE** pp_head, int data) {
//	NODE* p;
//	if (NULL != *pp_head) {
//		p = *pp_head;
//		while (NULL != p->p_next) p = p->p_next;
//		p->p_next = (NODE*)malloc(sizeof(NODE));
//		p = p->p_next;
//	}
//	else {
//		*pp_head = (NODE*)malloc(sizeof(NODE));
//		p = *pp_head;
//	}
//	p->number = data;
//	p->p_next = NULL;
//}
/*************************************테일 포인터***********************************/
//typedef struct node {
//	int number;
//	struct node* p_next;
//}NODE;
//void AddNumber(NODE**, NODE**, int);
//void main() {
//	NODE* p_head = NULL;
//	NODE* p_tail = NULL;
//	int input = 0, sum = 0;
//	scanf("%d", &input);
//	AddNumber(&p_head, &p_tail, input);
//	printf("입력 값 :%d", p_head->number);
//	free(p_head);
//	free(p_tail);
//}
//void AddNumber(NODE** pp_head, NODE** pp_tail, int data) {
//	if (NULL != **pp_head) {
//		(*pp_tail)->p_next = (NODE*)malloc(sizeof(NODE));
//		*pp_tail = (*pp_tail)->p_next;
//	}
//	else {
//		*pp_head = (NODE*)malloc(sizeof(NODE));
//		*pp_tail = *pp_head;
//	}
//	(*pp_tail)->number = data;
//	(*pp_tail)->p_next = NULL;
//}
/********************************appendFirst노드 추가******************************/
typedef struct node {
	int number;
	struct node* p_next;
}NODE;
//void appendFirst (NODE** ptr, int newData) {
//	NODE* newNode = (NODE*)malloc(sizeof(NODE));
//	newNode->number = newData;
//	if (*ptr == NULL) {
//		*ptr =newNode;
//		(*ptr)->p_next = NULL;
//		}
//	else {
//		newNode->p_next = *ptr;
//		*ptr = newNode;
//	}
//}

//void append(NODE** pHeader, NODE** pTail, int newData) {
//	NODE* newNode = (NODE*)malloc(sizeof(NODE));
//	newNode->number = newData;
//	newNode->p_next = NULL;
//	if (*pHeader == NULL) 
//		*pHeader = *newNode;
//	else (*pTail)->p_next = newNode;
//
//}
//void main(void) {
//	NODE* p_header = NULL;
//	NODE* p_tail = NULL;
//	append(&p_header, &p_tail, 10,1);
//}
//void showList(NODE** pHeader) {
//	if (*pHeader == NULL) {
//		printf("연결 리스트가 D없습니다.\n");
//	}
//	else {
//		NODE* cur = (*pHeader);
//		while (cur != NULL) {
//			printf("%d\n", cur->number);
//			cur = cur->p_next;
//		}
//	}
//}
//void deleteList(NODE** ptr) {
//	if (*ptr == NULL) {
//		printf("연결 리스트가 없습니다.");
//	}
//	else {
//		NODE* cur = (*ptr);
//		NODE* next = NULL;
//		while (cur != NULL) {
//			next = cur->p_next;
//			free(cur);
//			cur = next;
//		}
//	}
//}

