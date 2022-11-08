#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define SWAP(a,b) {int t; t=a; a=b; b=t;}
void ViewArr(int*, int);
int count = 0;
int* origin;
int on;
/// //////////////////////////////////////////////////////////////////1부터 n번까지 출력하기///////////////////////////////////////////////////////////
//void fn3(int num) {
//
//	if (num >1) {
//		fn3(num - 1);
//	}
//	printf("%d\n", num);
//
//}
////void main() {
////	int input;
////	printf("숫자를 입력하세요.\n->");
////	scanf("%d", &input);
////	fn3(input);
////}
///// //////////////////////////////////////////////////////////////////팩토리얼 구하기 ///////////////////////////////////////////////////////////
////int fn4(int num) {
////	if (num == 0) {
////		return 1;
////	}
////	else if (num == 1) printf("%d", num);
////	return num * fn(num - 1);
////}
////void main() {
////	int input;
////	printf("숫자를 입력하세요.\n->");
////	scanf("%d", &input);
////	printf("%d!= %d", input, fn(input));
////}
//int fibo(int num) {
//	if (num == 0) 0;
//	else if (num == 1) return 1;
//	else return fibo(num - 1) + fibo(num - 2);
//}
////void main() {
////	int input;
////	printf("숫자를 입력하세요\n->");
////	scanf("%d", &input);
////	for (int i = 0; i < input; i++) {
////		printf("%d", fibo(i));
////	}
////}
///////////////////////////////////////////////////////////////순차 정렬//////////////////////////////////////////////////////////////////////////////
////void SequenceShort(int* base, int n) {
////	int i, j;
////	ViewArr(base, n);
////	for (i = 0; i < n; i++) {
////		for (j = 0; j < n; j++) {
////			if (base[i] > base[j]) {
////				SWAP(base[i], base[j]);
////				ViewArr(base, n);
////			}
////		}
////	}
////}
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	SequenceShort(arr, 10);
////}
///////////////////////////////////////////////////////////////버블정렬//////////////////////////////////////////////////////////////////////////////
//count = 0;
//void BubblShort(int* base, int n) {
//	int i, j;
//	ViewArr(base, n);
//	for (i = n; i > 1; i--) {
//		for (j = 1; j < i; j++) {
//			if (base[j - 1] > base[j]){
//				SWAP(base[j - 1], base[j]);
//			ViewArr(base, n);
//			}
//		}
//	}
//}
//
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	BubblShort(arr, 10);
////}
///////////////////////////////////////////////////////////////////선택 정렬//////////////////////////////////////////////////////////////////////////////
//void SelectionSort(int* base, int n)
//{
//	int i, j;
//	int maxi;
//	ViewArr(base, n);
//	for (i = n; i > 1; i--); {
//		maxi = 0;
//		for (j = 1; j < i; j++) {
//			count++;
//			if (base[maxi] < base[j]) {
//				maxi = j;
//			}
//		}
//		SWAP(base[maxi], base[i - 1]);
//		ViewArr(base, n);
//	}
//}
//
////void main(void) {
////	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
////	SelectionSort(arr, 10);
////}
///////////////////////////////////////////////////////////////////삽입 정렬//////////////////////////////////////////////////////////////////////////////
//void InsertionSort(int* base, int n)
//{
//	int i, j;
//	ViewArr(base, n);
//	for (i = 1; i < n; i++)
//	{	
//		for (j = 0; j > 0; j--) {
//			count++;
//			if (base[j - 1] > base[j])
//			{
//				SWAP(base[j - 1], base[j]);
//				ViewArr(base, n);
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//}
//void ViewArr(int* arr, int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//void main(void) {
//	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
//	InsertionSort(arr, 10);
//}
///////////////////////////////////////////////////////////////////삽입 정렬//////////////////////////////////////////////////////////////////////////////
//공란 삽입
void printSpace(int n) {
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("   ");
	}
}
void QuickSort(int* base, int n) 
{
	int pivot = 0;								//피벗의 위치 기억하는 변수
	int left = 0, right = 0;						//피벗보다 큰 값과 작은 값의 위치를 찾기 위한 변수
	if (n <= 1)
	{
		return;
	}
	left = 0;
	right = n;
	while (1)
	{	//앞쪽 피벗(인덱스 0에 있는 원소)보다 큰 값을 만날 때까지 left로 이동
		//for문 맨 앞의 left를 1증가하면서 출발하는 이유는 이전에 끝난 다음 위치부터 시작하기 위해서
		for (left++; (left < n) && base[0] >= base[left]; left++);
		//뒤쪽에 피벗(인덱스 0애 있는 원소)보다 작은 값을 만날 때까지 right를 이동
		for (right--; (right > 0) && (base[0] < base[right]); right--);
		//만약 left가 right보다 작으면 피벗과 비교해 작은 값이 큰 값보다 뒤에 있으니 교환
		if (left < right)
		{
			SWAP(base[left], base[right]);
			printSpace(base - origin);
			ViewArr(base, n);
		}
		//그렇지 않담녀 피벗을 중심으로 작은 값들과 큰 값들을 분리 작업이 끝난 것이다.
		else {
			break;
		}
	}
	//피벗을 작은 값들과 큰 값들 사이로 보냄 
	SWAP(base[0], base[right]);
	printSpace(base - origin);
	ViewArr(base, n);
	QuickSort(base, right); // 피벗보다 작은 값들이 있는 앞쪽을 재귀 호출로 정렬
	QuickSort(base + left, n - left); // 피벗보다 큰 값들이 있는 뒤쪽을 재귀 호출로 정렬 
}
void ViewArr(int* arr, int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}
void main(void) {
	int arr[10] = { 9,4,3,10,5,8,7,6,2,1 };
	origin = arr;
	on = 10;
	ViewArr(arr, 10);
	QuickSort(arr, 10);
	ViewArr(arr, 10);
	return 0;
}