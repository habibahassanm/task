#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Character {
private:
    string name;
    int health;
    int level;
public:
    Character(const string& name_, int health_, int level_)
        : name(name_), health(max(0, health_)), level(max(1, level_)) {}
    void takeDamage(int amount) {
        if (amount < 0) return;
        health -= amount;
        if (health < 0) health = 0;
    }
    void levelUp() {
        ++level;
    }
    void getStatus() const {
        cout << "Name: " << name << " | Health: " << health << " | Level: " << level << endl;
    }
};

int main() {
    Character hero("Ali", 100, 1);
    hero.getStatus();
    hero.takeDamage(30);
    hero.getStatus();
    hero.takeDamage(1000);
    hero.getStatus();
    hero.levelUp();
    hero.getStatus();
    return 0;
}
