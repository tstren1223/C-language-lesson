#include <stdio.h>
int main(){
	for(int t=0;t<=9;t++)
		for(int o=0;o<=9;o++)
			for(int g=0;g<=9;g++)
				for(int d=0;d<=9;d++){
					4*(t*100+10*o+o)==g*1000+100*o+10*o+d?printf("t=%d,o=%d,g=%d,d=%d\n",t,o,g,d):NULL;
				}
	return 0;
}
