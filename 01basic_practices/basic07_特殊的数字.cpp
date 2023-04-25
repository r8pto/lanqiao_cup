#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    // 要求输出的是十进制数
    //选择遍历100—999
    int sum =0;
    for(int i=100;i<=999;i++){
        // 得到这个三位数的百位，个位，十位
        int a,b,c;
        a=i%10; // 个位
        b=(i/10)%10; // 十位
        c=(i/100)%10; // 百位
        sum = a*a*a + b*b*b + c*c*c;
        sum = pow(a,3)+ pow(b,3)+pow(c,3);
        if(i==sum){
            cout << sum << endl;
        }
    }
}