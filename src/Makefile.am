## Process this file with automake to produce Makefile.in

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(GTK_PACKING_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = gtk_packing

gtk_packing_SOURCES = \
	callbacks.c \
	callbacks.h \
	main.c \
	interface.c \
	interface.h \
	support.c \
	support.h

gtk_packing_LDFLAGS = \
	-Wl,--export-dynamic

gtk_packing_LDADD = $(GTK_PACKING_LIBS)

EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(datadir)/gtk_packing
