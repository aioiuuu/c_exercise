//todo:枚举
#include <stdio.h>
#include <stdlib.h>

// enum weekday {
//     mon,tue,wed,thu,fri,sat,sun
// };
//
// int main() {
//     enum weekday a;
//     a = mon;
//     enum weekday b;
//     b = sat;
//     printf("%d\n",a);
//     printf("%d\n",b);
// }

//todo:后缀表达式求值(逆波兰表达式)
#define MAXSIZE 100
typedef int ElemType;

typedef struct {
    ElemType* data;
    int top;
}Stack;


typedef enum {
    LEFT_PARE, RIGHT_PARE,
    ADD,SUB,MUL,DIV,MOD,
    EOS,NUM
}contentType;

char expr[] = "82/2+56*-";

//todo:
Stack* initStack() {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->data = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);
    s->top = -1;
    return s;
}

//todo:判断栈是否为空
int isEmpty(Stack* s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return 1;
    }
    else {
        return 0;
    }
}

//todo:进栈/压栈
int push(Stack* s,ElemType e) {
    if (s->top >= MAXSIZE-1) {
        printf("full\n");
        return 0;
    }
    else {
        s->top++;
        s->data[s->top] = e;
        return 1;
    }
}

//todo:出栈
int pop(Stack* s,ElemType* e) {
    if (s->top == -1) {
        printf("empty\n");
        return 0;
    }
    else {
        *e = s->data[s->top];
        s->top--;
        return 1;
    }
}

//todo:分词函数
contentType getToken(char* symbol,int* index) {
    *symbol = expr[*index];
    *index = *index + 1;
    switch (*symbol) {
        case '(':
            return LEFT_PARE;
        case ')':
            return RIGHT_PARE;
        case '+':
            return ADD;
        case '-':
            return SUB;
        case '*':
            return MUL;
        case '/':
            return DIV;
        case '%':
            return MOD;
        case '\0':
            return EOS;
        default:
            return NUM;
    }
}


int eval(Stack* s) {
    char symbol;
    int op1,op2;
    int index = 0;
    contentType token;
    token = getToken(&symbol,&index);
    ElemType result;
    while (token != EOS) {
        if (token == NUM) {
            push(s,symbol-'0');
        }
        else {
            pop(s,&op2);
            pop(s,&op1);

            switch (token) {
                case ADD:
                    push(s,op1+op2);
                    break;
                case SUB:
                    push(s,op1-op2);
                    break;
                case MUL:
                    push(s,op1*op2);
                    break;
                case DIV:
                    push(s,op1/op2);
                    break;
                case MOD:
                    push(s,op1%op2);
                    break;
                default:
                    break;
            }
        }
        token = getToken(&symbol,&index);
    }
    pop(s,&result);
    printf("%d\n",result);
    return 1;
}

//todo:测试函数
int main() {
    Stack* s = initStack();
    eval(s);
    return 0;
}

// todo:逆波兰表达式的优点
// 彻底消除括号，不需要判断运算符优先级
//只用栈就能求值，算法简单、硬件容易实现
//方便处理复杂嵌套表达式、逻辑表达式