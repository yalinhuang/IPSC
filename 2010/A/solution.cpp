/* http://ipsc.ksp.sk/2010/real/problems/a.html
 *
 * $ ./solution input_file
 */
#include <algorithm>
#include <functional>
#include <iostream>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;


void solve_case(void)
{
	unsigned int set_size;
	cin >> set_size;
	cout << set_size << endl;

	// input
	std::vector<int> dataset;
	int value;
	for (; set_size; --set_size) {
		cin >> value;
		dataset.push_back(value);
	}

	// if sorted, swap the first two. Since the size is > 2, this always results in unsorted
	if (
		std::is_sorted(dataset.begin(), dataset.end(), std::less<int>()) ||
		std::is_sorted(dataset.begin(), dataset.end(), std::greater<int>())
	) {
		std::swap(dataset[0], dataset[1]);
	}

	// output
	for (auto it=dataset.begin(); it!=dataset.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}


int main(int argc, char **argv)
{
	unsigned int case_num;
	cin >> case_num;
	cout << case_num << endl << endl;

	for (; case_num; --case_num) {
		solve_case();
	}

	return 0;
}
