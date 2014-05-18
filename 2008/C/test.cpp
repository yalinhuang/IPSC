/* http://ipsc.ksp.sk/2008/real/problems/c.html
 *
 * $ ./test
 */
#include <iostream>

#include <cassert>

using std::cout;
using std::endl;


void test_c1(void)
{
	int x = -2147483648;  // -2^31
	assert(x == -x);
	assert(x != 0);
}


void test_c2(void)
{
	cout.precision(100);

	int x = 1073741824;  // 2^30
	float y = 1073741825;  // 2^30 + 1, but float can't represent this number accurately
	int z = 1073741823;  // 2^30 - 1

	assert(x == y);
	assert(y == z);
	assert(!(x == z));
}


int main(int argc, char **argv)
{
	test_c1();
	test_c2();

	return 0;
}
