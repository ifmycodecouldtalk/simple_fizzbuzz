#include <stdio.h>
#include <stdlib.h>

void fizzbuzz(int a)
{
	if (a % 3 == 0 && a % 5 == 0)
	{
		printf("Fizz Buzz, ");
	} else if (a % 3 == 0) {
		printf("Fizz, ");
	} else if (a % 5 == 0) {
		printf("Buzz, ");
	} else {
		printf("%d, ", a);
	}

}

int main() {
	for (int i = 1; i <= 100; i++)
	{
		fizzbuzz(i);
	}
	return 0;
}
