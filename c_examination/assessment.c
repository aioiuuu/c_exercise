//c语言程序总是从main()函数开始执行
//用c语言编写的代码经过编译才能执行
//c语言是典型的结构化程序设计语言

#include <stdio.h>



//todo:求和sum=1-1/3+1/5-1/7+....-1/99

//参与运算的两个变量全是 int 整型，执行整数除法
//混合类型除法（一个 int，一个 double）
// C 语言会触发类型自动转换：int 先转为 double，再做除法

// int main() {
//     int i;
//     double sum=0;
//     int sign=1;
//     for (i=1;i<100;i+=2) {
//         sum+=sign*1.0/i;
//         sign=-sign;
//     }
//     printf("%f",sum);
// }

//todo:输出所有的水仙花数
//水仙花数是一个3位数
//其本身等于它个数的立方和
// int main() {
//     int i,j,k;
//     for (i=1;i<10;i++) {
//         for (j=0;j<10;j++) {
//             for (k=0;k<10;k++) {
//                 if (i*100+j*10+k==i*i*i+j*j*j+k*k*k) {
//                     printf("%d%d%d\n",i,j,k);
//                 }
//             }
//         }
//     }
// }


//todo:阶乘求和
// int main() {
//     int sum = 0;
//     int i,j;
//     for (i=1;i<=10;i++) {
//         int k=1;
//         for (j=1;j<=i;j++) {
//             k*=j;
//         }
//         sum+=k;
//     }
//     printf("%d",sum);
// }



//todo:辗转相除法求最大公约数
// int main() {
//     int m,n;
//     scanf("%d %d",&m,&n);
//     if (m<n) {
//         int temp=m;
//         m=n;
//         n=temp;
//     }
//     int r=m%n;
//     while (r!=0) {
//         m=n;
//         n=r;
//         r=m%n;
//     }
//     printf("%d",n);
// }



//todo:判断一个数是不是素数
//定义一个标记变量is_prime=1,表示是素数
//用2~n-1去除以n,如果发现有一个能整除则flag=0，结束循环
//根据flag的值判断素数
// int main() {
//     int is_prime=1;
//     int n;
//     scanf("%d",&n);
//     if (n==1) {
//         is_prime=0;
//     }
//     for (int i=2;i<n;i++) {
//         if (n%i==0) {
//             is_prime=0;
//             break;
//         }
//     }
//     if (is_prime==1) {
//         printf("%d",is_prime);
//     }
//     else {
//         printf("not a prime number");
//     }
// }


//todo:把一个正整数变成它的反序数
// int main() {
//     int n;
//     scanf("%d",&n);
//     int j=0;
//     while (n!=0) {
//         int k;
//         k=n%10;
//         j=j*10+k;
//         n/=10;
//     }
//     printf("%d",j);
// }


//todo:判断一个数是不是完数(完数等于所有因子之和)
// int main() {
//     int n,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<n;i++) {
//         if (n%i==0) {
//             sum+=i;
//         }
//     }
//     if (sum==n) {
//         printf("%d",n);
//     }
// }

//todo:打印图形
// *
// **
// ***
// ****
// *****

// int main() {
//     int i,j;
//     for (i=1;i<=5;i++) {
//         for (j=1;j<=i;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }



//todo:打印1-100以内的所有素数
// int main() {
//     int i,j;
//     for (i=2;i<=100;i++) {
//         int is_prime=1;
//         for (j=2;j<i;j++) {
//             if (i%j==0) {
//                 is_prime=0;
//                 break;
//             }
//         }
//         if (is_prime==1) {
//             printf("%d\n",i);
//         }
//     }
// }



//todo:求1000以内的所有完数
// int main() {
//     int i,j;
//     for (i=1;i<=1000;i++) {
//         int sum=0;
//         for (j=1;j<i;j++) {
//             if (i%j==0) {
//                 sum+=j;
//             }
//         }
//         if (i==sum) {
//             printf("%d\n",i);
//         }
//     }
// }


//todo:打印输出斐波那契数列的前20项
// int main() {
//     int i,f[21];
//     f[1]=1;
//     f[2]=1;
//     for (i=3;i<=20;i++) {
//         f[i]=f[i-1]+f[i-2];
//     }
//     for (i=1;i<=20;i++) {
//         printf("%d\n",f[i]);
//     }
// }

//todo:数组元素的逆序
// void reverse(int* a,int n) {
//     for (int i=0;i<n/2;i++) {
//         int temp=a[i];
//         a[i]=a[n-1-i];
//         a[n-1-i]=temp;
//     }
// }
//
// int main() {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     reverse(arr,10);
//     for (int j=0;j<10;j++) {
//         printf("%d ",arr[j]);
//     }
//     return 0;
// }


//todo:冒泡法排序
// void sort(int* a,int n) {
//     int i,j;
//     for(i=1;i<n;i++) {
//         for (j=0;j<n-i;j++) {
//             if (a[j]>a[j+1]) {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int arr[7]={1,5,7,2,3,6,8};
//     sort(arr,7);
//     for (int i=0;i<7;i++) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


//todo:求二维数组元素最大值

// int max(int a[5][5]) {
//     int max=a[0][0];
//     int i,j;
//     for(i=0;i<5;i++) {
//         for(j=0;j<5;j++) {
//             if(a[i][j]>max) {
//                 max=a[i][j];
//             }
//         }
//     }
//     return max;
// }
// int main() {
//     int arr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
//     int n=max(arr);
//     printf("%d",n);
// }



