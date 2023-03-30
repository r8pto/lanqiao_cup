#include<iostream>
using namespace std;

int main(){
    int n;
    std::cin >> n;
    long long sum = 0;
    for (int i = 1;i <= n;i++){
        sum = i + sum;
    }
    cout<<sum<<endl;


    return 0;
}
