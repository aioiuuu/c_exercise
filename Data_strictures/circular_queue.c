#include<stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int ElemType;

// //todo:定义结构体
// typedef struct {
//     ElemType* data;
//     int front;
//     int rear;
// }Queue;

// //todo:初始化队列
// Queue* initQueue() {
//     Queue* q = (Queue*)malloc(sizeof(Queue));
//     q->data = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);
//     q->front = q->rear = 0;
//     return q;
// }

// //todo:队尾指针总是指向队尾元素的下一个位置
//
// //todo:循环队列-入队
// int equeue(Queue* Q,ElemType e) {
//     //判断队尾是否满
//     if ((Q->rear+1)%MAXSIZE == Q->front) {
//         printf("queue is full\n");
//         return 0;
//     }
//     else {
//         Q->data[Q->rear] = e;
//         Q->rear = (Q->rear+1)%MAXSIZE;
//         return 1;
//     }
// }

// //todo:循环队列-出队
// int dequeue(Queue* Q,ElemType* e) {
//     if (Q->front == Q->rear) {
//         printf("empty queue\n");
//         return 0;
//     }
//     *e = Q->data[Q->front];
//     Q->front = (Q->front+1)%MAXSIZE;
//     return 1;
// }

// //todo:获取队头元素
// int getHead(Queue* Q,ElemType* e) {
//     if (Q->front == Q->rear) {
//         printf("empty queue\n");
//         return 0;
//     }
//     else {
//         *e = Q->data[Q->front];
//         return 1;
//     }
// }

// //todo:测试代码
// int main() {
//     Queue* q = initQueue();
//
//     equeue(q,10);
//     equeue(q,20);
//     equeue(q,30);
//     equeue(q,40);
//     equeue(q,50);
//
//     ElemType e;
//     dequeue(q,&e);
//     printf("%d\n",e);
//     dequeue(q,&e);
//     printf("%d\n",e);
//
//     getHead(q,&e);
//     printf("%d\n",e);
// }

//todo:队列的链式结构-初始化
typedef struct QueueNode {
    ElemType data;
    struct QueueNode* next;
}QueueNode;


typedef struct {
    QueueNode* front;
    QueueNode* rear;
}Queue;


Queue* initQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    QueueNode* node = (QueueNode*)malloc(sizeof(QueueNode));
    node->data = 0;
    node->next = NULL;
    //开始时队头指针和队尾指针会指向同一个头节点
    q->front = node;
    q->rear = node;
    return q;
}

//todo:判断队列是否为空
int isEmpty(Queue* q) {
    if (q->front == q->rear) {
        return 1;
    }
    else {
        return 0;
    }
}

//todo:入队
void equeue(Queue* q,ElemType e) {
    QueueNode* node = (QueueNode*)malloc(sizeof(QueueNode));
    node->data = e;
    node->next = NULL;
    //把这个新节点给原来尾指针节点的next
    q->rear->next = node;
    //把rear向后挪一位
    q->rear = node;
}

//todo:出队
int dequeue(Queue* q,ElemType* e) {
    QueueNode* node = q->front->next;
    *e = node->data;

    q->front->next = node->next;
    if (q->rear == node) {
        q->rear = q->front;
    }
    free(node);
    return 1;
}

//todo:获取队头元素
ElemType front(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return 0;
    }
    else {
        return q->front->next->data;
    }
}

//todo:测试代码
int main() {
    Queue* q = initQueue();
    equeue(q,10);
    equeue(q,20);
    equeue(q,30);
    equeue(q,40);
    equeue(q,50);
    ElemType e;
    dequeue(q,&e);
    printf("%d\n",e);
    dequeue(q,&e);
    printf("%d\n",e);
}

//为解决计算机主机与打印机之间速度不匹配的问题
//通常设置一个缓冲区，该缓冲区的逻辑结构应该是队列


//todo:计算机1~n的和-递归方式
int fun(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return fun(n - 1) + n;
    }
}

//todo:斐波那契数列递归方式
int fibonacci(int n) {
    if (n==1 || n==2) {
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}