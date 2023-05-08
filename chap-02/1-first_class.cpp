#include <iostream>
using namespace std;

class Person
{
private:
    unsigned short _age = 0u; //  référence au 0 entier non-signé.
    string         _name;

public:
    void set_age(unsigned short age){_age = age;}; // pas besoin de ref const car short est un type primitif
    void set_name(const string& name) { _name = name; };
    // Pour les accesseurs, toujours retourner const
    // Ainsi le compilateur va vérifier qu’aucune modification n’est effectué sur les attributs de l’objet
    unsigned short get_age() const { return _age; };
    const string& get_name() const { return _name; };
   
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
