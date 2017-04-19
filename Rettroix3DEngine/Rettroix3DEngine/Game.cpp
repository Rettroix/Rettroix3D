#include "Game.h"
#include "input.h"


Game::Game()
{
}


Game::~Game()
{
}

void Game::input()
{
  if (Input::GetKeyDown(sf::Keyboard::Left))
  {
    cout << "Left has been pressed!" << endl;
  }

  if (Input::GetKeyUp(sf::Keyboard::Left))
  {
    cout << "Left has been released!" << endl;
  }

  if (Input::GetKeyOnce(sf::Keyboard::Right))
  {
    cout << "Right has been pressed!" << endl;
  }

  if (Input::GetKeyUp(sf::Keyboard::Right))
  {
    cout << "Right has been released!" << endl;
  }

  if (Input::GetMouseOnce(sf::Mouse::Left))
  {
    cout << "Left click pressed!" << endl;
  }

  if (Input::GetMouseUp(sf::Mouse::Left))
  {
    cout << "left click  released!" << endl;
  }
}
void Game::update()
{

}
void Game::render()
{

}