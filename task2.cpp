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
void inputInf(const int train[]){
    INPUT_MAX;
}

#define MAX_PASS inputInf(train)
#define INPUT_INFORMATION
#define EMPTY_PASS
int main() {
    std::ifstream input("input.txt");
    int train[sumTrainCar];
    for (int i = 0; i < sumTrainCar; i++){
       input >> train[i];
    }
    MAX_PASS;
    return 0;
}
