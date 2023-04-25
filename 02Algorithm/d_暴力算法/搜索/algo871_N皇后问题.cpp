// #include <iostream>
// using namespace std;
// int x[15]={0};
// int sum ,n;
// int PD(int k){  // 判断是否符合放置条件,这里的k是当前所在列数？
//     for(int i=1;i<k;i++){
//         if(abs(k-i)==abs(x[k]-x[i])){ // 是否放置在斜线上
//             return 0;
//         }else if(x[k]==x[i]){  // 是否放置在同一列
//             return 0;
//         }
//     }
//     return 1;
// }

// bool check(int a){  // a表示当前是第a个皇后
//     if(a=n){
//         sum++;
//     }else{
//         return 0;
//     }
//     return 1;
// }

// void DFS(int a){
//     if(check(a)){
//         return;
//     }else{
//         for(int i=1; i<n; i++){
//             x[a]=i;  // 第a个皇后放置的列数
//             if(PD(a)){  // 判断是否能放
//                 check(a);
//                 DFS(a+1);  // 能的话进行下一个皇后的放置
//             }else{
//                 continue;  // 不能就下一列
//             }
//         }
//     }

// }



// int main(){
//     // 输入一个N,表示棋盘大小和皇后数量
//     cin>>n;
//     DFS(1);  // 每次都从第一个皇后开始
//     // 输出一个整数，表示皇后的不同摆法
//     cout << sum <<endl;
//     return 0;
// }
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

const int N = 15;

int n;
bool g[N][N];
int cnt;

bool check(int x, int y) {
    // 判断列
    for (int i = 1; i < x; i++) {
        if (g[i][y]) return false;
    }
    // 判断对角线
    for (int i = 1; i < n; i++) {
        int nx = x - i, ny = y - i;
        if (nx > 0 && ny > 0)
            if (g[nx][ny]) return false;
    }

    for (int i = 1; i < n; i++) {
        int nx = x - i, ny = y + i;
        if (nx > 0 && ny <= n)
            if (g[nx][ny]) return false;
    }

    return true;
}

void back(int l) {
    if (l == n + 1) {
        cnt++;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (check(l, i)) {
            g[l][i] = true;
            back(l + 1);
            g[l][i] = false;
        }
    }
}


int main() {
    cin >> n;
    back(1);
    cout << cnt << endl;
    return 0;
}

