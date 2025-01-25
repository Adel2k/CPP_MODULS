# include "Serializer.hpp"

using std::cout;
using std::endl;

//Orthodox
Serializer::Serializer() {
    cout << "\033[1;34mSerializer default constructor called.\033[0m" << endl;
}

Serializer::Serializer(const Serializer& other) {
    cout << "\033[1;34mSerializer copy constructor called.\033[0m" << endl;
    *this = other;

}

Serializer& Serializer::operator=(const Serializer& ) {
    cout << "\033[1;34mSerializer copy assignment called.\033[0m" << endl;
    return *this;
}

Serializer::~Serializer() {
    cout << "\033[1;34mSerializer destructor called.\033[0m" << endl;
}
//

uintptr_t Serializer::serialize(Data* ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data*>(raw));
}