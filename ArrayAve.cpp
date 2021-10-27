#include <iostream>
using namespace std;

double ave(double array[],int n)

{

double sum; 

for(int i=0;i<n;i++)

{

		sum+=array[i];

}

return sum/n;

}



int main()

{

double array[5]={1,2,3,4,5};

cout<<"배열의 평균은 ="<<ave(array,5);



return 0;

}