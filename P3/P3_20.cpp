#include<iostream>

using namespace std;

// 显式地给枚举成员变量赋值（必须是整型），也可以不赋值，默认从 0 开始递增
// 后面没被赋值的枚举成员变量，会自动赋值为前一个成员变量的值加 1
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