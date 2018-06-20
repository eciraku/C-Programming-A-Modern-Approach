#include <stdio.h>

#define PI 3.14159265359

#define RECTANGLE 0
#define CIRCLE    1

struct point {
		int x, y;
	};

struct shape {
	int shape_kind;		 /* RECTANGLE or CIRCLE */
	struct point center; /* coordinates of center */
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
} s;

double compute_area(struct shape s);
struct shape move_xy_direction(struct shape s, int x, int y);
struct shape scale(struct shape s, double c);

int main(int argc, char const *argv[])
{
	struct shape s;
	int x, y;
	double c;

	printf("Enter center coordinates (x, y):\n");
	printf("x = ");
	scanf("%d", &s.center.x);
	printf("y = ");
	scanf("%d", &s.center.y);
	printf("Enter shape (0 = RECTANGLE, 1 = CIRCLE): ");
	scanf("%d", &s.shape_kind);

	if (s.shape_kind == RECTANGLE)
	{
		printf("Enter dimensions of rectangle:\n");
		printf("width = ");
		scanf("%d", &s.u.rectangle.width);
		printf("height = ");
		scanf("%d", &s.u.rectangle.height);
	}
	else if (s.shape_kind == CIRCLE)
	{
		printf("Enter radius of circle: ");
		scanf("%d", &s.u.circle.radius);
	}

	if (s.shape_kind == RECTANGLE)
		printf("Area of rectangle is: %f\n\n", compute_area(s));
	else if (s.shape_kind == CIRCLE)
		printf("Area of circle is: %f\n\n", compute_area(s));

	printf("Ener shift to x-direction: ");
	scanf("%d", &x);
	printf("Enter shift to y-direction: ");
	scanf("%d", &y);
	s = move_xy_direction(s, x, y);
	printf("New coordinates of center: (%d, %d)\n\n", s.center.x, s.center.y);

	printf("Enter scale factor: ");
	scanf("%lf", &c);
	s = scale(s, c);
	if (s.shape_kind == RECTANGLE)
		printf("New width: %d\nNew height: %d\n", s.u.rectangle.width, s.u.rectangle.height);
	else if (s.shape_kind == CIRCLE)
		printf("New radius: %d\n", s.u.circle.radius);

	return 0;
}

double compute_area(struct shape s)
{
	if (s.shape_kind == RECTANGLE)
		return s.u.rectangle.height * s.u.rectangle.width;

	else if (s.shape_kind == CIRCLE)
		return PI * (s.u.circle.radius * s.u.circle.radius);
}

struct shape move_xy_direction(struct shape s, int x, int y)
{
	s.center.x += x;
	s.center.y += y;

	return s;
}

struct shape scale(struct shape s, double c)
{
	if (s.shape_kind == RECTANGLE)
	{
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	}

	else if (s.shape_kind == CIRCLE)
		s.u.circle.radius *= c;

	return s;
}