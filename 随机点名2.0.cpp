#include <random>
#include <iostream>
using namespace std;
int main()
{
    cout << "本程序采用c++11标准的rd随机设备用于产生随机种子，以rd的结果作为初始种子，使用梅森19937随机数引擎随机。" << endl
        << "用 gen 生成的随机熵，经 dis 的分布变换，生成落在 1, 12与1，4内的均匀的、随机的 int"<<endl;
    cout << "源码网址：https://github.com/1392496019/random-call-"<<endl;
    random_device rd;
    mt19937 gen(rd());
    int i = 1, b = 0;
    do
    {
        cout << "请选择模式，0为全体随机，1为只随机1号，2为2号，3为3号，4为四号：";
        cin >> b;
        cout << "输入您要随机的人数：";
        cin >> i;
        if (b == 0)
        {
            uniform_int_distribution<int>dis(1, 12);
            uniform_int_distribution<int>ds(1, 4);
            for (int a = 1; a <= i; a++)
            {
                cout << dis(gen) << "组" << ds(gen) << "号" << endl;
            }
        }
        else
        {
            uniform_int_distribution<int>dis(1, 12);
            for (int a = 1; a <= i; a++)
            {
                cout << dis(gen) << "组" << b << "号" << endl;
            }
        }
    } while (i != 0);
    return 0;
