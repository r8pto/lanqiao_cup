#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 自己设计一个排序函数
bool com(string s1, string s2){
    if(s1.size() > s2.size()){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int n;   // 表示输入的单词数量
    cin>>n;
    vector<string> strs;
    // 1. 输入相应的东西
    for(int i=0;i<n;i++){
        string j;
        cin>>j;
        strs.push_back(j);
    }
    // 别人的方法
    // string same;
    //     same = strs[0];  // 他这里没排序，怎么确保strs[0]就是最小的子串
    //     for(int i = 1; i < strs.size(); i++)
    //         for(int j = 0; j < same.size(); j++)
    //             if(same[j] != strs[i][j])
    //                 same.erase(j);  // 这里用了一个方向思维，如果没有就抹掉
    //     return same;
    //2. 最长公共前缀，C++和python中的字符是可以比较的
    sort(strs.begin(), strs.end(), com); // 不是按字符的数量排序
    string s;  // 存放相同的字符
    // 还要考虑只有一个单词的情况
    if(n==1){
        s = strs[0];
    }

    for(int i=0;i<strs[0].size(); i++){  // 最短的单词的字符数量
        for(int j=0;j<n-1;j++){
            if(strs[j][i]== strs[j+1][i]){  // 还要考虑 car 和  cir这种情况
                if(j==n-2){  // 执行到n-2还没有推出循环
                    s.push_back(strs[j][i]);
                }
            }
            
        }
        
    }
    if(s.empty()){
        cout<< "";
    }else{
        cout<<s;
    }
    
    return 0;

}
