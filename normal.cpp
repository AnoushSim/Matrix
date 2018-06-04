#include <iostream>

bool foo(int** a1, int** a2, int s1, int s2);

int main()
{
    int s1, s2 , i, j;
    std::cout<<"Please enter the number of rows and columns of the first matrix: "<<std::endl;
    std::cin>>s1;
    std::cout<<"Please enter the number of rows and columns of the second matrix: "<<std::endl;
    std::cin>>s2;
    int** matrix1 = new int*[s1];
    for (i = 0; i < s1; ++i)
        matrix1[i] = new int[s1];
    int** matrix2 = new int*[s2];
    for (i = 0; i < s2; ++i)
        matrix2[i] = new int[s2];
    std::cout<<"Fill the first matrix:  "<<std::endl;
    for (i = 0; i < s1; i++)
        for (j = 0; j < s1; j++)
            std::cin>>matrix1[i][j];
    std::cout<<"Fill the second matrix:  "<<std::endl;
    for (i = 0; i < s2; i++)
        for (j = 0; j < s2; j++)
            std::cin>>matrix2[i][j];

     if(foo(matrix1, matrix2, s1, s2))
         std::cout<<"The sum of main diagonal and antidiagonal elements of the first matrix is less.";
    else 
        std::cout<<"The sum of main diagonal and antidiagonal elements of the second matrix is less.";
    return 0;
}
bool foo(int** a1, int** a2, int s1, int s2)
{
	int i, j;
  	int sum1=0, sum2=0;
	for( i = 0; i < s1; ++i )
      	sum1 += a1[i][i];
 	for( i=0,j=s1-1; i < s1 && j >= 0; ++i,--j )
      	sum1 += a1[i][j];
 	for( i = 0; i < s2; ++i )
    	sum2 += a2[i][i];
 	for( i=0,j=s2-1; i < s2 && j >= 0; ++i,--j )
      	sum2 += a2[i][j];
  	return sum1 < sum2;
}
