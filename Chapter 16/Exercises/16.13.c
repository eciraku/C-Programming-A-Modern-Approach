/*
	struct point {
		int x, y;
	};

	struct shape {
		int shape_kind;	// RECTANGLE or CIICLE
		struct point center; // coordinates of center
		union {
			struct {
				int height, width;
			} rectangle;
			struct {
				int radius;
			} circle;
		} u;
	} s;

	(a) s.shape_kind = RECTANGLE; // Legal
	(b) s.center.x = 10;		  // Legal
	(c) s.height = 25;			  // Illegal -> s.u.rectangle.height = 25;
	(d) s.u.rectangle.width = 8;  // Legal
	(e) s.u.cricle = 5;			  // Illegal -> s.u.circle.radius = 5;
	(f) s.u.radius = 5;           // Illegal -> s.u.circle.radius = 5;
*/