#include <iostream>
using namespace std;

const int N = 19, M = 19;
void add(char a, char b, int c){
// 定义一个邻接矩阵用来保存相邻节点与边长
int G[N][M] = {};   // 初始化矩阵
int i = a - 'A' + 1;
int j = b - 'B' + 1;
G[i][j] = c;

return G[N][M];
};
  // 请在此输入您的代码


int main(){
    add('A', 'B', 2);
    add('A', 'C', 1);
    add('A', 'D', 1);
    add('A', 'E', 1);
    add('B', 'J', 2);
    add('B', 'G', 1);
    add('C', 'D', 3);
    add('C', 'F', 3);
    add('C', 'G', 3);
    add('D', 'E', 1);
    add('D', 'G', 3);
    add('D', 'H', 1);
    add('D', 'I', 3);
    add('E', 'H', 1);
    add('E', 'I', 2);
    add('F', 'J', 1);
    add('F', 'G', 1);
    add('G', 'I', 3);
    add('G', 'K', 2);
    add('H', 'I', 1);
    add('H', 'L', 2);
    add('I', 'M', 3);
    add('J', 'S', 2);
    add('K', 'L', 3);
    add('K', 'N', 1);
    add('K', 'P', 2);
    add('L', 'M', 1);
    add('L', 'R', 1);
    add('M', 'N', 2);
    add('M', 'Q', 1);
    add('M', 'S', 1);
    add('N', 'P', 1);
    add('O', 'P', 1);
    add('O', 'Q', 1);
    add('O', 'R', 3);
    add('R', 'S', 1);

  }
  return0