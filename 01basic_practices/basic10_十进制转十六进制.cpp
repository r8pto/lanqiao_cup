#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main(){
    // 1. 输入一个非负整数a
    int a,i=0,j;
    string str = "0123456789ABCDE"; // 这里若用字符数组就能得100分
    char arr[10];
    cin >> a;
    if(a==0){
        cout << "0";
        return 0;
    }
    while(a!=0){
        j = a%16;
        arr[i++]=str[j];
        a = a/16;
    }
    for(j= i-1;j>=0;j--){
        cout << arr[j];
    }
}