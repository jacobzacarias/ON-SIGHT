#include <iostream>
using namespace std;

class Character {
private:
    int attackPower;    // Attack power level (1 to 5)
    int healthLevel;    // Health level (1 to 5)
    int movementSpeed;  // Movement speed level (1 to 5)

public:
    Character() : attackPower(4), healthLevel(4), movementSpeed(2) {
        // Constructor setting default levels for Tepotzle
    }

    void displayStats() {
        cout << "Tepotzle's Stats:" << endl;
        cout << "Attack Power: " << attackPower << "/5" << endl;
        cout << "Health: " << healthLevel << "/5" << endl;
        cout << "Movement Speed: " << movementSpeed << "/5" << endl;
    }
};

int main() {
    Character tepotzle;  // Create an instance of the character Tepotzle

    // Display Tepotzle's stats
    tepotzle.displayStats();

    return 0;
}
