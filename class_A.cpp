#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "class_A.h"
using namespace std;


	vector<int> lab3::readin( )
	{
		int n=0;
		int t;
		int number=0;
		vector <int> v1(100000);
		
		ifstream A("file.in",ios::in);
		if (!A)
		{
			cerr<<"Failed"<<endl;
			exit(1);
		}
		
		
		A>>number;
		while ( n<number )
		{	
			for( n=0 ; n<number ; n++ )
			{
				A >> t ;
				v1.at(n)=t;
			}
		}

		sort (v1.begin(),v1.end());
		v1.at(0)=number;
		A.close();
						

		return v1;
	}


	int lab3 :: calculation(vector <int> v2)
	{
		int i;
		int n;
		int w=v2.at(0);
		int total=0;
		for ( i=99999 ; i>99994 ; i-- ) 
		{
			total=total + v2.at(i);
		}


		return total;
	}










