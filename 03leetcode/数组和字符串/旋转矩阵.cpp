#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin>>matrix[i][j];
        }
    }

    // 方法1：  这个方法占用了额外的空间
    // int matrixb[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0,k=n-1;j<n;j++,k--){
    //         matrixb[i][j] = matrix[k][i];
    //     }
    // }

    // 方法2： 利用swap函数，先对角线交换再水平交换
    // 对角线交换
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++)
            swap(matrix[i][j], matrix[j][i]);
    }
    // 水平交换
    for(int i=0;i<n;i++){
        for(int j=0; j<n/2;j++){
            swap(matrix[i][j], matrix[i][n-j-1]);
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}