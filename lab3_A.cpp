#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "class_A.h"
using namespace std;

int main()
{
	int x;
	vector <int> mass;
	
	lab3 a;
	mass = a.readin( );
	x = a.calculation( mass );
	cout << x << endl;
	
	return 0;
	
}



