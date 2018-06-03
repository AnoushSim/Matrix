#include <iostream>
bool foo(int** a1, int** a2, int s1, int s2);
int main()
{
  std::cout << "Please enter the number of rows and columns of the first matrix: " << std::endl;
  int n ;
  std::cin >> n;
  std::cout << "Please enter the number of rows and columns of the second matrix: " << std::endl;
  int m ;
  std::cin >> m;
  int** a = new int* [n] ;
  for(int i = 0 ; i < n ; ++i)
      a[i] = new int [n];
  std::cout << "Enter the elements of the first matrix: " << std::endl;
  for( int i=0; i<n; ++i)
    for( int j=0; j<n; ++j)
        std::cin>>a[i][j];
  int** arr = new int* [m] ;
  for(int i = 0 ; i < m ; ++i)
      arr[i] = new int [m];
  std::cout << "Enter the elements of the second matrix: " << std::endl;
  for( int i=0; i<m; ++i)
    for( int j=0; j<m; ++j)
        std::cin>>a[i][j];
  if(foo(a,arr,n,m)) 
     std::cout<<"The sum of main diagonal and antidiagonal elements of the first matrix is less.";
  else 
     std::cout<<"The sum of main diagonal and antidiagonal elements of the second matrix is less.";
  for( int i = 0; i < n; ++i)
      delete [] a[i];
  delete []a;
  a=NULL;
  for( int i = 0; i < m; ++i)
      delete [] arr[i];
  delete []arr;
  arr=NULL;
  return 0;
}
bool foo(int** a1, int** a2, int s1, int s2)
{int sum1=0, sum2=0;
 for( int i = 0; i < s1; ++i)
      sum1 += a1[i][i];
 for( int i=0,j=s1-1; i<s1 && j >= 0; ++i,--j )
      sum1 += a1[i][j];
 for( int i = 0; i < s2; ++i)
      sum2 += a2[i][i];
 for( int i=0,j=s2-1; i < s2 && j >= 0; ++i,--j )
      sum2 += a2[i][j];
  return sum1 < sum2;
  
}
