#include<bits/stdc++.h>
using namespace std;
int n;
int f(n){
    string s0,s1="0",s2="1";
    for(int i=2;i<=n;i++){
        s0 = s1 + s2;
        s1 = s2;
        s2 = s0;
    }
    cout << s2;
    return 0;
}

int main(){
    cin<< n;

}