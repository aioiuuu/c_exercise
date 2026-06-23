//整数：short int long longlong
//小数：float double
//字符：char

#include <stdio.h>
// //定义字符串的两种方式
// int main () {
//     //利用字符数组，双引号的方式定义字符串
//     char str1[4]="abc";
//     printf("%s\n",str1);
//     //细节1
//     //在底层，实际存储的时候，
//     //c语言还是会帮我们把字符串‘abc’转换成字符数组进行存储，
//     //并且在末尾加上‘\0'
//
//     //细节2
//     //写数组长度的时候，要记得把结束的空间标记预留出来
//
//     //细节3：
//     //字符数组+双引号的方式定义字符串，内容是可以发生变化的
//     str1[0]='Q';
//     printf("%s\n",str1);
//
//     //利用指针+双引号的方式定义字符串
//     char* str2="abcd";
//     printf("%s\n",str2);
//     //利用指针+双引号的方式定义字符串，会把底层的字符串放在只读常量区
//     // str2[0]='Q';(错误)
//     printf("%s\n",str2);
// }



//需求：键盘录入一个字符串，使用程序在控制台遍历该字符串；
// int main () {
//     char str[100];
//     scanf("%s", str);
//     char* p = str;
//     while (*p!='\0') {
//         printf("%c\n", *p);
//         p++;
//     }
//     return 0;
// }

int main() {
    char strarr[5][100]=
    {
        "zhangsan",
        "lisi",
        "wangwu",
        "qinai1",
        "zhaoliu"
    };
    for (int i=0;i<5;i++) {
        char* str=strarr[i];
        printf("%s\n",str);
    }
}