#include <iostream>
#include "Cell.h"
#include "Pole.h"

using namespace std;

/*���� ��אַ㣮�쭮� ���� ࠧ��஬ n*m ���⮪.
����� ᮢ����� 蠣� ������ � ���� �����
��ࠢ� ��� ����. �������, ᪮�쪨�� ᯮᮡ���
����� ������� �� ����� ���孥� ���⪨ � �ࠢ��
������. */

int main() {
    int n, m;
    cout<<"������ ࠧ���� ��אַ㣮�쭨�� n*m\n";
    cin>>n>>m;
    Pole pole(n, m);
    cout<<pole.getKolPaths();

    return 0;
}
