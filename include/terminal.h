#ifndef TERMINAL_H
#define TERMINAL_H

int getWindowSize(int *rows, int *cols);
void die(const char *s);
void enableRawMode();
void disableRawMode();

void editorUpdateRow(erow *row);

#endif