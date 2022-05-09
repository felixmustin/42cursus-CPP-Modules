#include <iostream>
#include <string>

int main(int argc, char **argv) {
    int i;
    int j;

    i = 0;
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        while (argv[++i]) {
            j = -1;
            while (argv[i][++j]) {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    }
    return (0);
}
