#include<iostream>
using namespace std;

int main(){
    int nums[] = {3,2,4};
    int target = 6;
    int length = sizeof(nums)/sizeof(int);
    //cout <<"数组长度为：" << length <<endl;
    for(int i = 0; i <length; i++){
        for(int j=i+1; j <length; j++){
            int sum = nums[i] + nums[j];
            if(sum == target){
                cout<<"["<<i<<','<<j<<"]";
            }
        }
    }
    //system("spause");
    return 0;
