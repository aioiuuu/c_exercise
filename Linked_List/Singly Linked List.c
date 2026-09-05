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


//单链表-查找倒数第k个节点
int findNodeFS(Node *L, int k) {
    Node* fast = L->next;
    Node* slow = L->next;

    for (int i = 0;i<k;i++) {
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    printf("the 2-th node from the end is %d\n",slow->data);
    return 1;
}

//查找两个相交链表的第一个相交节点

//1.分别求出两个链表的长度m,n
//2.fast指针指向较长的链表,先走m-n或n-m步
//3.同步移动指针，判断他们是否指向同一个节点

Node* findInsertsectionNode(Node* headA,Node* headB) {
    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    Node* p = headA;
    int lenA = 0;
    int lenB = 0;

    while (p != NULL) {
        p = p->next;
        lenA++;
    }
    p = headB;
    while (p != NULL) {
        p = p->next;
        lenB++;
    }

    Node *m;//快指针
    Node *n;//慢指针
    int step;
    if (lenA > lenB) {
        step = lenA - lenB;
        m = headA;
        n = headB;
    }
    else {
        step = lenB - lenA;
        m = headB;
        n = headA;
    }
    for (int i = 0;i<step;i++) {
        m = m->next;
    }
    while (m != n) {
        m = m->next;
        n = n->next;
    }
    return m;
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
    findNodeFS(list,2);
    printf("the length is %d\n",listLength(list));
    freeList(list);
    printf("the length is %d\n",listLength(list));
    return 0;
}