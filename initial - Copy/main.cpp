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
    int num_pwds = 9;
    const char* arr_pwds[] =  {"fwdisZb$gn", "vM1dCGl71g%h4", "$GJGQ%Qn", "0G!nTAr#L4TBex%e", "EHV!mP!KjXeVH%", "iNbsrQ4$IWWANfUsg#f%", "vM1dCGl71g%h4", "rPJUD!aTVELJlXvsY", "Tj7ED2bC5lzvSWQqa"};
    if (!readFile(input_file, HP1, HP2, EXP1, EXP2, M1, M2, E1, E2, E3)) {
        return;
    }

    // cout << HP1 << EXP1 << HP2 << EXP2 << endl;
    int result = findCorrectPassword(arr_pwds, num_pwds);
    // cout << HP1 << EXP1 << HP2 << EXP2 << result << endl;
    cout << result << endl; 
//    cout << "123";
//g++ -o main main.cpp study_in_pink1.cpp -I . -std=c++11; ./main sa_tc_01_input

    
}

int main(int argc, const char * argv[]) {
    sa_tc_01();

    return 0;
}