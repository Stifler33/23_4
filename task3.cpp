#include <iostream>
#define WINTER 0
#define SPRING 1
#define SUMMER 0
#define AUTUMN 0
#if WINTER
int main() {
    std::cout << "Winter\n";
    return 0;
}
#endif
#if SPRING
int main() {
    std::cout << "Spring\n";
    return 0;
}
#endif
#if SUMMER
int main() {
    std::cout << "Summer\n";
    return 0;
}
#endif
#if AUTUMN
int main() {
    std::cout << "Autumn\n";
    return 0;
}
#endif
