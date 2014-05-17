/* http://ipsc.ksp.sk/2010/real/problems/a.html
 *
 * $ ./test output_file
 */
#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

#include <cassert>

using std::cin;
using std::cout;
using std::endl;


void test_case(void)
{
	unsigned int set_size;
	cin >> set_size;

	// input
	std::vector<int> dataset;
	int value;
	for (; set_size; --set_size) {
		cin >> value;
		dataset.push_back(value);
	}

	// check unsorted from small to large
	assert(!std::is_sorted(dataset.begin(), dataset.end(), std::less<int>()));
	// check unsorted from large to small
	assert(!std::is_sorted(dataset.begin(), dataset.end(), std::greater<int>()));
}


int main(int argc, char **argv)
{
	unsigned int case_num;
	cin >> case_num;

	for (; case_num; --case_num) {
		test_case();
	}

	return 0;
}
