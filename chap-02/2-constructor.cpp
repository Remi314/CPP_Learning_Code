#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string             _name;
    const string       _surname;
    const unsigned int _age = 0u;

public:
    unsigned int get_age() const { return _age; }
    // La fonction get_name pouvait renvoyer une const-ref, car le résultat pointait sur l’espace mémoire de
    // l’attribut _name. Comme le résultat ne fait plus référence à un attribut de la classe, il est
    // nécessaire de le renvoyer par valeur.
    string get_full_name() const { return _name + " " + _surname; }

    // Constructeur
    Person(const string& name, const string& surname)
        : _name(name)
        , _surname(surname)
    {}

    // Constructeur par defaut
    Person() {}
};

int main()
{
    Person p("Batman", "Wayne");
    cout << p.get_full_name() << endl;
    Person p2;

    return 0;
}
