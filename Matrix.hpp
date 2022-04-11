#include <string>
#include <vector>
using namespace std;


namespace zich{
    class Matrix{   
    private:
        std::vector<vector<double>> mat;
        int rows;
        int column;
     
    public:
        Matrix(int column,int rows);
        Matrix(std::vector<vector<double>> mat, int rows, int column);
        Matrix(std::vector<double> mat, int rows, int column);
        Matrix operator+(const Matrix &mat2);
        Matrix& operator+=(const Matrix &mat2);
        Matrix& operator+=(const double scalar);
        Matrix operator+();
        Matrix operator-(const Matrix &mat2);
        Matrix& operator-=(const Matrix &mat2);
        Matrix& operator-=(const double scalar);
        Matrix operator-();
        bool operator<(const Matrix &mat2);
        bool operator>(const Matrix &mat2);
        bool operator<=(const Matrix &mat2);
        bool operator>=(const Matrix &mat2);
        bool operator==(const Matrix &mat2) const;
        bool operator!=(const Matrix &mat2) const;
        //n++
        Matrix operator++(int);
        Matrix operator--(int);
         // ++n
        Matrix& operator++();
        Matrix& operator--();
        Matrix  operator*(const Matrix &mat2);
        //3*A
        friend Matrix operator*(double scalar, Matrix &mat2);
        // A*3
        Matrix operator*(double scalar);
        Matrix& operator*=(const Matrix &mat2);
        Matrix& operator*=(double scalar);
        friend ostream& operator<<(ostream& os, Matrix const& Mat);
        friend istream& operator>>(istream& is, Matrix& Mat);
    

    };

        
}
