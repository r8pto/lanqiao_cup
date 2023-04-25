#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
// 在sort中加入com参数可以使其降序排列
// bool com(int x, int y){
//     return (x>y);
// }

int main(){
    // 输入两个东西：数组长度，数据具体元素
    int n,i,j;
    //bool com;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    sort(a,a+n);

    for(i=0;i<n;i++){
        cout << a[i]<<" ";
    }

    // 排序
}