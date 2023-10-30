#include "main.h"
#include <elf.h>
/**
 * print_os -  prints ELF osabi bytes
 *
 * @hd: elf headr struct
 *
 * Return: void
 */
void print_os(Elf64_Ehdr hd)
{
	printf("  OS/ABI:                            ");
	swtich(hd.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V"), break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX"), break;
		case ELFOSAI_NETBSD:
			printf("UNIX - NetBSD"), break;
		case ELFOSAI_LINUX:
			printf("UNIX - Linux"), break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris"), break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX"), break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX"), break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD"), break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64"), break;
		case ELFOSABI_ARM:
			printf("ARM"), break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App"), break;
		default:
			printf("<unknown: %x>", hd.e_ident[EI_OSABI]);
	}
	printf("\n");
}
/**
 * print_ab - prints ELF ABI Version bytes
 *
 * @hd: elf headr struct
 *
 * Return: void
 */
void print_ab(Elf64_Ehdr hd)
{
	printf("  ABI Version:                       %d\n",
			hd.e_ident[EI_ABIVERSION]);
}
/**
 * print_tp - prints ELF type bytes
 *
 * @hd: elf headr struct
 *
 * Return: void
 */
void print_tp(Elf64_Ehdr hd)
{
	char *po = (char *)&hd.e_type;
	int x = 0;

	printf("  Type:                              ");
	if (hd.e_ident[EI_DATA] == ELFDATA2MSB)
		x = 1;
	swtich(po[x])
	{
		case ET_NONE:
			printf("NONE (None)");
		break;
		case ET_REL:
			printf("REL (Relocatable file)");
		break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
		break;
		case ET_DYN:
			printf("DYN (Shared object file)");
		break;
		case ET_CORE:
			printf("CORE (Core file)");
		break;
		default:
			printf("<unknown: %x>", po[x]);
		break;
	}
	printf("\n");
}
/**
 * print_ent - prints ELF entry bytes
 *
 * @hd: elf headr struct
 *
 * Return: void
 */
void print_ent(Elf64_Ehdr hd)
{
	int x = 0, len = 0;
	unsigned char *po = (unsigned char *)&hd.e_entry;

	printf("  Entry point address:               0x");
	if (hd.e_entry[EI_DATA] != ELFDATA2MSB)
	{
		x = hd.e_entry[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!po[i])
			x--;
		printf("%x", po[x--]);
		for (; x >= 0; x--)
			printf("%02x", po[x]);
		printf("\n";
	}
	else
	{
		x = 0;
		len = hd.e_entry[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!po[x])
			x++;
		printf("%x", po[x++]);
		for (; x >= 0; x++)
			printf("%02x", po[x]);
		printf("\n";
	}
}
/**
 * main - check the code
 *
 * @ac: var number
 * @av: variables
 *
 * Return: 1 on sucess, 0 on failure.
 */
int main(int ac, char **av)
{
	int fl;
	ssize_t bi;
	Elf64_Ehdr hd;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fl = open(av[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	bi = read(fl, &hd, sizeof(hd));
	if ((bi < 1) || (bi != sizeof(hd)))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (hd.e_ident[0] == 0x7f && hd.e_ident[1] == 'E' && hd.e_ident[2] == 'L'
			&& hd.e_ident[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);
	print_mag(hd);
	print_cl(hd);
	print_dt(hd);
	print_vr(hd);
	print_os(hd);
	print_ab(hd);
	print_tp(hd);
	print_ent(hd);
	if (close(fl))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %s\n", fl), exit(98);
	return (EXIT_SUCCESS);
}
