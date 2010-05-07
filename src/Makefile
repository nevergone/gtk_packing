# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.5 from Makefile.am.

# Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001
# Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include
pkgdatadir = $(datadir)/packing
pkglibdir = $(libdir)/packing
pkgincludedir = $(includedir)/packing
top_builddir = ..

ACLOCAL = ${SHELL} /home/never/Projects/packing/missing --run aclocal
AUTOCONF = ${SHELL} /home/never/Projects/packing/missing --run autoconf
AUTOMAKE = ${SHELL} /home/never/Projects/packing/missing --run automake
AUTOHEADER = ${SHELL} /home/never/Projects/packing/missing --run autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
INSTALL_HEADER = $(INSTALL_DATA)
transform = s,x,x,
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i686-pc-linux-gnu
host_triplet = i686-pc-linux-gnu
AMTAR = ${SHELL} /home/never/Projects/packing/missing --run tar
AS = @AS@
AWK = mawk
CC = gcc
DEPDIR = .deps
DLLTOOL = @DLLTOOL@
ECHO = echo
EXEEXT = 
GTK_CFLAGS = -DXTHREADS -D_REENTRANT -DXUSE_MTSAFE_API -I/usr/include/gtk-2.0 -I/usr/lib/gtk-2.0/include -I/usr/include/atk-1.0 -I/usr/include/pango-1.0 -I/usr/include/freetype2 -I/usr/include/freetype2/config -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include  
GTK_LIBS = -Wl,--export-dynamic -lgtk-x11-2.0 -latk-1.0 -lgdk-x11-2.0 -lgdk_pixbuf-2.0 -lm -lpangoxft-1.0 -lpangox-1.0 -lpango-1.0 -lgobject-2.0 -lgmodule-2.0 -ldl -lglib-2.0  
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
NO_PREFIX_PACKAGE_DATA_DIR = share/packing
NO_PREFIX_PACKAGE_DOC_DIR = doc/packing
NO_PREFIX_PACKAGE_HELP_DIR = share/packing/help
NO_PREFIX_PACKAGE_MENU_DIR = share/packing
NO_PREFIX_PACKAGE_PIXMAPS_DIR = share/packing/pixmaps
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = packing
PACKAGE_DATA_DIR = /usr/local/share/packing
PACKAGE_DOC_DIR = /usr/local/doc/packing
PACKAGE_HELP_DIR = /usr/local/share/packing/help
PACKAGE_MENU_DIR = /usr/local/share/packing
PACKAGE_PIXMAPS_DIR = /usr/local/share/packing/pixmaps
PKG_CONFIG = /usr/bin/pkg-config
RANLIB = ranlib
STRIP = strip
VERSION = 0.1
am__include = include
am__quote = 
install_sh = /home/never/Projects/packing/install-sh

INCLUDES = \
	$(GTK_CFLAGS)


packing_CFLAGS = \
	 -Wall\
	 -O1\
	 -g


bin_PROGRAMS = packing

packing_SOURCES = \
	support.h\
	support.c\
	main.c\
	interface.h\
	interface.c\
	callbacks.h\
	callbacks.c


packing_LDFLAGS = 

packing_LDADD = \
	$(GTK_LIBS)

subdir = src
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
bin_PROGRAMS = packing$(EXEEXT)
PROGRAMS = $(bin_PROGRAMS)

am_packing_OBJECTS = packing-support.$(OBJEXT) packing-main.$(OBJEXT) \
	packing-interface.$(OBJEXT) packing-callbacks.$(OBJEXT)
packing_OBJECTS = $(am_packing_OBJECTS)
packing_DEPENDENCIES =

DEFS = -DHAVE_CONFIG_H
DEFAULT_INCLUDES =  -I. -I$(srcdir) -I$(top_builddir)
CPPFLAGS = 
LDFLAGS = 
LIBS = 
depcomp = $(SHELL) $(top_srcdir)/depcomp
DEP_FILES = $(DEPDIR)/packing-callbacks.Po \
	$(DEPDIR)/packing-interface.Po \
	$(DEPDIR)/packing-main.Po \
	$(DEPDIR)/packing-support.Po
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) \
	$(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
CFLAGS = -g -O2
DIST_SOURCES = $(packing_SOURCES)
DIST_COMMON = Makefile.am Makefile.in
SOURCES = $(packing_SOURCES)

all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:
	-rm -f libtool
$(srcdir)/Makefile.in:  Makefile.am  $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  src/Makefile
Makefile:  $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) && \
	  CONFIG_HEADERS= CONFIG_LINKS= \
	  CONFIG_FILES=$(subdir)/$@ $(SHELL) ./config.status
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  p1=`echo $$p|sed 's/$(EXEEXT)$$//'`; \
	  if test -f $$p \
	     || test -f $$p1 \
	  ; then \
	    f=`echo $$p1|sed '$(transform);s/$$/$(EXEEXT)/'`; \
	   echo " $(INSTALL_PROGRAM_ENV) $(LIBTOOL) --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f"; \
	   $(INSTALL_PROGRAM_ENV) $(LIBTOOL) --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/$$f; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  f=`echo $$p|sed 's/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/'`; \
	  echo " rm -f $(DESTDIR)$(bindir)/$$f"; \
	  rm -f $(DESTDIR)$(bindir)/$$f; \
	done

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)
packing-support.$(OBJEXT): support.c
packing-main.$(OBJEXT): main.c
packing-interface.$(OBJEXT): interface.c
packing-callbacks.$(OBJEXT): callbacks.c
packing$(EXEEXT): $(packing_OBJECTS) $(packing_DEPENDENCIES) 
	@rm -f packing$(EXEEXT)
	$(LINK) $(packing_LDFLAGS) $(packing_OBJECTS) $(packing_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT) core *.core

distclean-compile:
	-rm -f *.tab.c

include $(DEPDIR)/packing-callbacks.Po
include $(DEPDIR)/packing-interface.Po
include $(DEPDIR)/packing-main.Po
include $(DEPDIR)/packing-support.Po

distclean-depend:
	-rm -rf $(DEPDIR)

.c.o:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `test -f $< || echo '$(srcdir)/'`$<

.c.obj:
	source='$<' object='$@' libtool=no \
	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(COMPILE) -c `cygpath -w $<`

.c.lo:
	source='$<' object='$@' libtool=yes \
	depfile='$(DEPDIR)/$*.Plo' tmpdepfile='$(DEPDIR)/$*.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LTCOMPILE) -c -o $@ `test -f $< || echo '$(srcdir)/'`$<

packing-support.o: support.c
	source='support.c' object='packing-support.o' libtool=no \
	depfile='$(DEPDIR)/packing-support.Po' tmpdepfile='$(DEPDIR)/packing-support.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-support.o `test -f support.c || echo '$(srcdir)/'`support.c

packing-support.obj: support.c
	source='support.c' object='packing-support.obj' libtool=no \
	depfile='$(DEPDIR)/packing-support.Po' tmpdepfile='$(DEPDIR)/packing-support.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-support.obj `cygpath -w support.c`

packing-support.lo: support.c
	source='support.c' object='packing-support.lo' libtool=yes \
	depfile='$(DEPDIR)/packing-support.Plo' tmpdepfile='$(DEPDIR)/packing-support.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-support.lo `test -f support.c || echo '$(srcdir)/'`support.c

packing-main.o: main.c
	source='main.c' object='packing-main.o' libtool=no \
	depfile='$(DEPDIR)/packing-main.Po' tmpdepfile='$(DEPDIR)/packing-main.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-main.o `test -f main.c || echo '$(srcdir)/'`main.c

packing-main.obj: main.c
	source='main.c' object='packing-main.obj' libtool=no \
	depfile='$(DEPDIR)/packing-main.Po' tmpdepfile='$(DEPDIR)/packing-main.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-main.obj `cygpath -w main.c`

packing-main.lo: main.c
	source='main.c' object='packing-main.lo' libtool=yes \
	depfile='$(DEPDIR)/packing-main.Plo' tmpdepfile='$(DEPDIR)/packing-main.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-main.lo `test -f main.c || echo '$(srcdir)/'`main.c

packing-interface.o: interface.c
	source='interface.c' object='packing-interface.o' libtool=no \
	depfile='$(DEPDIR)/packing-interface.Po' tmpdepfile='$(DEPDIR)/packing-interface.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-interface.o `test -f interface.c || echo '$(srcdir)/'`interface.c

packing-interface.obj: interface.c
	source='interface.c' object='packing-interface.obj' libtool=no \
	depfile='$(DEPDIR)/packing-interface.Po' tmpdepfile='$(DEPDIR)/packing-interface.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-interface.obj `cygpath -w interface.c`

packing-interface.lo: interface.c
	source='interface.c' object='packing-interface.lo' libtool=yes \
	depfile='$(DEPDIR)/packing-interface.Plo' tmpdepfile='$(DEPDIR)/packing-interface.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-interface.lo `test -f interface.c || echo '$(srcdir)/'`interface.c

packing-callbacks.o: callbacks.c
	source='callbacks.c' object='packing-callbacks.o' libtool=no \
	depfile='$(DEPDIR)/packing-callbacks.Po' tmpdepfile='$(DEPDIR)/packing-callbacks.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-callbacks.o `test -f callbacks.c || echo '$(srcdir)/'`callbacks.c

packing-callbacks.obj: callbacks.c
	source='callbacks.c' object='packing-callbacks.obj' libtool=no \
	depfile='$(DEPDIR)/packing-callbacks.Po' tmpdepfile='$(DEPDIR)/packing-callbacks.TPo' \
	$(CCDEPMODE) $(depcomp) \
	$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-callbacks.obj `cygpath -w callbacks.c`

packing-callbacks.lo: callbacks.c
	source='callbacks.c' object='packing-callbacks.lo' libtool=yes \
	depfile='$(DEPDIR)/packing-callbacks.Plo' tmpdepfile='$(DEPDIR)/packing-callbacks.TPlo' \
	$(CCDEPMODE) $(depcomp) \
	$(LIBTOOL) --mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(packing_CFLAGS) $(CFLAGS) -c -o packing-callbacks.lo `test -f callbacks.c || echo '$(srcdir)/'`callbacks.c
CCDEPMODE = depmode=gcc3
uninstall-info-am:

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || etags $(ETAGS_ARGS) $$tags  $$unique $(LISP)

GTAGS:
	here=`CDPATH=: && cd $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH

DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)

top_distdir = ..
distdir = $(top_distdir)/$(PACKAGE)-$(VERSION)

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  if test -f $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    $(mkinstalldirs) "$(distdir)/$$dir"; \
	  fi; \
	  if test -d $$d/$$file; then \
	    cp -pR $$d/$$file $(distdir) \
	    || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES) stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic clean-libtool mostlyclean-am

distclean: distclean-am

distclean-am: clean-am distclean-compile distclean-depend \
	distclean-generic distclean-libtool distclean-tags

dvi: dvi-am

dvi-am:

info: info-am

info-am:

install-data-am:

install-exec-am: install-binPROGRAMS

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am

maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

uninstall-am: uninstall-binPROGRAMS uninstall-info-am

.PHONY: GTAGS all all-am check check-am clean clean-binPROGRAMS \
	clean-generic clean-libtool distclean distclean-compile \
	distclean-depend distclean-generic distclean-libtool \
	distclean-tags distdir dvi dvi-am info info-am install \
	install-am install-binPROGRAMS install-data install-data-am \
	install-exec install-exec-am install-info install-info-am \
	install-man install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool tags uninstall uninstall-am \
	uninstall-binPROGRAMS uninstall-info-am

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
