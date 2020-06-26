//program for finding sum of two matrices
#include<iostream>
using namespace std;
void sum(int, int);

int main(){
   int row, col;
   cout<<"Enter the number of rows :";
   cin>>row;
   cout<<"Enter the number of column :";
   cin>>col;

   sum(row, col);
   return 0;
}
void sum(int r, int c){
   int m1[r][c], m2[r][c], s[r][c];
   cout << "Enter the elements of  first 1st matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j < c;j++ ) {
       cin>>m1[i][j];
     }
   }

   cout << "Enter the elements of  first 2nd matrix: ";
   for (int i = 0;i<r;i++ ) {
     for (int j = 0;j<c;j++ ) {
       cin>>m2[i][j];
     }
   }
   cout<<"resultant matrix : ";
   for (int i = 0;i<r;i++ ) 
   { 
	   cout<<endl;
     for (int j = 0;j<c;j++ )
      {
		  
       s[i][j]=m1[i][j]+m2[i][j];
       cout<<s[i][j]<<" \t";
     }
   }
}
