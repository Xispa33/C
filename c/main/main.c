#include "base_math.h"
#include "advanced_math.h"
#include "cg.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int nb_digits(char * string) {
  char buf[50];
  return sprintf(buf, "%s", string);
}

int main()
{
    /*
    int a = 10U;
    int b = 5U;
    printf("%d + %d = %d\n", a, b, BASE_MATH__Addition(a,b));
    printf("%d\n",ADVANCED_MATH__Factoriel(5));
    printf("%d\n",ADVANCED_MATH__PGCD(12, 6));
    */
    /*
    assert (isGrowingNumber(456) == true);
	assert (isGrowingNumber(556677780) == false);
	*/

	/*
	char word[50] = "HAve fUN LalaA";
	displayCamelCase(word);
	*/

	/*
	const int N = 10;
	printf("Sum from 2 to %d = %d\n", N, sumFrom2toN(N));
	*/

	/*
	char word[50] = "Hello";
	char *out = alternateReading(&word[0]);
	printf("%s\n", out);

	unsigned int x = 0xFFFFFFFF;
	unsigned int step_1_2 =  (x & 0xFFFFFFF0) << 1;
	unsigned int step_3_1 =  ~(step_1_2 & 0x000000FF);
	unsigned int step_3_2 =  step_1_2 & 0xFFFFFF00;
	printf("%u\n", step_3_1 + step_3_2);

	size_t len= 10;
	int a[2]={20, 30};
	int *b = &a[0];
	printf("%d\n",*b++);
	printf("%d\n",*b++);

	if (a[0] == 20) 
		return 0;
	while (len--) {
		printf("%d\n", len);
	}
	*/

	/*
	int offset = 3;
	char word[50] = "HELLO WORLD";

	offsetReading(offset, &word[0]);
    */

    decomposeWord();
	return 0;
	
  	//(x & 0b11110000) << 1
	
}