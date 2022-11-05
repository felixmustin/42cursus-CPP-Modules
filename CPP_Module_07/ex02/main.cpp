#include "Array.hpp"

int main( void )
{
	Array<int>	arrays(15);
	Array<int>	empty_array;

	std::cout << "Size of empty array: " << empty_array.size() << std::endl;
	try
	{
		std::cout << "Accessing empty Array: " << empty_array[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "Size of array: " << arrays.size() << std::endl;
	std::cout << "Value of array[5]: " << arrays[5] << std::endl;

	srand(time(NULL));
	for (int i = 0; i < 15; i++)
    {
        if (i % 2 == 0)
		    arrays[i] = 1;
        else 
            arrays[i] = 2;
	}

    try {
        std::cout << "value of Array[2]: " << arrays[2] << std::endl;
        std::cout << "value of Array[5]: " << arrays[5] << std::endl;
        std::cout << "value of Array[8]: " << arrays[8] << std::endl;
        std::cout << "value of Array[15]: " << arrays[15] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Array<int>	new_arrays(arrays);

    try {
        std::cout << "value of Array[2]: " << new_arrays[2] << std::endl;
        std::cout << "value of Array[5]: " << new_arrays[5] << std::endl;
        std::cout << "value of Array[8]: " << new_arrays[8] << std::endl;
        std::cout << "value of Array[15]: " << new_arrays[15] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return (0);
}