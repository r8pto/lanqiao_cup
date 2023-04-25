#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // 1. 输入一个数n
    int n;
    scanf("%d",&n);

    // 遍历每一位寻找满足条件的5位数
    for(int i=65;i<=70;i++)
        for(int j=65;j<=70;j++)
            for(int k=65;k<=70;k++)
                cout<<(char)i<<(char)j<<(char)k<<(char)j<<(char)i<<endl;

    return 0;
}