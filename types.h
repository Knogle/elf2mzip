
#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>
#include <stdbool.h>

// Type definitions
typedef uint8_t BYTE;   // 8-bit unsigned byte
typedef uint16_t WORD;  // 16-bit unsigned word
typedef uint32_t DWORD; // 32-bit unsigned double word

// Boolean values
#ifndef TRUE
#define TRUE true
#endif

#ifndef FALSE
#define FALSE false
#endif

#endif // TYPES_H
