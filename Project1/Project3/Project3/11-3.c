////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define MAX_QUEUE_SIZE 5
////////////////////////////////////////////////////////////////////////////////////

							/*선형큐 배열*/
typedef struct {                        // 선형 큐타입 
    int front, rear, data[MAX_QUEUE_SIZE];
}QueueType;

void error(char* message)                      //오류함수
{
    printf("%s\n", message);
    exit(1);
}

void init_queue(QueueType* q)            //선형 큐 초기화 -1 원형은 0 
{
    q->rear = -1;
    q->front = -1;
}

void  (QueueType* q)                  //선형 큐 상태 출력
{
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q->front || i > q->rear)       //데이터 없는 배열 
            printf("   |");
        else
            printf("%d |", q->data[i]);
    }
    printf("\n");
}

int is_full(QueueType* q)                   //선형큐 포화상태인가
{                                       //데이터 들어갈 때 확인
    if (q->rear == MAX_QUEUE_SIZE - 1)      //rear(끝)의 인덱스 확인 
        return 1;
    else
        return 0;
}

int is_empty(QueueType* q)                //선형큐 공백상태인가
{                                      //데이터 삭제할 때 확인 
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}

void enqueue(QueueType* q, int item)         //데이터 삽입
{
    if (is_full(q)) {
        error("큐가 포화상태입니다.");
        return;
    }
    q->data[++(q->rear)] = item;
}

int dequeue(QueueType* q)               //데이터 제거
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.");
        return -1;
    }
    int item = q->data[++(q->front)];       //front 자리 바꿔줌 (데이터 삭제 x)
    return item;
}

int main(void)
{
    int item = 0;
    QueueType q;

    init_queue(&q);

    enqueue(&q, 10); queue_print(&q);           //데이터 10 삽입
    enqueue(&q, 20); queue_print(&q);           //데이터 20 삽입
    enqueue(&q, 30); queue_print(&q);           //데이터 30 삽입

    item = dequeue(&q); queue_print(&q);
    //item = dequeue(&q); queue_print(&q);
    //item = dequeue(&q); queue_print(&q);
    return 0;
}

//typedef int element;
//typedef struct {  // 원형 큐 타입
//	element  data[MAX_QUEUE_SIZE];
//	int  front, rear;			//front 먼저 들어가고 나옴 
//} QueueType;
//
//// 오류 함수
//void error(char* message)
//{
//	printf("%s\n", message);
//}
//// 원형 큐 초기화
//void init_queue(QueueType* q)
//{	//선형큐= 1개만 데이터가 입력되었을 때, 초기값(비어있는 상태랑 )다르기 하기 위해 초기화를 -1
//	//원형큐 : 초기값(비어있는 상태)과 포화상태를 비워두기 위해 front를 항상 비워둠
//	q->front = q->rear = 0; // 0이 아니라 다른 수로 해도 상관 없습니다. 원형이기 때문입니다.
//}
//// 공백 상태 검출 함수
//int is_empty(QueueType* q)
//{
//	return (q->front == q->rear);
//}
//// 포화 상태 검출 함수
//int is_full(QueueType* q)
//{
//	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front); // rear + 1 == front
//													//rear가 max값인 상태에 있을 수 있기에 max_씀
//													//길이가 5인 배열 f0 : r4(4+1)%5
//}
//// 원형 큐 출력 함수
//void queue_print(QueueType* q)
//{
//	printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear); //front,rear위치 확인 
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//
//		if (q->front < q->rear && (i <= q->front || i > q->rear)) // front <  data  < rear
//			printf("   | ");	//공백 위치 확인 하기 위해서  
//						//앞에 무조건 + 둘 중하나 
//		else if ((q->front > q->rear) && (i <= q->front && i > q->rear)) {  // 한바퀴 돌아서 rear <   < front
//			printf("   | ");// 세개 다 만족
//		}
//		else
//			printf("%d | ", q->data[i]);
//	}
//	printf("\n");
//
//}

// 삽입 함수 - rear에 데이터 삽입
//void enqueue(QueueType* q, element item)
//{
//	if (is_full(q)) error("큐가 포화상태입니다");
//
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;	// rear 옮겨주기 (입구)
//	//선형은 +1에서 끝남
//											// 원형 % max_
//	q->data[q->rear] = item;						//데이터 삽입
//	
//}

// 삭제 함수
//element dequeue(QueueType* q)
//{
//	if (is_empty(q))
//		error("큐가 공백상태입니다");
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE; //front 한칸 이동: 증가식 (I+1)%num
//	return q->data[q->front];						//q_>data[1;
//											//front 아앞에 있는 데이터 리턴 
//											//*삭제는 안하고 있음 (출력시에 front, rear 보며  판탄)
//}

// 메인
//int main(void)
//{
//	QueueType queue;
//	int element;
//
//	init_queue(&queue);		//front 와 rear만 초가화
//	printf("--데이터 추가 단계--\n");
//	while (!is_full(&queue))	//rear가 포화상태아니면 반복
//	{
//		printf("정수를 입력하시오: ");
//		scanf("%d", &element);
//		enqueue(&queue, element);	//rear 자리 한 칸 옮기고 데이터 삽입 
//		queue_print(&queue);
//	}
//	printf("큐는 포화상태입니다.\n\n"); //큐가 포화상태까지 돌아서 출력 안내
//
//	printf("--데이터 삭제 단계--\n"); // 큐에서 데이터 하나만 삭제
//	element = dequeue(&queue); // 큐에서 데이터 꺼내기 (실제 삭제하지 않고 front만 위치 변경)
//	printf("꺼내진 정수: %d \n", element); // 확인용 출력
//	queue_print(&queue);				//확인용 출력 
//
//	printf("정수를 입력하시오: ");		//포화상태후 삭제한 자리에 잘 입력되는지 확인 -> 원형 큐만의 특징(선형 안됨)
//								//rear < front 상태가 됨 (아런 상태를 만들기 위해, (i+1)%max 계산 
//	scanf("%d", &element);
//	enqueue(&queue, element);		//삽입 
//	queue_print(&queue);
//
//
//	return 0;
//}

//typedef struct Node {
//	int data;
//	struct Node* next;
//}NODE;
//
//typedef struct Queue {
//	NODE* front;
//	NODE* rear;
//	int count;
//}QUEUE;
//
//void initQueue(QUEUE* queue)							//초기화
//{
//	queue->front = queue->rear = NULL;
//	queue->count = 0;
//}
//
//int isEmpty(QUEUE* queue)								//비어있는지 확인 
//{
//	return queue->count == 0;
//}
//
//void enqueue(QUEUE* queue, int data)				//데이터 삽입
//{
//	NODE* newNode = (NODE*)malloc(sizeof(NODE)); // newNode 생성
//	newNode->data = data;
//	newNode->next = NULL;
//
//	if (isEmpty(queue))    //큐가 비어있을 때
//	{
//		queue->front = newNode;
//	}
//	else                  //비어있지 않을 때
//	{
//		queue->rear->next = newNode; //맨 뒤의 다음을 newNode로 설정
//	}
//	queue->rear = newNode; //맨 뒤를 newNode로 설정   
//	queue->count++;        //큐안의 노드 개수를 1 증가
//}
//
//int dequeue(QUEUE* queue)
//{
//	int data;
//	NODE* ptr;
//	if (isEmpty(queue))    //큐가 비었을 때
//	{
//		printf("Error : Queue is empty!\n");
//		return 0;
//	}
//	ptr = queue->front;        //맨 앞의 노드 ptr 설정 
//	data = ptr->data;          //return 할 데이터  
//	queue->front = ptr->next;  //맨 앞은 ptr의 다음 노드로 설정
//	free(ptr);                 //ptr 해제 (두번째 주소 알기 위해서)
//	queue->count--;            //큐의 노드 개수를 1 감소
//
//	return data;
//}
//
//int main(void)
//{
//	int i;
//	QUEUE queue;
//
//	initQueue(&queue);                     //큐 초기화
//	for (i = 1; i <= 10; i++)
//	{
//		enqueue(&queue, i);
//	}
//	while (!isEmpty(&queue))                //큐가 빌 때까지 
//	{
//		printf("%d ", dequeue(&queue));    //큐에서 꺼내온 값 출력
//	}
//	printf("\n");
//	return 0;
//}
typedef struct Node{
	char data;
	struct Node* leftChild;
	struct Node* rightChild;
} NODE;

// 초기화
NODE* initNode(int data, NODE* leftChild, NODE* rightChild) {
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->data = data;
	node->leftChild = leftChild;
	node->rightChild = rightChild;
	return node;
}

// 전위 순회
void preorder(NODE* root) {
	if (root) {
		printf("%c ", root->data);
		preorder(root->leftChild);
		preorder(root->rightChild);
	}
}

// 중위 순회
void inorder(NODE* root) {
	if (root) {
		inorder(root->leftChild);
		printf("%c ", root->data);
		inorder(root->rightChild);
	}
}

// 후위 순회
void postorder(NODE* root) {
	if (root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		printf("%c ", root->data);
	}
}

int main(void) {
	NODE* n9 = initNode('H', NULL, NULL);
	NODE* n8 = initNode('E', NULL, NULL);
	NODE* n7 = initNode('C', NULL, NULL);
	NODE* n6 = initNode('I', n9, NULL);
	NODE* n5 = initNode('D', n7, n8);
	NODE* n4 = initNode('A', NULL, NULL);
	NODE* n3 = initNode('G', NULL, n6);
	NODE* n2 = initNode('B', n4, n5);
	NODE* n1 = initNode('F', n2, n3);
	preorder(n1);
	printf("\n");
	inorder(n1);
	printf("\n");
	postorder(n1);
	return 0;
}