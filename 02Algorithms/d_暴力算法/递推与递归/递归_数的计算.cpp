#include <iostream>
using namespace std;
/* 找到一个自然数，在其左边加上一个自然数，但该自然数不能超过原数的一般

       问一直这样操作，最多能操作几次 */
// 构建递归函数
int res =1;

void f(int n){
    if(n==1) return;
    for(int i=1;i<=n/2;i++){
        res ++;
        f(i);  // 递归调用f(i),计算新得到的数下满足条件的数的个数
    }
}

int main(){
    // 1. 输入
    int n;
    cin >>n;

    // 2. 递归
    f(n);
    

    // 3. 输出
    cout<<res;
    return 0;
}
