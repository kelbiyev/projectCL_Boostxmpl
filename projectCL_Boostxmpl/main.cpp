#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>


using namespace boost::multiprecision;
/*
int128_t boost_product(long long A, long long B) {
    int128_t ans = (int128_t)A*B;
    return ans;
}

int main () {
    long long first = 878787788788787;
    long long second = 525252522525;
    std::cout<<"Product of "<< first << " and " << second << " is " << boost_product(first,second);
    return 0;
}
*/



boost::multiprecision::cpp_int boost_factorial(int num) {
    cpp_int fact = 1;
    for (int i = num; i > 1; --i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 32;
    std::cout<<"Factorial of "<< num << " is "<< boost_factorial(num);
    return 0;
}
