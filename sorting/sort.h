#ifndef SORT_H
#define SORT_H

#include <vector>
using std::vector;

namespace sort {
	void insertion_sort(vector<int> &data);
	void merge_sort(vector<int> &data);
	void mergeSort(vector<int> &data, int beg, int end);
	void merge(vector<int> &data, int beg, int mid, int end);

	void heap_sort(vector<int> &data);
	void quick_sort(vector<int> &data);
	void counting_sort(vector<int> &data);

}

#endif // !SORT_H