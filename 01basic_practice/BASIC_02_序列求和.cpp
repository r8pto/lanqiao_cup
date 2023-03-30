#include<iostream>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    if(1<n<200){
        int sum = 0;
        for (int i = 1;i <= n;i++){
            sum = i + sum;
        }
        cout<<sum<<endl;
    }else{
        std::cout << "请输入范围在1<n<200的数"<<endl;
    }

    return 0;
}
