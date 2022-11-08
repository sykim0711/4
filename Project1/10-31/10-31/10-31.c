#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>

								/*AND 연산자*/
//unsigned char ResultBit(unsigned char dest_data, unsigned char bit_num) {
//	if (bit_num < 8) {
//		dest_data = dest_data & ~ (0x01 << bit_num);
//	}
//	return dest_data;
//}
//void main() {
//	unsigned char lamp_state = 0x7F;
//	printf("%x->", lamp_state);
//	lamp_state = ResultBit(lamp_state, 3);
//	printf("%x\n", lamp_state);
//}
								/*OR 연산자*/
//unsigned char ResultBit(unsigned char dest_data, unsigned char bit_num) {
//	if (bit_num < 8) {									//3. < 8
//		dest_data = dest_data | (0x01 << bit_num);		//4. 00000001 << 3 = 00001000  
//	}												//	01110111 | 00001000
//	return dest_data;									//	01111111
//}
//void main() {
//	unsigned char lamp_state = 0x77;			//1. 01110111
//	printf("%x->", lamp_state);					//2. 0111011116 진수로 출력 (%x = 16진수)
//	lamp_state = ResultBit(lamp_state, 3);			//5. 01111111
//	printf("%x\n", lamp_state);					//6. 011111110 16진수로 출력
//}
							 /*XOR 원본과 보안키*/
//void main() {
//	unsigned char c1 = 50;
//	unsigned char key = 77;
//	unsigned char c2 = 0;
//	c2 = c1;
//	printf("암호화전 :%d\n", c2);
//	c2 = c1 ^ key;
//	printf("암호화 : %d\n", c2);
//	c2 = c2 ^ key;
//	printf("복호화 : % d\n", c2);
//}
								/*예제2*/
//void exe2_1() {
//	int num = 0, result = 0;
//	scanf("%d", &num);
//	result = ~num;
//	result += 1;
//	printf("%d", result);
//}
//
//void exe2_2() {
//	int mulA = 3,  result = 0;
//	result = mulA << 3;
//	result = result >> 1;
//	printf("%d", result );
//
//}
//
//unsigned exe2_3(unsigned int target, int index, int size) {
//	unsigned int bit, point = 1;
//	int bit_index = size - 1 - index;
//	bit = (target & (point << bit_index)) >> (bit_index);
//	return bit;
//	
//}
//void main() {
//	unsigned	int input = 0, n = 0;
//	scanf("%d", &input);
//	int size = sizeof(input) * 8;
//	for (int i = 1; i < 32; i++) {
//		printf("%x", exe2_3(input, i, size));
//	}
//}


void eeeexe() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ((a > b) && (a > c)) printf("a");
	else if ((b > a) && (b > c)) printf("b");
	else printf("c");
}
