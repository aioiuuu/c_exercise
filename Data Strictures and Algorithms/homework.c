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