#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
      std::cout << "error" << std::endl;
      return 1;
    }
    RPN rpn(av[1]);
    rpn.play();
    return 0;
}