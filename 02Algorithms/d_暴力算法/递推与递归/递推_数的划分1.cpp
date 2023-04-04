#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int n, int m){
	if(n==0 || m==0 || n<m){ // 第一种情况：输入错误的情况 
		return 0;
	}
	if(m==1 | n==m){  // 第二种情况：只有一种情况只有n或者全是1 
		return 1;
	}else{
		return f(n-m,m) + f(n-1,m-1); // 这里正常运算没看懂 
	}
}


int main(int argc, char** argv) {
	int n, k;
	cin>>n>>k;
	cout << f(n,k) << '\n'; 
	return 0;
}
