#include<iostream>
using namespace std;       //已知1900到1959是一个循环，1900是庚子，我们移动这个区间
                                         // 包含目标年份再遍历即可
int main()
{
    int year;       //所求年份
    int T=6, D=0;  //区间最左是庚子
    string TianGan[10] = { "jia","yi","bing","ding","wu","ji","geng","xin","ren","gui" };
    string DiZhi[12] = { "zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai" };
    int left = 1900, right = 1959;
    cin >> year;
    // 制造一个区间供其变动
    while (year < left)             //在区间左边就往左移，
    {
        left -= 60; right -= 60;
    }
    while (right < year)         //在区间右边就往右移
    {
        left += 60; right += 60;
    }

    for (int i = left + 1;i <= year;i++)         //遍历
    {
        T = (T + 1) % 10; D = (D + 1) % 12;
    }
    cout << TianGan[T] << DiZhi[D];
    return 0;
}