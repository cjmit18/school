#include <iostream>
#include "average.h"

float computeAverage(int a, int b);
float computeAverage(int a, int b, int c);
float computeAverage(float a, float b);
float computeAverage(float a, float b, float c);

int main() {
    
    Average avg;
    std::cout << "Enter 2 integers separated by space on a single line: ";
    int x, y;
    std::cin >> x >> y;
    std::cout << "Average of " << x << " and " << y << " is " << avg.computeAverage(x, y) << std::endl;

    std::cout << "Enter 3 integers separated by space on a single line: ";
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "Average of " << a << ", " << b << ", and " << c << " is " << avg.computeAverage(a, b, c) << std::endl;

    std::cout << "Enter 2 floats separated by space on a single line: ";
    float p, q;
    std::cin >> p >> q;
    std::cout << "Average of " << p << " and " << q << " is " << avg.computeAverage(p, q) << std::endl;

    std::cout << "Enter 3 floats separated by space on a single line: ";
    float r, s, t;
    std::cin >> r >> s >> t;
    std::cout << "Average of " << r << ", " << s << ", and " << t << " is " << avg.computeAverage(r, s, t) << std::endl;

    return 0;
}