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

//todo:栈的链式结构实现