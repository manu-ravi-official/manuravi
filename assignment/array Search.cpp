//array search 
#include<iostream>
using namespace std;
int search(int ar[] ,int size);
int main()
{
  int size,i;
  cout<<"enter array size";
  cin>>size;
  int ar[20];
  for(i=0;i<size;i++)
  {
    cin>>ar[i];
  }
 search(ar,size);
}
int search( int ar[],int size)
{
  int chk,cnt=0, pos,i;
  cout<<"enter number to check""";
  cin>>chk;
   for(i=0; i<size; i++)
        {
                
                if(ar[i]==chk)
                {
                        cnt=1;
                        pos=i+1;
                        break;
                }
        }
        if(cnt==0)
        {
                cout<<"\n Element Not Found..!!";
        }
        else
        {
                cout<<"\n Element "<<chk<<" Found At Position "<<pos;
        }
        return 0;

}
