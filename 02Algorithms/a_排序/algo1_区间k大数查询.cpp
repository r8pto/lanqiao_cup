#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

bool com(int x, int y){
    return (x>y);
}

int main(){
    // 输入：序列长度，序列元素，询问次数，操作数（区间、要查询的个数）
    int n,i,j,m;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m][3];
    for(i=0;i<m;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // 输入无误，开始进行查询，找第K大的数，用降序排列会好一些
    
    // for(i=0;i<n;i++){
    //     cout<<a[i];
    // }

    for(i=0;i<m;i++){
        int length = b[i][1]-b[i][0]+1;
        int c[length];
        int x=b[i][0];
        int y=b[i][1];
        int index=0;
        for(j=x-1;j<y;j++){
            c[index]=a[j];
            index++;
        }
        sort(c,c+length,com);
        int k=b[i][2];
        cout << c[k-1]<<endl;
    }

}