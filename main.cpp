// #include "stdafx.h"
#include "LorenzAttractor.h"
#include <SFML/Graphics.hpp>

int main()
{
  /// Create a window

  bool isFullscreen = true;
  sf::RenderWindow window;
    window.create(sf::VideoMode(2560,1600), "Coding Projects");
	// window.create(sf::VideoMode(1920, 1000), "Coding Projects", (isFullscreen ? sf::Style::Fullscreen : sf::Style::Default), sf::ContextSettings());
	window.setPosition(sf::Vector2i(0, 0));
  window.setVerticalSyncEnabled(true); 
	window.setFramerateLimit(60);
  
  
//   /// Important part is here
  LorenzAttractor la;
  la.run(window);
}