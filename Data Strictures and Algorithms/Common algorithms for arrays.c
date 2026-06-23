#include <stdio.h>

//基本查找

int order(int arr[], int len,int num);
int main() {
    int arr[]={11,22,55,77,44};
    //定义要查找的数据
    int num=55;
    int len=sizeof(arr)/sizeof(int);
    int index=order(arr,len,num);
    printf("%d",index);
    return 0;
}

int order(int arr[], int len,int num) {
    for (int i=0; i<len; i++) {
        if (num==arr[i]) {
            return i;
        }
    }
    return -1;
}


//二分查找(折半查找)
// int binary_search(int arr[],int len,int tar)
// {
//     int min=0;
//     int max=len-1;
//     while(min<=max) {
//         int mid=(min+max)/2;
//         if (arr[mid]<tar) {
//             min=mid+1;
//         }
//         else if (arr[mid]>tar) {
//             max=mid-1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }
//
// int main() {
//     int arr[]={7,23,81,127,131,147};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int tar;
//     scanf("%d",&tar);
//     printf("%d",binary_search(arr,len,tar));
// }


//插值查找
// int search(int arr[],int len,int tar)
// {
//     int min=0;
//     int max=len-1;
//     while(min<=max) {
//         int mid=min+(tar-arr[min])/(arr[max]-arr[min])*(max-min);
//         if (arr[mid]<tar) {
//             min=mid+1;
//         }
//         else if (arr[mid]>tar) {
//             max=mid-1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     printf("%d",search(arr,len,7));
// }


//排序算法

//冒泡排序
// void rank(int arr[], int len) {
//     int i,j;
//     for (i=0;i<len-1;i++) {
//         for (j=0;j<len-i-1;j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int arr[]={3,5,2,1,4};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     rank(arr,len);
//     for (int i=0;i<len;i++) {
//         printf("%d ",arr[i]);
//     }
// }

// 选择排序
// void rank(int arr[],int len) {
//     int i,j;
//     for (i=0;i<len-1;i++) {
//         for (j=i+1;j<len;j++) {
//             if (arr[i]>arr[j]) {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }
//
// int main() {
//     int arr[]={1,3,2,5,4};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     rank(arr,len);
//     for (int i=0;i<len;i++) {
//         printf("%d",arr[i]);
//     }
// }
