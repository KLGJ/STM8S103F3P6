#include "include/iostm8s103.h"

static void init(void)
{
	PB_DDR = 0x20;
	PB_CR1 = 0x20;
}

void main(void)
{
	init();
	for (;;)
	{
		for (unsigned char i = 0; i < 255; i++)
			for (unsigned char j = 0; j < 255; j++)
				;
		PB_ODR ^= 0x20;
	}
}