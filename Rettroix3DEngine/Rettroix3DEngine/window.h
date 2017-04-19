using namespace std;
#include <string> 
#include "stdafx.h"

class Window
{
private:
  static int test;
  //static sf::RenderWindow mainWindow;


public:
  static sf::RenderWindow mainWindow;

  static void createWindow(int width, int height, string title);
  static void render();
  static bool isCloseRequested();
  static int getWidth();
  static int getHeight();
  static void dispose();


  Window();
  ~Window();
};

