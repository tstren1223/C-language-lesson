#include <stdio.h>
int main()
{
	int x, y, sum=0; // input: x,y ; output: sum
	// machine input: mx,my ; machine output: out
	unsigned char mx, my, out; //8 bits
	bool ca=0; // carry
	printf("Input: ");
	scanf("%d %d", &x, &y);
	mx = x&0x7F;
	my = y&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= out&0x7F;
	mx = x>>7&0x7F;
	my = y>>7&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<7;
	mx = x>>14&0x7F;
	my = y>>14&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<14;
	mx = x>>21&0x7F;
	my = y>>21&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<21;
	mx = x>>28&0x7F;
	my = y>>28&0x7F;
	out = mx + my + ca;
	ca = out>>7;
	sum |= (out&0x7F)<<28;
	// The rest part you have to finish¡K
	printf("%d + %d = %d\n", x, y, sum);
	return 0;
}
