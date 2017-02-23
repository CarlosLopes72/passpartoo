/****************************************************************
*Plus grand Denominateur commun 								*
*																*
*created by CArlos Lopes on 13FEB2017							*
* Copyright 2017 __MyCompanyName__. All rights reserved.		*
*																*
*		unsigned int == unsigned long							*
*		%u == %lu												*
*																*
****************************************************************/

#include <stdio.h>

int main()
{
unsigned long a;
unsigned long b;
long c;
unsigned long res;

printf("premier numero : ");
scanf("%lu", &a);
printf("deuxieme numero : ");
scanf("%lu", &b);


unsigned long a1 = a;
unsigned long b1 = b;

while (c != 0 )
	{
	c = a1 % b1;
		if(c==0)
		{
		res = b1;
		printf("Le plus grand denominateur commun de %lu et %lu est %lu\n", a, b, res);
		break;
		}
	a1 = b1;
	b1 = c;
	}



return 0;
}