#include <stdio.h>
#include <string.h>

//编写函数fun,其功能是:删去一维数组中所有相同的数,
//使之只剩一个,数组中的数从小到大依次排列

int fun(int* a,int n) {
    if (n<=0) return 0;
    int k=0;
    for (int i=0;i<n;i++) {
        if (a[i] != a[k]) {
            k++;
            a[k] = a[i];
        }
    }
    return k+1;
}

int main() {
    int arr[] = {1,2,2,3,3,3,4,5,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int newlen = fun(arr, len);
    for (int i=0;i<newlen;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

//编写函数fun,其功能是:移动一维数组,将下标从0到p数组元素平移到数组最后,
//例如:一维数组中的原始内容为:1,2,3,4,5,6,7,8,9,10
//移动后:5,6,7,8,9,10,1,2,3,4
// void fun(int* w,int p,int n) {
//     int i,j,k;
//     for (i=0;i<=p;i++) {
//         k=w[0];
//         for (j=0;j<n;j++) {
//             w[j]=w[j+1];
//         }
//         w[n-1]=k;
//     }
// }
//
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int p=4;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     fun(arr,p,len);
//     for (int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }


//编写一个函数，函数的功能是删除字符串的所有功能，
//例如，主函数中输入“asd af aa z67”
//则输出为“asdafaaz67”

// void fun(char* str) {
//     int i=0,j=0;
//     while (str[i] != '\0') {
//         if (str[i] !=' ') {
//             str[j]=str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j]='\0';
// }
//
// int main() {
//     char s[] = "asd af aa z67";
//     printf("%s\n", s);
//     fun(s);
//     printf("%s\n", s);
//     return 0;
// }




//请编写一个交换函数，void swap(int* p,int* q)
//在mian函数中构造2个整形变量，通过调用swap函数进行交换
// void swap(int* p, int* q) {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }
//
// int main () {
//     int a=10;
//     int b=20;
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }


//功能：编写fun求一个字符串的长度，在main函数中输入字符串，并输出其长度
// int fun(char* p) {
//     int cnt = 0;
//     while (*p != '\0') {
//         cnt++;
//         p++;
//     }
//     return cnt;
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     int len = fun(str);
//     printf("The length of the string is: %d", len);
//     return 0;
// }



// int main() {
//     int k,j;
//     for (j=0,k=-1;k!=1;k++,j++) {
//         printf("****\n");
//     }
// }


// int f(int a) {
//     int b;
//     static int c=3;
//     b++;
//     c++;
//     return (a+b+c);
// }
// void main() {
//     int a=2,i;
//     for (i=0;i<3;i++) {
//         printf("%d",f(a));
//     }
// }



// int f1(int x,int y){return x>y?x:y;}
// int f2(int x,int y){return x<y?x:y;}
//
// int main() {
//     int a=4,b=3,c=5,d=2,e,f,g;
//     e=f2(a,b);
//     f=f1(c,d);
//     g=e+f;
//     printf("%d\n",g);
// }


// int f (int x) {
//     int y;
//     if (x==0||x==1) {
//         return 3;
//     }
//     y=x*x-f(x-2);
//     return y;
// }
// void main () {
//     int z;
//     z=f(3);
//     printf("%d\n",z);
// }


// int f1(int x,int y){return x>y?x:y;}
// int f2(int x,int y){return x>y?y:x;}
// int main() {
//     int a=4,b=3,c=5,d=2,e;
//     e=f2(f1(a,b),f1(c,d));
//     printf("%d",e);
// }


//函数的形参和实参分别占用不同的存储单元

//c语言的二维数组的定义中可以省略行数不可以省略列数
//列数是计算内存偏移的固定步长，必不可少

// int main() {
//     int n[3][3],i,j;
//     for (i=0;i<3;i++) {
//         for (j=0;j<3;j++) {
//             n[i][j]=i+j;
//         }
//     }
//     for (i=0;i<2;i++) {
//         for (j=0;j<2;j++) {
//             n[i+1][j+1]+=n[i][j];
//         }
//     }
//     printf("%d\n",n[i][j]);
// }


// int main() {
//     char st[20]="hello";
//     printf("%zu %zu\n",strlen(st),sizeof(st));
// }



// int main() {
//     char str[12]={'s','t','r','i','n','g'};
//     printf("%zu\n",strlen(str));
// }

// void sum(int a[])
// {a[0]=++a[1];}
//
// int main() {
//         int a[10]={10,9,8,7,6,5,4,3};
//         sum(&a[2]);
//         printf("%d\n",a[2]);
// }


//数组的下标本质上就是指针的偏移
//arr[i]==*(arr+i);
//arr:数组首地址
//i:偏移的元素个数


//scanf的用法
//普通变量必须加& scanf("%d",&x);
//字符数组，字符串不加&，因为本身就是地址 char s[10]; scanf("%s",s);


// int main() {
//     int aa[4][4]={{1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6}};
//     int i,s = 0;
//     for (i=0;i<4;i++) {
//         s+=aa[i][1];
//     }
//     printf("%d\n",s);
// }


// 字符串的赋值
// char s[4] = {'a','b','c'};
// 数组长度为4，只给前三个赋值，剩余元素编译器自动补0，等价于\0

//char s[3] = {'a','b','c'};
// 数组只有3个位置，全部存字母，没有空间存放结束符\0


// int main() {
//     char a[10]={'1','2','3','4','5','6','7','8','9','\0'};
//     int i=8;
//     printf("%s\n",&a[i-3]);
// }


// int main() {
//     int p[7]={11,13,14,15,16,17,18},i=0,k=0;
//     while (i<7&&p[i]%2) {
//         k+=p[i];
//         i++;
//     }
//     printf("%d\n",k);
// }



// void main() {
//     int a[10]={1,2,3,4,5,6,7,8,9,10},*p=&a[3],*q=p+3;
//     printf("%d\n",*p+*q);
// }


// int main() {
//     int a[3][2]={1,2,3,4,5,6},*p[3];
//     p[0]=a[1];
//     printf("%d",*(p[0]+1));
// }



// int main() {
//     int x[2][2]={4,3,2,1},*p=&x[0][0];
//     printf("%d\n",*(p+1));
// }




// int main() {
//     char* s[]={"apple","pear","peach"},*p;
//     p=s[1];
//     printf("%c,%s\n",*(p+1),s[0]);
// }
// s[0]-->指向字符串“apple”首地址
// s[1]-->指向字符串“pear”首地址
// s[2]-->指向字符串“peach”首地址


// void main() {
//     int i,x[3][3]={10,11,12,13,14,15,16,17,18},*p=&x[1][1];
//     for (i=0;i<4;i+=2) {
//         printf("%d\n",p[i]);
//     }
// }

//%3d限定读取3位数字，剩余数字留给%d;
// void main() {
//     int a,b;
//     scanf("%3d%d",&a,&b);
//     printf("%d,%d\n",a,b);
// }


//以0开头的整数是8进制数
//011=9
// void main() {
//     int a=011;
//     printf("%d\n",a==11?1:0);
// }

//(int)f是把浮点数强制转换为整形，会直接截断小数部分，只保留整数部分
// void main() {
//     float f=5.75;
//     printf("%d\n%f\n",(int)f,f);
// }


// int main() {
//     char name[20];
//     int num;
//     scanf("name=%s num=%d", name, &num);
//     printf("%s!\n", name);
// }

//==优先级高于=，先算判断b==2
// int main() {
//     int a=3,b=2,c,d;
//     c=a=3;
//     d=b==2;
//     printf("%d\n",c);
//     printf("%d\n",d);
// }


// int main() {
//     int i,j,m,n;
//     i=8;j=10;
//     m=++i;
//     n=j++;
//     printf("%d,%d,%d,%d",i,j,m,n);
// }


// int main() {
//     int a,k;
//     k=(a=2*5,a*4,a+3);
//     printf("%d",k);
// }


// int main() {
//     int a,b;
//     printf("%d",(a=2)&&(b=-2));
// }

//&&的短路特性
//a=0,结果为假，触发短路，右边完全不执行
// int main() {
//     int a,b=99;
//     (a=0)&&(b=5);
//     printf("%d",b);
// }


// char型变量本身存放的是ASCII码值



//关系运算符（>,>=,<,<=,==,!=）优先级 高于赋值运算符=
//
// int main() {
//     int a=3,b=a>3,c=a>=3;
//     printf("%d,%d",b,c);
// }


//编写函数对数组中的数据进行冒泡排序
// void sort(int a[], int n) {
//     int i,j;
//     for (i=1;i<n;i++) {
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
//     int arr[5]={1,7,2,3,5};
//     sort(arr,5);
//     for (int i=0;i<5;i++) {
//         printf("%d ",arr[i]);
//     }
// }


//功能：统计数组中数字的平均数，最大数，以及最大数的个数
// int max = 0;
// int k = 0;
// float fun(int arr[], int n) {
//     int i;
//
//     float sum = 0;
//     float average = 0;
//     //遍历计算数字之和
//     for (i=0;i<n;i++) {
//         sum = sum + arr[i];
//     }
//     average = sum/n;
//     //遍历得到数组的最大值
//     for (i=0;i<n;i++) {
//         if (arr[i]>max) {
//             max = arr[i];
//         }
//     }
//     //统计最大值的个数
//     for (i=0;i<n;i++) {
//         if (arr[i]==max) {
//             k++;
//         }
//     }
//     return average;
// }
//
// int main() {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     float ave =fun(arr, 10);
//     printf("The average is %.2f\n",ave);
//     printf("max=%d\n",max);
//     printf("num=%d\n",k);
// }


//遍历一个N*N数组周边元素并求其平均值
// #define N 5
// double fun (int w[N][N]) {
//     int i,j;
//     double sum=0;
//     double ave=0;
//     for (i=0;i<N;i++) {
//         for (j=0;j<N;j++) {
//             if (i==0 || j==0 || i==N-1 || j==N-1) {
//                 sum+=w[i][j];
//             }
//         }
//     }
//     ave=sum/(4*N-4);
//     return ave;
// }
// int main() {
//     int w[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
//     double ave=fun(w);
//     printf("%f",ave);
// }




//编写一个函数，其功能是将字符串的内容逆置
// void fun(char *str,int n) {
//     int i;
//     for (i=0;i<n/2;i++) {
//         int temp=str[i];
//         str[i]=str[n-1-i];
//         str[n-1-i]=temp;
//     }
// }
// int main() {
//     char str[100];
//     gets(str);
//     fun(str,strlen(str));
//     for (int i=0;i<strlen(str);i++) {
//         printf("%c",str[i]);
//     }
// }

