#include <iostream>
#include <string>
using namespace std;
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
    Person variable = { "Moscow" ,"Arbat" , 10 , 8 , 12345678 };
    structcons(variable);

    Person person2;
    person2.town = "nigni nowgorod";
    person2.ulica = "hz kakaya";
    person2.numhouse = 12;
    person2.numapp = 4;
    person2.index = 87654321;
    Person variables = { "nigni nowgorod" ,"hz kakaya" ,12  ,4  , 87654321 };
    structcons(variables);
    return 0;
}
void structcons(const Person& person) {

    std::cout << "\nГород: " << person.town << "\nУлица: " << person.ulica << "\nНомер дома: " << person.numhouse << "\nНомер квартиры: " << person.numapp << "\nИндекс: " << person.index;
}