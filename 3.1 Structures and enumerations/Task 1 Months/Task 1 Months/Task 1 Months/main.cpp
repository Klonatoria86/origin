// ������� 1 ������
# include <iostream>
enum month { january = 1, february, march, april, may, june, july, august, september, october, november, december };
int main() {
	setlocale(LC_ALL, "rus");
	int month = 0;
	do {
		switch (month) {
		case(0):
			break;
		case(january):
			std::cout << "������" << std::endl;
			break;
		case(february):
			std::cout << "�������" << std::endl;
			break;
		case(march):
			std::cout << "����" << std::endl;
			break;
		case(april):
			std::cout << "������" << std::endl;
			break;
		case(may):
			std::cout << "���" << std::endl;
			break;
		case(june):
			std::cout << "����" << std::endl;
			break;
		case(july):
			std::cout << "����" << std::endl;
			break;
		case(august):
			std::cout << "������" << std::endl;
			break;
		case(september):
			std::cout << "��������" << std::endl;
			break;
		case(october):
			std::cout << "������" << std::endl;
			break;
		case(november):
			std::cout << "������" << std::endl;
			break;
		case(december):
			std::cout << "�������" << std::endl;
			break;
		default:
			std::cout << "������������ �����!" << std::endl;
		}
		std::cout << "������� ����� ������: ";
		std::cin >> month;
	} while (month != 0);
	std::cout << std::endl;
	std::cout << "�� ��������" << std::endl;
	return 0;
}