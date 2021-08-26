#include<iostream>
using namespace std;

typedef struct employee   //by using [type_def] we did not need to type struct employee ,we can only type ep
{
    int eid; // 4 bytes take int
    char favchar; //1 byte take char
    float salary; //4 bytes take float
} ep;            //total memory taken by emplyee is 4+1+4 ==9
int main()
{
    struct employee sagar;
    sagar.eid=1;
    sagar.favchar='s';
    sagar.salary=120000;
    
    cout<<sagar.salary<<endl;
    cout<<sagar.eid<<endl;
    cout<<sagar.favchar<<endl;

    ep sonu;
    sonu.eid=2;
    sonu.favchar='S';
    sonu.salary=12000.23;
    cout<<sonu.salary<<endl;
    cout<<sonu.eid<<endl;
    cout<<sonu.favchar<<endl;


}