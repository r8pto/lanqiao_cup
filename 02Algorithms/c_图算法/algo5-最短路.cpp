#include <iostream>
#include <stdio.h>
#include <string.h>
#define inf 100000   // 定义一个无穷大数，用来初始化状态

using namespace std;
/*
SPFA算法（shortest path faster algorithm）——解决单源最短路问题（只有一个起点）
1. 初始化dis数组，起点到起点的距离为0,到其他点的距离为无穷大

2. 起点s入队，计算它所有邻居到s的最短路距离，并更新状态（把一个结点到起点s的最短路径简称为更新状态）

3. 把s出队，状态有更新的邻居入队，没更新的不入队。

4. 现在队列的头部是s的一个邻居u。弹出u,更新他所有邻居的状态，把有变化的邻居入队

5. 继续以上过程，直到队列空。---最后状态就是到起点s的最短路


*/
struct In{  // 定义一个结构体用来存放
    int e;
    int w;
    int next;
}map[200010];
int dis[20010],Q[20010];  // dis用以记录每个结点最短路径估计值，Q记录为当前队列
int vis[20010],head[20010];// vis用以记录加入过队列的点
void SPFA(int n){   // 构建SPFA算法
    int i,j,front,rear,temp;
    for(i=1;i<=n;i++){   // 初始化每个结点的值
        dis[i]=inf;
    }
    dis[1]=0;vis[1]=1;   // 起点加入过队列
    front=0; rear=1;  // 
    Q[front]=1; // 将起点加入队列
    while(front < rear){
        temp=Q[front++];
        vis[temp]=0;
        j=head[temp];
        while(j>0){
            if(dis[map[j].e]>map[j].w+dis[temp]){  
                dis[map[j].e]=map[j].w+dis[temp];  
                if(!vis[map[j].e]){  
                    Q[rear++]=map[j].e;  
                    vis[map[j].e]=1;   
                }  
            }  
            j=map[j].next;  

        }
        
    }
}


int main(){  
     int n,m,i,j,a,b,val;  
     while(~scanf("%d%d",&n,&m)){  
         memset(Q,0,sizeof(Q));  
         memset(head,0,sizeof(head));  
         memset(vis,0,sizeof(vis));  
         for(i=1;i<=m;i++){  
             scanf("%d%d%d",&a,&b,&val);  
             map[i].e=b;  
             map[i].w=val;  
             map[i].next=head[a];  
             head[a]=i;  
         }  
         SPFA(n);  
         for(i=2;i<=n;i++){  
             printf("%d\n",dis[i]);  
         }  
     }  
     return 0;  
} 