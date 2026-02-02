#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
long n;
cout<<"Please Enter a number: "; cin>>n; cout<<endl;

long long factorial=1;
for(int FC=n;FC>=1;FC--)
{
factorial*=FC;

}

cout<<"The Factorial of Number is: "<<factorial;


    
    
    return 0;
}
