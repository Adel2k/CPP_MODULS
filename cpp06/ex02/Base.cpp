# include "Base.hpp"

using std::cout;
using std::endl;

Base* Base::generate() {
    cout << "\033[33mGenerating a random drived class ...\033[0m" << endl;
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int randomValue = std::rand() % 3;
    if (randomValue == 0) {
        return (new A());
    }
    else if (randomValue == 1) {
        return (new B());
    }
    else {
        return (new C());
    }
}

void Base::identify(Base* obj) {
    if (dynamic_cast<A*>(obj)) {
        cout << "Identified as A" << endl;
    }
    else if (dynamic_cast<B*>(obj)) {
        cout << "Identified as B" << endl;
    }
    else if (dynamic_cast<C*>(obj)) {
        cout << "Identified as C" << endl;
    }
    else {
        cout << "Unknown type" << endl;
    }
}

void Base::identify(Base& obj) {
    try {
        dynamic_cast<A&>(obj);
        cout << "Identified as A" << endl;
    }
    catch (std::bad_cast&) {}

    try {
        dynamic_cast<B&>(obj);
        cout << "Identified as B" << endl;
    }
    catch (std::bad_cast&) {}

    try {
        dynamic_cast<C&>(obj);
        cout << "Identified as C" << endl;
    }
    catch (std::bad_cast&) {}
}

Base::~Base() {
    cout << "\033[1;31mBase destructor called.\033[0m" << endl;
}