#include <mcpp/mcpp.h>

int main() {
  mcpp::MinecraftConnection conn("localhost", 4711); // Because of WSL
  conn.postToChat("Hello, Minecraft!");
  auto coords = conn.getPlayerPosition();
  std::cout << "\n";
  std::cout << "x: " << coords.x << "\n";
  std::cout << "y: " << coords.y << "\n";
  std::cout << "z: " << coords.z << "\n";
}
