#include <iostream>
#include "Matrix.hpp"
  
    
        zich::Matrix zich::Matrix::operator+(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            //Creating an auxiliary matrix
            Matrix curr_mat{this->column , this->rows};
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                   //Add any value in the value corresponding to it in the second matrix     
                 curr_mat.mat.at(i).at(j) = this->mat.at(i).at(j) +mat2.mat.at(i).at(j);
                 //If I got instead of 0- we will change it to be 0
                 if(curr_mat.mat.at(i).at(j)==-0){
                      curr_mat.mat.at(i).at(j)=0;
                 }   
            }}
            return curr_mat;
        }


        zich::Matrix& zich::Matrix::operator+=(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                  //Add any value in the value corresponding to it in the second matrix   
                 this->mat.at(i).at(j) = this->mat.at(i).at(j)+mat2.mat.at(i).at(j); 
                 //If I got instead of 0- we will change it to be 0
                 if(this->mat.at(i).at(j)==-0){
                      this->mat.at(i).at(j)=0;
                 }   
            }}
            return *this;
        }

        zich::Matrix& zich::Matrix::operator+=(const double scalar){
             //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Add the scalar to each value
                 this->mat.at(i).at(j) = this->mat.at(i).at(j)+scalar; 
                 //If I got instead of 0- we will change it to be 0
                 if(this->mat.at(i).at(j)==-0){
                      this->mat.at(i).at(j)=0;
                 }
                   
            }}
            return *this;
        }

        zich::Matrix zich::Matrix::operator+(){
            //You returned the same matrix
            zich::Matrix curr_mat{this->mat,this->column , this->rows};
            return  curr_mat;
        }

        zich::Matrix zich::Matrix::operator-(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix
           if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            //Creating an auxiliary matrix
            Matrix curr_mat{this->column , this->rows};
             //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                  //Suffers any value in the value corresponding to it in the second matrix  
                 curr_mat.mat.at(i).at(j) = this->mat.at(i).at(j) - mat2.mat.at(i).at(j);
                 //If I got instead of 0- we will change it to be 0 
                 if(curr_mat.mat.at(i).at(j)==-0){
                      curr_mat.mat.at(i).at(j)=0;
                 }  
            }}
            return curr_mat;
        }

        zich::Matrix& zich::Matrix::operator-=(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix 
           if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
             //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                 //Suffers any value in the value corresponding to it in the second matrix
                 this->mat.at(i).at(j) = this->mat.at(i).at(j) - mat2.mat.at(i).at(j); 
                 //If I got instead of 0- we will change it to be 0  
                 if(this->mat.at(i).at(j)==-0){
                      this->mat.at(i).at(j)=0;
                 }
            }}
            return *this;
        }
        
        zich::Matrix& zich::Matrix::operator-=(const double scalar){
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Removes the scalar from the place
                 this->mat.at(i).at(j) = this->mat.at(i).at(j)-scalar;
                 //If I got instead of 0- we will change it to be 0   
                 if(this->mat.at(i).at(j)==-0){
                      this->mat.at(i).at(j)=0;
                 }
            }}
            return *this;
        }

         zich::Matrix zich::Matrix::operator-(){
            //Creating an auxiliary matrix 
            Matrix curr_mat{this->mat,this->column , this->rows};
            //Goes through all the values of the matrix
              for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                 //Sub-marks for each value in the matrix   
                 curr_mat.mat.at(i).at(j) = -(curr_mat.mat.at(i).at(j));
                 //If I got instead of 0- we will change it to be 0
                 if(curr_mat.mat.at(i).at(j)==-0){
                      curr_mat.mat.at(i).at(j)=0;
                 }   
            }}

            return curr_mat;
        }
////////////////////////////////////////////////////////////////////////////////////////

        bool zich::Matrix::operator<(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            double sum_this=0;
            double sum_mat2=0;
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Summarize all the organ values ​​in my matrix and the matrix I received  
                 sum_this += this->mat.at(i).at(j);
                 sum_mat2 += mat2.mat.at(i).at(j);
            }}
            return (sum_this<sum_mat2);
        }


        bool zich::Matrix::operator>(const Matrix &mat2){
            //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            double sum_this=0;
            double sum_mat2=0;
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                   //Summarize all the organ values ​​in my matrix and the matrix I received   
                 sum_this += this->mat.at(i).at(j);
                 sum_mat2 += mat2.mat.at(i).at(j);
            }}
        
            return (sum_this>sum_mat2);
        }

        bool zich::Matrix::operator<=(const Matrix &mat2){
             //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            double sum_this=0;
            double sum_mat2=0;
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                   //Summarize all the organ values ​​in my matrix and the matrix I received   
                 sum_this += this->mat.at(i).at(j);
                 sum_mat2 += mat2.mat.at(i).at(j);
            }}
           
            return (sum_this<=sum_mat2);
            
        }
        bool zich::Matrix::operator>=(const Matrix &mat2){
             //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            double sum_this=0;
            double sum_mat2=0;
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Summarize all the organ values ​​in my matrix and the matrix I received
                 sum_this += this->mat.at(i).at(j);
                 sum_mat2 += mat2.mat.at(i).at(j);
            }}
            return (sum_this>=sum_mat2);
            }

        bool zich::Matrix::operator==(const Matrix &mat2){
             //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
             return false;       
            }
            //Goes through all the values of the matrix
             for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                 //If one value is different returns false  
                 if(this->mat.at(i).at(j) != mat2.mat.at(i).at(j)){
                  return false;   
                 }   
            }}
            return true;
        }

        bool zich::Matrix::operator!=(const Matrix &mat2){
            //Sends to function == and returns the opposite
            return (!(zich::Matrix::operator==(mat2)));
        }



//////////////////////////////////////////////////////////////////////////////////////////////



        //n++
        //Courts an auxiliary matrix without the change and then changes my matrix
        zich::Matrix zich::Matrix::operator++(int){
            //Creating an auxiliary matrix
            Matrix curr_mat{this->mat,this->column , this->rows};
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Promotes by 1 all matrix values
                 this->mat.at(i).at(j)+=1;   
            }}
            return curr_mat;   
        }
        //n--
        //Courts an auxiliary matrix without the change and then changes my matrix
        zich::Matrix zich::Matrix::operator--(int){
           //Creating an auxiliary matrix 
           Matrix curr_mat{this->mat,this->column , this->rows};
           //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                  //Subtracts by 1 all matrix values   
                 this->mat.at(i).at(j)-=1;   
            }}
            return curr_mat;   
        }
        

        //++n
        //First changes the matrix and returns the matrix with the change
        zich::Matrix& zich::Matrix::operator++(){
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Promotes by 1 all matrix values
                 this->mat.at(i).at(j)+=1;   
            }}
            return *this;
        }
        //--n
        //First changes the matrix and returns the matrix with the change
        zich::Matrix& zich::Matrix::operator--(){
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                 //Subtracts by 1 all matrix values   
                 this->mat.at(i).at(j)-=1;   
            }}
            return *this;
        }

////////////////////////////////////////////////////////////////////////////////////////////////

        zich::Matrix zich::Matrix::operator*(const Matrix &mat2){
            //If the number of columns is not equal to the number of rows in the second matrix, multiplication is not possible
            if(this->column!= mat2.rows){
            throw invalid_argument ("invalid argument");        
            }
            //Creating an auxiliary matrix
            Matrix curr_mat{mat2.column,this->rows};
            //Goes through all the values of the matrix
            for(size_t i = 0; i < this->rows; i++){
                for(size_t j = 0; j <mat2.column; j++){
                    for(size_t k = 0; k < this->column; k++)
                    {
                        //Each time adds the organ product to the correct position in the new matrix
                        curr_mat.mat.at(i).at(j) += this->mat.at(i).at(k) * mat2.mat.at(k).at(j);
                        //If I got instead of 0- we will change it to be 0
                        if(curr_mat.mat.at(i).at(j)==-0){
                          curr_mat.mat.at(i).at(j)=0;
                        }         
                    }}}
           
            return curr_mat;
        }
        
        
        zich::Matrix zich::Matrix::operator*(double scalar){
            //Creating an auxiliary matrix
            Matrix curr_mat{this->mat,this->column,this->rows};
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Multiply every place in the scalar I received
                 curr_mat.mat.at(i).at(j)=this->mat.at(i).at(j)*scalar; 
                 //If I got instead of 0- we will change it to be 0
                 if(curr_mat.mat.at(i).at(j)==-0){
                      curr_mat.mat.at(i).at(j)=0;
                 }  
            }}
            return curr_mat; 
        }
        
        
        zich::Matrix zich::operator*(double scalar, Matrix &mat2){
            //Sends to a function with the reverse arrangement
            return mat2*scalar;
        }

        zich::Matrix& zich::Matrix::operator*=(const Matrix &mat2){
            //Call the normal * function and change my matrix values ​​to the matrix values ​​I received
            Matrix curr_mat = zich::Matrix::operator*(mat2);
            this->column = curr_mat.column;
            this->rows = curr_mat.rows;
            this->mat=curr_mat.mat;
            return *this;
        }

        zich::Matrix& zich::Matrix::operator*=(double scalar){
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Multiply every place in the scalar I received
                 this->mat.at(i).at(j)=this->mat.at(i).at(j)*scalar;
                 //If I got instead of 0- we will change it to be 0
                 if(this->mat.at(i).at(j)==-0){
                      this->mat.at(i).at(j)=0;
                 }     
            }}
            return *this;
        }

///////////////////////////////////----- cout , cin------/////////////////////////////////////////////
        ostream& zich::operator<<(ostream& os, Matrix const& Mat){
            //Goes through all the lines
            for(size_t i = 0; i< Mat.rows; i++){
            os << "[";    
                //Adds all the values including spaces between them without the last place
                for(size_t j = 0; j<Mat.column-1; j++){
                os << Mat.mat.at(i).at(j) << " "; 
            }
            //Adds the last non-spaced value, and the final bracket
            os <<Mat.mat.at(i).at(size_t(Mat.column-1))<<"]" << endl;
            }
           return os;
        }

        istream& zich::operator>>(istream& is, Matrix& Mat){
            //Goes through all the places of the matrix
            for (size_t i = 0; i < Mat.rows; i++){
                for (size_t j = 0; j < Mat.column; j++){
                    is >> Mat.mat.at(i).at(j);
            }}
    
            return is;
        }

///////////////////////////////----constructors---/////////////////////////////////////////

        //A builder that gets multiple rows and several columns and creates a zero matrix
        zich::Matrix::Matrix(int column, int rows){
             //Inserting invalid values ​​of rows or columns throws an error
            if(rows<1 || column<1){
            throw invalid_argument ("invalid argument");        
            }
            this->rows = rows;
            this->column = column;
            //Goes through all the rows of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                // for every row i crate a vector
                vector<double> new_vector;
                for(size_t j = 0; j<this->column; j++)
                {
                    double tempVal=0;
                    new_vector.push_back(tempVal);
                }
            this->mat.push_back(new_vector);
            }     
        };
        
        //A constructor that receives a number of rows and a number of vector columns and creates a matrix
        zich::Matrix::Matrix(std::vector<double> mat, int rows, int column){
             //Inserting invalid values ​​of rows or columns throws an error
            if(rows<1 || column<1){
            throw invalid_argument ("invalid argument");        
            }
            this->rows = rows;
            this->column = column;
            //Helps me keep track of the next organ as a vector
            size_t count=0;
             //Goes through all the rows of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {   
                // for every row i crate a vector
                vector<double> new_vector;
                for(size_t j = 0; j<this->column; j++)
                {
                    double tempVal= mat.at(count);
                    count++;
                    new_vector.push_back(tempVal);
                }
            this->mat.push_back(new_vector);
            }     
        };

        //A constructor that receives a number of rows and a number of columns, a vector of vectors and creates a matrix
        zich::Matrix::Matrix(std::vector<vector<double>> mat, int rows, int column){
            //Inserting invalid values ​​of rows or columns throws an error
            if(rows<1 || column<1){
            throw invalid_argument ("invalid argument");        
            }
            this->rows = rows;
            this->column = column;
             //Goes through all the rows of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                // for every row i crate a vector
                vector<double> new_vector;
                for(size_t  j = 0; j<this->column; j++)
                {
                    //I copy the organ in the matrix I got to the matrix I create
                    double tempVal= mat.at(i).at(j);
                    new_vector.push_back(tempVal);
                }
            this->mat.push_back(new_vector);
            }     
        };
