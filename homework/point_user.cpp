#include<iostream>
#include"pnt2D.h"

int main() {
	pnt2D pntarray[SIZE];
	
	int i, j;

	for ( i = 0; i < SIZE; i++)
	{
		std::cout << "Plase enter two points:\n";
		double a, b;
		std::cin >> a >> b;
		pntarray[i].get_xy(a, b);
	}
	double distance[45]{};
	
	int count = 0;

	for ( i = 0; i < SIZE; i++)
	{
		for (j = i + 1; j < SIZE; j++, count++) {

			distance[count] = pntarray[i].Dist2Pnt(pntarray[j]);
		}
			
	}

	double max;
	double min;

	for (i = 0, max = distance[0]; i < 44; i++)
	{
		if (max <= distance[i + 1])
			max = distance[i + 1];
	}

	for (i = 0, min = distance[0]; i < 44; i++)
	{
		if (min >= distance[i + 1])
			min = distance[i + 1];
	}

	double sum_x, sum_y;
	double gra_x, gra_y;   //重心 x 和 y 坐标
	for (i = 1, sum_x = pntarray[0].put_x(), sum_y = pntarray[0].put_y(); i < SIZE; i++)
	{
		sum_x += pntarray[i].put_x();
		sum_y += pntarray[i].put_y();
	}
	gra_x = sum_x / SIZE;
	gra_y = sum_y / SIZE;


	std::cout << "distance MAX is : " << max << std::endl;
	std::cout << "sidtance MIN is : " << min << std::endl;
	std::cout << "重心坐标 : " << "(" << gra_x << "," << gra_y << ")" << std::endl;
	


	std::cin.get();
	std::cin.get();
	return 0;
}