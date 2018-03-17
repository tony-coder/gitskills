#include "pnt2D.h"
#include<iostream>
#include<cmath>

void pnt2D::get_xy(double n, double m) {
	x = n;
	y = m;
}

double pnt2D::put_x(){
	return x;
}

double pnt2D::put_y() {
	return y;
}

double pnt2D::Dist2Pnt(pnt2D target) {
	double dist;
	dist = sqrt((x - target.x)*(x - target.x) + (y - target.y)*(y - target.y));

	return dist;
}


pnt2D::pnt2D()
{
}


pnt2D::~pnt2D()
{
}
