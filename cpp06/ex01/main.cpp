#include "Serializer.hpp"

using std::cout;
using std::endl;

void verifyConversion(Data* original, Data* deserialized) {
    if (original == deserialized) {
        cout << "\033[1;32mConversion successful! The original and deserialized pointers match.\n\033[0m";
        cout << "Original Address:\t" << original << endl;
        cout << "Deserialized Address:\t" << deserialized << endl;
        cout << "Values -> num: " << deserialized->num << ", c: " << deserialized->c << endl;
    }
	else {
        cout << "\033[1;31mConversion failed! The pointers do not match.\n\033[0m";
    }
}

int	main(void) {
	Data		meta;
	Data*		delta;
	uintptr_t	tmp;

	meta.num = 42;
	meta.c = 'a';
	cout << "The address of data struct (hex value) ->\t" << &meta << endl;
    tmp = Serializer::serialize(&meta);
	cout << "The address of data struct (dec value) ->\t" << tmp << endl;
    delta = Serializer::deserialize(tmp);
	cout << "Values -> num: " << delta->num << ", c: " << delta->c << endl;
    verifyConversion(&meta, delta);
	return (0);

}