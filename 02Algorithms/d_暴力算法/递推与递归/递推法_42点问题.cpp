#include <iostream>
#include <vector>
using namespace std;
/*输入6个数，计算这6个数是否能通过加减乘除4中运算组成42点
  满足条件则输出YES
  不满足则输出NO
*/
int main(){
    // 1. 输入：6个字符3，4，5，6，7，8，9，10，J,Q,K,A,2
    int a[6];
    for(int i=0; i<6; i++){
        char c;
        cin>>c;
        switch (c)   // 用switch有点过于繁琐了。。。
        {
        case 'A' : a[i]=1;
            break;
        case '2' : a[i]=2;
            break;
        case '3' : a[i]=3;
            break;
        case '4' : a[i]=4;
            break;
        case '5' : a[i]=5;
            break;
        case '6' : a[i]=6;
            break;
        case '7' : a[i]=7;
            break;
        case '8' : a[i]=8;
            break;
        case '9' : a[i]=9;
            break;
        case '10' : a[i]=10;        
            break;         
        case 'J' : a[i]=11;
            break;
        case 'Q' : a[i]=12;
            break;
        case 'K' : a[i]=13;
            break;
        default:
            break;
        }
    }

    // 创建5个vectro存放1~5次运算结果
    vector <int> ans[10];  // 这里应该是创建了10个vector
    ans[0].push_back(a[0]);   // 让ans0位为第1个操作数
    
    for(int i=1; i<5;i++){ // 调用5个vector 用来存放1~5次运算的结果
        for(int j=0; j<ans[i-1].size();j++){// 计算+ - * / 每一次的运算结果并存放
            ans[i].push_back(ans[i-1][j]+a[i]); // 计算不同运算符下的和与下一数运算的结果，并添加到结果中
            ans[i].push_back(ans[i-1][j]-a[i]);
            ans[i].push_back(ans[i-1][j]*a[i]);
            ans[i].push_back(ans[i-1][j]/a[i]);
            cout << ans[i][j]<<" ";
        }
        cout <<endl;
    }

    int flag =0;
    for(int i=0; i<ans[5].size();i++){  // 在第5个vector中找是否满足
        if(ans[5][i]==42){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}