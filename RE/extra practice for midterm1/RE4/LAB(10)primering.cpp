#include<stdio.h>
#include<math.h>

bool used[17];
int ans[17] ={0};
bool isPrime[32] ={true,true};
int count;

void ring_compose(int n,int st,int len);

int main(){
	for(int i=2;i<32;i++){
		isPrime[i] = true;
		for(int j=2;j<=sqrt(i);j++){
			if(i % j ==0){
				isPrime[i] = false;
				break;
			}
		}
	}
	
	int n;
	int c =1;
	
	while(scanf("%d",&n)){
		printf("Case %d:\n",c++);
		//clear used
		for(int i=0;i<=n;i++)
			used[i] = false;
		used[1]=true;
		ans[0]=1;
		
		count = 0;
		ring_compose(n,1,1);
		printf("Number: %d\n\n",count);
	}
}

void ring_compose(int n,int st,int len){
	if(len == n){
		if(isPrime[ans[n-1]+1]){
			for(int i=0;i<n;i++){
				printf("%d",ans[i]);
			}
			printf("\n");
			count++;
		}
		return;
	}
	
	for(int i=2;i<=n;i++){
		if(!used[i]&&isPrime[i+st]){
			used[i] = true;
			ans[len] = i;
			ring_compose(n,i,len+1);
			used[i] = false;//reset
		}
	}
}
