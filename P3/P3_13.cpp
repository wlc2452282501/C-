#include<iostream>
#include<string>

using namespace std;

int main()
{
    //类利用自动调节字符串长度,可以像简单变量一样使用
    string str; 
    string str2 = "Hello World";
    str2 = "Hello C++";

    char ch[20];
    char ch2[20];

    // scanf("%s", str); // 不能用scanf读入string类型
    cin >> ch;
    // string不能用cin.get()读入
    // getline(cin, ch2); // 不能用getline读入char数组
    // cin.getline(ch2, 20); // 不能用cin.getline读入string类型
    // cin.getline和getline都会受到换行符的影响
    getline(cin,str); 
    // str.getline(); getline不是string的成员函数
    // scanf("%s", ch);
    // cin会跳过前导空白字符，包括空格、制表符和换行符，直到遇到第一个非空白字符为止
    cin >> ch2;
    // cin.get(ch2, 20);
    cout << str << endl;
    cout << ch << endl;
    cout << ch2 << endl;
    cout << str2 << endl;

    return 0;
}