/*
Without using classes, write a program to calculate the perimeter 
of shapes. The program must accept from user input the number of sides
the shape from the user and the length of each side, then calculate the 
perimeter, and display the result. 

Note: All sides are not necessarily same the length.
Note: All sides are integers.
 */

 #include <iostream>

 using namespace std;

int main() {
    cout<<"Part 1"<<endl; //do not remove, edit, or change the placement of this line.
    int numofsides;
    int perimeter = 0;
    cout << "Enter the number of sides" << endl;
    cin >> numofsides;
    int sides[numofsides];
    cout << "Enter the sides of the shape" << endl;
    for (int i = 0; i < numofsides; i++)
     {
       cin >> sides[i];
       perimeter += sides[i]
     }
     cout << "The perimeter is " << perimeter << endl; 
    
    return 0;
 }
