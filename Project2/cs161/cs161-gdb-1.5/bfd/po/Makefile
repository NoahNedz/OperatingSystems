# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2001, 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.17.50

SHELL = /bin/sh


srcdir = /home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/po
top_srcdir = /home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd
VPATH = /home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/po
top_builddir = ../

prefix = /home/noah/cs161/tools
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = /home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/../mkinstalldirs

CC = gcc -fgnu89-inline
GENCAT = gencat
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2 -Wno-error
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/ja.po $(srcdir)/es.po $(srcdir)/sv.po $(srcdir)/da.po $(srcdir)/zh_CN.po $(srcdir)/ro.po $(srcdir)/rw.po $(srcdir)/vi.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/ja.gmo $(srcdir)/es.gmo $(srcdir)/sv.gmo $(srcdir)/da.gmo $(srcdir)/zh_CN.gmo $(srcdir)/ro.gmo $(srcdir)/rw.gmo $(srcdir)/vi.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aix386-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aix5ppc-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout0.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-adobe.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-cris.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aoutf1.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-ns32k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-sparcle.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-target.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-tic30.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aoutx.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archive64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archive.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archures.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/armnetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfdio.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfdwin.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/binary.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bout.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cache.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cf-i386lynx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cf-sparclynx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cisco-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff64-rs6000.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-alpha.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-apollo.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-aux.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffcode.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffgen.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-go32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-h8300.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-h8500.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i860.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i960.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cofflink.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-m68k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-m88k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-maxq.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-or32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-rs6000.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-sh.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-stgo32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-svm68k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffswap.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic30.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic4x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic54x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic80.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-u68k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-w65.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-we32k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-x86_64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-z80.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-z8k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/corefile.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-alpha.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-arc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-avr.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-bfin.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-cr16c.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-cris.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-crx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-d10v.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-d30v.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-dlx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-fr30.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-frv.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-h8300.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-h8500.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-hppa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i370.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i860.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i960.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ia64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ip2k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-iq2000.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m10200.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m10300.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m32c.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m32r.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68hc11.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68hc12.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m88k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-maxq.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mcore.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mmix.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-msp430.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mt.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ns32k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-openrisc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-or32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-pdp11.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-pj.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-powerpc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-rs6000.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-s390.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-score.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-sh.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-spu.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic30.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic4x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic54x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic80.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-v850.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-vax.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-w65.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-we32k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xc16x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xstormy16.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xtensa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-z80.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-z8k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/demo64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/dwarf1.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/dwarf2.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecoff.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecofflink.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecoffswap.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/efi-app-ia32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/efi-app-ia64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-am33lin.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-arc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-avr.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-bfin.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-cr16c.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-cris.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-crx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-d10v.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-d30v.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-dlx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-fr30.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-frv.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-gen.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-h8300.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-hppa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-hppa.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i370.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i860.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i960.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-ip2k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-iq2000.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m32c.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m32r.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc11.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc12.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc1x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m88k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mcore.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-msp430.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mt.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-openrisc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-or32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-pj.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-ppc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-s390.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-score.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh64-com.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh-symbian.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-spu.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-v850.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-vax.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xc16x.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xstormy16.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xtensa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-alpha.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-gen.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-hppa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-hppa.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-mmix.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-ppc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-s390.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-sh64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-x86-64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-bfd.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfcode.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfcore.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-eh-frame.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-hppa.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elflink.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-m10200.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-m10300.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfn32-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-strtab.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-vxworks.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfxx-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfxx-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/epoc-pe-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/epoc-pei-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/format.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/freebsd.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/genlink.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/go32stub.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hash.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hp300bsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hp300hpux.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hpux-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386aout.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386bsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386dynix.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386freebsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386linux.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386lynx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386mach3.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386msdos.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386netbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386os9k.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ieee.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ihex.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/init.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/irix-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libaout.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libbfd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libbfd.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libcoff.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libecoff.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libhppa.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libieee.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libnlm.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/liboasys.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libpei.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libxcoff.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/linker.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/lynx-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68k4knetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68klinux.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68knetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m88kmach3.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m88kopenbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mach-o.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mach-o.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/merge.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mipsbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mmo.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/netbsd.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/newsos3.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-alpha.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-ppc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-sparc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlmcode.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlmswap.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm-target.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ns32k.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ns32knetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/oasys.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/opncls.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/osf-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pc532-mach.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pdp11.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-arm-wince.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef-traceback.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-arm.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-arm-wince.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/peicode.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-i386.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-mcore.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-ppc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-sh.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-x86_64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-mcore.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-mips.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-ppc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-sh.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-x86_64.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ppcboot.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/reloc16.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/reloc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/riscix.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sco5-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/section.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/simple.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/som.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/som.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparclinux.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparclynx.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparcnetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/srec.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/stabs.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/stab-syms.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sunos.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/syms.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/targets.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/tekhex.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/trad-core.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vax1knetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vaxbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vaxnetbsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/versados.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/version.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-gsd.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-hdr.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-misc.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-tir.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xcofflink.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xcoff-target.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xsym.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xsym.h \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xtensa-isa.c \
	/home/noah/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS =  da.gmo es.gmo fr.gmo ja.gmo ro.gmo rw.gmo sv.gmo tr.gmo vi.gmo zh_CN.gmo da.gmo es.gmo fr.gmo ja.gmo ro.gmo rw.gmo sv.gmo tr.gmo vi.gmo zh_CN.gmo
CATOBJEXT = .gmo
INSTOBJEXT = .mo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-yes

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
