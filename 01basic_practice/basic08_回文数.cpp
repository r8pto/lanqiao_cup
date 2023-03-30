#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // 输出所有四位的回文数
    // 1000<n<9999
    // 遍历？暴力求解
    for(int i=1000;i<=9999;i++){
        // 得出i的个十百千位
        int a,b,c,d,temp;
        a = i%10;
        temp = i/10;
        b = temp %10;
        temp = temp / 10;
        c = temp % 10;
        temp = temp / 10;
        d = temp % 10;
        if(a==d && b==c){
            cout << i << endl;
        }
    }
}