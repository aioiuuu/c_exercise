//todo:树
// 树是一个或多个结点的有限集合
// 存在一个称为根的特定节点
// 结点：树中的一个独立单元
// 结点的度：结点拥有的子树数
// 树的度：树内各结点的最大值
// 叶子：度为0的结点或终端结点
// 非终端结点：度不为0的结点
// 双亲和孩子：结点的子树称为该结点的孩子，相应地，该结点称为孩子的双亲
// 层次：结点的层次从根开始定义，根为第一层，根的孩子为第二层，以此类推

//todo:树中所有结点数等于所有结点的度数之和加1

//todo:对于度为m的树，第i层上最多有m**(i-1)个结点

//todo:对于高度为h，度为m的树，最多有(m**h-1)/(m-1)个结点



//todo:二叉树
//性质1：二叉树的第i层最多有2**(i-1)个结点

//性质2：深度为k的二叉树最多有2**(k-1)个结点(等比数列求和)

//性质3：对于任何非空的二叉树T,如果叶子结点的个数为n0，而度为2的结点数为n2,则n0=n2+1


//todo:完全二叉树
//没有左子树，不能有右子树，上一层没有铺满，不能有下一层

//对于二叉树来说，叶子结点在最后两层


#include <stdio.h>
#include <stdlib.h>

// //todo:二叉树的存储结构-链式结构
// typedef char ElemType;

// typedef struct TreeNode {
//     ElemType data;
//     struct TreeNode* lchild;
//     struct TreeNode* rchild;
// }TreeNode;

// typedef TreeNode* BiTree;
//
// char str[] = "ABDH#K###E##CFI###G#J##";
// int idx = 0;

// //todo:创建一棵树
// void createTree(BiTree *T) {
//     ElemType ch;
//     ch = str[idx++];
//     if (ch == '#') {
//         *T = NULL;
//     }
//     else {
//         *T = (BiTree)malloc(sizeof(TreeNode));
//         (*T)->data = ch;
//         createTree(&(*T)->lchild);
//         createTree(&(*T)->rchild);
//     }
// }

// //todo:前序遍历
// void preOrder(BiTree T) {
//     if (T == NULL) {
//         return;
//     }
//     printf("%c ",T->data);
//     //递归到左子树
//     preOrder(T->lchild);
//     //递归到右子树
//     preOrder(T->rchild);
// }


// //todo:中序遍历
// void inOrder(BiTree T) {
//     if (T == NULL) {
//         return;
//     }
//     inOrder(T->lchild);
//     printf("%c ",T->data);
//     inOrder(T->rchild);
// }

// //todo:后序遍历
// void postOrder(BiTree T) {
//     if (T == NULL) {
//         return;
//     }
//     postOrder(T->lchild);
//     postOrder(T->rchild);
//     printf("%c ",T->data);
// }

// int main() {
//     BiTree T;
//     createTree(&T);

//     //前序遍历
//     preOrder(T);
//     printf("\n");

//     //中序遍历
//     inOrder(T);
//     printf("\n");

//     //后序遍历
//     postOrder(T);
//     printf("\n");
// }

//根据遍历结果推到二叉树
//todo:二叉树遍历性质
//已知前序和中序遍历，可以唯一确定一棵二叉树
//已知中序和后序遍历，可以唯一确定一棵二叉树
//已知前序和后续遍历，是不能确定一棵二叉树的

//对于一棵高度为5的二叉树，若采用顺序存储结构保存
//则需要2**5-1个存储单元



//todo:线索二叉树-存储结构
typedef char ElemType;

typedef struct ThreadNode {
    ElemType data;
    struct ThreadNode* lchild;
    struct ThreadNode* rchild;
    int ltag;
    int rtag;
}ThreadNode;

typedef ThreadNode* ThreadTree;

char str[] = "ABDH##I##EJ###CF##G##";
int idx = 0;

ThreadTree prev;

//todo:创建树
void createTree(ThreadTree *T) {
    ElemType ch;
    ch = str[idx++];
    if (ch=='#') {
        *T = NULL;
    }
    else {
        *T = (ThreadTree)malloc(sizeof(ThreadNode));
        (*T)->data = ch;

        createTree(&(*T)->lchild);
        if ((*T)->lchild != NULL) {
            (*T)->ltag = 0;
        }

        createTree(&(*T)->rchild);
        if ((*T)->rchild != NULL) {
            (*T)->rtag = 0;
        }
    }
}

void threading(ThreadTree T) {
    if (T != NULL) {
        threading(T->lchild);
        if (T->lchild == NULL) {
            T->ltag = 1;
            T->lchild = prev;
        }
        if (prev->rchild == NULL) {
            prev->rtag = 1;
            prev->rchild = T;
        }
        prev = T;
        threading(T->rchild);
    }
}

//todo:具体线索化
void inOrderThreading(ThreadTree *head, ThreadTree T) {
    *head = (ThreadTree)malloc(sizeof(ThreadNode));
    (*head)->ltag = 0;
    (*head)->rtag = 1;
    (*head)->rchild = (*head);

    if (T == NULL) {
        (*head)->lchild = *head;
    }
    else {
        (*head)->lchild = T;
        prev = (*head);

        threading(T);

        prev->rchild = *head;
        prev->rtag = 1;

        (*head)->rchild = prev;
    }
}

void inOrder(ThreadTree T) {
    ThreadTree curr;
    curr = T->lchild;

    while (curr != T) {
        while (curr->ltag == 0) {
            curr = curr->lchild;
        }
        printf("%c",curr->data);
        while (curr->rtag == 1 && curr->lchild != T) {
            curr = curr->rchild;
            printf("%c",curr->data);
        }
    }
}

int main() {
    ThreadTree head;
    ThreadTree T;
    createTree(&T);
    inOrderThreading(&head,T);
    inOrder(head);

    return 0;
}