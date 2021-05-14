#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <iterator>
#include <algorithm>

int main() {
	std::cout << "Hello world!" << std::endl;
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " ");
	std::endl;
	return 0;
}
