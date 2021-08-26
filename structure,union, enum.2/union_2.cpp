#include<iostream>
using namespace std;
union  money
{
    int rice; // 4 bytes take int
    char car; //1 byte take char
    float pounds;//4 bytes take float
};                //money  take only 4  bytes as they shared memory 


// At union we can acess one at atime whether we can use rice,car,pounds
int main()
{
    money m;
    m.rice=10;
    cout<<m.rice<<endl;
    m.car='m';
    m.pounds=1234.4;
    //it gives a random value bcz [m.car='c'] is being updated by [m.pounds=1234.4]
    cout<<m.car<<endl;
    cout<<m.pounds<<endl;

}