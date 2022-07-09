#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>n
typedef long long ll;
using namespace std;
vector<int>a(n,vector<int>(n));
vector<vector<bool>>connect(10,vector<bool>(10,true)));
vector<bool>used(10,false);
int pattern[n];
int ans=100000;
void dfs(int depth,int time,int min,int max){
if(depth==n){
if(time<ans)ans=time;
return;
}
for(int i=min;i<max;i++){
if(depth>0){
if(connect[pattern[depth-1]][pattern[depth]]==true){
if(!used[i]]){
pattern[depth]=i;
used[i]=true;
dfs(depth+1,a[depth][i]+time,min,max);
used[i]=false;
}
}
}
else{
if(!used[i]]){
 pattern[depth]=i;
 used[i]=true;
 dfs(depth+1,a[depth][i]+time,min,max);
 used[i]=false;
}
}
}
int main(){
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
}
int m;
cin>>m;
for(int i=0;i<m;i++){
	int x,y;
	cin>>x>>y;
	connect[x-1][y-1]=false;
	connect[y-1][x-1]=false;
}
dfs(0,0,0,n);
cout<<ans<<endl;
return 0;
};
	

return 0;
}
