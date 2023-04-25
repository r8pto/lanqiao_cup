#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // 输入n表示有n个fibonacci数列
    int n;
    scanf("%d",&n);
    int a[n];

    if(n==0){
        cout << 0;
    }else{
        a[0]=a[1]=1;
        for(int i=2;i<n;i++){
        a[i]=(a[i-1]+a[i-2])%10007;
        }
        cout << a[n-1]<<endl;
    // 先计算fibonacci数列，再取余会导致数组过大
    }
    return 0;

}