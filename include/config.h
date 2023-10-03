#ifndef CONFIG_H
#define CONFIG_H

enum editorKey {
    BACKSPACE = 127,
    ARROW_LEFT = 1000,
    ARROW_RIGHT,
    ARROW_UP,
    ARROW_DOWN,
    DEL_KEY,
    HOME_KEY,
    END_KEY,
    PAGE_UP,
    PAGE_DOWN
};

#define SOLACE_TAB_STOP 8
#define SOLACE_QUIT_TIMES 3

#define SOLACE_VERSION "0.0.1"

#define CTRL_KEY(k) ((k)&0x1f)

#endif