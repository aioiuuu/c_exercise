//
// Created by q_wr2 on 2026/9/5.
//

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
typedef int ElemTyep;

typedef struct {
    ElemTyep* data;
    int length;
}SeqList;

//顺序表初始化-动态分配内存
SeqList* initList() {
    SeqList* L = (SeqList*)malloc(sizeof(SeqList));
    L->data = (ElemTyep*)malloc(sizeof(ElemTyep)*MAXSIZE);
    L->length = 0;
    return L;
}

//线性表的顺序存储形式(顺序表)有哪些点让你觉得很麻烦？
//插入和删除