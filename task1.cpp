#include <iostream>
#include <map>
#define MONDAY ("monday")
#define TUESDAY ("tuesday")
#define WEDNESDAY ("wednesday")
#define THURSDAY ("thursday")
#define FRIDAY ("friday")
#define SATURDAY ("saturday")
#define SUNDAY ("sunday")

#define WEEK(number) {std::map<int, std::string> week;\
week.insert(std::pair(1, "monday"));\
week.insert(std::pair(2, "tuesday"));\
week.insert(std::pair(3, "wednesday"));\
week.insert(std::pair(4, "thursday"));\
week.insert(std::pair(5, "friday"));\
week.insert(std::pair(6, "saturday"));\
week.insert(std::pair(7, "sunday"));\
return week[number];}
int main() {
    int numberDay;
    std::cout << "Enter number day\n";
    std::cin >> numberDay;
    std::cout << WEEK(numberDay);
    return 0;
}
