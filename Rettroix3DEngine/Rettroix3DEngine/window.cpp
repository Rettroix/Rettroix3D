#include "window.h"


sf::RenderWindow Window::mainWindow;

sf::Event Window::event;

void Window::createWindow(int width, int height, string title)
{
  //using sfml to assign width height and title to it
  mainWindow.create(sf::VideoMode(width, height), title);
}

void Window::render()
{
  //simply display the window
  mainWindow.display();
}

bool Window::isCloseRequested()
{
  //sfml uses events to check if close is requested
  //so if the event type is closed then return true
  //else it's false
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



Window::Window()
{
  

}


Window::~Window()
{
}

