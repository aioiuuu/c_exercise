#include <stdio.h>

// 指针变量定义格式
// 数据类型 * 变量名

int main() {
    int a=10;
    int* p=&a;
    printf("%d\n",*p);
    *p=200;
    printf("%d\n",*p);
    printf("%d\n",a);
}

//指针的数据类型和指向变量的数据类型要保持一致
// int main() {
//     char c='a';
//     char* p1=&c;
//
//     long long n=100;
//     long long* p2=&n;
//
//     printf("%zu\n",sizeof(p1));
//     printf("%zu\n",sizeof(p2));
// }

// 32位编译器:4字节
// 64位编译器:8字节

// 指针作用1：
//      操作其他函数中的变量
// void swap(int* p1, int* p2) {
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }
//
//
// int main() {
//     int a=10;
//     int b=20;
//     printf("%d,%d\n", a, b);
//     swap(&a, &b);
//     printf("%d,%d\n", a, b);
// }


// 指针的作用2：
//     函数返回多个值
//     定义一个函数,求数组的最小值和最大值,并进行返回

// int main () {
//     int arr[]={1,2,3,4,5};
//     int min = arr[0];
//     int max = arr[0];
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<len;i++) {
//         if (min > arr[i]) {
//             min = arr[i];
//         }
//         if (max < arr[i]) {
//             max = arr[i];
//         }
//     }
//     printf("The minimum number of moves is %d.\n", min);
//     printf("The maximum number of moves is %d.\n", max);
//     return 0;
// }


// void getmaxmin(int arr[], int len,int* min,int* max) {
//     *max = arr[0];
//     *min = arr[0];
//     int i;
//     for ( i = 1; i < len; i++) {
//         if (arr[i] > *max) {
//             *max = arr[i];
//         }
//         if (arr[i] < *min) {
//             *min = arr[i];
//         }
//     }
// }
//
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int min=arr[0];
//     int max=arr[0];
//     getmaxmin(arr,len,&min,&max);
//     printf("max: %d\n",max);
//     printf("min: %d\n",min);
// }


//指针的作用3：
//      将函数的结果和计算状态分开
//      定义一个函数：将两数相除，获取他们的余数
// int getRemainder (int num1,int num2,int* res) {
//     if (num2==0) {
//         return 1;
//     }
//     *res = num1 % num2;
//     return 0;
// }

//指针运算（p+1/p-1）
//步长：指针移动一次，走了多少个字节
//char:     1字节
//short:    2字节
//int:      4字节
//long:     4字节
//longlong: 8字节

// int main () {
//     int a=10;
//     int* p=&a;
//     printf("%p\n",p);
//     printf("%p\n",p+1);
// }

// 指针运算：
//         有意义的操作：
//             指针和整数进行加，减操作
//             指针和指针进行减操作
//         无意义的操作：
//             指针和整数进行乘除操作
//             指针和指针进行加，乘，除操作

    //前提条件：保证内存空间是连续的
    // 数组
// int main () {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int* p1=&arr[0];
//     printf("%d\n",*p1);
//     printf("%d\n",*(p1+1));
//     printf("%d\n",*(p1+2));
//     int* p2=&arr[5];
//     printf("%d\n",p2-p1);
// }

    //野指针:指针指向的空间未分配
    //悬空指针:指针指向的空间已分配了,但是被释放了
// int main () {
//     int a = 10;
//     int* p1 = &a;
//     printf("p1: %p\n", p1);
//     printf("a:%d\n", *p1);
//     //p2:野指针
//     int* p2 = p1+10;
//     printf("p2: %p\n", p2);
//     printf("%d\n", *p2);
// }


//没有类型的指针:
    //特点:无法获取数据,无法计算,但是可以接收任意地址
    //void



//二级指针和多级指针:

    //二级指针的定义格式:
    //int ** 指针名

    //作用:二级指针可以操作一级指针记录的地址

    //指针数据类型:跟指向空间中,数据的类型是保持一致的

// int main () {
//     int a = 10;
//     int b = 20;
//     int* p = &a;
//     int** pp = &p;
//     *pp = &b;
//     printf("%p\n",&a);
//     printf("%p\n",&b);
//     printf("%p\n",p);
// }


//数组和指针
// int main () {
//     int arr[]={10,20,30,40,50};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     int* p = arr;
//     int* p1 = &arr[0];
//     printf("%p\n",p);
//     printf("%p\n",p1);
//     int i;
//     for (i=0;i<len;i++) {
//         printf("%d\n",*(p+i));
//     }
// }


//数组指针的细节
//当arr参与计算的时候,会退化位第一个元素的指针
//特殊情况:&arr获取地址的时候,不会退化;
// int main () {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     printf("%zu\n",sizeof(arr));//10*4=40
//
//     int* p2 = arr;
//     int* p1 = &arr;
// }


//二维数组
//二维数组的定义格式:
//       arr[m][n]=
//    {
//     {1,2,3,4}
//     {1,2,3,4}
//     {1,2,3,4}
//    }

//二维数组的遍历
// int main () {
//     int arr[3][5]=
//         {
//         {1,2,3,4,5},
//         {6,7,8,9,10},
//         {11,12,13,14,15},
//     };
//     int i,j;
//     for (i=0;i<3;i++) {
//         for (j=0;j<5;j++) {
//             printf("%d ",arr[i][j]);
//         }
//     }
// }


//二维数组的第二种定义方式和内存地址
// int main () {
//     int arr1[3]={1,2,3};
//     int arr2[5]={4,5,6,7,8};
//     int arr3[8]={1,2,3,4,5,6,7,8};
//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);
//     int len3=sizeof(arr3)/sizeof(arr3[0]);
//     int lenarr[3]={len1,len2,len3};
//     int* arr[3]={arr1,arr2,arr3};
//     for (int i=0;i<3;i++) {
//         for (int j=0;j<lenarr[i];j++) {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//利用指针来遍历二维数组
//第一种指针遍历数组的方式
// int main () {
//     int arr[2][5]=
//         {
//           {1,2,3,4,5},
//           {6,7,8,9,10},
//     };
//     int(*p)[5]=arr;
//     for (int i=0;i<2;i++) {
//         for (int j=0;j<5;j++) {
//             printf("%d",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

//第二种指针遍历数组的方式
// int main () {
//     int arr1[3]={1,2,3};
//     int arr2[3]={4,5,6};
//     int arr3[3]={7,8,9};
//     int* arr[3]={arr1,arr2,arr3};
//     int* * p=arr;
//     int i,j;
//     for (i=0;i<3;i++) {
//         for (j=0;j<3;j++) {
//             printf("%d",*(*(p+i))+j);
//         }
//         printf("\n");
//     }
// }

//数组指针和指针数组

//数组指针:指向数组的指针
// int* p = arr;  (步长为:int)
// int(*p)[5] = &arr (步长为:int*5)

//指针数组:用来存指针的数组
// int *p[5],这个数组里存着int类型的指针












