#include <stdio.h>

#define PI 3.141592

int main(int argc, char const *argv[])
{
	float radius, volume;

	printf("Enter radius of sphere: ");
	scanf("%f", &radius);

	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

	printf("Volume of sphere with radius %f meters is: %f\n", radius, volume);
	
	return 0;
}