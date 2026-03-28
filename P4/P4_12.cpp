// #include<iostream>

// using namespace std;

// int main()
// {
//     char ch[20];
//     char ch2[20];
//     cin >> ch;
//     cout << ch << endl;
//     // getline必须要传参
//     // cin.getline(); 
//     //无参数是直接读取下一个字符，有参数是读取指定长度的字符串或者遇到换行符停止，但是不丢弃换行符
//     // cin.get();
//     // 返回值是cin对象本身，可以继续链式调用
//     // cin.get(ch,20).get();
//     // getline遇到换行符会停止输入并丢弃换行符，或者达到指定长度就会停止输入
//     // 同理可以继续链式调用
//     // cin.getline(ch2, 20);
//     (cin >> ch2).get();
//     cout << ch2 << endl;
//     return 0;

// }

#include <iostream>

using namespace std;

int main()
{
    char small_buffer[3];  // 很小的缓冲区
    char next_input[20];
    
    cout << "请输入长字符串(如: abcdefg): ";
    
    // 第一次输入会导致failbit设置
    cin.getline(small_buffer, 3);
    
    cout << "第一次输入后:" << endl;
    cout << "small_buffer = \"" << small_buffer << "\"" << endl;
    cout << "failbit状态: " << (cin.fail() ? "设置" : "未设置") << endl;
    
    // 展示输入缓冲区还有数据
    cout << "\n检查输入缓冲区状态:" << endl;
    cout << "good() = " << cin.good() << endl;
    cout << "fail() = " << cin.fail() << endl;
    cout << "eof() = " << cin.eof() << endl;
    cout << "bad() = " << cin.bad() << endl;
    
    // 尝试第二次输入（会失败，因为failbit仍在）
    cout << "\n尝试第二次输入（应该会失败）:" << endl;
    //失效位会让cin停止工作
    cin >> next_input;
    cout << "第二次输入结果: " << (cin.fail() ? "失败" : "成功") << endl;
    
    // 清除错误状态
    cout << "\n清除错误状态..." << endl;
    cin.clear();
    
    // 现在从缓冲区读取剩余数据
    cout << "现在从缓冲区读取剩余字符:" << endl;
    char remaining_chars[20];
    cin.getline(remaining_chars, 20);
    cout << "剩余字符: \"" << remaining_chars << "\"" << endl;
    
    return 0;
}