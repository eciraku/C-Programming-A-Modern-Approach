#include <stdio.h>

#define PI 3.141592

int main(int argc, char const *argv[])
{
	int radius = 10;
	float volume;

	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

	printf("Volume of sphere with radius 10 meters is: %f\n", volume);

	return 0;
}