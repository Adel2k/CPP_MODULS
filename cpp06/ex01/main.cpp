#include "Serializer.hpp"

using std::cout;
using std::endl;

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
	cout << delta->num << endl;
	cout << delta->c << endl;
	return (0);
}