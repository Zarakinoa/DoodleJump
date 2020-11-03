#ifndef APP_H
#define APP_H

#include "State.h"

class App {

    private:
    State *currentState;

    public:
    App();
    void initWindow();
    void setState(State *newState);
    void run();
};

#endif