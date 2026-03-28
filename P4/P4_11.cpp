#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    // char ch[] = {'a', 'b', 'c', 'd', 'e'};
    // char cc[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    // // 双引号表示字符串，指的是地址常量，编译器会自动在结尾添加一个空字符\0
    // // 数组名本质上是一个指针常量，指向数组的首元素
    // char c[] = "abcde";
    // // cout输出字符数组时会找空字符\0作为结束标志,否则会一直输出下去，直到遇到\0为止
    // cout << ch << endl;
    // cout << c << endl;
    // printf("%s\n", cc);
    
    char ch[12] = "abc  ";
    // cin遇到空白字符(空格、回车 换行)就会停止输入
    // cin >> ch;
    cout << ch << ' ' << strlen(ch) << endl;
    return 0;
}