//
// Created by q_wr2 on 2026/8/21.
//

#include<stdio.h>
#include<stdlib.h>

///场景：数据结构,项目管理,运筹学
//在带权有向无环图中,从源点到汇点的最长路径称为关键路径
//关键路径长度 = 整个工程的最短完成工期

///顺序查找
// int search(int* data,int len,int value) {
//     for (int i = 1; i <= len;i++) {
//         if (data[i] == value) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {15,54,76,6,9,45,12};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int pos = search(arr,len,45);
//     printf("%d\n",pos);
//     return 0;
// }

///折半查找
//折半查找的前提是:查找表必须是有序的
// int binary_search(int* data, int len,int value) {
//     int low = 0;
//     int high = len-1;
//     int mid;
//     while (low <= high) {
//         mid = (low + high)/2;
//         if (value > data[mid]) {
//             low = mid + 1;
//         }
//         else if (value < data[mid]) {
//             high = mid - 1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {2,13,22,38,46,58,66,77,85,98};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int pos = binary_search(arr, len, 66);
//     printf("%d",pos);
//     return 0;
// }

///二叉排序树
//二叉排序树(Binary Search Tree)是一种特殊的二叉树
//对于树中的任意一个节点,其左子树上所有节点的值都小于该节点的值,右子树上所有节点的值都大于该节点的值
typedef int ElemType;
typedef struct TreeNode {
    ElemType data;              //节点存储的数据
    struct TreeNode *lchild;    //左子节点
    struct TreeNode *rchild;    //右子节点
}TreeNode;

typedef TreeNode* BiTree;       //定义二叉树指针类型

//用数组模拟先序创建一颗二叉树
int treeArr[] = {70,55,49,30,-1,39,-1,-1,53,-1,-1,-1,80,75,-1,-1,98,95,-1,-1,-1};
int idx = 0;

void createTree(BiTree *T) {
    ElemType num;
    num = treeArr[idx++];

    if (num == -1) {
        *T = NULL;
    }
    else {
        *T = (BiTree)malloc(sizeof(TreeNode));
        (*T)->data = num;
        createTree(&(*T)->lchild);
        createTree(&(*T)->rchild);
    }
}

int search_bst(BiTree T,int value,BiTree parent,BiTree *pos) {
    if (T == NULL) {
        *pos = parent;
        return 0;
    }

    if (T->data == value) {
        *pos = parent;
        return 0;
    }

    if (T->data > value) {
        *pos = T;
        return 1;
    }

    if (T->data > value) {
        return search_bst(T->lchild,value,T,pos);
    }
    else {
        return search_bst(T->rchild,value,T,pos);
    }
}

int main() {
    BiTree T;
    createTree(&T);     //创建二叉排序树
    BiTree searchT;
    search_bst(T,53,NULL,&searchT); //查找值为53的节点
    printf("\n");
    printf("%d\n",searchT->data);
    return 0;
}
