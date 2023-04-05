#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // 1. 输入三个东西，人数，水龙头数，每个人接水所花费的时间
    int res=0;
    int n,m;
    cin >>n>>m;
    int a[n],num[m]={0};   // 这里一定要将num数组初始化为0,否则不能输出正确答案
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    // 贪心，如果不是最小则继续组合，最小则输出
    sort(a,a+n);   // 对打水时间进行排序，为了让其依次打水
    for(int i=0;i<n;){
        for(int j=0;j<m&&i<n;j++,i++){ // 把i放在这里确保不会多循环，这里不加i<n不能全对
            num[j]=num[j]+a[i];   // 这里的num[j]是在某个水龙头上打水所花费的时间
            res+=num[j];
        }
        
    }
    cout<<res;
}