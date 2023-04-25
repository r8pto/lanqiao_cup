#include <iostream>
#include<string>
#include<cstdlib>  // 包含abs()函数的头文件
using namespace std;



int main()
{
  // 请在此输入您的代码
  // 1. 输入一个正整数，表示公元年份<9999
    int year;
    cin >> year;
    // 2. 计算其天干地支的年份
    string tian[10] = { "geng", "xin", "ren", "gui""jia", "yi", "bing", "ding", "wu",
                      "ji"};
      
    string di[12] = {"zi", "chou", "yin", "mao", "chen", "si",
                     "wu","wei","shen","you","xu","hai"};
    // 以1960为base的话，就可以用1900和2020来验证，因为它是60年一轮 
    int base = 1960;
    // 60年为一轮 
    if((abs(year-base))<=60){
        cout<<tian[abs(year-base)%10]<<di[abs(year-base)%12]<<endl;
    }else{
        int n = abs(year-base)/60;
        if(year>base){
            base = base+n*60;
            cout<<tian[abs(year-base)%10]<<di[abs(year-base)%12]<<endl;
        }else{
            base = base - n*60;
            cout<<tian[abs(year-base)%10]<<di[abs(year-base)%12]<<endl;
        }
        
    }

  
  return 0;
}