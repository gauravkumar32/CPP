#include "sort.h"

void sort::insertion_sort(vector<int> &data)
{
	for (int j = 1; j < data.size(); ++j)
	{
		int temp = data[j], i = j-1;
		while( i>=0 && data[i]> temp )
		{
			data[i + 1] = data[i];
			--i;
		}
		data[i + 1] = temp;
	}
}

void sort::merge(vector<int> &data, int beg, int mid, int end)
{
	vector<int> temp;
	temp.reserve(end - beg + 1);

	int i = beg, j = mid + 1;
	while ( i <= mid && j <= end )
	{
		if (data[i] > data[j])
			temp.push_back(data[j++]);
		else
			temp.push_back(data[i++]);
	}

	while (i <= mid)
		temp.push_back(data[i++]);
	while (j <= end)
		temp.push_back(data[j++]);

	for (int i = beg, j = 0; i <= end; ++i, ++j)
		data[i] = temp[j];
}

void sort::mergeSort(vector<int> &data, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		mergeSort(data, beg, mid);
		mergeSort(data, mid+1, end);
		merge(data, beg, mid, end);
	}
}
void sort::merge_sort(vector<int> &data)
{
	mergeSort(data, 0, data.size()-1);
}

void sort::heap_sort(vector<int> &data)
{

}

void sort::quick_sort(vector<int> &data)
{

}

void sort::counting_sort(vector<int> &data)
{

}
