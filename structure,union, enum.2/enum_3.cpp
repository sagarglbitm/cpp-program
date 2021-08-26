#include<iostream>
using namespace std;
int main()
{
    enum meal{breakfast,lunch,dinner};

    // By using enum we can use breakfast ,lunch ,dinner in form of integer with initializing with 0 and 
    //  then incremented
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl; 

    //we can use enum by this method
    int  m = breakfast;
    cout<<"the value of m is: "<<m<<endl;
    meal n=lunch;
    cout<<"the value of n is: "<<n<<endl;
}