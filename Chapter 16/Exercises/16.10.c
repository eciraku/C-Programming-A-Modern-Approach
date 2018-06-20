#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

int compute_area(struct rectangle r);
struct point compute_center(struct rectangle r);
struct rectangle move_xy_direction(struct rectangle r, int x, int y);
bool lies_within(struct rectangle r, struct point p);

int main(int argc, char const *argv[])
{
	struct rectangle r, new_r;
	struct point p, center;
	int area, x, y;

	printf("Enter upper left coordinate (x, y): ");
	scanf("%d %d", &r.upper_left.x, &r.upper_left.y);
	printf("Enter lower right coordinate (x, y): ");
	scanf("%d %d", &r.lower_right.x, &r.lower_right.y);

	area = compute_area(r);
	printf("The area is: %d units\n", area);

	center = compute_center(r);
	printf("The coordinates of center: (%d, %d)\n\n", center.x, center.y);

	printf("Ener shift to x-direction: ");
	scanf("%d", &x);
	printf("Enter shift to y-direction: ");
	scanf("%d", &y);
	new_r = move_xy_direction(r, x, y);
	printf("New coordinates of r:\n");
	printf("Upper left coordinate (%d, %d)\n", new_r.upper_left.x, new_r.upper_left.y);
	printf("Lower right coordinate (%d, %d)\n\n", new_r.lower_right.x, new_r.lower_right.y);

	printf("Enter coordinates of p (x, y): ");
	scanf("%d %d", &p.x, &p.y);
	if (lies_within(new_r, p))
		printf("p lies within r\n");
	else
		printf("p does not lie within r\n");

	return 0;
}

int compute_area(struct rectangle r)
{
	int width, height;

	width = abs(r.lower_right.x - r.upper_left.x);
	height = abs(r.upper_left.y - r.lower_right.y);

	return width * height;
}

struct point compute_center(struct rectangle r)
{
	struct point center;

	center.x = (r.upper_left.x + r.lower_right.x) / 2;
	center.y = (r.upper_left.y + r.lower_right.y) / 2;

	return center;
}

struct rectangle move_xy_direction(struct rectangle r, int x, int y)
{
	r.upper_left.x += x;
	r.lower_right.x += x;

	r.upper_left.y += y;
	r.lower_right.y += y;

	return r;
}

bool lies_within(struct rectangle r, struct point p)
{
	if ((p.x >= r.upper_left.x && p.x <= r.lower_right.x) && (p.y >= r.lower_right.y && p.y <= r.upper_left.y))
		return true;

	return false;
}