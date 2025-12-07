#include<iostream>

using namespace std;

// 显式地给枚举成员变量赋值（必须是整型），也可以不赋值，默认从 0 开始递增
// 后面没被赋值的枚举成员常量，会自动赋值为前一个成员常量的值加 1
// C++ 11 起，枚举成员常量的取值范围是大于枚举成员常量最大值的最小2的幂-1（即2^n-1）
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