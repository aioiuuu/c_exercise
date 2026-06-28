//todo:函数
//可以实现某个具体功能的代码块
//降低编程难度
//函数不被调用是不会执行的
//对内隐藏细节，对外暴露接口


//todo:字符串
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//todo:正确写法
// int main() {
//     char str2[11];
//     strcpy(str2,"hello world");
// }

//todo:错误写法
// char str2[11];
// str2 = "Hello World";


//todo:虚拟内存地址
//内存条，显卡，各种适配卡都有各自的存储地址空间
//操作系统将这些设备的存储地址空间抽象为一个巨大的一维数组空间
//对于内存的每个字节都分配一个32位或64位的编号，这个编号称为内存地址

// int main() {
//     int a = 10;
//     int b = 5;
//     return 1;
// }

// 一个int型的变量占4个字节，所以101过了是105
// 101  105
// 10   5


//todo:数组
//相同数据类型的集合
//数组的长度一旦定义就不能改变
//数组中的每一个元素可以用下标表示位置，如果一个数组有n个元素
//那么下标的取值范围是0~n-1

//%p=pointer,专门用来打印指针变量的内存地址


//todo:数组与sizeof

// int main() {
//     int a[]={1,2,3,4,5};
//     int len=sizeof(a)/sizeof(a[0]);
//     printf("%d\n",len);
// }



//todo:指针的定义
//指针是用来存放地址的变量
// int main(int argc,char const *argv[]) {
//     int a=5;
//     int *p=&a;
//     printf("a.address:%p,a:%d\n",&a,a);
//     printf("p.address:%p,p:%p\n",&p,p);
// }

//todo:地址会不会占用内存？
//字节本身只存业务数据，地址只是CPU，临时运算得坐标
//只有把地址存入指针变量的时候，才会开辟内存存放这个坐标数值


//todo:间接引用操作符*
//间接引用操作符*返回指针变量的指向地址的值
//通常把这个操作叫做‘解引用指针’
//英文叫做dereferencing a pointer


//todo:指针与函数
//设计一个函数，传入两个int参数，并交换这两个参数的值
// void swap(int* a,int* b) {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
//
// int main() {
//     int a,b;
//     scanf("%d%d",&a,&b);
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }


//todo：值传递是swap函数失效的原因
//调用函数时，会在swap函数的栈空间里面，新建两个独立的局部变量a,b
//把外部实参的值复制一份给他们
//函数内部操作的只是这两份副本拷贝，和外部原本的变量完全隔离
//函数执行完毕后，swap函数对应的栈帧直接释放
//局部变量a,b,temp占用的内存全部销毁，交换的结果直接丢失

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }


//todo:指针与数组
//在c语言中，指针与数组的关系十分密切
//通过数组下标能完成的操作都可以用指针完成


// int main() {
//     int a[]={1,2,3,4,5};
//     int* p;
//     p=a;
//     printf("%p\n",a);
//     printf("%p\n",p);
//     printf("%d\n",*p);
//     //利用指针遍历数组
//     for (int i=0;i<5;i++) {
//         printf("%d\n",*(p+i));
//     }
// }


//todo:指针做算术运算
//给指针加上一个整数，实际上加的是整数和指针数据类型对应字节数的乘积
//p++ --->  p=p+1 ---> p=p+1*4



//todo:结构体的声明
// 结构体是一个或多个变量的集合，这些变量可以是不同的类型
// struct 结构体名
// {
//     数据类型 变量名
//     数据类型 变量名
// };


// struct point
// {
//     int x;
//     int y;
// };
//
// int main() {
//     struct point p;
//     p.x=5;
//     p.y=10;
//     printf("%d\n",p.x);
//     printf("%d\n",p.y);
//     return 0;
// }


//todo:编写一个函数，传入两个int参数，在函数创建一个结构体point类型的变量
//将传入的两个参数分别赋值x,y
// struct point createPoint(int a, int b) {
//     struct point temp;
//     temp.x = a;
//     temp.y = b;
//     return temp;
// }


// todo:结构体
// struct point
// {
//     int x;
//     int y;
// };


// todo:结构体指针
// int main()
// {
//     struct point p;
//     p.x=5;
//     p.y=10;
//
//     //定义结构体指针，类型为 struct point*
//     struct point* pp;
//     //把变量的内存地址存入指针pp
//     pp=&p;
//
//     //解引用指针，修改p内部成员
//     (*pp).x=10;
//     (*pp).y=5;
//
//     printf("x=%d,y=%d\n",p.x,p.y);
//     printf("x=%d,y=%d\n",pp->x,pp->y);
// }



// todo:类型定义
// typedef 数据类型 别名
// typedef int zx


// typedef struct
// {
//     int x;
//     int y;
// }po;
//
// int main() {
//     po p;
//     p.x = 5;
//     p.y = 10;
//     printf("%d\n",p.x);
//     printf("%d\n",p.y);
//     return 0;
// }



//todo：内存分类
//c程序编译后，会以三种形式使用内存

//栈内存
//函数内部声明的变量和局部变量使用这部分内存，这些变量在程序开始运行时

//堆内存
//根据需求编写动态分配内存，可以编写代码释放，内存中的内容直到释放才消失

//todo:动态内存分配
//1.使用malloc(memory allocate)函数分配内存

//void* malloc(size_t)
//如果成功，会返回从堆内存上分配的内存指针
//如果失败，会返回指针

//2.使用分配的内存
//3.使用free函数释放内存


//todo:动态内存分配-基本数据类型
// int main() {
//     int *p;
//     //在堆内存空间开辟一块内存得到一个地址然后赋给p
//     p = (int *)malloc(sizeof(int));
//     //对p分配到的地址进行解引用，赋值为10
//     *p = 10;
//     printf("%d\n",*p);
//     //释放内存
//     free(p);
//     return 0;
// }


//todo:动态内存分配-字符串
// int main() {
//     char *s;
//     s = (char*)malloc(10);
//     strcpy(s,"hello");
//     printf("%s\n",s);
//     return 0;
// }


// todo:动态内存分配--数组
// int main() {
//     int* arr = (int*)malloc(5*sizeof(int));
//     for (int i=0; i<5; i++) {
//         arr[i]=0;
//     }
//     for (int i=0; i<5; i++) {
//         printf("%d\n",arr[i]);
//     }
//     free(arr);
//     return 0;
// }

// todo:动态内存分配实例--结构体
// typedef struct {
//     int x;
//     int y;
// }po;
//
// int main() {
//     po *p;
//     p = (po *)malloc(sizeof(po));
//     p->x = 10;
//     p->y = 20;
//     printf("%d\n",p->x);
//     printf("%d\n",p->y);
// }

//todo:算法
//算法要满足的5个重要特性
//有穷性
//确定性
//可行性
//输出
//输入


//对算法时间复杂度的度量，通常只讨论算法在最坏情况下的时间复杂度
//即分析在最坏情况下，算法执行时间的上界


// for (int i=0;i<10000;i++) {
//     x++;
//     s=0;
// }
// T(n)=o(1);

















