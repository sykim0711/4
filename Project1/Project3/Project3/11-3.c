////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define MAX_QUEUE_SIZE 5
////////////////////////////////////////////////////////////////////////////////////

							/*����ť �迭*/
typedef struct {                        // ���� ťŸ�� 
    int front, rear, data[MAX_QUEUE_SIZE];
}QueueType;

void error(char* message)                      //�����Լ�
{
    printf("%s\n", message);
    exit(1);
}

void init_queue(QueueType* q)            //���� ť �ʱ�ȭ -1 ������ 0 
{
    q->rear = -1;
    q->front = -1;
}

void  (QueueType* q)                  //���� ť ���� ���
{
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q->front || i > q->rear)       //������ ���� �迭 
            printf("   |");
        else
            printf("%d |", q->data[i]);
    }
    printf("\n");
}

int is_full(QueueType* q)                   //����ť ��ȭ�����ΰ�
{                                       //������ �� �� Ȯ��
    if (q->rear == MAX_QUEUE_SIZE - 1)      //rear(��)�� �ε��� Ȯ�� 
        return 1;
    else
        return 0;
}

int is_empty(QueueType* q)                //����ť ��������ΰ�
{                                      //������ ������ �� Ȯ�� 
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}

void enqueue(QueueType* q, int item)         //������ ����
{
    if (is_full(q)) {
        error("ť�� ��ȭ�����Դϴ�.");
        return;
    }
    q->data[++(q->rear)] = item;
}

int dequeue(QueueType* q)               //������ ����
{
    if (is_empty(q)) {
        error("ť�� ��������Դϴ�.");
        return -1;
    }
    int item = q->data[++(q->front)];       //front �ڸ� �ٲ��� (������ ���� x)
    return item;
}

int main(void)
{
    int item = 0;
    QueueType q;

    init_queue(&q);

    enqueue(&q, 10); queue_print(&q);           //������ 10 ����
    enqueue(&q, 20); queue_print(&q);           //������ 20 ����
    enqueue(&q, 30); queue_print(&q);           //������ 30 ����

    item = dequeue(&q); queue_print(&q);
    //item = dequeue(&q); queue_print(&q);
    //item = dequeue(&q); queue_print(&q);
    return 0;
}

//typedef int element;
//typedef struct {  // ���� ť Ÿ��
//	element  data[MAX_QUEUE_SIZE];
//	int  front, rear;			//front ���� ���� ���� 
//} QueueType;
//
//// ���� �Լ�
//void error(char* message)
//{
//	printf("%s\n", message);
//}
//// ���� ť �ʱ�ȭ
//void init_queue(QueueType* q)
//{	//����ť= 1���� �����Ͱ� �ԷµǾ��� ��, �ʱⰪ(����ִ� ���¶� )�ٸ��� �ϱ� ���� �ʱ�ȭ�� -1
//	//����ť : �ʱⰪ(����ִ� ����)�� ��ȭ���¸� ����α� ���� front�� �׻� �����
//	q->front = q->rear = 0; // 0�� �ƴ϶� �ٸ� ���� �ص� ��� �����ϴ�. �����̱� �����Դϴ�.
//}
//// ���� ���� ���� �Լ�
//int is_empty(QueueType* q)
//{
//	return (q->front == q->rear);
//}
//// ��ȭ ���� ���� �Լ�
//int is_full(QueueType* q)
//{
//	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front); // rear + 1 == front
//													//rear�� max���� ���¿� ���� �� �ֱ⿡ max_��
//													//���̰� 5�� �迭 f0 : r4(4+1)%5
//}
//// ���� ť ��� �Լ�
//void queue_print(QueueType* q)
//{
//	printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear); //front,rear��ġ Ȯ�� 
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//
//		if (q->front < q->rear && (i <= q->front || i > q->rear)) // front <  data  < rear
//			printf("   | ");	//���� ��ġ Ȯ�� �ϱ� ���ؼ�  
//						//�տ� ������ + �� ���ϳ� 
//		else if ((q->front > q->rear) && (i <= q->front && i > q->rear)) {  // �ѹ��� ���Ƽ� rear <   < front
//			printf("   | ");// ���� �� ����
//		}
//		else
//			printf("%d | ", q->data[i]);
//	}
//	printf("\n");
//
//}

// ���� �Լ� - rear�� ������ ����
//void enqueue(QueueType* q, element item)
//{
//	if (is_full(q)) error("ť�� ��ȭ�����Դϴ�");
//
//	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;	// rear �Ű��ֱ� (�Ա�)
//	//������ +1���� ����
//											// ���� % max_
//	q->data[q->rear] = item;						//������ ����
//	
//}

// ���� �Լ�
//element dequeue(QueueType* q)
//{
//	if (is_empty(q))
//		error("ť�� ��������Դϴ�");
//	q->front = (q->front + 1) % MAX_QUEUE_SIZE; //front ��ĭ �̵�: ������ (I+1)%num
//	return q->data[q->front];						//q_>data[1;
//											//front �ƾտ� �ִ� ������ ���� 
//											//*������ ���ϰ� ���� (��½ÿ� front, rear ����  ��ź)
//}

// ����
//int main(void)
//{
//	QueueType queue;
//	int element;
//
//	init_queue(&queue);		//front �� rear�� �ʰ�ȭ
//	printf("--������ �߰� �ܰ�--\n");
//	while (!is_full(&queue))	//rear�� ��ȭ���¾ƴϸ� �ݺ�
//	{
//		printf("������ �Է��Ͻÿ�: ");
//		scanf("%d", &element);
//		enqueue(&queue, element);	//rear �ڸ� �� ĭ �ű�� ������ ���� 
//		queue_print(&queue);
//	}
//	printf("ť�� ��ȭ�����Դϴ�.\n\n"); //ť�� ��ȭ���±��� ���Ƽ� ��� �ȳ�
//
//	printf("--������ ���� �ܰ�--\n"); // ť���� ������ �ϳ��� ����
//	element = dequeue(&queue); // ť���� ������ ������ (���� �������� �ʰ� front�� ��ġ ����)
//	printf("������ ����: %d \n", element); // Ȯ�ο� ���
//	queue_print(&queue);				//Ȯ�ο� ��� 
//
//	printf("������ �Է��Ͻÿ�: ");		//��ȭ������ ������ �ڸ��� �� �ԷµǴ��� Ȯ�� -> ���� ť���� Ư¡(���� �ȵ�)
//								//rear < front ���°� �� (�Ʒ� ���¸� ����� ����, (i+1)%max ��� 
//	scanf("%d", &element);
//	enqueue(&queue, element);		//���� 
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
//void initQueue(QUEUE* queue)							//�ʱ�ȭ
//{
//	queue->front = queue->rear = NULL;
//	queue->count = 0;
//}
//
//int isEmpty(QUEUE* queue)								//����ִ��� Ȯ�� 
//{
//	return queue->count == 0;
//}
//
//void enqueue(QUEUE* queue, int data)				//������ ����
//{
//	NODE* newNode = (NODE*)malloc(sizeof(NODE)); // newNode ����
//	newNode->data = data;
//	newNode->next = NULL;
//
//	if (isEmpty(queue))    //ť�� ������� ��
//	{
//		queue->front = newNode;
//	}
//	else                  //������� ���� ��
//	{
//		queue->rear->next = newNode; //�� ���� ������ newNode�� ����
//	}
//	queue->rear = newNode; //�� �ڸ� newNode�� ����   
//	queue->count++;        //ť���� ��� ������ 1 ����
//}
//
//int dequeue(QUEUE* queue)
//{
//	int data;
//	NODE* ptr;
//	if (isEmpty(queue))    //ť�� ����� ��
//	{
//		printf("Error : Queue is empty!\n");
//		return 0;
//	}
//	ptr = queue->front;        //�� ���� ��� ptr ���� 
//	data = ptr->data;          //return �� ������  
//	queue->front = ptr->next;  //�� ���� ptr�� ���� ���� ����
//	free(ptr);                 //ptr ���� (�ι�° �ּ� �˱� ���ؼ�)
//	queue->count--;            //ť�� ��� ������ 1 ����
//
//	return data;
//}
//
//int main(void)
//{
//	int i;
//	QUEUE queue;
//
//	initQueue(&queue);                     //ť �ʱ�ȭ
//	for (i = 1; i <= 10; i++)
//	{
//		enqueue(&queue, i);
//	}
//	while (!isEmpty(&queue))                //ť�� �� ������ 
//	{
//		printf("%d ", dequeue(&queue));    //ť���� ������ �� ���
//	}
//	printf("\n");
//	return 0;
//}
typedef struct Node{
	char data;
	struct Node* leftChild;
	struct Node* rightChild;
} NODE;

// �ʱ�ȭ
NODE* initNode(int data, NODE* leftChild, NODE* rightChild) {
	NODE* node = (NODE*)malloc(sizeof(NODE));
	node->data = data;
	node->leftChild = leftChild;
	node->rightChild = rightChild;
	return node;
}

// ���� ��ȸ
void preorder(NODE* root) {
	if (root) {
		printf("%c ", root->data);
		preorder(root->leftChild);
		preorder(root->rightChild);
	}
}

// ���� ��ȸ
void inorder(NODE* root) {
	if (root) {
		inorder(root->leftChild);
		printf("%c ", root->data);
		inorder(root->rightChild);
	}
}

// ���� ��ȸ
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