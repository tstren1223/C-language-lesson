#include <stdio.h>
int main(){
	int c=1;
	for(int t=1;t<=9;t++)
		for(int o=1;o<=9;o++)
			for(int g=1;g<=9;g++)
				for(int d=1;d<=9;d++){
					
					4*(t*100+10*o+o)==g*1000+100*o+10*o+d?printf("%d.t=%d,o=%d,g=%d,d=%d\n",c,t,o,g,d),c++:NULL;
				}
	return 0;
}
