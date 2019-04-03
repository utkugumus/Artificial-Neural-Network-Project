#include "Functions.h"
#include <Windows.h>

float* coordinate_point(float w0,float w1,float w2 ,float max_x1, float min_x1)
{
	float max_x2 = (w0 * max_x1 + w2) / -w1;
	float min_x2 = (w0 * min_x1 + w2) / -w1;

	float* dizi = new float[2];

	dizi[0] = max_x2;
	dizi[1] = min_x2;


	return dizi;


}