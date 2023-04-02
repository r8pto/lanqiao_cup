#include<bits/stdc++.h>

using namespace std;

int a[100010];
int main(){
    int n, S;
    cin>>n >>S;
    for(int i=0;i<n;i++) cin>>a[i];

    int sum=0, ans=1e8; // 设立一个最大的值，与其比较

    // 采用滑动窗口的方法
    for (int i=0,j=0;i<n;){  // i和j表示每一次变化的区间，i是右区间
        if(sum<S){   
            sum+=a[i];
            i++;   // 移动右边的区间
        }else{
            ans=min(i-j,ans);
            sum-=a[j];
            j++;  // 如果满足要求就移动左边的区间
        }
    }
    if(ans=1e8){
        cout << 0;
    }else{
        cout << ans;
    }
    return 0;

}