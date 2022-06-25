#include<stdio.h>
long long pow_mod(long long pow, long long base, long long dev) {
	if (pow == 1) {
		return base % dev;
	}
	
	if (pow % 2 != 0) {
		//printf("%lld\n",base%dev);
		return (base % dev) * (pow_mod(pow - 1, base, dev))%dev;
	}
	else {
		//printf("pow=%lld,%lld\n",pow,base);
		return pow_mod(pow / 2, (base * base) % dev, dev);
	}
}

int main() {
	long long pow, base, dev;
	while(scanf("%lld %lld %lld", &base, &pow, &dev)){
	
	long long result = pow_mod(pow, base, dev);
	printf("%lld\n", result % dev);}
	return 0;
}
