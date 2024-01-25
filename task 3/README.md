#include <iostream>
#include <string>
using namespace std;

void structcons(string i, string x, int z,int c, int k) {
    std::cout << "\nГород: "<< i<<"\nУлица: " << x<< "\nНомер дома: " << z<< "\nНомер квартиры: " <<c<< "\nИндекс: "<<k;
;
}
struct Person {
    string town;
    string ulica;
    int numhouse;
    int numapp;
    int index;
};

int main() {
    setlocale(LC_ALL, "RU");

    Person person1;
    person1.town = "Moscow";
    person1.ulica = "Arbat";
    person1.numhouse = 10;
    person1.numapp = 8;
    person1.index = 12345678;

    structcons(person1.town, person1.ulica, person1.numhouse, person1.numapp, person1.index);

    Person person2;
    person2.town = "nigni nowgorod";
    person2.ulica = "hz kakaya";
    person2.numhouse = 12;
    person2.numapp = 4;
    person2.index = 87654321;
    structcons(person2.town, person2.ulica, person2.numhouse, person2.numapp, person2.index);
    return 0;
}
