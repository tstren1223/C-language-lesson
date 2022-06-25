#include<stdio.h>

#define N 60

int start[N],target[N];//global以利遞迴寫法 

int hanoi(int idx,int from,int to, int tmp){//把目標從from移到to and max數字需要先動~ 
	if(from==to)
		return 0;//不用動 
	int sum =0;
	
	//remove top&destination
	for(int i=idx-1;i>=0;i--){
		if(start[i]==from)
			sum+=hanoi(i,from,tmp,to);
		else if(start[i]==to)
			sum+=hanoi(i,to,tmp,from);
	}
	start[idx]=to;
	return sum+1;
}

int main(){
	
	int n,cas=0;
	long long ans=0;
	
	while(scanf("%d",&n)!=EOF&&n){
		ans=0;
		for(int i=0;i<n;i++)
			scanf("%d",&start[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&target[i]);
		for(int i=n-1;i>=0;i--)
			ans+=hanoi(i,start[i],target[i],6-start[i]-target[i]);//(1+2+3)=6 and 6-start[i]-target[i] is tmp 
		printf("Case %d: %lld\n",++cas,ans);
	}
	return 0;
}
