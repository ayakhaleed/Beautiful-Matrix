#include <iostream>

using namespace std;

int main()
{
    int arr[5][5];
    int r,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
          cin>>arr[i][j] ;
          if(arr[i][j]==1)
          {
              r=i;
              c=j;
          }
        }
    }
    int counter=0;
    if(r<2)
    {
        counter+=2-r;
    }
    else if(r>2)
    {
       counter+=r-2;
    }
    if(c<2)
    {
        counter+=2-c;
    }
    else if(c>2)
    {
       counter+=c-2;
    }
    cout<<counter;
    return 0;
}
