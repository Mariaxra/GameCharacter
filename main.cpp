#include <iostream>
#include "game.hpp"
#include "character.hpp"
using namespace std;

int main()
{
    Game c1("Jim", 10, "Swimming", 12, "Fire");
    Game c2("Mary", 150, "shotting", 1, "water");
    Game c3("carl", 18, "exploring", 80, "Earth");
    Game c4("Jack", 10, "Cooking", 4, "Fire");
    //Game c5("lina" , -9 , "cook" , -8 , "fire");    // Error for negative numbers
    //Game c6("dustin" , 1.8 ,"cooking" , 2.8 , "wind");  // Error for floating point
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    //c5.print();
    //c6.print();

    return 0;
}