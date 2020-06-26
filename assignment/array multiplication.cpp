//program for finding multiplication result of two matrices
#include<iostream>
using namespace std;
void sum(int row, int col);

int main()
{
   int row, col;
   cout<<"Enter the number of rows :"<<endl;
  cin>>row;
   cout<<endl;
   cout<<"Enter the number of column :"<<endl;
   cin>>col;
   cout<<endl;
   sum(row, col);
   return 0;
}



void sum(int row, int col)
{
   int m1[row][col],k=0,i,j,row2;
   cout << "Enter the elements of   1st matrix: ";
    
   for (int i = 0;i<row;i++ )
    {
     for (int j = 0;j < col;j++ ) 
     {
       cin>>m1[i][j];
     }
 }
   
 cout<<"Enter the number of cols in 2 nd matrix:"<<endl;
 cin>>row2;

    
   int m2[col][row2],s[row][row2];
    cout << "Enter the elements of   2nd matrix: ";
   for (int i = 0;i<col;i++ ) 
   {
     for (int j = 0;j<row2;j++ )
      {
       cin>>m2[i][j];
     }
   }
   //making zero
   for (int i = 0;i<row;i++ )
    {
     for (int j = 0;j < row2;j++ ) 
     {
      s[i][j]=0;
     }
 }
   
   cout<<"multiplied  matrix : ";
  for(i = 0; i < row; ++i)
        for(j = 0; j < row2;j++)
            for(k = 0; k < col; ++k)
            {
                s[i][j] += m1[i][k] * m2[k][j];
            }

     
    cout<<"resultant array is";
   // Displaying the multiplication of two matrix.
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < row; ++i)
		{
			for(j = 0; j < col; ++j)
				{
					cout << " " << s[i][j];
					//if(j == row-1)
					
				}

				cout << endl;
		}

}
