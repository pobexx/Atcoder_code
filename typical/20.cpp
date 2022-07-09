#include <iostream>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
long long d=1;
for(int i=0;i<c;i++){
	d*=b;
}
if(a<d)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
