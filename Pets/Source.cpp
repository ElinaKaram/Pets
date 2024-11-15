#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:

    string name;

public:

    Pet(const string& name) : name(name) {}

    virtual void Sound() const = 0;
    virtual void Show() const 
    {
        cout << "name: " << name << endl;
    }
    virtual void Type() const = 0;

    virtual ~Pet() {}
};

class Dog : public Pet
{
public:
    Dog(const string& name) : Pet(name) {}

    void Sound() const override 
    {
        cout << "dog barks: woof" << endl;
    }

    void Type() const override
    {
        cout << "type: dog" << endl;
    }
};

class Cat : public Pet
{
public:

    Cat(const string& name) : Pet(name) {}

    void Sound() const override 
    {
        cout << "cat meows: meow" << endl;
    }

    void Type() const override 
    {
        cout << "type: cat" << endl;
    }
};

class Parrot : public Pet
{
public:

    Parrot(const string& name) : Pet(name) {}

    void Sound() const override 
    {
        cout << "parrot says: hello" << endl;
    }

    void Type() const override 
    {
        cout << "type: parrot" << endl;
    }
};

class Hamster : public Pet 
{
public:

    Hamster(const string& name) : Pet(name) {}

    void Sound() const override 
    {
        cout << "hamster squeaks: squeak" << endl;
    }

    void Type() const override
    {
        cout << "type: hamster" << endl;
    }
};

int main()
{
    Pet* pets[4];

    pets[0] = new Dog("Jack");
    pets[1] = new Cat("Murzik");
    pets[2] = new Parrot("Kesha");
    pets[3] = new Hamster("Mickey");

    for (int i = 0; i < 4; ++i)
    {
        pets[i]->Show();
        pets[i]->Type();
        pets[i]->Sound();
        cout << endl;
    }

    for (int i = 0; i < 4; ++i) 
    {
        delete pets[i];
    }

    return 0;
}
