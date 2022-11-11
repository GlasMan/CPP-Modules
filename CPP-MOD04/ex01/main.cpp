#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() {
    Animal *main[4];
    int i = 0;

    for(i = 0; i < 2; i++){
        main[i] = new Dog();
        cout << endl;
    }
    for(; i < 4; i++){
        main[i] = new Cat();
        cout << endl;
    }
    cout << endl;
    for(i = 0; i < 4; i++) {
        delete main[i];
        cout << endl;
    }
    Brain a;
    Brain b(a);
    cout << "copying" <<endl;
    a = b;
    a.set_idea(0, "Burak");
    b.set_idea(0, "Salih");
    cout << (a.get_idea(0)) << endl;
    cout << (b.get_idea(0)) << endl;
}