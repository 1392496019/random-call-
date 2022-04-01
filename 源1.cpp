#include <random>
#include <iostream>
using namespace std;
int main()
{
    cout << "本程序采用c++11标准的rd随机设备用于产生随机种子，以rd的结果作为出视种子，使用梅森19937随机数引擎随机。" << endl
        << "用 gen 生成的随机熵，经 dis 的分布变换，生成落在 1, 12与1，4内的均匀的、随机的 int";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>dis(1, 12);
    uniform_int_distribution<int>ds(1, 4);
    int i = 1;
    do
    {
        cout << dis(gen) << "组" << ds(gen) << "号" << endl << "输入1继续随机";
        cin >> i;
    } while (i == 1);
    return 0;
}