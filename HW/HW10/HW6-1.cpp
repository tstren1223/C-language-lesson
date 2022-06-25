# include <stdio.h>

#define N 61

long long move(int *hanoi,int i,int target){
	if(i==0)
		return 0;
	else if(hanoi[i]==target)
		return move(hanoi,i-1,target);
	else
		//printf("%d\n",1+(1LL<<(i-1))-1);
		return move(hanoi,i-1,6-hanoi[i]-target)+1+(1LL<<(i-1))-1;//LL is long long and 1+(1LL<<(i-1))-1 is for �@�b������ and �e���� move(hanoi,i-1,6-hanoi[i]-target)�T�Ok�H�U���baux! 
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
		while(start[k]==target[k]&&k>=1)//start!=target or k=0 get out of while and �q�̤j�ƶ}�l�B�z 
			k--;
			
		ans=0;
		if(k>=1){
			aux=6-start[k]-target[k];
			ans=move(start,k-1,aux)+move(target,k-1,aux)+1;//���qstart���]��aux---->�A�qaux�]��target!�]��function move�T�O�̭��q��l��m�]�찣�Fparrameter����hanoi[i]��target���ĤT��! 
		}
		printf("Case %d: %lld\n",++cas,ans);
	}
	
	return 0;
}
