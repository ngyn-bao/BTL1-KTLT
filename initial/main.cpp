/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2023
* Author: Vu Van Tien
* Date: 02.02.2023
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "study_in_pink1.h"

using namespace std;

void sa_tc_01() {
    int P1, P2, P3;
    cout << "----- Sample Testcase 01 -----" << endl;
    string input_file("sa_tc_01_input");
    int HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3;
    char s[] = "abc12345667789754", email[] = "BYoXpnw0sL49rG1uMOHAmeGcrwz1S@gmail.com";
    int num_pwds = 6;
    const char* arr_pwds[] =  {"pink@123", "123!pink", "1234#xyz", "pink#pink", "pink#pink", "pink@123"};
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

std::cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << std::endl;
int result = traceLuggage(HP1, EXP1, M1, E2);
std::cout << "E2: " << E2 << ", HP1: " << HP1 << ", EXP1: " << EXP1 << ", M1: " << M1 << ", result: " << result << std::endl;
//    cout << "123";
//g++ -o main main.cpp study_in_pink1.cpp -I . -std=c++11; ./main sa_tc_01_input

    
}

int main(int argc, const char * argv[]) {
    sa_tc_01();

    return 0;
}