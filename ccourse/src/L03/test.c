/*Swapping 2 numbers
*/
#include <stdio.h>

int main()
{
	int a;
	int b;
	int temp;

	printf("Insert the value of a: ");
	scanf("%d", &a);

    printf("Insert the value of b: ");
	scanf("%d", &b);
	
	printf("The value of a before swapping is = % d\n", a);
	printf("The value of b before swapping is = % d\n", b);
	temp = a;
	a = b;
	b = temp;
	printf("The value of a after swapping is = % d\n", a);
	printf("The value of b after swapping is = % d\n", b);
	return 0;
}
