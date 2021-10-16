#include <iostream>
#include <map>
#include <fstream>
int sumTrainCar = 10;
#define INPUT_MAX \
for(int i = 0; i < sumTrainCar; i++){\
    if (train[i] > 20) {\
        std::cout << "crowded " << i+1 << " train car\n";\
    }\
}
#define INPUT_MIN \
for(int i = 0; i < sumTrainCar; i++){\
    if (train[i] == 0) {\
        std::cout << "empty " << i+1 << " train car\n";\
    }\
}
#define INPUT_SUM \
int sum = 0;       \
for(int i : train)\
    sum += i; \
std::cout << "sum passengers " << sum << std::endl;
int main() {
    std::ifstream input("input.txt");
    int train[sumTrainCar];
    for (int i = 0; i < sumTrainCar; i++){
       input >> train[i];
    }
    INPUT_MAX
    INPUT_MIN
    INPUT_SUM
    return 0;
}
