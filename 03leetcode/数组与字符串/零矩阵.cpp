#include<iostream>
#include<vector>

using namespace std;
/*
编写一种算法，若M x N矩阵中某个元素为0,则将其所在的行与列清零
*/
int main(){
    cout<<"构造一个MxN的矩阵，请依次输入M、N"<<endl;
    int M, N;
    cin>>M >>N;
    int matrix[M][N];
    // 1. 构造矩阵matrix
    for(int i=0;i<M; i++){
        for(int j=0; j<N;j++){
            cin>>matrix[i][j];
        }
    }

    // 2. 如果矩阵中的元素为0,则将该元素所在行和列元素清零

    vector<int> col;
    vector<int> row;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(matrix[i][j]==0){
                col.push_back(j);
                row.push_back(i);
            }
        }
    }

    // 将保存好的列和行依次循环赋值
    for(int j : col){
        for(int k=0;k<M;k++){
            matrix[k][j]=0;  // 将0元素所在列赋0值
        }
    }

    for(int i:row){
        for(int k=0;k<N;k++){
            matrix[i][k]=0; // 将0元素所在行赋0
        }
    }
    // 3. 输出
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}