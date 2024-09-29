#include <iostream>

#define SPRING 1
#define SUMMER 0
#define AUTUMN 0
#define WINTER 0

#if SPRING

int main()
{
    std::cout << "Spring" << std::endl;
}

#endif

#if SUMMER

int main()
{
    std::cout << "Summer" << std::endl;
}

#endif

#if AUTUMN

int main()
{
    std::cout << "AUTUMN" << std::endl;
}

#endif

#if WINTER

int main()
{
    std::cout << "WINTER" << std::endl;
}

#endif