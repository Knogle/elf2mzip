
#ifndef MZIP_H
#define MZIP_H

#include <stdint.h>

/**
 * @brief Converts an ELF file to an MZIP file.
 *
 * @param input_file Path to the input ELF file.
 * @param output_file Path to the output MZIP file.
 */
void convert_elf_to_mzip(const char *input_file, const char *output_file);

/**
 * @brief Logs an error message.
 *
 * @param message The error message to log.
 */
void log_error(const char *message);

#endif // MZIP_H
