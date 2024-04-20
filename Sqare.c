#include <stdio.h>

float square(float num);

void main()
{
    float num, result;
    printf("Enter number: ");
    scanf("%f", &num);

    result = square(num);
    printf("Square of %0.2f is %0.2f", num, result);
}

float square(float num)
{
    return num * num;
}
int square(int num)
{
	//function added in main branch
	return num*num;
} 
