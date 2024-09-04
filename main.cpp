#include <iostream>
#include <robloxanticheat>
void grabuser() {
    username = roblox.grabname();
}

void sendusernametoroblox() {
    anticheat.senduser(username);
}

void crash() {
    Roblox.Crash();
}
int main() {
      grabusername();
      sendusernametoroblox();
      crash();
}


