//todo：循环链表
//循环链表是另一种形式的链式存储结构
//其特点是表中最后一个节点指向头节点
//整个链形成一个环

#include<stdio.h>
#include<stdlib.h>

//todo:判断链表是否有环(快慢指针)
// int isCycle(Node* head) {
//     Node* fast = head;
//     Node* slow = head;
//     while(fast != NULL && fast->next != NULL) {
//         fast = fast->next->next;
//         slow = slow->next;
//         if(fast == slow) {
//             return 1;
//         }
//     }
// }

typedef struct ListNode {
    int val;
    struct ListNode* next;
}ListNode;

ListNode* createNode(int val) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

//todo:找到链表环的入口（环长法）
ListNode* findBegin(ListNode* head) {
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            int count = 1;
            ListNode* p = fast->next;
            while (p != slow) {
                count++;
                p = p->next;
            }
            fast = head;
            slow = head;
            for (int i = 0; i < count; i++) {
                fast = fast->next;
            }
            while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    return NULL;
}


typedef int ElemType;

typedef struct Node {
    ElemType data;
    struct Node *prev,*next;
}Node;

Node* initList() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    head->prev = NULL;
    return head;
}


//todo:头插法
int insertHead(Node* L,ElemType e) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->prev = L;
    p->next = L->next;
    if (L->next != NULL) {
        L->next->prev = p;
    }
    L->next = p;
    return 1;
}

//todo:遍历函数
void listNode(Node* L) {
    if (L->next == NULL) {
        printf("The doubly linked list is empty");
        return;
    }
    Node* p = L->next;
    while (p != NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

//todo:尾插法
Node* get_tail(Node* L) {
    Node* temp = L;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}

Node* insertTail(Node* tail, ElemType e) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->prev = tail;
    tail->next = p;
    p->next = NULL;
    return p;
}

//todo:在指定位置插入数据
int insertNode(Node* L,int pos,ElemType e) {
    Node* p = L;
    int i = 0;
    while (i<pos-1) {
        p = p->next;
        i++;
        if (p == NULL) {
            return 0;
        }
    }

    Node* q = (Node*)malloc(sizeof(Node));
    q->data = e;
    q->next = p->next;
    q->prev = p;
    p->next = q;
    p->next->prev = q;
    return 1;
}

//todo：删除节点
int deleteNode(Node* L,int pos) {
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
        printf("The doubly linked list is empty");
        return 0;
    }
    Node* q = p->next;
    p->next = q->next;
    q->next->prev = p;
    free(q);
    return 1;
}

int main() {
    //初始化头节点
    Node* list = initList();
    //头插法
    // insertHead(list,10);
    // insertHead(list,20);
    // insertHead(list,30);
    // listNode(list);
    //尾插法
    Node* tail = get_tail(list);
    tail = insertTail(tail,10);
    tail = insertTail(tail,20);
    tail = insertTail(tail,30);
    listNode(list);
    //在指定位置插入节点
    insertNode(list,2,15);
    listNode(list);
    deleteNode(list,2);
    listNode(list);
    return 0;
}

//todo:顺序表
// 存储空间：预先分配，会出现闲置或溢出的现象
// 存储密度：不用为表示节点间的逻辑关系而增加额外的存储，存储密度为1
// 存储元素：随机存取，按位置访问元素的复杂度为O(1)
// 插入删除：平均移动约表中一半元素，时间复杂度为O(n)
//todo:链表
// 存储空间：动态分配，不会出现存储空间闲置或溢出的现象
// 存储密度：需要借助指针来体现元素间的逻辑关系，存储密度小于1
// 存储元素：顺序存取，按位置访问元素时间复杂度O(n)
// 掺入删除：不需要移动元素，确定插入，删除位置后时间复杂度为O(1)
