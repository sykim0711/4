#include <stdio.h>
#include <string.h>
#include <malloc.h>
/**********************************�����Լ� ���******************************/
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
/******************************�����Ҵ��� �̿��Ͽ� ������ ���� ���ϱ�**************************/
//void main(void) {
//	int* p_num_list, sum = 0, limit = 0;
//	printf("�� �� �Է��ҰŴ�?\n");
//	scanf("%d", &limit);
//	p_num_list = (int*)malloc(sizeof(int) * limit); // -> 4byte int 4�� ��
//	for (int i = 0; i < limit; i++) {
//		printf("���ڸ� �Է��ϼ���\n");
//		scanf("%d", p_num_list+i);
//		sum += *(p_num_list + i);
//		}
//	printf("�Է��� ���� �հ�� %d �Դϴ�.", sum);
//	free(p_num_list);
//}
/***********************************������ ������*****************************/
//void main(void) {
//	int data = 3;
//	int* p;
//	int** pp;
//	p = &data;
//	printf("data�� �ּ�          : %p\n", &data);
//	printf("1���� ������ p�� ��   : %p\n", p);
//	printf("1���� �������� �ּ�   : %p\n", &p);
//	printf("2���� ������ p�� ��   : %p\n", pp);
//	printf("2���� ������ >1���� �������� ��   : %p\n", *pp);
//	printf("------------------------------------------------\n");
//	printf("data�� ��           : %d\n", data);
//	printf("1���� ������ p�ּ��� ��: %d\n", *(p));
//	printf("2���� ������>2�����ǰ� : %d\n", *pp);
//	printf("------------------------------------------------\n");
//}
/***********************2���� ������ �Ű������� ������ ���� �ذ�***************************/
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
/*********************************������ ������ ���� 2-4*****************************/
//void exe2_4() {
//	int class = 0, sum = 0, student = 0;
//	int* class;
//	int** class;
//	printf(" �� �� �б��ΰ���?\n");
//	scanf("%d", &class);
//	int** pclass = (int**)malloc(sizeof(int*)*class);
//	int* pStudent = (int*)malloc(sizeof(int) * class);
//	for (int i = 0; i < class; i++) {
//		printf("%d���� �� �� ���ΰ���?\n", i + 1);
//		scanf("%d", &student);
//		*(pclass + i) = (int*)malloc(sizeof(int) * student);
//		*(pStudent + i) = student;
//		for (int j = 0; j < student; j++) {
//			scanf("%d", &(pclass[i][j]));
//		}
//	}
//	for (int i = 0; i < class; i++) {
//		printf("%d�� ��� : ", i + 1);
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
/********************************���ο� ��� �߰��ϴ� �Լ�*****************************/
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
//	printf("�Է°� : %d", p_head->number);
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
/*************************************���� ������***********************************/
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
//	printf("�Է� �� :%d", p_head->number);
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
/********************************appendFirst��� �߰�******************************/
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
//		printf("���� ����Ʈ�� D�����ϴ�.\n");
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
//		printf("���� ����Ʈ�� �����ϴ�.");
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

