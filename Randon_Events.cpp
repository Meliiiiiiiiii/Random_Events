#include <iostream>
#include <ctime>

int main(){

std::cout <<"******************** Roll the Dice and Test Your Luck!******************* \n";

srand (time(0));
int randNum = rand()% 6 +1;

switch(randNum){

    case 1: std:: cout << "You Won a $100 Gift Card!\n";
       break;
    case 2: std:: cout << "You Won a Smartwatch!\n";
       break;
    case 3: std:: cout << "You Won Wireless Earbuds!\n";
       break;
    case 4: std:: cout << "You Won a Weekend Getaway!\n";
       break;
    case 5: std:: cout << "You Won a Gaming Console!\n";
       break;
    case 6: std:: cout << "You Won a Luxury Gift Basket!\n";
       break;


}


std::cout <<"**************************************************************************";




    return 0;
}