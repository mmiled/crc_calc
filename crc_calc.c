#include <stdio.h>
#include<string.h>

#include "crc_calc.h"

main(int argc,char ** argv)
{
	unsigned char crc;
	
	if(argc>2)
	{
		crc=crc_calc(argv[1],strlen(argv[1]));
		printf("%02X\n",crc);
	}
	else
	{
		printf("erreur parametre\n");
	}
}

unsigned char crc_calc(unsigned char* string, int length)
{
	unsigned char crc = 0;
	int i;

	for (i = 0; i < length; i++)
		crc ^= string[i];

	return crc;
}

int addition(int a,int b)
{
	return a+b;
}
