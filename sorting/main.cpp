#include <algorithm>
#include <iostream>
#include <vector>
#include "sort.h"
using std::endl;
using std::cout;
using std::vector;

void printData(const vector<int> &data)
{
	for_each(data.begin(), data.end(), [](int i)
	{
		cout << i << " ";
	});
	cout << endl;
}

int main()
{
	vector<int> data{5,3,4,2,1};
	printData(data);

	//sort::insertion_sort(data);
	sort::merge_sort(data);
	printData(data);

	for (;;);
	return 0;
}