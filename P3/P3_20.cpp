#include<iostream>

using namespace std;

enum {
    AsInt = 0,
    AsDouble = 1,
    AsText = 3
};

int main()
{
    int a;

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