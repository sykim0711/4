#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#include<time.h>
#include<string.h>
#include<errno.h>
#define  ADD(a,b) (a+b)			//���ϱ� ��ũ�� �Լ� ()�� ����Ʈ~ 
#define GET_RANDOM(min,max) (rand()%(int)(((max)+1)-(min)))+(min)  // �����Լ� 
#define PASTER(n) printf_s(#n ) // # �� ## 
#define AAAAA(a,b) a##b
#define PASTER1(n) printf_s("token"#n"=%d", token##n)
#define XN(n) x ## n
#define MAX(a,b,c) if (( (a) > (b) ) && ( (a) > (c) )) printf("%d", a);\
				else if (( (b) > (a) ) && ( (b) > (c) )) printf("%d", b);\
				else printf("%d", c);
int token9 = 99;
							/*���� �Լ� ��ũ��*/
int add(int a, int b) {
	return a + b; 
}
void mul(void){
	printf("1. ADD(1,2) : %d\n", ADD(1, 2));
	printf("2. ADD(1,2) : %d\n", add(1, 2));

	printf("3. ADD(1,2)*2 : %d\n", ADD(1, 2) * 2);
	printf("4. ADD(1,2)*2 : %d\n", add(1,2) * 2);
}
					/*random �Լ� rand()  time(NULL ) srand() */
//void main() {
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", rand()); //rand() �����Լ� -> ������ �ƴ�,,, �׷��� Ÿ�� ��� 
//	}
//}
//void main() {
//	printf("%d\n", time(NULL));  //
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", rand()); 
//	}
//}
//void main() {
//	srand((unsigned int) time(NULL));  //�ð��� �ٲ�鼭 ����Ҷ����� �ٸ� 
//	for (int i = 0; i < 6; i++) {
//		/*printf("%d\n", rand());*/
//		printf("%d\n", GET_RANDOM(1, 45));
//	}
//}
								/*#n�� ���� ġȯ  �� ## �ٿ��ֱ�*/
void shap() {
	//int value = 55;  //printf(n) value �� ��µ� 
	//PASTER(9);
	printf("%s", AAAAA("hell", "ow\n"));
	printf_s("token9=%d\n", token9);
	int XN(1) = 10;
	int XN(2) = 20;

	printf("x1�� ����� ���� %d�Դϴ�.\n", x1);
	printf("x2�� ����� ���� %d�Դϴ�.\n", x2);
}

							/*line ���ù� �������� �� �� ���� */
void line() {
	printf("this code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 10 //�Լ� ������ �����ϸ� ; ��� ���� 
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
#line 20 "hello.c"
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
}

								//����
void MAX_1() {
	int x = 0, y = 0, z = 0;
	scanf("%d %d %d", &x, &y, &z);
	MAX(x, y, z);
}
void print_() {
	printf("hi");
}
									/*���ڿ�*/
void spell() {
	int a = 10;
	char b = 'a';
	char c[] = "Hello";        //#include <string.h>�� ������� ������ ��� �ȵ� 
	printf("%d\n", a);
	printf("%c\n", b);
	printf("%s\n", c);
	
	a = 20;
	b = 'b';
	strcpy(c, "hi");
	printf("%s\n", c);
	printf("%d\n", a); 
}
				//���ڿ��� �Ű������� ���� �� ������ �� �ִ� 3���� ��� 
void ShowString1(char* p) {
	printf("showString1 : %p, %s\n", p, p);
}
void ShowString2(char p[]) {
	strcpy(p, "Hello!");
	printf("showString2 : %p, %s\n", p, p);
}
void ShowString3(char p[20]) {
	strcpy(p, "Hello!");
	printf("showString3 : %p, %s\n", p, p);
}
//void main() {
//	char a[7] = "Hello";
//	printf("�ʱ��Ҵ� : %s\n", a);
//
//	ShowString1(a);
//	ShowString2(a);
//	ShowString3(a);
//}
							/*strcpy, strncpy ����*/
void str() {								//str : ������ �����ϰ� ���� �� ���
	char a[32];					
	char b[32] = "Hello, World";
	strcpy(a, b);
	printf("%s\n", a);
}
void strn() {								//strn : ���ϴ� ���ڼ��� ������ ���
	char a[32] = "Hi";
	char b[32] = "Hello, World";				//���Ṯ�ڸ� �Ȱ����� �ͼ� ���� �� ���� 		
	strncpy(a, b, 3);						//�ڿ� �Ű����� �ʿ� a�� b�� 5���ڼ���ŭ ���δ�.
	printf("%s\n", a);
}
/*void main() {
	str();
	printf("---------------------------\n");
	strn();
}
	*/					/*strcat strnact ù��°���ٰ� �ι�° ���ڿ� �ٿ���*/
void Add() {
	char a[32] = "Hello, ";
	char b[32] = "World!";

	strcat(a, b);
	printf("%s\n", a);

}
void Add2() {
	char a[32] = "Hello, ";
	char b[32] = "World!";

	strncat(a, b, 2);
	printf("%s\n", a);

}
//void main() {
//	Add();
//	printf("---------------------------\n");
//	Add2();
//}
						/*strcmp, strncmp ù��° �ι�° ���ڿ� �� */
void com() {
	char a[] = "Hello, World";				//������ 0, �ƴϸ� 1 ��ȯ 
	char b[] = "Hello, C";
	
	int result = strcmp(a, b);
	printf("%d\n", result);

}
void com2() {
	char a[] = "Hello, world!";
	char b[] = "Hello, C";
	
	int result = strncmp(a, b, 5);			//�տ� �ټ��ڸ��� ��ġ�ϴ���
	printf("%d\n", result);

}
//void main() {
//	com();
//	com2();
//}
						/*strchr strrchr ���� �˻�*/
void rea() {
	char a[] = "Hello, World";
	char* result = NULL;
	result = strchr(a, 'o');			//���ڿ� a���� oã��
	printf("%s\n", result);			//ã�Ƽ� ��ġ ��ȯ�ؼ� ���
	printf("%p\n", result -a + 1);		//�ε��� ��ġ 
	printf("%p\n", a);				//p �ּ� 
	printf("%d\n", result - a);
	printf("%c\n", a[result - a]);   //char ��
}
void rear() {
	char a[] = "Hello, World";
	char* result = NULL;
	result = strrchr(a, 'o');				//���������� �˻�
	printf("%s\n", result);
	printf("%d\n", result - a + 1);		//�ε��� �˻� 
}
//void main() {
//	rea();
//	printf("----------------------------------\n");
//	rear();
//}
						/*strstr  ���ڿ������� �˻� */
void rea1() {
	char str1[] = "Hello, World";
	char str2[] = "World";
	char* result = NULL;

	result = strstr(str1, str2);
	printf("%s\n", result);
}
						/*strtok ���ڿ� ����*/
void tok() {
	char str1[] = "Hello#World#Welcome#C#programming";
	char* result = NULL;

	result = strtok(str1, "#");				//str1�� #���� �ɰ��ּ���

	while (result != NULL) {
		printf("%s\n", result);
		result = strtok(NULL, "#");			//������ ȣ���ߴ��� ����� 
		}
	printf("%s", str1);
	printf("%s", str1 + 1);
}
						/*���ڿ� ���� �˻� srtpn*/
void patt() {
	char str1[16] = "25years old", str2[16] = { '\0',};
	char pattern[] = "1234567890";
	size_t result = 0;
	result = strspn(str1, pattern);				//������ ã�������� ��
	printf("%p\n", result);
	if (result > 0) {
		strncpy(str2, str1, result);
		printf("%s���Դϴ�.", str2);
		}
	else {
		printf("ã�� ���� ������ �����ϴ�.");
	}
}
							/*��ġ���� ������ ��ȯ*/
void pra() {
	char str1[16] = "25years old ", str2[2] = { '\0', };
	char pattern[] = "1234567890";
	printf("%d\n", strcspn(str, pattern));
	printf("%d\n", strcspn(str, pattern));
	size_t sIndex = 0, slength = 0;
	sIndex = strcspn(str1, pattern);
	if (slength > 0) {
		strncpy(str2, str1 + sIndex, slength);
		printf("���� %s���Դϴ�.\n", str2);
	}
	else {
		printf("ã�� ���� ������ �����ϴ�.");
	}
}
							/*���ڿ� ���� �˻� strlen*/
void leng() {
	char str1[16] = "25years old", str2[2] = { '\0', };
	char pattern[] = "1234567890";
	size_t sIndex = 0, slength = 0;
	printf("%d", strlen(str1));
}
						/*strerror ���� ���ڿ� ��ȯ*/
void erro() {

	FILE* fp = NULL;
	if (NULL != (fp = fopen("NotExists", "r"))) {
		printf("File Exists.\n");
		fclose(fp);
	}
	else {
		printf("File NOT Exists.\n");
		printf("ERR(%d) : %s\n", errno, strerror(errno));
	}
}
void num() {
	char str01[] = "10";
	char str02[] = "20";
	printf("%f\n", atof(str01));
	printf("���ڿ��� ���ڷ� ��ȯ�ؼ� ���� ���� %d�Դϴ�.\n", atoi(str01) * atoi(str02));
	printf("str01 : %p\n str01[0]: %d\n str01[1]: %d\n atoi(str01) : %d\n",
		str01, str01[0], str01[1], atoi(str01));
}
void ABC() {
	char str01[] = "ABCd";
	char str02[] = "abcD";
	printf("%c", tolower(str01[3]));
}
								/*����*/
void exe1() {
	char season[30];
	printf("������ �Է��ϼ���\n");
	scanf("%s", &season);
	switch (strcmp(season, "end") !=0) {
	case '��':
		printf("��ǥ���� ���� �������Դϴ�.");
		break;
	case '����':
		printf("��ǥ���� ���� ����Դϴ�.");
		break;
	case '����':
		printf("��ǥ���� ���� �ڽ����Դϴ�.");
		break;
	case '�ܿ�':
		printf("��ǥ���� ���� ��ȭ�Դϴ�.");
		break;
	case 'end':
		printf("���α׷��� �����մϴ�.");
		break;
	default:
		printf("������ �߸� �Է� �ϼ̽��ϴ�.");
	}
}
void exe1_1() {
	char season[30];
	do {
		printf("������ �Է��ϼ���\n");
		scanf("%s", &season);
		if (strcmp(season, "��") == 0) {
			printf("���� ��ǥ���� ���� �������Դϴ�.");
		}
		else if (strcmp(season, "����") == 0) {
			printf("������ ��ǥ���� ���� ����Դϴ�.");
		}
		else if (strcmp(season, "����") == 0) {
			printf("���� ��ǥ���� ���� �ڽ����Դϴ�.");
		}
		else if (strcmp(season, "�ܿ�") == 0) {
			printf("���� ��ǥ���� ���� ��ȭ�Դϴ�.");
		}
	} while (strcmp(season, "end") != 0);
}

void exe1_2() {
	char lName[30];
	char fName[30];
	printf("���� �Է��ϼ���.\n->");
	scanf("%s", &lName);
	printf("�̸��� �Է��ϼ���.\n->");
	scanf("%s", & fName);
	strcat(lName, fName);
	printf("%s\n", lName);
}
void exe1_3(char a, char b) {
	char temp[30];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}
void main() {
	char value1[30] = "Hello";
	char value2[30] = "world";
	exe1_3(value1, value2);
}
//void exe1_4() {
//	printf("��������?");
//	scanf("%s", &name);
//	printf("%s\n", strerror(errono));
//}
//void main() {
//	exe1_4()
//}