#include <iostream>
using namespace std;

void jacdaegi(int n)
{
	for (int i = 0; i < 4 * (n); ++i)
		cout << "_";
}
void recursive(int cur, int n)
{
	if (n == cur)
	{
		jacdaegi(cur);
		cout << "\"����Լ��� ������?\"\n";
		jacdaegi(cur);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		jacdaegi(cur);
		cout << "��� �亯�Ͽ���.\n";
		return;
	}
	jacdaegi(cur);
	cout << "\"����Լ��� ������?\"\n";
	jacdaegi(cur);
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
	jacdaegi(cur);
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
	jacdaegi(cur);
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
	recursive(cur + 1, n);
	jacdaegi(cur);
	cout << "��� �亯�Ͽ���.\n";

}
int main()
{
	int input;
	cin >> input;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursive(0, input);
}