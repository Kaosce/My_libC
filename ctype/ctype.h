/*
** EPITECH PROJECT, 2017
** libC
** File description:
** ctype.h
*/

#ifndef LIBC_CTYPE_H
# define LIBC_CTYPE_H

enum {
	NUL = 0,
	SOH,
	STX,
	ETX,
	EOT,
	ENQ,
	ACK,
	BEL,
	BS,
	HT,
	LF,
	VT,
	FF,
	CR,
	SO,
	SI,
	DLE,
	DC1,
	DC2,
	DC3,
	DC4,
	NAK,
	SYN,
	ETB,
	CAN,
	EM,
	SUB,
	ESC,
	FS,
	GS,
	RS,
	US,
	SPACE,
	DEL
};

int isalnum(int c);
int isalpha(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);

# define LOWER_DIFFERENCE 'a' - 'A'
int tolower(int c);
# define UPPER_DIFFERENCE 'A' - 'a'
int toupper(int c);

#endif /* !LIBC_CTYPE_H */
