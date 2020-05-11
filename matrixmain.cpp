// matrixmain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "matrix.h"

int main()
{
    Matrix X1;
    vector<double> test = { 1.0,3.0,2.0,2.0 };
    vector<double> test2 = { 2.0,2.0,2.0,4.0,7.0,7.0,6.0,18.0,22.0 };
    vector<vector<double>> X=X1.GetMatrix(2, 2,test);
    Matrix X2,X3,X4;
    X2.GetMatrix(2, 2);
    X3 = X2 * X1;
    X4.GetMatrix(3, 3, test2);
    X4.UMatrix().printmatrix();
    std::cout << X4.UMatrix() .det()<<endl;
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
