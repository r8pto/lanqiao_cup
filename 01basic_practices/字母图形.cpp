#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    char str[26] = {'A','B','C','D','E','F','H','I','J','K',
    'L','M','N','O','P','Q','R',
    'S','T','U','V','W','X','Y','Z'};
    // 1. 输入行和列的数
    int n,m,i,j;
    string s;
    scanf("%d %d",&n,&m);
    // 2. 循环生成每一行
    for(i=0;i<n;i++){
        int bef = i; // 保存当前i,i即为A前面字母个数
        for(j=0;j<m;j++){
            // 3. 当行数大于列数的递增时，从大到小输出
            if(bef>0){
                s += ('A'+bef);
                bef--;
            // 4. 当列数大于行数的递增时，从小到达输出
            }else{
                s += ('A'+(j-i));   // 因为当运行到这里的时候，j>=i
            }
        }
        // 每次输出完一行则换行
        cout << s << endl;
        s.erase(0); // 每次循环清空s
    }

}