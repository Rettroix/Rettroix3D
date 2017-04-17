//Main Component is where everything starts
#include "MainComponent.h"


//Constants for the window
const int WIDTH = 1280;
const int HEIGHT = 720;
const string TITLE = "Rettroix3D";


MainComponent::MainComponent()
{
}


MainComponent::~MainComponent()
{
}


void MainComponent::start()
{
  //When we start we start running
  run();
}
void MainComponent::stop()
{

}
void MainComponent::run()
{
  //while the program hasn't been X'd off let's render
  while (!Window::isCloseRequested())
  {
    render();
  }
  
  
}
void MainComponent::render()
{
  //we just tell the window to render
  Window::render();
}
void MainComponent::cleanup()
{

}

void main()
{
  //Create the window with WIDTH HEIGHT and TITLE
  Window::createWindow(WIDTH, HEIGHT, TITLE);
  //initialisng the main component of the engine
  MainComponent game;
  //start the game
  game.start();


  
}