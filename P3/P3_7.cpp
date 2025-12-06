#include<iostream>

using namespace std;
int main()
{
    // 设置浮点数的显示格式为定点格式，即小数点后显示固定数量的数字
    cout.setf(ios_base::fixed, ios_base::floatfield);

    double num = 123.456789;
    // float类型的精度默认是6位10进制数字
    // 设置小数点后显示3位数字
    cout.precision(3);
    cout << "Number with 3 decimal places: " << num << endl;

    return 0;
}