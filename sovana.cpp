#include <iostream>
using namespace std;

class Character {
private:
    int attackPower;    // Attack power level (1 to 5)
    int healthLevel;    // Health level (1 to 5)
    int movementSpeed;  // Movement speed level (1 to 5)

public:
    Character() : attackPower(4), healthLevel(3), movementSpeed(3) {
        // Constructor setting default levels for Sovana
    }

    void displayStats() {
        cout << "Sovana's Stats:" << endl;
        cout << "Attack Power: " << attackPower << "/5" << endl;
        cout << "Health: " << healthLevel << "/5" << endl;
        cout << "Movement Speed: " << movementSpeed << "/5" << endl;
    }
};

int main() {
    Character sovana;  // Create an instance of the character Sovana

    // Display Sovana's stats
    sovana.displayStats();

    return 0;
}
