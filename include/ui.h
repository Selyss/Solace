#ifndef UI_H
#define UI_H

void editorSetStatusMessage(const char *fmt, ...);
void editorRefreshScreen();
int editorSyntaxToColor(int hl);
int editorRowCxToRx(erow *row, int cx);

#endif