// Console_main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "DLL_add.h"
#include "DLL_sub.h"
#include "Lib_minus.h"
#include "Lib_multiply.h"
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "a = " ;
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;
    int result1 = add_fun(a, b);
    int result2 = add_minut(result1, c);
    int result3 = add_multiply(result2, d);
    int result4 = add_sub(result3, 3);
    cout << "((a+b)-c) * d / 3 = " << result4 << endl;
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
