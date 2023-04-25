#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    int mat[row][col];
    // 1. 进行输入
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            cin>>mat[i][j];
        }
    }
    // 2. 根据对角线情况来进行突破,对角线计数从0开始
    vector<int> ans;
    if(row==0&&col==0){  // 如果是空则输出空
        cout<<" ";
    }
    int tot = row + col -1;   // 统计矩阵的对角线数量
    int c=0, r=0;
    for(int i=0; i<tot;i++){
        if(i%2!=0){ // 奇数情况，往左下移动
            c = (i<col) ? i : col-1;   // 三目运算符，若i<col,则输出i,否则输出col-1
            r = i - c;  // 通过这种情况来让对角线移动
            while(c>=0 && r<row){  // 
                ans.push_back(mat[r++][c--]); // 沿对角线输入
            }
        }
        else{  // 偶数情况，往右上移动
            r = (i<row) ? i:row-1;
            c = i - r;
            while(c<col && r >=0){
                ans.push_back(mat[r--][c++]);
            }
        }
    }
    // 3.输出
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }

}   