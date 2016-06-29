/* file SumMatrix.cpp
   March. 27, 2012
   Adds two matrixes together using overloaded operators*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


#include "SumMatrix.cpp"


int main()
{
    
    SumMatrix matrix1,matrix2, matrix3;
    
    ifstream dat1, dat2; ofstream out1;
    dat1.open("input1.txt");
    dat2.open("input2.txt");
    out1.open("output2.txt");
   
   if(! dat1)
      {
      cout<< "failure to open input1.txt" << endl;
      system("pause");
      return 1;} // error condition
   if(! dat2)
        {
      cout<< "failure to open input2.txt" << endl;
      system("pause");
      return 1; // error condition
      }
   if(! out1)
        {
      cout<< "failure to open output1.txt" << endl;
      system("pause");
      return 1; // error condition  
      }
   
    dat1 >> matrix1;
    dat2 >> matrix2;
    
    matrix3  = matrix1 + matrix2;
    out1 << matrix3;
    
    
    dat1.close();
    dat2.close();
    out1.close();
    system("pause");
    return 0;
    
}
 
