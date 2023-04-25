#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, target;
	vector<int> nums;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int j;
		cin >> j;
		nums.push_back(j);
	}
	cin >> target;
	// 用这个当找不到时会报错
	//auto index = find(nums.begin(), nums.end(), target);  // 这里变量一定要用auto--->得到的是一个指针
    // cout << *index;
	// 1. 先编写一个复杂度为O(n2)的算法
	//int count = 0;
	//for (int i = 0; i < n; ++i) {
	//	if (nums[i] == target) {
	//		cout << i;
	//		break;
	//	}
	//	count++;
	//	if (count == n) {
	//		for (int j = 0; j < n; j++) {
	//			if (target < nums[0]) {
	//				cout << 0;
	//				break;
	//			}

	//			if (j == n-1) {
	//				cout << nums.size();
	//				break;
	//			}
	//			if (nums[j] < target && nums[j+ 1]> target) {
	//				cout << j+1;
	//			}
	//		}
	//	}

	//}
	// 2. 复杂度为log2n的算法
	int left, right;

	if (target < nums[0]) {   // 这种情况是target < nums[0]的
		cout << 0;
	}
	left = 0;
	right = nums.size() - 1;
	int i;
	while (left <=  right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			cout <<mid;
		}
		else if (nums[mid] < target) {
			// 猜小了
			left = mid + 1;
		}
		else {
			// 猜大了
			right = mid - 1;
		}
	}
	// return left;  


	return 0;
}