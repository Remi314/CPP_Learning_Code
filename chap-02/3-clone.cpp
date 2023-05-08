#include <iostream>
#include <string>

class Person
{
private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;

public:
    // Chapitre precedent
    Person(const std::string& name, const std::string& surname)
        : _name { name }
        , _surname { surname } {};
    std::string  get_full_name() const { return _name + " " + _surname; }
    unsigned int get_age() const { return _age; };
    void         wait(unsigned int years) { _age += years; };

    // Constructeur par copie
    Person(const Person& other)
        : _name(other._name)
        , _surname(other._surname) {};

    // Surcharge de l'operateur <<
    friend std::ostream& operator<<(std::ostream& os, const Person& other);

    // Surcharge de l'operateur =
    Person& operator=(const Person& other)
    {
        if (this != &other) // verifie si l'objet cible est different de l'objet source
        {
            _name    = other._name;
            _surname = other._surname;
        }

        return *this;
    }
};

// Surcharge de l'operateur <<
// NB: j'ai remarqué que cette fonction à l'interieur de la classe causait un probleme de compilation
// J'ai donc decidé de la mettre à l'exterieur et lui associer la classe par "friend"
std::ostream& operator<<(std::ostream& os, const Person& other)
{
    return os << "Person named '" << other.get_full_name() << "' is " << other.get_age() << " years old.";
};

int main()
{
    Person batman { "Bruce", "Wayne" };
    batman.wait(23);
    std::cout << batman << std::endl;

    Person clone = batman;
    std::cout << clone << std::endl;

    Person assigned_clone { "Batman", "W" };
    std::cout << assigned_clone << std::endl;

    assigned_clone = batman;
    std::cout << assigned_clone << std::endl;
    return 0;
}
