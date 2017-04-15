#pragma comment (lib, "glew32s.lib")
#define GLEW_STATIC

#include <iostream>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow window(sf::VideoMode(1280, 720), "It Works!");

  //Irrelevent stuff to test if opengl stuff compiles
  glewInit();
  GLuint test;
  glGenVertexArrays(1, &test);

  //Test if SFML works and compiles
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }

  glm::mat4 mat = glm::translate(mat, { 1,1,1, });  //Test if GLM compiles

  return 0;
}