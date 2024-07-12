#include "Level_1.h"

Level_1::Level_1(sf::RenderWindow& win) :
  window(win),
  robot(400,400,70,100)
{
  if(!backgroundTexture.loadFromFile("Graphics/backgroundLevel_1.jpg")){
    printf("Couldn't load level one background\n");
  }
  backgroundSprite.setTexture(backgroundTexture);
  backgroundSprite.setTextureRect(sf::IntRect(0,0,800,600));
  backgroundSprite.setColor(sf::Color(255,255,255,255));
  backgroundSprite.setPosition(0,0);
}

int Level_1::gameLoop(){
  return render();
}

int Level_1::render(){
  window.clear();
  window.draw(backgroundSprite);
  window.display();
}
