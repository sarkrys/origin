#include <iostream>
#include <string>
using namespace std;

int cartnref(int i, int b) {
    i=b;
        return i;
}
struct Person {
    string name;
    int cartnumb;
    int money;
};

int main() {
    setlocale(LC_ALL, "RU");

    Person person1;
    person1.name = "Иван";
    person1.cartnumb = 0;
    person1.money = 5000;
    std::cout << "Введите номер счёта: ";
    std::cin >> person1.cartnumb;
    std::cout << "\nВведите имя владельца: ";
    std::cin >> person1.name;
    std::cout << "\nВведите баланс: ";
    std::cin >> person1.money;
    cout << "\nИмя: " << person1.name << ", номер карты: " << person1.cartnumb << ", кол-во денег: " << person1.money << " р" << endl;
    cout << "\nВведите новый баланс: ";
  int newsum = 0;
  std::cin>>newsum;
    person1.money = cartnref(person1.money,newsum);

    cout << "Имя: " << person1.name << ", номер карты: " << person1.cartnumb << ", кол-во денег: " << person1.money << " р" << endl;

    return 0;
}