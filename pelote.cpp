#include <iostream>
using namespace std;

class Character {
private:
    int attackPower;    // Attack power level (1 to 5)
    int healthLevel;    // Health level (1 to 5)
    int movementSpeed;  // Movement speed level (1 to 5)

public:
    Character() : attackPower(3), healthLevel(3), movementSpeed(4) {
        // Constructor setting default levels for Pelote
    }

    void displayStats() {
        cout << "Pelote's Stats:" << endl;
        cout << "Attack Power: " << attackPower << "/5" << endl;
        cout << "Health: " << healthLevel << "/5" << endl;
        cout << "Movement Speed: " << movementSpeed << "/5" << endl;
    }
};

int main() {
    Character anaya;  // Create an instance of the character Pelote

    // Display Pelote's stats
    pelote.displayStats();

    return 0;
}
