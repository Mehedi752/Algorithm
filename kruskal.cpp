#include<bits/stdc++.h>
using namespace std; 
int const N=1e3;
vector<int> graph[N];
vector<set<int>>conainer;

void mysha(){

     int m;  cin>>m;

      for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);


      }

      for(int i=0;i<m;i++){
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<'\n';
      }
cout<<'\n';
}

int main(){
    mysha();

    
    
}
