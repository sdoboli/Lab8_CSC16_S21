
// function declarations for the dice game
#ifndef DICE
#define DICE
    int get_throw();
    int roll_dice();
    int decision(int, int = 0); // second parameter has a default value of 0
                            // read more about default parameters at https://www.programiz.com/cpp-programming/default-argument#:~:text=In%20C%2B%2B%20programming%2C%20we%20can,the%20default%20arguments%20are%20ignored.                             
    int play_point(int);
    bool play();
#endif
