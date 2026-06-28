//c语言程序总是从main()函数开始执行
//用c语言编写的代码经过编译才能执行
//c语言是典型的结构化程序设计语言

#include <stdio.h>
#include <math.h>
#include <string.h>


//todo:求和sum=1-1/3+1/5-1/7+....-1/99

//参与运算的两个变量全是 int 整型，执行整数除法
//混合类型除法（一个 int，一个 double）
// C 语言会触发类型自动转换：int 先转为 double，再做除法

int main() {
    int i;
    double sum=0;
    int sign=1;
    for (i=1;i<100;i+=2) {
        sum+=sign*1.0/i;
        sign=-sign;
    }
    printf("%f",sum);
}

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



// todo:从键盘上输入x的值，利用分段函数计算y的值
// int main() {
//     int x,y;
//     scanf("%d",&x);
//     if (x<1) {
//         y=x;
//     }
//     else if (x>=1 && x<10) {
//         y=2*x-1;
//     }
//     else if (x>=10) {
//         y=3*x-11;
//     }
//     printf("%d\n",y);
//     return 0;
// }


// todo:从键盘输入两个变量和一个算数运算符（+，-，*，/，%）
// %c:单个字符（char）
// %s:字符串  （char*）
// int main() {
//     int x,y,z;
//     char op;
//     scanf("%d%c%d",&x,&op,&y);
//     switch (op)
//     {
//         case '+':
//             z=x+y;
//             break;
//         case '-':
//             z=x-y;
//             break;
//         case '*':
//             z=x*y;
//             break;
//         case '%':
//             z=x%y;
//             break;
//         case '/':
//             z=x/y;
//             break;
//         default:
//             z=-999999;
//             break;
//     }
//     printf("%d\n",z);
//     return 0;
// }




//todo:从键盘输入任意整数年份，判断是否为闰年，如果是闰年则标志1，否则就标志0
// int main() {
//     int x,flag;
//     scanf("%d",&x);
//     if (x%4==0 && x%100!=0) {
//         flag=1;
//     }
//     else {
//         flag=0;
//     }
//     printf("%d",flag);
//     return 0;
// }


//todo:请编写3到100（包含100）之间所有素数的平方根和，并输出和的值
//注意1：sum用double型
//注意2：double输出的占位符为%lf
//注意3：类型转换double(i)
// int main() {
//     int i,j;
//     double sum=0;
//     for (i=3;i<=100;i++) {
//         int is_prime=1;
//         for (j=2;j<i;j++) {
//             if (i%j==0) {
//                 is_prime=0;
//                 break;
//             }
//         }
//         if (is_prime==1) {
//             sum+=sqrt((double)i);
//         }
//     }
//     printf("sum=%f\n",sum);
// }



// todo:麦子的问题：一共64个棋盘格，第一个放一粒，后面每一格放它的2倍多；
// int main() {
//     int i;
//     double sum=0;
//     for (i=0;i<=63;i++) {
//         sum+=pow(2,i);
//     }
//     sum/=1.42e8;
//     printf("%f\n",sum);
//     return 0;
// }



//todo:36块砖，男搬4，女搬3，两个小孩抬1块砖，要求男女小孩各多少：
// int main() {
//     int i,j,k;
//     for (i=1;i<=8;i++) {
//         for (j=1;j<=12;j++) {
//             k=36-i-j;
//             if (i*4+j*3+k/2==36 && k%2==0) {
//                 printf("man=%d,woman=%d,children=%d\n",i,j,k);
//             }
//         }
//     }
//     return 0;
// }


//todo:求k!,所求阶乘的平方根作为函数值返回
// double fun(int k) {
//     int i;
//     double s=1;
//     for (i=k;i>=1;i--) {
//         s*=i;
//     }
//     return sqrt(s);
// }
// int main() {
//     int m;
//     scanf("%d",&m);
//     printf("%f",fun(m));
// }


//todo:阶乘函数
// int main() {
//     int i,k;
//     int s=1;
//     scanf("%d",&k);
//     for (i=k;i>=1;i--) {
//         s*=i;
//     }
//     printf("%d\n",s);
// }




//todo:求一个数组中大于平均数的个数
// int fun(int a[],int n) {
//     int i,count=0;
//     int sum=0;
//     double ave;
//     for (i=0;i<n;i++) {
//         sum+=a[i];
//     }
//     ave=sum/n;
//     for (i=0;i<n;i++) {
//         if (a[i]>ave) {
//             count++;
//         }
//     }
//     return count;
// }
//
// int main() {
//     int arr[]={1,3,6,9,4,23,35,67,12,88};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("%d",fun(arr,n));
// }




//todo:将大于形参m,且仅靠m的k个素数求和并返回到主函数

// int fun(int m,int k) {
//     int i;
//     int count=0,sum=0;
//     int n = m+1;
//     while (count<k) {
//         int is_prime=1;
//         for (i=2;i<n;i++) {
//             if (n%i==0) {
//                 is_prime=0;
//                 break;
//             }
//         }
//         if (is_prime==1) {
//             count++;
//             sum+=n;
//         }
//         n++;
//     }
//     return sum;
// }
//
// int main() {
//     int m,k;
//     scanf("%d %d",&m,&k);
//     printf("%d\n",fun(m,k));
// }


//todo:用循环实现一个五位正整数，将它倒序后返回给主函数输出，例如输入12345，输出应为54321
// int fun(int n) {
//     int k;
//     int s=0;
//     while (n!=0) {
//         k=n%10;
//         s=s*10+k;
//         n/=10;
//     }
//     return s;
// }
// int main() {
//     int n;
//     scanf("%d",&n);
//     printf("%d",fun(n));
// }



//todo:若形参ch中是小写字母就转换为大写字母，若是大写字母就转换为小写字母
//todo:若是数字字符就转换为阿拉伯数字，其他字符不变
// int fun(char ch) {
//     if (ch>='a' && ch<='z') {
//         ch=ch-32;
//     }
//     else if (ch>='A' && ch<='Z') {
//         ch=ch+32;
//     }
//     else if (ch>='0' && ch<='9') {
//         ch=ch-48;
//     }
//     return ch;
// }
// int main() {
//     char ch;
//     scanf("%c", &ch);
//     printf("%c", fun(ch));
//     return 0;
// }



//todo:编写函数fun,它的功能是：计算并输出n（包括n）以内能被5或9整除的的所有自然数的倒数之和
// double fun(int n) {
//     int i;
//     double sum=0;
//     for (i=1;i<=n;i++) {
//         if (i%5==0 || i%9==0) {
//             sum+=1.0/i;
//         }
//     }
//     return sum;
// }
//
//
// int main() {
//     int n;
//     scanf("%d",&n);
//     printf("%f",fun(n));
// }



//todo:编写函数fun，求fibonacci数列大于 t 的最小的一个数，结果由函数返回
// int fun(int t) {
//     int a=0,b=1;
//     while (b<=t) {
//         int temp=b;
//         b=a+b;
//         a=temp;
//     }
//     return b;
// }
//
// int main() {
//     int t=10;
//     printf("%d\n",fun(t));
// }





//todo:找出一批整数中最大的偶数
//todo:当数组名作为函数实参，数组作为函数形参时，数组会自动退化为指向数组首元素的指针
// int fun(int a[],int n) {
//     int max=a[0];
//     int i;
//     for (i=1;i<n;i++) {
//         if (a[i]>max && a[i]%2==0) {
//             max=a[i];
//         }
//     }
//     return max;
// }
//
// int main() {
//     int a[]={1,2,9,24,35,18};
//     int n=sizeof(a)/sizeof(a[0]);
//     printf("%d\n",fun(a,n));
// }




//todo:假如输入的字符串只包含字母和*号，请编写函数fun，它的功能是：删除字符串中所有的 * 号
// void fun(char str[]) {
//     int i=0,j=0;
//     while (str[i]!='\0') {
//         if (str[i]!='*') {
//             str[j]=str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j]='\0';
// }
// int main() {
//     char str[]={"asd***we"};
//     fun(str);
//     printf("%s\n",str);
// }


//todo:要求计算并输出不超过n的最大的k个素数以及他们的和，注意找到的k个素数要先保存到数组a中
// void fun(int n,int k) {
//     int i,j,p=0,sum=0;
//     int a[1000]={0};
//     for (i=2;i<=n;i++) {
//         int is_prime = 1;
//         for (j=2;j<=sqrt(i);j++) {
//             if (i%j==0) {
//                 is_prime = 0;
//                 break;
//             }
//         }
//         if (is_prime==1) {
//             a[p]=i;
//             p++;
//             if (p>=1000){break;}
//         }
//     }
//
//     int start = p - k;
//     for (i=start;i<p;i++) {
//         printf("%d ",a[i]);
//         sum+=a[i];
//     }
// }
//
//
// int main() {
//     // 测试示例：n=100，取最大5个素数
//     fun(100, 5);
//     return 0;
// }





// //todo:函数的功能是把s所指的字符串中的内容逆置
// void fun(char str[]) {
//     int i;
//     for (i=0;i<strlen(str)/2;i++) {
//         int temp=str[i];
//         str[i]=str[strlen(str)-i-1];
//         str[strlen(str)-i-1]=temp;
//     }
// }
// int main() {
//     char str[]={"abcdefg"};
//     fun(str);
//     printf("%s",str);
// }


//todo:编写函数用排序法，对数组中的数据从小到大的排序
// void sort(int a[], int n) {
//     int i,j;
//     for (i=0;i<n-1;i++) {
//         for (j=0;j<n-i-1;j++) {
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
//     int arr[]={1,2,5,3,8,4};
//     sort(arr,6);
//     for (int i=0;i<6;i++) {
//         printf("%d ",arr[i]);
//     }
// }



//todo:求统计一个给定字符串中文字母的个数
// int fun(char s[]) {
//     int i,count=0;
//     for (i=0;s[i]!='\0';i++) {
//         if (s[i]>='a' && s[i]<='z' || s[i]>='A'&&s[i]<='Z') {
//             count++;
//         }
//     }
//     return count;
// }
//
// int main() {
//     char s[]="12abc";
//     int a=fun(s);
//     printf("%d\n",a);
// }




//todo:编写一个函数fun求字符串的长度，在main函数中输入字符串，并输出其长度
// int fun(char *p) {
//     int i,count=0;
//     while (p[i]!='\0') {
//         count++;
//         i++;
//     }
//     return count;
// }
//
// int main() {
//     char str[]="asdfghrg";
//     int count=fun(str);
//     printf("%d\n",count);
// }



//todo:编写一个函数，函数的功能是删除字符串中的所有空格
// void fun(char *str) {
//     int i=0,j=0;
//     while (str[i]!='\0') {
//         if (str[i] != ' ') {
//             str[j] = str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j]='\0';
// }
//
// int main() {
//     char str[]=" asd fgh gfd";
//     fun(str);
//     printf("%s",str);
// }



//todo:请编写函数fun，函数的功能是去除一维数组里面相同的数，只保留一个，数组中的数按从小到大排列
// int fun(int *a,int n) {
//     int i=1,j=1;
//     for (i;i<n;i++) {
//         if (a[i]!=a[j-1]) {
//             a[j]=a[i];
//             j++;
//         }
//     }
//     return j;
// }