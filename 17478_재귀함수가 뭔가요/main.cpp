#include <iostream>
using namespace std;

void jacdaegi(int n)
{
	for (int i = 0; i < 4 * (n - 1); ++i)
		cout << "-";
}
void recursive(int n)
{
	if (n == 0)
		return;
	jacdaegi(n);
	cout << "\"����Լ��� ������?\"\n";
	jacdaegi(n);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	jacdaegi(n);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	jacdaegi(n);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	recursive(n - 1);
	jacdaegi(n);
	cout << "��� �亯�Ͽ���.\n";

}
int main()
{
	int input;
	cin >> input;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursive(input);
}