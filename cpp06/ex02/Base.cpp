# include "Base.hpp"

using std::cout;
using std::endl;

Base* Base::generate() {
    int randomValue = std::rand() % 3;
    if (randomValue == 0) {
        return new A();
    } else if (randomValue == 1) {
        return new B();
    } else {
        return new C();
    }
}

void Base::identify(Base* obj) {
    if (dynamic_cast<A*>(obj)) {
        std::cout << "Identified as A" << std::endl;
    } else if (dynamic_cast<B*>(obj)) {
        std::cout << "Identified as B" << std::endl;
    } else if (dynamic_cast<C*>(obj)) {
        std::cout << "Identified as C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void Base::identify(Base& obj) {
    try {
        (void)dynamic_cast<A&>(obj);
        std::cout << "Identified as A" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<B&>(obj);
        std::cout << "Identified as B" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(obj);
        std::cout << "Identified as C" << std::endl;
    } catch (std::bad_cast&) {}
}

Base::~Base() {
    // Virtual destructor definition to resolve linker issues
}