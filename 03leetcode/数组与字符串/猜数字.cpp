#include<iostream>

using namespace std;

int pick;
int guess(int num) {   // 定义主持人函数，告诉我猜成什么样了
	if (num > pick) {
		return -1;
	}
	else if(num < pick){
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int n, left, right, mid;
	cin >> n >> pick;
	left = 1;
	right = n;
	while (left <= right) {
		mid = left + (right - left) / 2;
		if (guess(mid) == 0) {
			cout << mid;
			break;
		}
		else if (guess(mid) == -1) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return 0;
}
