#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
    uintptr_t intptr;

	intptr = reinterpret_cast<uintptr_t>(ptr);
	return intptr;
}

Data* deserialize(uintptr_t raw) {
    Data *ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

int main(void) {
    Data* ptr = new Data();
    Data* ret_ptr;
    uintptr_t raw_ptr;
    
    ptr->x = 19;
    ptr->y = 91;
    std::cout << "Data : " << ptr << std::endl;
	std::cout << "X : " << ptr->x << std::endl;
	std::cout << "Y : " << ptr->y << std::endl;

    raw_ptr = serialize(ptr);
    std::cout << "\nData after serialize : " << raw_ptr << "\n" << std::endl;

    ret_ptr = deserialize(raw_ptr);
    std::cout << "Deserialized data : " << ret_ptr << std::endl;
	std::cout << "X : " << ret_ptr->x << std::endl;
	std::cout << "Y : " << ret_ptr->y << std::endl;

    delete ptr;
    return 0;
}