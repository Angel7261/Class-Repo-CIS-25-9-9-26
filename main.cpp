#include <iostream>
#include "functions.h"
#include <string>

struct Student {
    std::string name;
    int studentID;
};

// functions were going up here before

using namespace std;

int main() {
    // all we're going to do in here is orchestrate different functions

    cout << add(5, 3) << endl;
    cout << subtract(10, 4) << endl;

    Student angel;
    angel.name = "Angel";
    angel.studentID = 59204213;

    Student zee;
    zee.name = "Zee";
    zee.studentID = 125566891;

    Student allStudents[2] = {angel, zee};
    int size = 2;

    for(int x = 0; x < size; x++) {
        std::cout << allStudents[x].name << '\n';
        std::cout << allStudents[x].studentID << '\n';
    }

    return 0;
}
