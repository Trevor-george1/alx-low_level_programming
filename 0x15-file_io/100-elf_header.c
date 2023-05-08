#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * err_exit - prints error
 * @text: message to display
 * Return: Nothing
 */

void err_exit(const char *text)
{
	fprintf(stderr, "Error: %s\n", text);
	exit(98);
}


/**
 * display_elf_header_info - display header info
 * @elf_header: header
 * Return: Nothing
 */

void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("Class: ");
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown class\n");
			break;
	}

	printf("Data: ");
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid data encoding\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown data encoding\n");
			break;
	}

	printf("Version %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX Sytem V ABI\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("LINUX ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) ABI\n");
			break;
		default:
			printf("Unknown ABI\n");
	}
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (elf_header->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown file type\n");
			break;
	}
	printf("Entry point address: %lx\n", elf_header->e_entry);
}

/**
 * display_elf - display the file
 * @elf_filename: name of the file
 * Return: Nothing
 */

void display_elf(const char *elf_filename)
{
	int f;

	f = open(elf_filename, O_RDONLY);
	if (f == -1)
		err_exit("Unable to display");
}
