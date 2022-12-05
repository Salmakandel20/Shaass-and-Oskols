#include<iostream>
using namespace std;
int main(){
	const int MAX=100;
int  birds[MAX];
int n,x,y,num_kill_birds;
cin>>n;
for(int i=0;i<n;i++){
	cin>>birds[i];
}
cin>>num_kill_birds;
for(int i=0;i<num_kill_birds;i++){
	cin>>x>>y;
	--x;
	if(x!=0) birds[x-1]+=y-1;
	if (x!=n-1)   birds[x+1]+=birds[x]-y;
	birds[x]=0;
}

for(int i=0;i<n;i++){
	cout<<birds[i]<<endl;
}

}
