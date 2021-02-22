
#include <rt.h>

 double		radtodeg(double angle)
{
	return ((angle * 180) / M_PI);
}

double		degtorad(double angle)
{
	return ((angle * M_PI) / 180);
}
