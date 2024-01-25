#include <cmath>
#include <istream>
#include <cstring>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
enum Month
{
    December = 1,
    January = 2,
    February = 3,
    March = 4,
    April = 5,
    May = 6,
    June = 7,
    July = 8,
    August = 9,
    September = 10,
    October = 11,
    November = 12,
};
int i = 0;
int main()
{
    setlocale(LC_ALL, "RU");
  for (int i = 1; i != 0;) {
    std::cout << "Введите номер месяца: ";
    std::cin >> i;
    std::cout << std::endl;
        if (i >= 1 && i <= 12) {
            Month month = static_cast<Month>(i);

            switch (i) {
            case January:
                cout << "Январь" << std::endl;;
                break;
            case February:
                cout << "Февраль\n";
                break;
            case March:
                cout << "Март\n";
                break;
            case April:
                cout << "Апрель\n";
                break;
            case May:
                cout << "Май\n";
                break;
            case June:
                cout << "Июнь\n";
                break;
            case July:
                cout << "Июль\n";
                break;
            case August:
                cout << "Август\n";
                break;
            case September:
                cout << "Сентябрь\n";
                break;
            case October:
                cout << "Октябрь\n";
                break;
            case November:
                cout << "Ноябрь\n";
                break;
            case December:
                cout << "Декабрь\n";
                break;
            }
        }
        else {
            cout << "Неправильный номер!";
        }
  }
  return 0;
}