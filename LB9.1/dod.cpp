#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������
#include "cmath"

using namespace nsVar;

void nsDod::dod() {
	a *= (2 * n * pow(x, 2) - pow(x, 2)) / (2 * n + 1); // ������� ����������� ��
} // ���������� ����