#include <iostream>
#include "string"
#include "Matrix.hpp"
const int Max_num = 57;
const int Min_num = 48;
  
    
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

        bool zich::Matrix::operator==(const Matrix &mat2) const{
             //If you insert a matrix of a different size from our matrix
            if(this->column != mat2.column || this->rows!= mat2.rows){
              throw invalid_argument ("invalid argument");            
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

        bool zich::Matrix::operator!=(const Matrix &mat2) const{
            //Sends to function == and returns the opposite
            return (!(zich::Matrix::operator==(mat2)));
        }



//////////////////////////////////////////////////////////////////////////////////////////////



        //n++
        //Courts an auxiliary matrix without the change and then changes my matrix
        zich::Matrix zich::Matrix::operator++(int){
            //Creating an auxiliary matrix
            Matrix curr_mat{this->mat,this->rows,this->column};
            //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                //Promotes by 1 all matrix values
                 this->mat.at(i).at(j)=this->mat.at(i).at(j)+1;   
            }}
            return curr_mat;   
        }
        //n--
        //Courts an auxiliary matrix without the change and then changes my matrix
        zich::Matrix zich::Matrix::operator--(int){
           //Creating an auxiliary matrix 
           Matrix curr_mat{this->mat,this->rows,this->column};
           //Goes through all the values of the matrix
            for(size_t i = 0; i< this->rows; i++)
            {
                for(size_t j = 0; j<this->column; j++)
                {
                  //Subtracts by 1 all matrix values   
                 this->mat.at(i).at(j)=this->mat.at(i).at(j)-1;   
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
            Matrix curr_mat{this->mat,this->rows,this->column};
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
            for(size_t i = 0; i< Mat.rows-1; i++){
            os << "[";    
                //Adds all the values including spaces between them without the last place
                for(size_t j = 0; j<Mat.column-1; j++){
                os << Mat.mat.at(i).at(j) << " "; 
            }
            //Adds the last non-spaced value, and the final bracket
            os <<Mat.mat.at(i).at(size_t(Mat.column-1))<<"]" << endl;
            }
            for(size_t t = size_t(Mat.rows-1); t< Mat.rows; t++){
            os << "[";    
                //Adds all the values including spaces between them without the last place
                for(size_t j = 0; j<Mat.column-1; j++){
                os << Mat.mat.at(t).at(j) << " "; 
            }
            //Adds the last non-spaced value, and the final bracket
            os <<Mat.mat.at(t).at(size_t(Mat.column-1))<<"]";
            }
           return os;
        }

        istream& zich::operator>>(istream& is, Matrix& Mat){
            // copy the string that I get and count the rows // 
            string in;
            char val=0;
            int count_left=0;
            int count_right=0;
            is.get(val);
            //copy the string 
            while(val!='\n'){
            in+=val;
            // count how mach [
            if(val=='['){
             count_left++;}  
            // count how mach [
            if(val==']'){
             count_right++;}   
            // get the next char  
            is.get(val);
            }
            // add '\n'
            in+='\n';
             // if the count of [ not equel to the count of ]
            if(count_right!=count_left){
            throw invalid_argument ("invalid argument");        
            }
            // chang the rows number
            Mat.rows = count_right;
            ///////////// count the column //////
            size_t indx=0;
            int count=0;
            // take the first value
            val=in.at(indx);
            // stop when the row end
            while(val!=']'){
            if(val>=Min_num && val<=Max_num){
            count++;        
            }
            indx++;
            val=in.at(indx);  
            }
            // chang the number of column
            Mat.column=count;
            // make a new matrix 
            Matrix curr{Mat.column, Mat.rows};
            Mat.mat=curr.mat;
            ////////////////add all the values from the string /////////////
            size_t num_of_row=0;
            indx=0;
            // get the next value
            val=in.at(indx);
            indx++;
            // stop when I get do the end of the string 
            while (val!='\n'){
            // every row need to start with [    
            if(val!='['){
            throw invalid_argument ("invalid argument");        
            }
            size_t num_of_clm=0;
            val=in.at(indx);
            indx++;
            // stop when I see ] - when the row stip
            while(val!=']'){
            // if this is not a number     
            if(val<Min_num|| val>Max_num){
            throw invalid_argument ("invalid argument");        
            }
            // chang from char to string 
            string to_change =" ";
            to_change = val;
            // chang from string to double
            double num = stod(to_change);
            // ad in the right place
            Mat.mat.at(num_of_row).at(num_of_clm)=num;
            val=in.at(indx);
            indx++;
            // if ' ' get the next char
            if(val==' '){   
            val=in.at(indx);
            indx++;        
            }
            num_of_clm++;
            }
           // the end of row 
            val=in.at(indx);
            indx++;
            // if I didnt get to the end
            if(val!='\n'){
            // check if i have a ,     
            if(val!=','){
            throw invalid_argument ("invalid argument");        
            }
            val=in.at(indx);
            indx++;
            // cheak if I have a ' '
            if(val!=' '){
            throw invalid_argument ("invalid argument");        
            }
            num_of_row++;
            val=in.at(indx);
            indx++;
            }
            }
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
             if(rows*column!=mat.size()){
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
             