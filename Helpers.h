#include <iostream>
#pragma once

template <typename Number>

Number SqrSum(Number a, Number b) {
	return pow(a + b, 2);
}

template <typename Number, typename AnotherNumber>

// ����� ������ ����� � ������ ������� �������� ������, ���� ��� � �� ����� ��������������
Number SqrSum(Number a, AnotherNumber b) {
	return pow(a + b, 2);
}
