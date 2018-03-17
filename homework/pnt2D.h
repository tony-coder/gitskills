#pragma once
#define SIZE 10
class pnt2D
{
public:
	
	void get_xy(double, double);
	double put_x();
	double put_y();
	double Dist2Pnt(pnt2D target);

	pnt2D();
	~pnt2D();

private:
	double x, y;


};

