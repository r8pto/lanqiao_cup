#include<iostream>
#include<vector>

using namespace std;

int main(){
    int num, startTime, endTime,count,consum;
    cin>>num;
    num*=2;
    vector<int> list;
    for(int i=0; i<num;++i){
        int j;
        cin>>j;
        list.push_back(j);
    }
    startTime = 1000001;
    endTime = 0;
    for(int i=0; i<num; i+=2){
        if(list[i]<startTime){
            startTime=list[i];
        }
        if(list[i+1]>endTime){
            endTime=list[i+1];
        }
    }
    consum = 0;
    for(int i=startTime; i<=endTime;i++){
        count=0;
        for(int j=0;j<num;j+=2){
            if(list[j]<=i && list[j+1]>=i){
                count++;
            }
        }
        if(count==0){
            consum++;
        }else if(count ==1){
            consum+=3;
        }else if(count>1){
            consum+=4;
        }
    }
    cout<< consum;

    return 0;
}