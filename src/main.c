#include <stdio.h>

int add(int, int);

/**
	\author your_user_here
	\brief this is main function, cap.
*/
int main(void) {
    printf("Hello, world %d!!!\n", add(1,2));
    return 0;
}

/**
	\author your_user_here
	\brief my function
	@param fValue first argument of the sum
	@param sValue second argument of the sum
*/
int add(int fValue, int sValue) {
    return fValue + sValue;
}
