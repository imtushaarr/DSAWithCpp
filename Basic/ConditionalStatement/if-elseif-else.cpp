#include <iostream>
using namespace std;

int main(){
    
    int marks;
    
    cout << "Enter the Student marks : ";
    cin>> marks;
    
    if (marks >= 90){
        cout << "Student A Grade Basis Of Marks!"<< endl;
    } else if(marks >= 80 && marks < 90){
        cout << "Student B Grade Basis Of Marks!"<< endl;
    } else {
        cout << "Student C Grade Basis Of Marks!"<< endl;
    }
    
    return 0;
}
