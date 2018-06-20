/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>	// Space not essential; can also write: #include<stdio.h>

int main(int argc, char const *argv[])	// Space between int and main, int and argc, int and const and *argv[] are essential; not essentail after semicolon
{
	int height, length, width, volume, weight;	// Essential again is only int from the variable names

	height = 8;		// Not essential
	length = 12;	// Not essential
	width = 10;		// Not essential
	volume = height * length * width;	// Not essential
	weight = (volume + 165) / 166;		// Not essential

	printf("Dimensions: %dx%dx%d\n", length, width, height); 	// Not essential; could also write printf ()	
	printf("Volume (cubic inches): %d\n", volume);				// Not essential
	printf("Dimensional weight (pounds): %d\n", weight);		// Not essential

	return 0;	// Essential; between return and 0 must be a space!
}