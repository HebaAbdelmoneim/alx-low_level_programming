#include "main.h"
#include <elf.h>
/**
* print_mag - prints ELF magic bytes
*
* @hd: elf headr struct
*
* Return: void
*/
void print_mag(Elf64_Ehdr hd)
{
	int x;

	printf("  Magic:   ");
	for (x = 0; x <= EI_NIDENT; x++)
	{
		printf("%2.2x%s", hd.ident[x], x = EI_NIDENT - 1 ? "\n" : " ")
	}
}
/**
* print_cl - prints ELF class bytes
*
* @hd: elf headr struct
*
* Return: void
*/
void print_cl(Elf64_Ehdr hd)
{
	printf("  Class:                             ");
	switch (hd.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
* print_dt - prints ELF data bytes
*
* @hd: elf headr struct
*
* Return: void
*/
void print_dt(Elf64_Ehdr hd)
{
	printf("  Data:                              ");
	switch (hd.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}

/**
* print_vr - prints ELF version bytes
*
* @hd: elf headr struct
*
* Return: void
*/
void print_vr(Elf64_Ehdr hd)
{
	printf("  Version:                           %d", hd.e_ident[EI_VERSION]);
	switch (hd.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (cuurent)");
		break;
	case EV_NONE:
		printf("%s", "");
		break;
	}
	printf("\n");
}
