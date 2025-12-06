#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch[5] = {'a','b','c','d','\0'}; 
    string str = "abcd";

    printf("%s\n", ch);
    printf("%s\n", str.c_str());
    str += "efgh";
    printf("%s\n", str.c_str());

    return 0;
}