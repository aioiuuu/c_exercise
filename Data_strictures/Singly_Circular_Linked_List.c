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