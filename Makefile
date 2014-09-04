CC=cc
CFLAGS=-g -O3 -mips3 -n32
INSTALLROOT=
INSTALLDIR=/usr/local

all: setled ledset

install-setled:
	install -v -root $(ISNTALLROOT)$(INSTALLDIR) -F /bin setled

install-ledset:
	install -v -root $(ISNTALLROOT)$(INSTALLDIR) -F /bin ledon ledoff

install: install-setled install-ledset

setled:
	$(CC) $(CFLAGS) setled.c -o setled

ledset:
	$(CC) $(CFLAGS) ledon.c -o ledon
	$(CC) $(CFLAGS) ledoff.c -o ledoff

clean dist-clean:
	+rm -f setled ledon ledoff
