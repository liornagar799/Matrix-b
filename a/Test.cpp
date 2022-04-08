#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "Matrix.hpp"
using namespace zich;


std::vector<double> identity1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
zich::Matrix a{identity1, 3, 3};
std::vector<double> identity2 = {-1, 0, 0, 0, -1, 0, 0, 0, -1};
zich::Matrix b{identity2, 3, 3}; 
std::vector<double> arr1 = {3, 0, 0, 0, 3, 0, 0, 0, 3};
Matrix c{arr1, 3, 3};
std::vector<double> arr2= {3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0};
Matrix d{arr2, 4, 3};
std::vector<double> arr3= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
Matrix e{arr3, 4, 3};
std::vector<double> arr4= {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
Matrix f{arr4, 4, 3};
std::vector<double> arr5= {6, 0, 0, 0, 6, 0, 0, 0, 6, 0, 0, 0};
Matrix h{arr5, 4, 3};

TEST_CASE("Good input") {
    CHECK(((-a) == b));
    CHECK((((-b)*3) == c));
    CHECK(((a*3) == (1*c)));
    CHECK(((3*b) != c));
    CHECK(((9*a) == (c*3)));
    CHECK((a <= c));
    CHECK((b < c));
    CHECK((a > b));
    CHECK(((0*a)==(0*b)));
    CHECK((f > d));
    CHECK((h > d));
    CHECK((f >= d));

    //////Matrix duplication test////
    std::vector<double> a1= {5, 1, 2, 3, 3, 4};
    Matrix mat1{a1, 3, 2};
    std::vector<double> a2= {1, 2, 0, 4, 3, -1};
    Matrix mat2{a2, 2, 3};
    std::vector<double> a3= {9, 13, -1, 14, 13, -3, 19, 18, -4};
    Matrix mat3{a3, 3, 3};
    Matrix mat4=(mat1*mat2);
    CHECK((mat3 == mat4));
    mat4=(mat2*mat1);
    std::vector<double> a5= {9, 7, 23, 9};
    Matrix mat5{a5, 2, 2};
    CHECK((mat5 == mat4));
    CHECK((mat3 != mat5));

    						                                                                                                                
}
TEST_CASE("Bad input - The matrix sizes do not allow the operations to be performed") {
    CHECK_THROWS((a+d));
    CHECK_THROWS((b+f));
    CHECK_THROWS((b*f));
    CHECK_THROWS((a*d));
    CHECK_THROWS(((a*7)*d));
    CHECK_THROWS((h*d*a));

   

}

