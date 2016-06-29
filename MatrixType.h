#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct oneitem
 {
      int row , col;
      float value;
                      };

const int MAXSIZE = 225;



class MatrixType
{
      public:
             MatrixType();
             
             float valueat(int i, int j) const;
             
             void setrowandcolumns(int r, int c);
             
             
             void storeitem(int i,int j, float value);
             
             
             
             
             int NumberOfRows() const;
             int NumberOfCols() const;
      private:
              oneitem matrix[MAXSIZE];
            
             int rowsfilled, columnsfilled;
              
              int length;
              
};
