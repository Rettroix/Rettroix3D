using namespace std;
#include <string> 
#include "stdafx.h"

class Input
{
private:
  static bool keyActivated[101];
  static bool keyReleased[101];

  static bool mouseActivated[5];
  static bool mouseReleased[5];

public:
  Input();
  ~Input();
  static bool GetKeyDown(sf::Keyboard::Key keyCode);
  static bool GetKeyOnce(sf::Keyboard::Key keyCode);
  static bool GetKeyUp(sf::Keyboard::Key keyCode);

  static bool GetMouseDown(sf::Mouse::Button mouseCode);
  static bool GetMouseOnce(sf::Mouse::Button mouseCode);
  static bool GetMouseUp(sf::Mouse::Button mouseCode);

  static sf::Vector2f getMousePosition();
  static void update();
};

