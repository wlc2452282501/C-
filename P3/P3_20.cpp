#include<iostream>

using namespace std;

enum {
    AsInt ,
    AsDouble = 100,
    AsText = 3
};

int main()
{
    int a;

    a = AsInt;

    switch (a)
    {
    case AsInt:
        /* code */
        break;
    case AsDouble:
        /* code */
        break;
    case AsText:
        /* code */
        break;
    default:
        break;
    }

    return 0;
}