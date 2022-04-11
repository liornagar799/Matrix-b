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
  
 
  double val=0;
  vector<double> curr1;
  cout << "please enter the Matrix members" << endl; 
  for(int i=0; i<row; i++){ 
    for (int j = 0; j<column; j++){
      cin >> val;
      curr1.push_back(val);
  }}    
  zich::Matrix Mat1{curr1,row,column};
   cout << "mat1:" << endl;
  cout << Mat1 << endl;

  vector<double> curr2;
  cout << "please enter more Matrix members to a new one " << endl; 
  for(int i=0; i<row; i++){ 
    for (int j = 0; j<column; j++){
      cin >> val;
      curr2.push_back(val);
  }}    
  zich::Matrix Mat2{curr2,row,column};
   cout << "mat2:" << endl;
  cout << Mat2 << endl;

  cout << "mat1 + mat2:" << endl; 
  cout << Mat1+Mat2 << endl;
  cout << "mat1 - mat2:" << endl; 
  cout << Mat1-Mat2 << endl;


 };