#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>

using namespace std;

/*这个没得满分，不知道啥原因*/


int main(){
    // 1. 输入两个，数量，装饰品高度
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    // 2. 冒泡排序
    for(j = 0;j<n-1;j++){
        for(i =0;i<n-j-1;i++){
            if(a[i]>a[i+1]){
                temp = a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
                }
        }
    }



    for(i=0;i<n;i++){
        cout<<a[i];
    }
    // 3. 计算相邻两数之和
    int sum = 0;
    for(i=0;i<n-1;i++){
        sum+=abs(a[i+1]-a[i]);
    }
    printf("%d",sum);
    return 0;
}