
#include "MatrixType.h"



MatrixType::MatrixType()
{
    rowsfilled = 0;
    columnsfilled =0;
    length = 0;  
}

void MatrixType::setrowandcolumns(int r,int c)
{
   rowsfilled = r;
   columnsfilled = c;


}

float MatrixType::valueat(int i, int j) const
{
    int a = 0;
    
    while (a < length and (matrix[a].row != i or matrix[a].col != j))
    {
        a++;
    }                          

    if (a < length)
    {
        return matrix[a].value;
    }
    else
        return 0.0f;
}

void MatrixType::storeitem(int i,int j, float value){

    if (i < MAXSIZE && value != 0.0f)
    {
        matrix[length].row = i;
        matrix[length].col = j;
        matrix[length].value = value;
        length++;
    }
}

int MatrixType::NumberOfRows() const
{
   return rowsfilled;
     
}
int MatrixType::NumberOfCols() const
{
    return columnsfilled;
}



