#include <stdio.h>

// 二的幂次
int main()
{
    int n;
    scanf("%d",&n);
    while (n>1 && n%2==0)
    { n/=2; }
    if (n==1)
    {printf("yes");}
    else
    {printf("no");}
    return 0;
}

// 折纸珠穆朗玛峰
// int main()
// {
//     float paper=0.1;
//     int k=0;
//     while (paper<=8844430) {
//         paper=paper*2;
//         k++;
//     }
//     printf("%d\n",k);
// }


// 整数反转
// int main()
// {
//     int a=0;
//     int b;
//     int c=0;
//     scanf("%d",&b);
//     while (b!=0) {
//         c=b%10;
//         a=a*10+c;
//         b/=10;
//     }
//     printf("%d\n",a);
// }

// 平方根
// int main()
// {
//     int x;
//     int i=1;
//     scanf("%d",&x);
//     for (i=1;i<=x;i++) {
//         if (i*i<=x && (i+1)*(i+1)>x)
//         {printf("%d\n",i);}
//     }
//
// }

// 回文数
// int main() {
//     int n;
//     scanf("%d",&n);
//     int c=n;
//     int temp;
//     int target=0;
//     while (n!=0) {
//         temp=n%10;
//         target=target*10+temp;
//         n=n/10;
//     }
//     if (c==target) {
//         printf("yes");
//     }
//     else {
//         printf("no");
//     }
// }

// 自增自减运算符练习
// int main()
// {
//     int a=10;
//     a++;
//     ++a;
//     a--;
//     --a;
//     printf("%d\n",a);
// }

// 自增自减运算符参与运算
// int main() {
//     int a=10;
//     int b=a++;
//     printf("%d\n",b);
// }

// int main() {
//     int a=10;
//     int b=++a;
//     printf("%d\n",b);
// }

// int main() {
//     int a=10;
//     int k1=a++ + a++;
//     int k2=++a + ++a;
//     int k3=++a + a++;
//     int k4=a++ + ++a;
//     printf("%d\n",k1);
//     printf("%d\n",k2);
//     printf("%d\n",k3);
//     printf("%d\n",k4);
// }


// 逗号运算符
// int main() {
//     int i;
//     printf("%d\n",(i=3,++i,i++,i+5));
// }

// int main() {
//     int num=-17;
//     num = num >= 0 ? num : -num , num%=3 , num*=10;
//     printf("%d\n",num);
// }


// 正向/反向打印数字
// int main() {
//     int i;
//     for (i=1;i<=5;i++) {
//         printf("%d\n",i);
//     }
// }

// int main() {
//     int i;
//     for (i=5;i>=1;i--) {
//         printf("%d\n",i);
//     }
// }

// 求和
// int main() {
//     int i;
//     int sum=0;
//     for (i=1;i<=5;i++) {
//         sum+=i;
//     }
//     printf("sum=%d\n",sum);
// }

// 求1到100之间的偶数和
// int main() {
//     int i;
//     int sum=0;
//     for (i=2;i<=100;i+=2) {
//         sum+=i;
//     }
//     printf("sum=%d\n",sum);
// }


// 统计满足条件的数字
// int main() {
//     int m,n;
//     int i;
//     scanf("%d%d",&m,&n);
//     for (i=m;i<=n;i++) {
//         if (i%6==0 && i%8==0) {
//             printf("%d\n",i);
//         }
//     }
// }


// 打印形状
// *****
// *****
// *****

// int main() {
//     int i,j;
//     for (i=1;i<=3;i++) {
//         for (j=1;j<=5;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 打印形状
// *****
// ****
// ***
// **
// *

// int main() {
//     int i,j;
//     for (i=1;i<=5;i++) {
//         for (j=5;j>=i;j--) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int i,j;
//     for (i=1;i<=5;i++) {
//         for (j=1;j<=i;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// 打印九九乘法表
// int main() {
//     int i,j;
//     for (i=1;i<=9;i++) {
//         for (j=1;j<=i;j++) {
//             printf("%d*%d=%d\t",i,j,i*j);
//         }
//         printf("\n");
//     }
// }

// 给定整数n,获取所有小于等于n的质数的数量
// int main() {
//     int i,j;
//     int n=100;
//     int count=0;
//     for (i=2;i<=n;i++) {
//         int is_prime=1;
//         for (j=2;j<i;j++) {
//             if (i%j==0) {
//                 is_prime=0;
//                 break;
//             }
//         }
//         if (is_prime==1) {
//             count++;
//         }
//     }
//     printf("%d\n",count);
// }

// int prime(int x) {
//     if (x<=1) {
//         return 0;
//     }
//     int i;
//     int is_prime = 1;
//     for (i=2;i<x;i++) {
//         if (x%i == 0) {
//             is_prime = 0;
//             break;
//         }
//     }
//     if (is_prime) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
//
// int main() {
//     int n=100;
//     int j,count=0;
//     for (j=0;j<n;j++) {
//         if (prime(j)) {
//             count++;
//         }
//     }
//     printf("%d\n",count);
// }



// 计算数字
// 1**1 + 2**2 + 3**3 + 4**4 +.....+ 10**10 =?
// int main() {
//     int i,j;
//     long long sum=0;
//     for (i=1;i<=10;i++) {
//         long long temp=1;
//         for (j=1;j<=i;j++) {
//             temp=temp*i;
//         }
//         sum=sum+temp;
//     }
//     printf("sum=%lld\n",sum);
// }



// 计算出0-1000中各个位置数字之和为15的数
// int main() {
//     int i;
//     int n=1000;
//     for (i=1;i<=n;i++) {
//         int j=0;
//         int temp=0;
//         int c=i;
//         while (c !=0) {
//             temp=c%10;
//             j+=temp;
//             c/=10;
//         }
//         if (j==15) {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// 函数写法
// int sum_num(int x) {
//     int temp=0;
//     while (x!=0) {
//         temp+=x%10;
//         x/=10;
//     }
//     return temp;
// }
//
// int main() {
//     int i;
//     int n=1000;
//     for (i=1;i<=n;i++) {
//         int a;
//         a=sum_num(i);
//         if (a==15) {
//             printf("%d\n",i);
//         }
//     }
// }


// 定义一个函数求两数之和

// int sum(int a, int b) {
//     return a+b;
// }
//
// int main() {
//     int a=sum(1,2);
//     printf("%d\n",a);
//     return 0;
// }


// 定义一列函数返回函数的最大值

// int max(int a, int b) {
//     int max = a;
//     if (b > max) max = b;
//     return max;
// }
//
// int main() {
//     int a=max(10,13);
//     printf("%d\n",a);
//     return 0;
// }

// 定义一个函数返回圆的面积

// double area(double r) {
//     double s=3.14*r*r;
//     return s;
// }
// int main() {
//     double a=area(6);
//     printf("The area is %.2lf\n",a);
// }
