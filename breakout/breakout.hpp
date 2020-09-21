#ifndef __BKOUT__
#define __BKOUT__

#include "../entities/ball.hpp"
#include "../entities/paddle.hpp"
#include "../entities/level.hpp"
#include "../entities/message.hpp"

#define FRAMETIME 1000/60

class Breakout{
    public:
        int state, score, qntLevels, levelNumber;
        bool gamePaused, changingLevels, gameEnd;
        int width, height;
        int ballCount;
        GLfloat mouseX;
        Paddle* paddle;
        Ball* ball;
        // std::vector<Ball*> balls;
        Level* currentLevel;
        std::vector<Message*> messages;
        Breakout();
        Breakout(int, int);

        void init();
        void display();
        void update();

        void initPaddle();
        void initBall();
        void initLevel();

        void resetBall();

        void draw();
        void drawPaddle();
        void drawBall();
        void drawBricks();
        void drawText(float, float, std::string);
        void drawMessages();

        void gameInfo();
        void activeMouse(int, int, int, int);
        void passiveMouse(int, int);
        void activeKeyboard(int, int, int);
        void specialActiveKeyboard(int, int, int);
};


#endif