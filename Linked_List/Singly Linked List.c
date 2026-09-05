//
// Created by q_wr2 on 2026/9/5.
//

#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct node {
    ElemType data;
    struct node* next;
}Node;

//单链表-初始化
Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head ->data = 0;
    head -> next = NULL;
    return head;
}

//单链表-头插法(插在头节点的后面)
int insertHead(Node* L,ElemType e) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp -> data = e;
    temp -> next = L->next;
    L -> next = temp;
    return 1;
}

//单链表-遍历
void listNode(Node* L) {
    Node* p = L->next;
    while (p != NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

//单链表-尾插法
Node* get_tail(Node* L) {
    Node* p = L;
    while (p->next != NULL) {
        p = p->next;
    }
    return p;
}

Node* insertTail(Node* tail, ElemType e) {
    Node* p = (Node*)malloc(sizeof(Node));
    tail -> next = p;
    p -> next = NULL;
    p -> data = e;
    return p;
}

//单链表-在指定位置插入数据
int insertNode(Node* L, int pos,ElemType e) {
    Node* p = L;
    int i = 0;

    //遍历链表找到插入位置的前驱节点
    while (i<pos-1) {
        p = p->next;
        i++;
        if (p == NULL) {
            return 0;
        }
    }
    Node* q = (Node*)malloc(sizeof(Node));
    q -> data = e;
    q -> next = p->next;
    p->next = q;
    return 1;
}

//单链表-删除节点
int deleteNode(Node* L,int pos) {
    //p为删除节点的前驱节点
    Node* p = L;
    int i = 0;
    while (i<pos-1) {
        p = p->next;
        i++;
        if (p == NULL) {
            return 0;
        }
    }
    if (p->next == NULL) {
        printf("delete pos is error");
        return 0;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}

//单链表-获取链表长度
int listLength(Node* L) {
    Node* p = L;
    int len = 0;
    while (p != NULL) {
        p = p->next;
        len++;
    }
    return len;
}

//单链表-释放链表
void freeList(Node* L) {
    Node* p = L;
    Node* q;
    while (p != NULL) {
        q = p->next;
        free(p);
        p = q;
    }
    //将头节点的next域赋值为空
    L->next = NULL;
}

int main() {
    Node* list = initList();
    insertHead(list,10);
    insertHead(list,20);
    insertHead(list,30);
    listNode(list);
    Node *tail = get_tail(list);
    tail = insertTail(tail,10);
    tail = insertTail(tail,20);
    tail = insertTail(tail,30);
    listNode(list);
    insertNode(list,2,15);
    listNode(list);
    deleteNode(list,2);
    listNode(list);
    printf("%d\n",listLength(list));
    freeList(list);
    printf("%d\n",listLength(list));
    return 0;
}