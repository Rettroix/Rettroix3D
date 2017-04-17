using namespace std;
#include "stdafx.h"
#include "window.h"


class MainComponent
{
private:

public:
  static void start();
  static void stop();
  static void run();
  static void render();
  static void cleanup();

  MainComponent();
  ~MainComponent();
};

