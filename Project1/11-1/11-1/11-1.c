#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <stdio.h>
#include<time.h>
#include<string.h>
#include<errno.h>
#define  ADD(a,b) (a+b)			//더하기 매크로 함수 ()가 포인트~ 
#define GET_RANDOM(min,max) (rand()%(int)(((max)+1)-(min)))+(min)  // 랜덤함수 
#define PASTER(n) printf_s(#n ) // # 과 ## 
#define AAAAA(a,b) a##b
#define PASTER1(n) printf_s("token"#n"=%d", token##n)
#define XN(n) x ## n
#define MAX(a,b,c) if (( (a) > (b) ) && ( (a) > (c) )) printf("%d", a);\
				else if (( (b) > (a) ) && ( (b) > (c) )) printf("%d", b);\
				else printf("%d", c);
int token9 = 99;
							/*덧셈 함수 매크로*/
int add(int a, int b) {
	return a + b; 
}
void mul(void){
	printf("1. ADD(1,2) : %d\n", ADD(1, 2));
	printf("2. ADD(1,2) : %d\n", add(1, 2));

	printf("3. ADD(1,2)*2 : %d\n", ADD(1, 2) * 2);
	printf("4. ADD(1,2)*2 : %d\n", add(1,2) * 2);
}
					/*random 함수 rand()  time(NULL ) srand() */
//void main() {
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", rand()); //rand() 랜덤함수 -> 랜덤이 아님,,, 그래서 타임 사용 
//	}
//}
//void main() {
//	printf("%d\n", time(NULL));  //
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", rand()); 
//	}
//}
//void main() {
//	srand((unsigned int) time(NULL));  //시간이 바뀌면서 출력할때마다 다름 
//	for (int i = 0; i < 6; i++) {
//		/*printf("%d\n", rand());*/
//		printf("%d\n", GET_RANDOM(1, 45));
//	}
//}
								/*#n를 값에 치환  과 ## 붙여넣기*/
void shap() {
	//int value = 55;  //printf(n) value 만 출력됨 
	//PASTER(9);
	printf("%s", AAAAA("hell", "ow\n"));
	printf_s("token9=%d\n", token9);
	int XN(1) = 10;
	int XN(2) = 20;

	printf("x1에 저장된 값은 %d입니다.\n", x1);
	printf("x2에 저장된 값은 %d입니다.\n", x2);
}

							/*line 지시문 몇행인지 알 수 있음 */
void line() {
	printf("this code is on line %d, in file %s\n", __LINE__, __FILE__);
#line 10 //함수 내에서 선언하며 ; 사용 안함 
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
#line 20 "hello.c"
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
	printf("this code is on line %d, in file %s \n", __LINE__, __FILE__);
}

								//예제
void MAX_1() {
	int x = 0, y = 0, z = 0;
	scanf("%d %d %d", &x, &y, &z);
	MAX(x, y, z);
}
void print_() {
	printf("hi");
}
									/*문자열*/
void spell() {
	int a = 10;
	char b = 'a';
	char c[] = "Hello";        //#include <string.h>를 사용하지 않으면 출력 안됨 
	printf("%d\n", a);
	printf("%c\n", b);
	printf("%s\n", c);
	
	a = 20;
	b = 'b';
	strcpy(c, "hi");
	printf("%s\n", c);
	printf("%d\n", a); 
}
				//문자열을 매개변수로 받을 때 선언할 수 있는 3가지 방법 
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
//	printf("초기할당 : %s\n", a);
//
//	ShowString1(a);
//	ShowString2(a);
//	ShowString3(a);
//}
							/*strcpy, strncpy 복사*/
void str() {								//str : 통으로 복사하고 싶을 때 사용
	char a[32];					
	char b[32] = "Hello, World";
	strcpy(a, b);
	printf("%s\n", a);
}
void strn() {								//strn : 원하는 글자수가 있을때 사용
	char a[32] = "Hi";
	char b[32] = "Hello, World";				//종료문자를 안가지고 와서 깨질 수 있음 		
	strncpy(a, b, 3);						//뒤에 매개변수 필요 a를 b의 5글자수만큼 붙인다.
	printf("%s\n", a);
}
/*void main() {
	str();
	printf("---------------------------\n");
	strn();
}
	*/					/*strcat strnact 첫번째에다가 두번째 문자열 붙여줌*/
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
						/*strcmp, strncmp 첫번째 두번째 문자열 비교 */
void com() {
	char a[] = "Hello, World";				//맞으면 0, 아니면 1 반환 
	char b[] = "Hello, C";
	
	int result = strcmp(a, b);
	printf("%d\n", result);

}
void com2() {
	char a[] = "Hello, world!";
	char b[] = "Hello, C";
	
	int result = strncmp(a, b, 5);			//앞에 다섯자리가 일치하는지
	printf("%d\n", result);

}
//void main() {
//	com();
//	com2();
//}
						/*strchr strrchr 문자 검색*/
void rea() {
	char a[] = "Hello, World";
	char* result = NULL;
	result = strchr(a, 'o');			//문자열 a에서 o찾기
	printf("%s\n", result);			//찾아서 위치 반환해서 출력
	printf("%p\n", result -a + 1);		//인덱스 위치 
	printf("%p\n", a);				//p 주소 
	printf("%d\n", result - a);
	printf("%c\n", a[result - a]);   //char 형
}
void rear() {
	char a[] = "Hello, World";
	char* result = NULL;
	result = strrchr(a, 'o');				//끝에서부터 검색
	printf("%s\n", result);
	printf("%d\n", result - a + 1);		//인덱스 검색 
}
//void main() {
//	rea();
//	printf("----------------------------------\n");
//	rear();
//}
						/*strstr  문자여여여얼 검색 */
void rea1() {
	char str1[] = "Hello, World";
	char str2[] = "World";
	char* result = NULL;

	result = strstr(str1, str2);
	printf("%s\n", result);
}
						/*strtok 문자열 분할*/
void tok() {
	char str1[] = "Hello#World#Welcome#C#programming";
	char* result = NULL;

	result = strtok(str1, "#");				//str1을 #으로 쪼개주세요

	while (result != NULL) {
		printf("%s\n", result);
		result = strtok(NULL, "#");			//이전에 호출했던거 기억함 
		}
	printf("%s", str1);
	printf("%s", str1 + 1);
}
						/*문자열 패턴 검색 srtpn*/
void patt() {
	char str1[16] = "25years old", str2[16] = { '\0',};
	char pattern[] = "1234567890";
	size_t result = 0;
	result = strspn(str1, pattern);				//패턴을 찾을때까지 돔
	printf("%p\n", result);
	if (result > 0) {
		strncpy(str2, str1, result);
		printf("%s살입니다.", str2);
		}
	else {
		printf("찾는 문자 패턴이 없습니다.");
	}
}
							/*일치하지 않으면 반환*/
void pra() {
	char str1[16] = "25years old ", str2[2] = { '\0', };
	char pattern[] = "1234567890";
	printf("%d\n", strcspn(str, pattern));
	printf("%d\n", strcspn(str, pattern));
	size_t sIndex = 0, slength = 0;
	sIndex = strcspn(str1, pattern);
	if (slength > 0) {
		strncpy(str2, str1 + sIndex, slength);
		printf("나는 %s살입니다.\n", str2);
	}
	else {
		printf("찾는 문자 패턴이 없습니다.");
	}
}
							/*문자열 길이 검색 strlen*/
void leng() {
	char str1[16] = "25years old", str2[2] = { '\0', };
	char pattern[] = "1234567890";
	size_t sIndex = 0, slength = 0;
	printf("%d", strlen(str1));
}
						/*strerror 오류 문자열 반환*/
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
	printf("문자열을 숫자로 변환해서 곱한 값은 %d입니다.\n", atoi(str01) * atoi(str02));
	printf("str01 : %p\n str01[0]: %d\n str01[1]: %d\n atoi(str01) : %d\n",
		str01, str01[0], str01[1], atoi(str01));
}
void ABC() {
	char str01[] = "ABCd";
	char str02[] = "abcD";
	printf("%c", tolower(str01[3]));
}
								/*예제*/
void exe1() {
	char season[30];
	printf("계절을 입력하세요\n");
	scanf("%s", &season);
	switch (strcmp(season, "end") !=0) {
	case '봄':
		printf("대표적인 꽃은 개나리입니다.");
		break;
	case '여름':
		printf("대표적인 꽃은 장미입니다.");
		break;
	case '가을':
		printf("대표적인 꽃은 코스모스입니다.");
		break;
	case '겨울':
		printf("대표적인 꽃은 매화입니다.");
		break;
	case 'end':
		printf("프로그램을 종료합니다.");
		break;
	default:
		printf("계절을 잘못 입력 하셨습니다.");
	}
}
void exe1_1() {
	char season[30];
	do {
		printf("계절을 입력하세요\n");
		scanf("%s", &season);
		if (strcmp(season, "봄") == 0) {
			printf("봄의 대표적인 꽃은 개나리입니다.");
		}
		else if (strcmp(season, "여름") == 0) {
			printf("여름의 대표적인 꽃은 장미입니다.");
		}
		else if (strcmp(season, "가을") == 0) {
			printf("봄의 대표적인 꽃은 코스모스입니다.");
		}
		else if (strcmp(season, "겨울") == 0) {
			printf("봄의 대표적인 꽃은 매화입니다.");
		}
	} while (strcmp(season, "end") != 0);
}

void exe1_2() {
	char lName[30];
	char fName[30];
	printf("성을 입력하세요.\n->");
	scanf("%s", &lName);
	printf("이름을 입력하세요.\n->");
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
//	printf("누구세요?");
//	scanf("%s", &name);
//	printf("%s\n", strerror(errono));
//}
//void main() {
//	exe1_4()
//}