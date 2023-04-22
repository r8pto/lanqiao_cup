#include<iostream>
using namespace std;
/*
给你一个大小为m x n的矩阵mat, 请以对角线遍历的顺序
用一个数组返回这个矩阵中的所有元素
*/
int main(){
    int m,n;
    cin>>m>>n;
    int mat[m][n];
    // 1. 输入
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    // 2. 如何实现对角线遍历
    
}