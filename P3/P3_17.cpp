#include<iostream>

using namespace std;

// 定义结构体
struct Student
{
    string name;
    int age;
    double score;
};

int main()
{
    Student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 90.0;
    cout << stu1.name << endl;
    cout << stu1.age << endl;
    cout << stu1.score << endl;
    // cout << stu1 << endl; // 直接输出结构体变量名会报错
    return 0;
}