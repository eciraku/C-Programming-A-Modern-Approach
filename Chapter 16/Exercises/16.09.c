#include <stdio.h>
#include <stdbool.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

int main(int argc, char const *argv[])
{
	struct color c1, c2, c3;
	struct color copy_c3;

	printf("Enter red, green and blue colors for c1: ");
	scanf("%d %d %d", &c1.red, &c1.green, &c1.blue);
	printf("Enter red, green and blue colors for c2: ");
	scanf("%d %d %d", &c2.red, &c2.green, &c2.blue);
	printf("Enter red, green and blue colors for c3: ");
	scanf("%d %d %d", &c3.red, &c3.green, &c3.blue);

	printf("\n");

	printf("Red value of C1: %d\n", getRed(c1));
	printf("C1 is equal to C2; %d\n", equal_color(c1, c2));
	c3 = make_color(c3.red, c3.green, c3.blue);
	printf("C3 colors: red - %d, green - %d, blue - %d\n", c3.red, c3.green, c3.blue);
	copy_c3 = brighter(c3);
	printf("C3 brighter colors: red - %d, green - %d, blue - %d\n", copy_c3.red, copy_c3.green, copy_c3.blue);
	copy_c3 = darker(c3);
	printf("C3 darker colors: red - %d, green - %d, blue - %d\n", copy_c3.red, copy_c3.green, copy_c3.blue);

	return 0;
}

struct color make_color(int red, int green, int blue)
{
	struct color new_color;

	if (red < 0)
		red = 0;
	else if (red > 255)
		red = 255;

	if (green < 0)
		green = 0;
	else if (green > 255)
		green = 255;

	if (blue < 0)
		blue = 0;
	else if (blue > 255)
		blue = 255;

	new_color.red = red;
	new_color.green = green;
	new_color.blue = blue;

	return new_color;
}

int getRed(struct color c)
{
	c = make_color(c.red, c.green, c.blue);
	return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
	color1 = make_color(color1.red, color1.green, color1.blue);
	color2 = make_color(color2.red, color2.green, color2.blue);

	if (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue)
		return true;

	return false;
}

struct color brighter(struct color c)
{
	c = make_color(c.red, c.green, c.blue);

	if (c.red == 0 && c.green == 0 && c.blue == 0)
	{
		c.red = 3;
		c.green = 3;
		c.blue = 3;

		return c;
	}

	if (c.red > 0 && c.red < 3)
		c.red = 3;
	if (c.green > 0 && c.green < 3)
		c.green = 3;
	if (c.blue > 0 && c.blue < 3)
		c.blue = 3;

	c.red = c.red / 0.7;
	c.green = c.green / 0.7;
	c.blue = c.blue / 0.7;

	return make_color(c.red, c.green, c.blue);
}

struct color darker(struct color c)
{
	c = make_color(c.red, c.green, c.blue);

	c.red = c.red * 0.7;
	c.green = c.green * 0.7;
	c.blue = c.blue * 0.7;

	return c;
}