
# MZIP Project

## Overview

The MZIP project provides a utility to convert standard ELF executables into an MZIP packed format, suitable for launching on Cisco routers. This utility ensures that the ELF files are compatible with the MZIP format required by Cisco devices.

## Files

- `mzip.c`: The main file handling command-line arguments and invoking the conversion process.
- `mzip.h`: Header file containing function declarations.
- `elf2mzip.c`: Implements the conversion logic from ELF to MZIP.
- `types.h`: Contains type definitions and macros.
- `elf.h`: Defines the ELF header structure.
- `Makefile`: Build script to compile the project.

## Usage

To convert an ELF file to an MZIP file, use the following command:

```
./mzip convert <input.elf> <output.mzip>
```

## Build Instructions

1. Ensure you have `gcc` installed.
2. Run `make` to build the project.

## Functions

### mzip.c

- `print_usage(const char *prog_name)`: Prints the usage instructions for the program.
- `main(int argc, char *argv[])`: Parses command-line arguments and invokes the conversion function.

### mzip.h

- `void convert_elf_to_mzip(const char *input_file, const char *output_file)`: Converts an ELF file to an MZIP file.
- `void log_error(const char *message)`: Logs an error message.

### elf2mzip.c

- `void convert_elf_to_mzip(const char *input_file, const char *output_file)`: Handles the conversion logic from ELF to MZIP format.
- `void log_error(const char *message)`: Logs an error message using `perror`.

### types.h

Defines standard types and boolean values:

- `typedef uint8_t BYTE`
- `typedef uint16_t WORD`
- `typedef uint32_t DWORD`
- `#define TRUE true`
- `#define FALSE false`

### elf.h

Defines the structure of a 64-bit ELF header:

- `typedef struct { ... } Elf64_Ehdr`

## License

This project is licensed under the terms of the MIT license.
