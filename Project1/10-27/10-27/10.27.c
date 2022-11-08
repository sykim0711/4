#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct node {
	int number;
	struct node* p_next;
}NODE;
//void main() {
//	NODE* head = NULL;
//	NODE* node1 = NULL;
//	head = (NODE*)malloc(sizeof(NODE));
//	head->number = 3;
//	head->p_next = &node1;
//	node1 = (NODE*)malloc(sizeof(NODE));
//	node1->number = 5;
//	node1->p_next = NULL;
//	printf("%d, %d", head->number, node1->number);
//	free(node1);
//	free(head);
//}
//void main() {
//	NODE* head = NULL;
//	NODE* cur = NULL;
//	int count = 0, position = 0;
//	head = (NODE*)malloc(sizeof(NODE));
//	head->number = 1;
//	head->p_next = NULL;
//	head = cur; 
//	while (head->p_next != 0) {
//		cur = head->p_next;
//	}
//	cur->p_next = (NODE*)malloc(sizeof(NODE));
//	cur = cur->p_next;
//	cur->number = 3;
//	cur->p_next = NULL;
//	NODE* newNode = (NODE*)malloc(sizeof(NODE));
//	newNode->number = 5;
//	newNode->p_next = head->p_next;
//	cur->p_next = newNode;
//		newNode->number, newNode->p_next,
//		cur->number, cur->p_next);
//
//}
//void main() {
//	FILE* p_file = fopen("test.txt", "wt");
//	if (NULL != p_file) {
//		fprintf(p_file, "Hello\n");
//		if (0 != fclose(p_file)) {
//			printf("파일 저장 실패");
//		}
//		else {
//			printf("파일저장성공");
//		}
//	}
//	else {
//		printf("파일오픈실패");
//	}
//}
//void main() {
//	FILE* p_file = fopen("test.txt", "rt");
//	char readFile[50];
//	if (NULL != p_file) {
//		fscanf(p_file, "%s", &readFile);
//		printf("%s\n", readFile);
//		fclose(p_file);
//	}
//	else {
//		printf("파일오픈실패");
//	}
//}
//void main() {
//	FILE* p_file = fopen("test.txt", "rt");
//	char readFile[50];
//	if (NULL!=p_file)
//		while (EOF != fscanf(p_file, "%s", &readFile)) {
//		printf("%s\n", readFile);
//	}
//		fclose(p_file);
//	else {
//		printf("파일오픈실패");
//	}
//}
//void main() {
//	FILE* p_file = fopen("test.txt", "rt");
//	char readFile[50];
//	if (NULL != p_file) {
//		while (1) {
//			fgets(&readFile, sizeof(readFile), p_file);
//			printf("%s", readFile);
//			if (feof(p_file) != 0)break;
//		}
//		fclose(p_file);
//	}
//	else {
//		printf("파일 오픈 실패");
//	}
//}
//void main() {
//	FILE* p_file;
//	char readFile[50];
//	p_file = fopen("test.txt", "rt");
//	if (NULL != p_file) {
//		fseek(p_file, 5, SEEK_SET);
//		printf("%d\n", ftell(p_file));
//
//		fgets(readFile, sizeof(readFile), p_file);
//		printf("%s", readFile);
//
//		fseek(p_file, 3, (SEEK_CUR));
//		fgets(readFile, sizeof(readFile), p_file);
//		printf("%s", readFile);
//
//		fseek(p_file, -5, SEEK_END);
//		fgets(readFile, sizeof(readFile), p_file);
//		printf("%s", readFile);
//		fclose(p_file);
//	}
//	else {
//		printf("파일 오픈 실패");
//	}
//}
//int getLine(FILE*);
//void main() {
//	struct student {
//		char name[20];
//		int score1, score2, score3;
//	};
//	struct student st[3];
//	FILE* fp;
//	int line = 0;
//
//	fp = fopen("C:\\Users\\4\\source\\repos\\10-27\\10-27\\test.bi", "rt");
//	line = getLine(fp);
//	fseek(fp, 0, SEEK_SET);
//
//	int i = 0;
//	if (NULL != fp) {
//		while (1) {
//			fscanf(fp, "%s", &st[i].name);
//			fscanf(fp, "%d", &st[i].score1);
//			fscanf(fp, "%d", &st[i].score2);
//			fscanf(fp, "%d", &st[i].score3);
//			if (feof(fp) != 0) break;
//			printf("%s의 점수는 %d %d %d 입니다.\n",
//				st[i].name, st[i].score1, st[i].score2, st[i].score3);
//			i++;
//		}
//		fclose(fp);
//	}
//	else {
//		printf("파일 오픈 실패");
//	}
//}
//int getLIne(FILE* fp) {
//	char c;
//	int line = 0;
//	while (1) {
//		c = fgetc(fp);
//		if (c == EOF)break;
//		if (c == 'n')line++;
//	}
//	return line;
//}
//void main(void) {
//	int a[3] = { 1,2,3 };
//	FILE* fp = NULL;
//	fp = fopen("test.bi", "wb");
//	if (NULL != fp) {
//		fwrite(&a, sizeof(int), 3, fp);
//		fclose(fp);
//	}
//	else {
//		printf("파일오픈실패");
//	}
//}
//void main(void) {
//	int a[3];
//	FILE* fp = NULL;
//	fp = fopen("C:\\Users\\4\\source\\repos\\10-27\\10-27\\test.bi", "rb");
//	if (NULL != fp) {
//		fread(&a, sizeof(int), 5, fp);
//		for (int i = 0; i < 5; i++) {
//				printf("%d\n", a[i]);
//			}
//			fclose(fp);
//		}
//	else{
//		printf("파일오픈실패");
//	}
//}
void main(void) {
	struct test {
		int a;
		char b;
	};
	struct test s_test = { 1, 'a' };
	FILE* fp;
	fp = fopen("C:\\Users\\4\\source\\repos\\10-27\\10-27\\test.bi", "wb");
	if (NULL != fp) {
		fwrite(&s_test, sizeof(s_test), 1, fp);
		fclose(fp);
	}
	else {
		printf("파일오픈실패");
	}
}