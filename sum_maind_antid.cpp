#include <iostream>
int main()
{
  const int n = 4 ;
  int a[n][n];
  std::cout<<"Enter the elements: "<<std::endl;
  for( int i=0; i<n; ++i)
    for( int j=0; j<n; ++j)
        std::cin>>a[i][j];
 int s=0;
 for( int i=0; i<n; ++i)
   s+=a[i][i];
 std::cout<<"The sum of the elements of the main diagonal is: "<<s<<std::endl;
 int s1=0;
 for( int i=0,j=n-1; i<n; ++i,--j )
   s1+=a[i][j];
 std::cout<<"The sum of the elements of the antidiagonal  is: "<<s1<<std::endl;
 return 0;
}
