#include <stdio.h>
#include "picpoc.h"

int main(int argc, char *argv[])
{
	for(int i=1; i<16; i++)
	{
		if(0 == i % 3 && 0 == i % 5)
		{
			printf("%d: PicPoc\n", i);
		}
		else if(0 == i % 5)
		{
			printf("%d: Poc\n", i);
		}
		else if(0 == i % 3)
		{
			printf("%d: Pic\n", i);
		}
		else
		{
			/* do nothing */
		}
	}
	return 0;
}