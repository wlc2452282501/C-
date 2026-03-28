#include<iostream>
using namespace std;

int main()
{
    int n = 10;

    int *p = &n +4;
    int *q = new int;
    cout<<*p<<endl;

    cout<< sizeof(*p) <<endl;
    cout<< sizeof(n) <<endl;

    double f = 1.3;
    auto m = f+1;
    cout<< sizeof(f) <<endl;
    cout<< sizeof(f+1) <<endl;
    cout<< sizeof(m) <<endl;

    return 0;
}