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



//如果一棵树“偏得厉害”,查找得过程就像沿着一条细长的枝条不断往下爬,效率很低
//如果这棵树是“匀称”的,查找路径就更短,每次都能接近目标,效率高
//为了解决这个问题,平衡二叉树(Balanced Binary Search Tree)应运而生

///平衡二叉树：
//又称AVL树,是一种二叉排序树
//任意一个节点的左子树与右子树的高度之差的绝对值不超过1

//平衡因子:左子树的高度-右子树的高度

//最小不平衡子树:从插入点向上回溯,第一个失衡的点
//对失衡的平衡二叉树进行调整时,需要先找到最小不平衡子树

//LL失衡:插入在左子树的左子树,向右旋转
//RR失衡:插入在右子树的右子树,向左旋转
//LR失衡:插入在左子树的右子树,先向左旋转再向右旋转
//RL失衡:插入在右子树的左子树,先向右旋转再向左旋转