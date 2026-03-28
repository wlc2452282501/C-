#include<iostream>

using namespace std;
int main()
{
    int* p = nullptr;
    float* q = nullptr;

    cout<<"Size of int pointer is "<<sizeof(p)<<endl <<"Size of float pointer is "<<sizeof(q)<<endl;

    // p = &5; //错误，不能将字面值的地址赋给指针
    // q = p;  //错误，不能将int类型指针赋给float类型指针

    return 0;
}