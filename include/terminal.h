#ifndef TERMINAL_H
#define TERMINAL_H

int getWindowSize(int *rows, int *cols);
int die(const char *s);
void enableRawMode();
void disableRawMode();

#endif