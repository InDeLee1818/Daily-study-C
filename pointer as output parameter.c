#include <stdio.h>
#include <stdbool.h>


//pointer as output parameter

void check_square(int num_square, bool* result)
{
	for (int n = 1; n <= num_square; n++)
	{
		if (n * n == num_square)
		{
			*result = true;
			return;
		}
	}
	*result = false;
}


int main()
{
	bool result1;
	
	check_square(36, &result1);

	if (result1)
	{
		printf("Yes, this is a square\n");
	}
	else
	{
		printf("No, this is not a square");
	}

	return 0;

}