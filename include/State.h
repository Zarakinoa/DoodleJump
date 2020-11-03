#ifndef STATE_H
#define STATE_H

class App;

class State {

    public :
        State(int, int, char *);
        const int W_WIDTH;
        const int W_HEIGHT;
        const char *W_TITLE;
        virtual void run(App *app) = 0;
        virtual ~State();
};

#endif