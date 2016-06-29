#include <iostream>
#include <fstream>

using namespace std;

#include "MatrixType.cpp"

class SumMatrix: public MatrixType
{
      friend istream & operator >> (istream &, SumMatrix &);
      friend ostream & operator << (ostream & , const SumMatrix &);
      
      friend SumMatrix operator + (const SumMatrix &, const SumMatrix &);
      
      public:
             SumMatrix();
};
