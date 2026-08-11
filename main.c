#include <REGX52.H>

void Delay500ms(void)	
{
	unsigned char i, j, k;
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main(void)
{
	unsigned char led = 0xFE; // ??P2.0?
	while(1)
	{
		P2 = led;
		Delay500ms();
		led = (led << 1) | 0x01; // ??,????1
	}
}