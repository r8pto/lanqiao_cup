#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calculateDayOfYear(string day, const vector<int> &prefixSum){
	int month = stoi(day.substr(0, 2));  // 将n进制字符串转化为十进制，使用时包含头文件string 
	int date = stoi(day.substr(3));
	return prefixSum[month - 1] + date;  // 计算前缀和的思想，将每个月当作一个数组，计算那些和，求出总共的天数 
}

int main(int argc, char** argv) {
	// 1. 依次输入日期参数 
	string arriveAlice, leaveAlice, arriveBob, leaveBob;
	 
	cin>>arriveAlice>>leaveAlice>>arriveBob>>leaveBob;
	vector<int> datesOfMonths = {31, 28, 31, 30, 31, 30, 31, 31,
								30, 31, 30, 31};  // 定义一年中所有月份的天数 
								
	vector<int> prefixSum(1, 0);  // 前缀和计算 
	    for (int date : datesOfMonths) {
            prefixSum.emplace_back(prefixSum.back() + date);   
        }

        int arriveAliceDay = calculateDayOfYear(arriveAlice, prefixSum);  // 计算出时一年中的多少天 
        int leaveAliceDay = calculateDayOfYear(leaveAlice, prefixSum);
        int arriveBobDay = calculateDayOfYear(arriveBob, prefixSum);
        int leaveBobDay = calculateDayOfYear(leaveBob, prefixSum);
        cout<<max(0, min(leaveAliceDay, leaveBobDay) - max(arriveAliceDay, arriveBobDay) + 1) <<endl;


}


