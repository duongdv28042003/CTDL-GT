#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

int main() {
    cpp_int result = 1;
    for (int i = 1; i <= 1000; ++i) {
        result *= i;
    }
    cout << "1000! = " << result << endl;
    return 0;
}