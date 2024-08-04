
#include "mzip.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_usage(const char *prog_name) {
    fprintf(stderr, "Usage: %s <command> <input.elf> <output.mzip>
", prog_name);
    fprintf(stderr, "Commands:\n");
    fprintf(stderr, "  convert   Convert ELF to MZIP format\n");
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        print_usage(argv[0]);
        return 1;
    }

    const char *command = argv[1];
    const char *input_file = argv[2];
    const char *output_file = argv[3];

    if (strcmp(command, "convert") == 0) {
        convert_elf_to_mzip(input_file, output_file);
    } else {
        fprintf(stderr, "Unknown command: %s\n", command);
        print_usage(argv[0]);
        return 1;
    }

    return 0;
}
