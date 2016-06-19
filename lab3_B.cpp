#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "lab3_B.h"
using namespace std;
void insertion_sort(vector<int> & v)
{
int insert, moveItem;
for(int next=1;next<v.size();++next)
{
	insert = v.at(next);
	moveItem = next;
while((moveItem>0) &&(v.at(moveItem-1) > insert))
	{
	v.at(moveItem) = v.at(moveItem-1);
	--moveItem;
	}
	v.at(moveItem) = insert;
}
}
//Using sort() in C++ Standard Library
int main()
{
Clock clk;

	int size = 1000;
while ( size<10000000 )
{
	vector<int> v1(size),v2;
	srandom(time(NULL));
	for(int i=0; i<size; ++i)
	{
		v1.at(i) = random();
	}
	v2 = v1; clk.start();
	
	sort(v1.begin(), v1.end());
	
	cout << "The size is "<< size <<"\n"<<"sort(): " <<
	clk.getElapsedTime() << " seconds\n";
	
	cout << "v1/v2 are "<<
	((v1==v2)?"the same.\n":"different.\n");
	clk.start();
	
	insertion_sort(v2);
	
	cout << "insertion_sort(): " <<
	clk.getElapsedTime() << " seconds\n";
	cout << "v1/v2 are "<<
	((v1==v2)?"the same.\n":"different.\n");
	cout <<"\n";
	size=10*size;
}

	return 0;
}

