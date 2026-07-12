#include<stdio.h>
#include<stdlib.h>

//定义链表节点结构体
typedef struct node {
    int data;
    struct node* next;
}Node;

//todo:创建头节点
Node* createNode() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->next = NULL;
    head->data = 0;
    return head;
}

//todo:头插法:头部插入节点
void insertHead(Node* L,int x) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = L->next;
    L->next = temp;
}

//todo:尾插法
Node* get_tail(Node* L) {
    Node* p = L;
    while (p->next != NULL) {
        p = p->next;
    }
    return p;
}

Node* insertTail(Node* tail,int e) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = e;
    tail->next = p;
    p->next = NULL;
    return p;
}

void ListNode(Node* L) {
    Node* temp= L->next;
    while (temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//todo：链表反转
Node* reverseList(Node* head) {
    Node* first = NULL;
    Node* second = head->next;
    Node* third;

    while (second != NULL) {
        third = second->next;
        second->next = first;
        //向后挪一个
        first = second;
        second = third;
    }
    Node* hd = createNode();
    hd->next = first;

    return hd;
}

//todo:删除链表中间节点
//todo:快慢指针
int delMiddleNode(Node* head) {
    Node* fast = head->next;
    Node* slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node* q = slow->next;
    slow->next = q->next;
    free(q);
    return 1;
}


//todo:链表重排
void reOrderList(Node* head) {
    Node* fast = head->next;
    Node* slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    //反转链表
    Node* first = NULL;
    Node* second = slow->next;
    //断开链表
    slow->next = NULL;
    Node* third = NULL;

    while (second != NULL) {
        third = second->next;
        second->next = first;
        //向后挪一个
        first = second;
        second = third;
    }

    //见缝插针
    Node* p1 = head->next;
    Node* q1 = first;
    Node *p2, *q2;
    while (p1 != NULL && q1 != NULL) {
        p2 = p1->next;
        q2 = q1->next;

        p1->next = q1;
        q1->next = p2;

        p1 = p2;
        q1 = q2;
    }
}

//todo:测试函数
int main() {
    Node* list = createNode();
    insertHead(list,6);
    insertHead(list,5);
    insertHead(list,4);
    insertHead(list,3);
    insertHead(list,2);
    insertHead(list,1);
    ListNode(list);
    // Node* reverse = reverseList(list);
    // ListNode(reverse);
    // delMiddleNode(list);
    // ListNode(list);
    reOrderList(list);
    ListNode(list);
    return 0;
}