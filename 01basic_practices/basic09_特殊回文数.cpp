#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    // 1. 输入一个正整数n，让i的所有数之和为n
    int n,sum=0;
    scanf("%d",&n);
    for(int i = 10000; i<=999999;i++){
        // 得出其个十百千万十万的数字
        int a,b,c,d,e,f,temp;
        a = i % 10;
        temp = i/10;
        b = temp % 10;
        temp = temp/10;
        c = temp % 10;
        temp = temp/10;
        d = temp % 10;
        temp = temp/10;
        e = temp % 10;
        if(i<100000){
            sum = a+b+c+d+e;
            if(a==e && b == d && sum==n){
                cout << i <<endl;
        }
        }

        if(i>=100000){
            temp = temp/10;
            f = temp % 10;
            sum = a+b+c+d+e+f;
            if(a==f && b == e && c==d && sum==n){
                cout << i <<endl;
            }
        }

                
    }
}