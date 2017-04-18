using namespace std;
#include "stdafx.h"
#include "window.h"
#include "GameTime.h"
#include "Game.h"


class MainComponent
{
private:
  static bool isRunning;
  Game game;
public:
  void start();
  void stop();
  void run();
  void render();
  void cleanup();

  MainComponent();
  ~MainComponent();
};

