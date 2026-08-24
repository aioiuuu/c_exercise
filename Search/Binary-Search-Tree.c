//
// Created by q_wr2 on 2026/8/24.
//

int insert_bst(BiTree *T,int value) {
    BiTree parent,pos;
    BiTree curr;

    //查找插入位置
    int status = search_bst(*T,value,NULL,&pos);
    if (status == 0) {
        curr=(BiTree)malloc(sizeof(TreeNode));
        curr->data=value;
        curr->lchild=NULL;
        curr->rchild=NULL;
        if (pos == NULL) {
            *T = curr;
        }
        //插入为左子节点
        else if (value < pos->data) {
            pos->lchild = curr;
        }
        //插入为右子节点
        else {
            pos->rchild = curr;
        }
        return 1;
    }
    else {
        return 0;
    }
}

//二叉排序树--删除
//叶子节点直接删,对结构不会影响
//有一个孩子的节点,直接子承父业
//有两个孩子的节点:右子树中最小结点代替/左子树中最大结点代替