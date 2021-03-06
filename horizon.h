#ifndef _HORIZON_H_
#define _HORIZON_H_

#include "ScatteredData.h"
#include "RBF.h"
#include "vec3.h"

#include <vector>

using std::vector;

class Horizon
{
	public:
	ScatteredData *data;
	RBF *rbf;

	Horizon();
	Horizon(ScatteredData *myData, RBF *myRBF);
	double computeSide(vec3 x);
	double computeValue(vec3 x);
	void move(vec3 x);
	void computeRBF();
};

#endif //_HORIZON_H_ 
