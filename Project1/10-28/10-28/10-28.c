#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
char ERR_OPEN[] = "���Ͽ��½���";
//char FILE_PATH[] = "C:\\Users\\4\\source\\repos\\10-28\\1028\\1028_2.txt";
//void main(void) {
//	FILE* f= fopen("C:/Users/4/source/repos/10-28/10-28/1111.txt", "wt");
//	if (NULL != f) {
//		fputs("Hello\n", f);
//		fputs("HI", f);
//	}
//	else {
//		printf("���� ���� ����");
//	}
//}
//
//void main(void) {
//	struct test {
//		int a;
//		char b;
//	};
//	struct test s_test = { 1, 'a' };
//	FILE* fp;
//	fp = fopen("C:/Users/4/source/repos/10-28/10-28/IOtest.bi", "wb");
//	if (NULL != fp) {
//		fwrite(&s_test, sizeof(s_test), 2, fp);
//		fclose(fp);
//	}
//	else {
//		printf("���� ���� ����");
//	}
//}
//void main(void) {
//	struct test {
//		int a;
//		char b;
//	};
//	struct test s_test;
//	FILE* fp;
//	fp = fopen("C:/Users/4/source/repos/10-28/10-28/IOtest.bi", "rb");
//	if (NULL != fp) {
//		fread(&s_test, sizeof(s_test), 2, fp);
//		printf("a : %d\n", s_test.a);
//		printf("b : %c\n", s_test.b);
//		fclose(fp);
//	}
//	else {
//		printf("���� ���� ����");
//	}
//}
void exe1_1(void) {
	FILE* fp;
	fp = fopen("C:/Users/4/source/repos/10-28/10-28/exe1.txt", "wt");
	if (NULL != fp) {
		fputs("�̸� : �̼���\n", fp);
		fputs("�ֹι�ȣ : 810800-2000000\n", fp);
		fputs("��ȭ��ȣ : 010-9000-8000\n", fp);
		fclose(fp);
	
	}
	else {
		printf("���� ���� ����");
		exit(1);
	}
}
void exe1_2(void) {
	FILE* fp;
	fp = fopen("C:/Users/4/source/repos/10-28/10-28/exe1.txt", "at+");
	if (NULL != fp) {
		fprintf(fp,"��ܸԴ� ����: ������, ���\n");
		fprintf(fp,"��� : ����");
		if (0 != fclose(fp)) {
			printf("���� ���� ����");
		}
		else {
			printf("���� ���� ����");
		}
	}
	else {
		printf("���� ���� ����");
		exit(1);
	}
}
void exe1_3(void) {
	FILE* fp;
	char readFile[50];
	fp = fopen("C:/Users/4/source/repos/10-28/10-28/exe1.txt", "rt");
	if (NULL != fp){
		while (1) {
			fgets(&readFile, sizeof(readFile), fp);
			if (feof(fp) != 0) break;
			printf("%s\n", readFile);
		}
		fclose(fp);
	}
	
	else {
		printf("���� ���� ����");
		exit(1);
	} 
}
void exe1_4(void) {
	FILE* fp;
	char pbook[50];
	struct info {
		char name[20];
		char tel[20];
	};
	struct info exe4[10];
	fp = fopen("C:/Users/4/source/repos/10-28/10-28/exe1_4.txt", "wt+");
	if (NULL != fp) {
		for (int i = 0; i < 10; i++) {
			scanf("%s, %s", &exe4[i].name, &exe4[i].tel);
			fprintf(fp, strcat(exe4[i].name, " "));
			fprintf(fp, strcat(exe4[i].tel, "\n"));
		}
		fseek(fp, 0, SEEK_SET);
		while (1) {
			fgets(pbook, sizeof(pbook), fp);
			if (feof(fp) != 0) break;
			printf("%s", pbook);
		}
		if (0 != fclose(fp)) {
			printf("���� ���� ����");
		}
		else {
			printf("���� ���� ����");
			}
		}
	else {
	printf("���� ���� ����");
		}
}
								/*����ü union*/
typedef union {
	char a; 
	short b;
	int c;
}myInfo;
;
typedef struct {
	char a;
	short b;
	int c;
}ST;
//void main(void) {
//	myInfo IN;
//	ST st;
//	IN.c = 0x12345678;
//	printf("%x %p\n", IN.a, &IN.a);
//	printf("%x %p\n", IN.b, &IN.b);
//	printf("%x %p\n", IN.c, &IN.c);
//}
							/*����ü enum*/
enum Days {MON, TUE, WEN, THU, FRI, SAT, SUN};
//void main(void) {
//	enum Days today;
//	today = FRI;
//	int iToday;
//	iToday = FRI;
//	if (today >= SAT && today <= SUN) puts("������ �ָ�");
//	else printf("�ָ����� %d�� ���Ҿƿ�! �׵��� ����߾��~", 5 - today);
//	puts("������ ����ü�� �ش��ϴ� �������� ������ �����ϴ�.");
//	printf("%d %d %d %d %d %d %d\n", MON, TUE, WEN, THU, FRI, SAT, SUN);
//}

								/*������ �Լ�*/
void print_hello() {
	printf("Hello, World\n");

}
//void main() {
//	int a;
//	void (*fp)();
//	printf("�Լ��� �ּ� %p\n", print_hello);
//	printf("������ �ּ� %p\n", &a);
//	printf("------------------------------\n");
//	fp = print_hello;
//	fp();
//
//}
int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a / b;
}
//void main() {
//	int(*fp[4])(int, int);
//	fp[0] = add;
//	fp[1] = sub;
//	fp[2] = mul;
//	fp[3] = div;
//	for (int i = 0; i < 4; i++) {
//		printf("�迭 [%d] �Լ��� ���� ��:%d\n", i,fp[i](20, 10));
//	}
//}
							/*��Ʈ����*/
unsigned char ResultBit(unsigned char dest_data, unsigned char bit_num) {
	if (bit_num < 8) {
		dest_data = dest_data & ~(0x01 << bit_num);
	}
	return dest_data;
}
void main(void) {
	unsigned char lamp_state = 0x7f;
	printf("%x->", lamp_state);
	lamp_state = ResultBit(lamp_state, 3);
	printf("%x\n", lamp_state);
}
