#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    // 完成数据输入
    int n,i,j,temp;
    scanf("%d", &n);
    int a[n];
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for(int k=0;k<n;k++){
        sum+=a[k];
    }
    cout<<a[n-1]<<endl<<a[0]<<endl<<sum<<endl;
    return 0;
    
}