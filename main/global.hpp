#pragma once

class GameEngine;
sf::RenderWindow window;
sf::View view;
sf::Clock Clock;
sf::Clock gameTime;
sf::Sound sound;

bool isRunning;

int totalFrames;
int shake;
int score=0;
int wave=0;
bool spawn=true;
float gameSpeed=1;


int WINDOW_W=100;
int WINDOW_H=720;

struct playerProperties {
    float projectileDamage;
    float projectileHealth;
    float projectileLifetime;
    float projectileFirerate;
    float slowmoTime;
};

struct playerProperties playerProps;

#include "entities/_Entity.hpp"

Entity* bg=NULL;

std::vector<Entity *> entities;
std::vector<Entity *> ui;
std::vector<Entity *> background;

#include "scenes/Scenes.hpp"

std::map<std::string, Scenes *> scenes;

Scenes *currentScene = NULL;
Scenes *nextScene = NULL;