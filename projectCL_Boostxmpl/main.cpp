/*#include <boost/multiprecision/cpp_int.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>
using boost::multiprecision::cpp_dec_float_50;
*/



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



/*boost::multiprecision::cpp_int boost_factorial(int num) {
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
}*/



/*
template <typename T> inline T area_of_circle(T r) {
    using boost::math::constants::pi;
    return pi<T>()*r*r;
}

int main() {
    float rad_f = 123.0/100;
    float area_f = area_of_circle(rad_f);
    double rad_d = 123.0/100;
    double area_d = area_of_circle(rad_d);
    boost::multiprecision::cpp_dec_float_50 rad_mp = 123.0/100;
    boost::multiprecision::cpp_dec_float_50 area_mp = area_of_circle(rad_mp);

    std::cout<<"Float: "<< std::setprecision(std::numeric_limits<float>::digits10) << area_f << "\n";
    std::cout<<"Double: " << std::setprecision(std::numeric_limits<double>::digits10)<< area_d <<"\n";
    std::cout<<"Boost: " << std::setprecision(std::numeric_limits<boost::multiprecision::cpp_dec_float_50>::digits10) <<area_mp <<"\n";
}
*/



/*
#include <boost/circular_buffer.hpp>
#include <boost/multiprecision/cpp_int.hpp>

using boost::circular_buffer;

template <typename T>
void printbuffer(circular_buffer<T> cbuf){
    for( const auto& iter: cbuf)
        std::cout<<iter<<"; ";
    std::cout<<"\n";
}

int main() {
    circular_buffer<int> cb(10);
    for(int i = 0; i!=10 ; ++i)
        cb.push_back(i);
    printbuffer(cb);
    std::cout<<"cb.back: "<<cb.back()<<"\n";
    std::cout<<"cb.front: "<<cb.front()<<"\n";

    for(int i = 0; i!=5 ; ++i)
        cb.push_front(i);
    printbuffer(cb);
    std::cout<<"cb.back: "<<cb.back()<<"\n";
    std::cout<<"cb.front: "<<cb.front()<<"\n";
    cb.pop_back();
    printbuffer(cb);
    cb.pop_front();
    printbuffer(cb);
}
*/



#include <boost/algorithm/string.hpp>
#include <vector>
#include <iostream>

int main() {
    std::string input = " MSU \t Baku\t Lab ";
    std::vector<std::string> result;
    boost::split(result, input, boost::is_any_of("\t"));

    for(auto iter: result) {
        std::cout<<iter<<"\n";
    }
}
