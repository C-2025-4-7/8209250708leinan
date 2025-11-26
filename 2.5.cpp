#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入一行字符: ";
    getline(cin, input);  // 读取整行输入
    // 遍历字符串中的每个字符
    for (char c : input) {
        if (isalpha(c)) {        // 判断是否为英文字母
            letters++;
        }
        else if (isdigit(c)) { // 判断是否为数字
            digits++;
        }
        else if (isspace(c)) { // 判断是否为空格
            spaces++;
        }
        else {                // 其他字符
            others++;
        }
    }
    // 输出统计结果
    cout << "\n统计结果:" << endl;
    cout << "英文字母: " << letters << " 个" << endl;
    cout << "空格: " << spaces << " 个" << endl;
    cout << "数字字符: " << digits << " 个" << endl;
    cout << "其他字符: " << others << " 个" << endl;
    return 0;
}