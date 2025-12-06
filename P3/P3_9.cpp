#include<iostream>

using namespace std;

int main()
{
    int num;
    num = static_cast<int>(10.01 + 20.99);
    printf("num = %d\n", num);
    return 0;
}