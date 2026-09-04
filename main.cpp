#include <iostream>
using namespace std;

//define variables that will be used
int health = 100;
int choice;
string name;

main(){ 
std::cout << "Hello world! What is your name? ";
std::cin >> name;
std::cout << "____________________________________"; << std::endl << "Hello " << name <<", welcome to cathaven.\n";
health = 100;
std::cout << "your health is currently at " << health << ".\n";
std::cout << "What would you like to do?" << std::endl << "Options: \n1. Fight\n2. Run\n3. Heal\n";
std::cin >> choice;
if (choice == 1){
    health -= 10;
    std::cout << "You chose to fight! Your health is now " << health << ".\n";
    if (health <= 0){
        std::cout << "You have died. Game over.\n";

    }

if (choice == 2){
    health -= 5;
    std::cout << "You chose to run! Your health is now " << health << ".\n";
    if (health <= 0){
        std::cout << "You have died. Game over.\n";
    }
}
if (choice == 3){
    health += 10;
    std::cout << "You chose to heal! Your health is now " << health << ".\n";
    if (health > 100){
        health = 100;
        std::cout << "Your health is now at maximum: " << health << ".\n";
    }
else {
    std::cout << "Invalid choice. Please try again.\n";
}}}}