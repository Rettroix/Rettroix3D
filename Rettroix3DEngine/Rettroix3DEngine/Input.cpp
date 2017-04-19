#include "Input.h"
#include "mainComponent.h"
#include "window.h"

bool Input::keyActivated[101];
bool Input::keyReleased[101];

bool Input::mouseActivated[5];
bool Input::mouseReleased[5];

Input::Input()
{

  for (int i = 0; i >= 101; i++)
  {
    keyActivated[i] = false;
    keyReleased[i] = false;
  }


}


Input::~Input()
{
}

bool Input::GetKeyDown(sf::Keyboard::Key keyCode)
{
  if (sf::Keyboard::isKeyPressed(keyCode))
  {
    
    keyActivated[keyCode] = true;
    return true;
  }


}

bool Input::GetKeyOnce(sf::Keyboard::Key keyCode)
{
  if (sf::Keyboard::isKeyPressed(keyCode) && keyActivated[keyCode] == false)
  {
    keyActivated[keyCode] = true;
    return true;
  }
  else return false;


}
bool Input::GetKeyUp(sf::Keyboard::Key keyCode)
{

  if (keyActivated[keyCode] == true)
  {
    if (sf::Keyboard::isKeyPressed(keyCode) == false)
    {
      keyReleased[keyCode] = true;
      keyActivated[keyCode] = false;
    }
  }
  if (keyReleased[keyCode] == true)
  {
    keyReleased[keyCode] = false;
    return true;
  }
  else return false;

 
}

bool Input::GetMouseDown(sf::Mouse::Button mouseCode)
{
  if (sf::Mouse::isButtonPressed(mouseCode))
  {

    mouseActivated[mouseCode] = true;
    return true;
  }

}
bool Input::GetMouseOnce(sf::Mouse::Button mouseCode)
{
  if (sf::Mouse::isButtonPressed(mouseCode) && mouseActivated[mouseCode] == false)
  {
    mouseActivated[mouseCode] = true;
    return true;
  }
  else return false;
}

bool Input::GetMouseUp(sf::Mouse::Button mouseCode)
{
  if (mouseActivated[mouseCode] == true)
  {
    if (sf::Mouse::isButtonPressed(mouseCode) == false)
    {
      mouseReleased[mouseCode] = true;
      mouseActivated[mouseCode] = false;
    }
  }
  if (mouseReleased[mouseCode] == true)
  {
    mouseReleased[mouseCode] = false;
    return true;
  }
  else return false;
}

sf::Vector2f Input::getMousePosition()
{

}


void Input::update()
{

}