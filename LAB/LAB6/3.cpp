#include<stdio.h>
int main (){
	long long a,b,c,d,e,f,a1,b1,c1,g,h,j,con;
	while(scanf("%lld %lld %lld",&a,&b,&c)){
		con=1;
		d=a;
		e=b;
		f=c;
		while(d!=e){
			while(d>e)
				d-=e;
			while(d<e)
				e-=d;
		}
		while(d!=f){
			while(d>f)
				d-=f;
			while(d<f)
				f-=d;
		}
		a1=a/f;
		g=a1;
		b1=b/f;
		h=b1;
		c1=c/f;
		j=c1;
		//printf("a1=%lld,b1=%lld,c1=%lld\n",a1,b1,c1);
		while(g!=h){
			while(g>h)
				g-=h;
			while(g<h)
				h-=g;
		}
		if(g!=1){
			a1/=g;
			b1/=g;
			con*=g;
			g=a/f;
			h=b/f;
		}
		else{
			g=a/f;
			h=b/f;
		}
		//printf("a1=%lld,b1=%lld,c1=%lld\n",a1,b1,c1);
		while(g!=j){
			while(g>j)
				g-=j;
			while(g<j)
				j-=g;
		}
		if(g!=1){
			a1/=g;
			c1/=g;
			con*=g; 
			g=a/f;
			j=c/f;
		}
		else{
			g=a/f;
			j=c/f;
		}
		//printf("a1=%lld,b1=%lld,c1=%lld\n",a1,b1,c1);
		while(j!=h){
			while(j>h)
				j-=h;
			while(j<h)
				h-=j;
		}
		if(j!=1){
			b1/=j;
			c1/=j;
			con*=j;
			j=c/f;
			h=b/f;
		}
		else{
			j=c/f;
			h=b/f;
		}
		//printf("a1=%lld,b1=%lld,c1=%lld\n,con=%lld",a1,b1,c1,con);
		printf("min common multiple: %lld\n",f*a1*b1*c1*con);
		
	}
	return 0;
}
