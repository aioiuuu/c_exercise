//
// Created by q_wr2 on 2026/9/5.
//

#include<stdio.h>

#define MAXSIZE 100
typedef int ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int length;
}SeqList;

//初始化顺序表长度为0
void initList(SeqList *L) {
    L->length = 0;
}

//顺序表-在尾部添加元素
int appendElem(SeqList *L, ElemType e) {
    if (L->length >= MAXSIZE) {
        printf("seqlist is full\n");
        return 0;
    }
    else {
        L->data[L->length] = e;
        L->length++;
        return 1;
    }
}

//顺序表-遍历
void listElem(SeqList* L) {
    for (int i = 0; i < L->length; i++) {
        printf("%d",L->data[i]);
        printf("\n");
    }
}

//顺序表-插入元素(pos-1=下标)
int insertElem(SeqList *L, int pos, ElemType e) {
    if (L->length >= MAXSIZE) {
        printf("list is full\n");
        return 0;
    }
    if (pos < 1 || pos > L->length) {
        printf("insert pos error\n");
        return 0;
    }
    if (pos<=L->length) {
        for (int i = L->length-1; i >= pos-1; i--) {
            L->data[i+1] = L->data[i];
        }
        L->data[pos-1] = e;
        L->length++;
    }
    return 1;
}

//顺序表删除元素
int deleteElem(SeqList *L, int pos,ElemType *e) {
    if (L->length == 0) {
        printf("list is empty\n");
        return 0;
    }
    if (pos < 1 || pos > L->length) {
        printf("delete pos error\n");
        return 0;
    }

    *e = L->data[pos-1];
    if (pos < L->length) {
        for (int i = pos-1; i < L->length-1; i++) {
            L->data[i] = L->data[i+1];
        }
    }
    L->length--;
    return 1;
}

//顺序表查找
int findElem(SeqList *L, ElemType e) {
    if (L->length == 0) {
        printf("list is empty\n");
        return 0;
    }
    for (int i = 0; i < L->length; i++) {
        if (L->data[i] == e) {
            return i+1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    SeqList list;
    initList(&list);
    printf("initlitial list is successfully %d\n",list.length);
    printf("momery %zu\n",sizeof(list.data));
    appendElem(&list,88);
    appendElem(&list,45);
    appendElem(&list,43);
    appendElem(&list,17);
    listElem(&list);
    printf("\n");
    insertElem(&list,2,18);
    listElem(&list);
    printf("\n");
    ElemType delData;
    deleteElem(&list,2,&delData);
    printf("delete data is %d \n",delData);
    listElem(&list);
    printf("\n");
    printf("%d\n",findElem(&list,45));
    return 0;
}


//顺序表插入数据的最坏时间复杂度是？
//o(n)