#include <stdio.h>


// 数组的定义格式
int main() {
    int age[80];
    double height[50];
    double price[80];
}

// 数组的初始化
// int main() {
//     int age[5]={18,19,18,18,17};
//     int height[1]={1.7};
// }

// 数组中元素的访问
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int sum=arr[0]+arr[2]+arr[4];
//     printf("sum=%d\n",sum);
//     arr[4]=10;
//     return 0;
// }

// 数组的遍历
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int i;
//     for (i=0;i<5;i++) {
//         printf("%d\n",arr[i]);
//     }
// }

// 内存:软件在运行时,用来临时存储数据的

// 32位操作系统,内存地址以32位的二进制来表示
// 地址范围: 0000 0000 0000 0000 0000 0000 0000 0000
         // 1111 1111 1111 1111 1111 1111 1111 1111
// 最大支持内存:42,9496,7296字节(4GB)

// 64位操作系统,内存地址以64位二进制来表示
// 最大内存地址:2**64
// 最大支持内存:2**64
// 1884,6744,0737,0955,1616字节(17,592,186GB)

// 作用:快速地管理内存空间



// C语言中的内存地址:
// int类型 ----> 4个字节(4个连续的小格子)
// 0x0100(首地址) 0x0101 0x0102 0x0103

// int main() {
//     int a = 10;
//     printf("%p\n",&a);
//     int b = 10;
//     printf("%p\n",&b);
//     int c = 10;
//     printf("%p\n",&c);
//     return 0;
// }
// 0000005ce0fff7ec
// 0000005ce0fff7e8
// 0000005ce0fff7e4

// 首地址[索引]
// arr[1]
// arr:0x0001(首地址)
// [1]:偏移一个单位


// int arr[3]={1,2,3};
// 在内存中占据12个字节的空间

// 获取数组的内存地址
// int main() {
//     int arr[]={1,2,3};
//     printf("%p\n",&arr);
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
//     return 0;
// }

// %p专门用来打印内存地址(指针值),输出格式为带0x前缀的十六进制数字


// 为什么数组的索引是从0开始的?

// addr(i)=base+i×size
// 当(i=0)时,直接得到首元素地址base,
// 不需要额外做减法
// CPU 只需要一次乘法 + 一次加法就能算出目标地址
// 寻址运算效率最高。

// 数组长度=总长度/数据类型所占的字节数


// 数组的常见问题
// 定义处:arr表示的就是完整的数组;
// 函数中的arr:只是一个变量,用来记录数组的首地址


// void printArr(int arr[]);
// int main() {
//     int arr[]={1,2,3,4,5};
//     size_t a=sizeof(arr);
//     printf("%zu\n",a);//20,数组的内存一共存了5个整型,一共5*4=20字节;
//     printArr(arr);//8,这里的8代表首地址,此电脑是64位操作系统,64位=8字节;
// }
//
// void printArr(int arr[])
// {
//     printf("%zu\n",sizeof(arr));
// }

// 正确写法
// void arrprint(int arr[],int len);
// int main() {
//     int arr[]={1,2,3,4,5};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     arrprint(arr,len);
// }
//
// void arrprint(int arr[],int len) {
//     for(int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }


// 数组的索引越界:
// 最小索引:0
// 最大索引:长度-1

// 已知数组元素为[33,5,22,44,55]
// 请找出数组中最大值并打印在控制台
// int main() {
//     int i;
//     int arr[5]={33,5,22,44,55};
//     int max=arr[0];
//     int len=sizeof(arr)/sizeof(arr[0]);
//     for (i=1;i<len;i++) {
//         if (max<arr[i]) {
//             max=arr[i];
//         }
//     }
//     printf("The maximum number is %d",max);
//     return 0;
// }


// 数组求和
// 已知数组元素为[33,5,22,44,55]
// int main() {
//     int arr[]={33,5,22,44,55};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int i;
//     int sum=0;
//     for(i=0;i<len;i++) {
//         sum=sum+arr[i];
//     }
//     printf("sum=%d",sum);
// }

// 反转数组(从键盘录入5个数据)
// void printArr(int arr[],int len);
// int main() {
//     int i;
//     int arr[5]={0};
//     int len=sizeof(arr)/sizeof(int);
//     for(i=0;i<len;i++) {
//         printf("please enter %d number:",i+1);
//         scanf("%d",&arr[i]);
//     }
//     //遍历打印
//     printArr(arr,len);
//     printf("\n");
//     //反转数组
//     int k=0;
//     int j=len-1;
//     while(k<j) {
//         int temp=arr[k];
//         arr[k]=arr[j];
//         arr[j]=temp;
//         k++; j--;
//     }
//     //遍历打印
//     printArr(arr,len);
//
//     return 0;
// }
// void printArr(int arr[],int len) {
//     for(int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }

//简洁版反转数组
// int main() {
//     int arr[]={1,2,3,4,5};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     int j=len-1;
//     while(i<j) {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++,j--;
//     }
//     for(int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }