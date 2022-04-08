#include <iostream>
#include "Matrix.hpp"
using namespace zich;
using namespace std;

 int main(){
  
  int row;
  cout << "please enter a row number" << endl;
  cin >> row;
  
  int column;
  cout << "please enter a column number" << endl;
  cin >> column;
  
  Matrix mat{column,row};
  cout << "please enter the Matrix members" << endl; 
  cin >> mat;
  
  cout << mat;

 };