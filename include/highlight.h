#ifndef HIGHLIGHT_H
#define HIGHLIGHT_H

#include <stddef.h>

enum editorHighlight {
    HL_NORMAL = 0,
    HL_COMMENT,
    HL_MLCOMMENT,
    HL_KEYWORD1,
    HL_KEYWORD2,
    HL_STRING,
    HL_NUMBER,
    HL_MATCH
};

extern struct editorSyntax HLDB[];
extern const size_t HLDB_ENTRIES;

#define HL_HIGHLIGHT_NUMBERS (1 << 0)
#define HL_HIGHLIGHT_STRINGS (1 << 1)

#endif