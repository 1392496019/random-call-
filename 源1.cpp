#include <random>
#include <iostream>
using namespace std;
int main()
{
    cout << "���������c++11��׼��rd����豸���ڲ���������ӣ���rd�Ľ����Ϊ�������ӣ�ʹ��÷ɭ19937��������������" << endl
        << "�� gen ���ɵ�����أ��� dis �ķֲ��任���������� 1, 12��1��4�ڵľ��ȵġ������ int";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int>dis(1, 12);
    uniform_int_distribution<int>ds(1, 4);
    int i = 1;
    do
    {
        cout << dis(gen) << "��" << ds(gen) << "��" << endl << "����1�������";
        cin >> i;
    } while (i == 1);
    return 0;
}