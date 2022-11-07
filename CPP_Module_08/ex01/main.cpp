#include "Span.hpp"

int main(void) {
	Span sp = Span(5);

	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		sp.addNumber(45);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------" << std::endl;

	Span sp_cpy = sp;
	try {
		std::cout << sp_cpy.shortestSpan() << std::endl;
		std::cout << sp_cpy.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	Span sp_cpy2(sp_cpy);
	try {
		std::cout << sp_cpy2.shortestSpan() << std::endl;
		std::cout << sp_cpy2.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------" << std::endl;

	Span sp1 = Span(10000);
	try {
		sp1.fill();
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
