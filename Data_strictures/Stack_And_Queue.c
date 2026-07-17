//todo:栈
//栈（stack）是限定在表尾进行插入或删除操作的线性表
//因此对于栈来说，表尾端有其特殊含义，称为栈顶（top)
//相应的，表头称为栈底（bottom）不含元素的空表称为空栈

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;
#define MAXSIZE 100

// typedef struct {
//     ElemType data[MAXSIZE];
//     int top;
// }Stack;
//
// void InitStack(Stack *s) {
//     s->top = -1;
// }
//
// //todo:判断栈是否为空
// int isEmpty(Stack *s) {
//     if (s->top == -1) {
//         printf("empty\n");
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
//
// //todo:进栈/压栈
// int push(Stack *s,ElemType e) {
//     if (s->top == MAXSIZE-1) {
//         printf("stack overflow\n");
//         return 0;
//     }
//     s->top++;
//     s->data[s->top] = e;
//     return 1;
// }
//
// //todo:出栈
// ElemType pop(Stack* s,ElemType* e) {
//     if (s->top == -1) {
//         printf("empty\n");
//         return 0;
//     }
//     *e = s->data[s->top];
//     s->top--;
//     return 1;
// }
//
// //todo:访问栈顶元素
// int getTop(Stack* s,ElemType* e) {
//     if (s->top == -1) {
//         printf("empty\n");
//         return 0;
//     }
//     *e = s->data[s->top];
//     return 1;
// }
//
//
// int main() {
//     Stack s;
//     InitStack(&s);
//     push(&s,10);
//     push(&s,20);
//     push(&s,30);
//     ElemType e;
//     pop(&s,&e);
//     printf("%d\n",e);
//     getTop(&s,&e);
//     printf("%d\n",e);
// }


// typedef struct {
//     ElemType *data;
//     int top;
// }Stack;
//
// Stack* initStack() {
//     Stack* s = (Stack*)malloc(sizeof(Stack));
//     s->data = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);
//     s->top = -1;
//     return s;
//
// }

// //todo:栈的链式结构实现
// typedef struct stack {
//     ElemType data;
//     struct stack *next;
// }Stack;
//
// Stack* initStack() {
//     Stack* s = (Stack*)malloc(sizeof(Stack));
//     s->data = 0;
//     s->next = NULL;
//     return s;
// }
//
// //todo:判断栈是否为空
// int isEmpty(Stack* s) {
//     if (s->next == NULL) {
//         printf("empty\n");
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
//
// //todo:进栈/压栈(相当于链表中的头插法)
// int push(Stack* s, ElemType e) {
//     Stack* temp = (Stack*)malloc(sizeof(Stack));
//     temp->data = e;
//     temp->next = s->next;
//     s->next = temp;
//     return 1;
// }
//
// //todo:出栈(相当于删除头节点的后一个数据)
// int pop(Stack* s, ElemType* e) {
//     if (s->next == NULL) {
//         printf("empty\n");
//         return 0;
//     }
//     *e = s->next->data;
//     Stack* temp = s->next;
//     s->next = temp->next;
//     free(temp);
//     return 1;
// }
//
// //todo:获取栈顶元素
// int getTop(Stack* s, ElemType* e) {
//     if (s->next == NULL) {
//         printf("empty\n");
//         return 0;
//     }
//     *e = s->next->data;
//     return 1;
// }

//todo:队列(queue)
//todo:先进先出
//队列（queue）是一种先进先出的线性表
//它只允许在表的一段进行插入，而在另一段删除元素
//在队列中，允许插入的一段称为队尾，允许删除的一段称为队头


#define MAXSIZE 100
typedef int ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int front;
    int rear;
}Queue;

//todo:初始化
void initQueue(Queue* Q) {
    Q->front = 0;
    Q->rear = 0;
}

//todo:判断队列是否为空
int isEmpty(Queue* Q) {
    if (Q->front == Q->rear) {
        printf("Queue is empty\n");
        return 1;
    }
    else {
        return 0;
    }
}

//todo:出队
ElemType dequeue(Queue* Q) {
    if (Q->front == Q->rear) {
        printf("Queue is empty\n");
        return 0;
    }
    ElemType e = Q->data[Q->front];
    Q->front++;
    return e;
}

//todo:入队
int queueFull(Queue* Q) {
    if (Q->front > 0) {
        int step = Q->front;
        for (int i = Q->front; i <= Q->rear; ++i) {
            Q->data[i-step] = Q->data[i];
        }
        Q->front = 0;
        Q->rear = Q->rear - step;
        return 1;
    }
    else {
        printf("full");
        return 0;
    }
}

int equeue(Queue* Q, ElemType e) {
    if (Q->rear == Q->front) {
        if (!queueFull(Q)) {
            return 0;
        }
    }
    Q->data[Q->rear] = e;
    Q->rear++;
    return 1;
}

//todo:获取队头数据
int getHead(Queue* Q, ElemType* e) {
    if (Q->front == Q->rear) {
        printf("Queue is empty\n");
        return 0;
    }
    else {
        * e = Q->data[Q->front];
        return 1;
    }
}

//todo:测试代码
int main() {
    Queue q;
    initQueue(&q);
    equeue(&q,10);
    equeue(&q,20);
    equeue(&q,30);
    equeue(&q,40);
    equeue(&q,50);

    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    ElemType e;
    getHead(&q,&e);
    printf("%d\n",e);
    return 0;
}















