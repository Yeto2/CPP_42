#include "Point.hpp"

Fixed tri_erea(const Point& A, const Point& B, const Point& C)
{
    Fixed area;

	Fixed n = (A.get_x() * (B.get_y() - C.get_y())).toFloat() + (B.get_x() * (C.get_y() - A.get_y())).toFloat() +(C.get_x() * (A.get_y() - B.get_y())).toFloat();
	if (n < 0)
		n = n * Fixed(-1);
	area = Fixed(0.5f) * n;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed erea[4];

    erea[0] = tri_erea(a, b, c);
    erea[1] = tri_erea(a, b, point);
    erea[2] = tri_erea(a, point, c);
    erea[3] = tri_erea(point, b, c);

    if (erea[1] == 0 || erea[2] == 0 || erea[3] == 0)
        return(false);
    if ((erea[1] + erea[2] + erea[3]) == erea[0])
        return(true);
    return(false);
}