#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long n, ans;
    cin>>n;
    if(n<=2){
        ans = n;
    }else if(n%2==1){  // 如果不能被2整除
        ans=n*(n-1)*(n-2);
    }else{
        if(n%3==0){// n能被3整除的话，n-3也能被3整除
            ans=(n-1)*(n-2)*(n-3);
        }else{
            ans = n*(n-1)*(n-3);
        }
        
    }
    cout<<ans<<endl;
    return 0;
}
//int main(){
// /*错了*/
//     // 输入一个整数N——为了获取1～N的数
//     int N,i,j,n;
//     scanf("%d", &N);
//     int a[N];
//     n=1;
//     // 生成一个有所有解的数组
//     for(i=0;i<N;i++){
//         a[i]=n;
//         n++;
//     }

//     // 如何求出最大最小公倍数
//     // 1. 如何求最小公倍数
//     int result=0;
//     for(i=0;i<N-2;i++){
//         int sum =0,b1=1,c1=1,d1=1;
//         for(j=1;j<a[i+2];j++){
//             int b = a[i]%j;
//             int c = a[i+1]%j;
//             int d = a[i+2]%j;
//             //cout <<b<<c<<d<<" ";
//             // 用了两次贪心，这里求最大公约数也是用的贪心
//             if(b==c){
//                 b1=j;
//             }
//             if(d==b){
//                 d1=j;
//             }
//             if(c==d){
//                 c1=j;
//             }
//             //cout << b1<<" "<<d1<<" "<<c1<<endl;
//         }
//         sum = (a[i]*a[i+1]*a[i+2])/(b1*c1*d1);
//         cout << b1 << " " << c1 << " "<<d1<<endl;
//         cout << sum<<endl;;
//         //cout<<sum<<" ";
        

//         // 贪心算法的核心感觉就是遍历所有结果，如果比现在结果大就保留，小则舍弃
//         if(result<sum){
//             result=sum;
//         }
//     }
//     cout << result<<endl;
//     return 0;


//}