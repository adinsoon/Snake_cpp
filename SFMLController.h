#ifndef SNAKEOLD_SFMLCONTROLLER_H
#define SNAKEOLD_SFMLCONTROLLER_H
#include "Board.h"
#include "Tools.h"
#include "Stats.h"
#include "Controller.h"
#include "SFMLView.h"
#include <iostream>
#include "Menu.h"
#include "Manager.h"
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

struct Timers {
    float timeMovement = 0;
    float timeSpawnFruit = 0;
    float timeSpawnObstacles = 0;
    float delayMovement = 0.15;
    float delayFruitResp = 6;
    float delayObsResp = 3;
    float gameSec=0;
    float gameMin=0;
};

class SFMLController {
    Stats &stats;
    Board &board;
    Manager &mgr;
    Logic &logic;
    Tools &tools;
    Controller &ctrl;
    Menu &menu;
    SFMLView &view;
    Highscore &score;
    Timers timers;
    std::string game;
    sf::SoundBuffer haps;
    sf::SoundBuffer win;
    sf::SoundBuffer loss;
    sf::SoundBuffer start;
    sf::SoundBuffer up;
    sf::Sound sound;
    const int cell = 21;
    int upgrade=1;
    sf::Font myFont;
    sf::Text counter[3];
    sf::Text points;
    sf::Text remain;
    bool music;
    void spawnCtrl();
    void moveCtrl();
    void displayStats();
    void UP();
public:
    SFMLController(Stats &s1, Board &b1, Manager &mgr1, Logic &l1, Tools &t1, Controller &c1, Menu &m1, SFMLView &v1, Highscore &s);
    void play();
};


#endif //SNAKEOLD_SFMLCONTROLLER_H
