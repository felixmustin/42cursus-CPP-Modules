#include "Convert.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "2 arguments" << std::endl;
        return 0;
    }
    Convert conv;
    conv.process(argv[1]);
    return 1;
}