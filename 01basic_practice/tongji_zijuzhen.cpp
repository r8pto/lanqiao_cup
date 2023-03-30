#include<iostream>
using namespace std;


int main(){
    // 1. 输入矩阵参数N,M,K
    int N, M, K;
    cin >>N >> M >> K;
    int matrix[N][M];
    // 2. 生成一个矩阵
    // 如何存储该矩阵？
    for(int i =1; i <= N; i++){
        for(int j =1; j <= M; j++){
            matrix[i][j] = (i-1) * M +j;
        }
    }

    // 3.统计满足条件的子矩阵
    

    // 4.打印一个矩阵
    for(int i =1; i <=N;i++){
        for(int j = 1; j <=M; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "满足条件的子矩阵数量：" << endl;
     
    return 0;
}