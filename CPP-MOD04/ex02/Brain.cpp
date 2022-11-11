#include "Brain.hpp"

Brain::Brain() {
    cout << "Brain Constructor called" << endl;
}

Brain::Brain(Brain &cpy) {
    (*this) = cpy;
}

Brain::~Brain() {
    cout << "Brain Destructor called" << endl;
}

Brain &Brain::operator=(const Brain &cpy) {

    cout << "copy assigment op called for brain" << endl;
    if (this == &cpy)
        return *this;
    for(int i = 0; i < 100; i++)
        if (cpy.ideas[i].length() > 1)
        this->ideas[i].append(cpy.ideas[i]);
    return (*this);
}

void Brain::set_idea(int i, const string &idea) {
    if (!idea.empty())
        this->ideas[i].assign(idea);
}

string Brain::get_idea(int i) {
    if (!this->ideas[i].empty())
        return this->ideas[i];
    return "";
}

