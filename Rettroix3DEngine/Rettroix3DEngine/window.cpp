#include "window.h"

const float MAXFRAMERATE = 60;

sf::RenderWindow Window::mainWindow;


void Window::createWindow(int width, int height, string title)
{
  //using sfml to assign width height and title to it

  mainWindow.create(sf::VideoMode(width, height), title);
}

void Window::render()
{
  //setting a framerate limit
  mainWindow.setFramerateLimit(MAXFRAMERATE);

  //make so key only activates once
  mainWindow.setKeyRepeatEnabled(false);

  //simply display the window
  mainWindow.display();
}

bool Window::isCloseRequested()
{
  //sfml uses events to check if close is requested
  //so if the event type is closed then return true
  //else it's false
  sf::Event event;
  while (mainWindow.pollEvent(event))
  {
    
    if (event.type == sf::Event::Closed)
    {
      return true;
    }
    else return false;
  }
  
}

int Window::getWidth()
{
  //gets the x size of the window
  return mainWindow.getSize().x;
}

int Window::getHeight()
{
  //gets the y size of the window
  return mainWindow.getSize().y;
}

void Window::dispose()
{
  //closes the render window and destroys all
  //attached 
  mainWindow.close();
}



Window::Window()
{
  

}


Window::~Window()
{
}

