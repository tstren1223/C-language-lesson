# include <stdio.h>

#define N 61

long long move(int *hanoi,int i,int target){
	if(i==0)
		return 0;
	else if(hanoi[i]==target)
		return move(hanoi,i-1,target);
	else
		//printf("%d\n",1+(1LL<<(i-1))-1);
		return move(hanoi,i-1,6-hanoi[i]-target)+1+(1LL<<(i-1))-1;//LL is long long and 1+(1LL<<(i-1))-1 is for 一半的移動 and 前面的 move(hanoi,i-1,6-hanoi[i]-target)確保k以下都在aux! 
}



int main(){
	int start[N],target[N];
	int k,n,aux,cas=0;
	long long ans;
	
	while(scanf("%d",&n)!=EOF&&n){
		//method 1
		for(int i=1;i<=n;i++)
			scanf("%d",&start[i]);
		for(int i=1;i<=n;i++)
			scanf("%d",&target[i]);
			
		k=n;
		while(start[k]==target[k]&&k>=1)//start!=target or k=0 get out of while and 從最大數開始處理 
			k--;
			
		ans=0;
		if(k>=1){
			aux=6-start[k]-target[k];
			ans=move(start,k-1,aux)+move(target,k-1,aux)+1;//先從start都跑到aux---->再從aux跑到target!因為function move確保裡面從原始位置跑到除了parrameter中的hanoi[i]及target的第三方! 
		}
		printf("Case %d: %lld\n",++cas,ans);
	}
	
	return 0;
}
