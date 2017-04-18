//Main Component is where everything starts
#include "MainComponent.h"

// starts the clock
sf::Clock theClock; 
                    
//Constants for the window
const int WIDTH = 1280;
const int HEIGHT = 720;
const string TITLE = "Rettroix3D";

//static initialisings
bool MainComponent::isRunning;

MainComponent::MainComponent()
{
  //We aren't running when we first start
  isRunning = false;
}


MainComponent::~MainComponent()
{
}


void MainComponent::start()
{
  if (isRunning)
  {
    //if already running we don't need to run again
    return;
  }
  else
  {
    //When we start we start running
    run();
  }

}
void MainComponent::stop()
{
 //if it isn't actually running return, else turn running off
  if (!isRunning)
  {
    return;
  }
  else
  {
    isRunning = false;
  }

  
}
void MainComponent::run()
{
  //we are running now so this is true
  isRunning = true;

  //while the program is running and hasn't been X'd off let's render
  while (isRunning)
  {
    //stop if close is requested
    if (Window::isCloseRequested())
    {
      stop();
    }

    game.input();
    game.update();

    //frame rate is the inverse of elapsed time
    //calling the restart of clock not only resets
    //the clock but also returns the elapsed time
    float framerate = 1/ (theClock.restart().asSeconds());
    cout << framerate << endl;
    //then we render
    render();
  }
  
  //We cleanup after we're done running
  cleanup();
  
}
void MainComponent::render()
{
  game.render();
  //we just tell the window to render
  Window::render();
}
void MainComponent::cleanup()
{
  //destroy everything
  Window::dispose();
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