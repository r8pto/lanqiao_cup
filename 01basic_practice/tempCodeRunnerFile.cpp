#include<iostream>
#include<stdio.h>
#include<cmath>
#define MAX 32
using namespace std;

int main(){
    // 1. 输入一个非负整数a
    int a,i;
    scanf("%d", &a);
    string str = "0123456789ABCDE";
    int n = -1;
    int arr[MAX], temp;
    for(i=0;i<8;i++){
        int b = pow(16,i);
        temp = a/b;
        arr[i] = temp % 16;
        n+=1;
        if(temp==0){
            break;
        }
        
    }
    for(int j= n-1;j>=0;j--){
        int k = arr[j];
        cout << str[k];
    }
}