#include "SumMatrix.h"    



SumMatrix::SumMatrix()
{
    ;          
            
            
            
            
}
istream& operator>>(istream &dat2, SumMatrix &funMatrix)
         {
   int numRows, numCols;
   float value;  
   
   dat2 >> numRows >> numCols;
   
   funMatrix.setrowandcolumns(numRows,numCols);
   
   
   for(int b = 0; b < funMatrix.NumberOfRows(); b++)
        {
         for(int c = 0; c < funMatrix.NumberOfCols();c++)
             {
               dat2 >>  value;
               funMatrix.storeitem(b,c, value);              
             }
         }
                     
         return dat2;
         }
         
ostream& operator<<(ostream &out2, const SumMatrix &printMatrix)
      {
      out2 << "the sum of two matrixes"<<endl;
      out2 << printMatrix.NumberOfRows() << " " << printMatrix.NumberOfCols()
           << endl;
        for(int d = 0; d < printMatrix.NumberOfRows(); d++)
      {
                
        for(int e = 0; e < printMatrix.NumberOfCols();e++)        
        {
          
          out2  << " " 
                << printMatrix.valueat(d,e)<< " ";
        }
        out2 << endl;
      }
        out2 << endl<< endl; 
            
         return out2;   
            
            }
SumMatrix operator+(const SumMatrix& m1, const SumMatrix& m2)
            {
            SumMatrix m3;
            float matrixSum;       
            int rows,cols;

            if(m1.NumberOfRows() >= m2.NumberOfRows()) 
                
                 rows = m1.NumberOfRows();
            else
                rows = m2.NumberOfRows();
                                
            
            if(m1.NumberOfCols() >= m2.NumberOfCols())
               
                 cols = m1.NumberOfCols();
            else
                cols = m2.NumberOfCols();
                
                
            m3.setrowandcolumns(rows,cols);
            
        for(int d = 0; d < rows; d++)
      {
                
        for(int e = 0; e < cols;e++)        
        {
                float value1, value2;
               
               value1 = m1.valueat(d,e);
               value2 = m2.valueat(d,e); 
          
               matrixSum = value1 + value2;
              
                            
               m3.storeitem(d,e,matrixSum);
        }
      } 
        return m3;
        
        }
