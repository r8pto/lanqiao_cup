#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 自己定义函数时，要在形参那里声明变量
void output(vector<vector <int>> intervals) {
	// 输出测试
	for (auto i : intervals) {
		for (auto j : i) {
			cout << j<<" ";
		}
		cout << endl;
	}
}

int main(){
	// 笔试第一题也可以用这个数据类型来做
	// 1. 首先要定义一个题干要求的数据类型
	vector<vector <int>> intervals;
	int n;   // 想要合并的区间的个数
	cin >> n;
	for (int i = 0; i < n; ++i) {
		vector<int> interval;
		for (int j = 0; j < 2; ++j) {
			int k;
			cin >> k;
			interval.push_back(k);
		}
		intervals.push_back(interval);
	}
	// 先判断当intervals中只有一个元素时，直接返回
	if (n == 1) {
		output(intervals);
	}

	// 2. 对intervals里面的数进行排序，想要找到最大区间
	sort(intervals.begin(), intervals.end());    // 对原来输入的序列进行排序

	vector<vector<int>> vec;
	vec.push_back(intervals[0]);  // 先输入第一个区间
	int j = 0;
	for (int i = j + 1; i < n; i++) {
		// 这里是和已经选取了的集合进行比较，因此能进行有效的更新
		if (intervals[i][0] <= vec[j][1]) {  // i比j大1，这里的意思是下一个集合的起点大于上一个集合的终点
			vec[j][1] = max(vec[j][1], intervals[i][1]);   // 输出较大的那个范围
		}
		else {
			vec.push_back(intervals[i]);  // 没有重叠，则直接输出一个集合
			j++;
		}
	}

	output(vec);


	system("pause");
	return 0;
}