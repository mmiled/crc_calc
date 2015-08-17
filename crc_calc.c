#include <stdio.h>
#include<string.h>

#include "crc_calc.h"

main()
{
	unsigned char crc;
	unsigned char s[]="GPRMC,123519,A,4807.038,N,01131.000,E,022.4,084.4,230394,003.1,W";
	crc=crc_calc(s,strlen(s));
	printf("%02X\n",crc);
}

unsigned char crc_calc(unsigned char* string, int length)
{
	unsigned char crc = 0;
	int i;

	for (i = 0; i < length; i++)
		crc ^= string[i];

	return crc;
}
