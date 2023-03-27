#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/* betty style doc for function main goes here */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	return (0);
}
