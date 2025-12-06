#include<iostream>
#include<string>
#include<cstring>


using namespace std;
int main()
{
    char a = 'b';
    char b = 'a';
    // 'b'的ASCII值是98，'a'的ASCII值是97，相加得到195，对应的是一个扩展ASCII字符
    // 标准ASCII范围是0-127，超出这个范围的值在不同系统上可能会有不同的表示
    char c = a + b;
    cout << c << endl;

    char str1[] = "Hello ";
    string str;
    // strcpy(str,str1); // 错误，strcpy不能用于string类型
    str = str1; // 正确，string类型可以直接赋值char数组
    // str.size(); // 获取字符串长度
    // strlen(str1); // 获取char数组长度
    cout << str << endl;
    return 0;
}