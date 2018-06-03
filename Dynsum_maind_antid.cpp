#include <iostream>
int main()
{
  std::cout << "Please enter the number of rows and columns: " << std::endl;
  int n ;
  std::cin >> n;
  int** a = new int* [n] ;
  for(int i=0;i<n;++i)
      a[i] = new int [n];
  std::cout << "Enter the elements: " << std::endl;
  for( int i=0; i<n; ++i)
    for( int j=0; j<n; ++j)
        std::cin>>a[i][j];
 int s=0;
 for( int i=0; i<n; ++i)
      s+=a[i][i];
 std::cout<<"The sum of the elements of the main diagonal is: "<<s<<std::endl;
 int s1=0;
 for( int i=0,j=n-1; i<n && j>=0; ++i,--j )
      s1+=a[i][j];
 std::cout<<"The sum of the elements of the antidiagonal  is: "<<s1<<std::endl;
 for( int i=0; i<n; ++i)
      delete [] a[i];
 delete []a;
 a=NULL;
 return 0;
}
