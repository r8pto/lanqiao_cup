#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // 1. 输入一个数n
    int n;
    scanf("%d",&n);

    // 遍历每一位寻找满足条件的5位数
    for(int i=1;i<=9;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
                if(i*2+j*2+k==n){
                    cout<<i<<j<<k<<j<<i<<endl;
                }

    // 遍历每一位寻找满足条件的6位数
    for(int i=1;i<=9;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
                if(i*2+j*2+k*2==n){
                    cout<<i<<j<<k<<k<<j<<i<<endl;
                }
    return 0;
}