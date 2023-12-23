// Hometask-1_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct AddressList {
	std::string city;
	std::string street;
	int houseNumber{};
	int apartNumber{};
	long int index{};
};

void printAddress(AddressList& address) {
	std::cout << "Город: " << address.city << std::endl;
	std::cout << "Улица: " << address.street << std::endl;
	std::cout << "Номер дома: " << address.houseNumber << std::endl;
	std::cout << "Номер квартиры: " << address.apartNumber << std::endl;
	std::cout << "Почтовый индекс: " << address.index << std::endl;
	std::cout << "\n";
};

int main()
{
	setlocale(LC_ALL, "Russian");
	
	AddressList address1, address2, address3;

	address1 = { "Oslo", "Karlstadtplatz", 12, 5, 987654 };
	address2 = { "Bagdad", "Saddam blv", 1, 111, 123456 };
	address3 = { "Karakas", "Maduro str", 9, 2, 0 };
	
	printAddress(address1);
	printAddress(address2);
	printAddress(address3);

	return 0;
}

