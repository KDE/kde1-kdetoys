# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.3 from Makefile.am

# Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# this 10 paths are KDE specific. Use them:
# kde_htmldir       Where your docs should go to. (contains lang subdirs)
# kde_appsdir       Where your application file (.kdelnk) should go to. 
# kde_icondir       Where your icon should go to.
# kde_minidir       Where your mini icon should go to.
# kde_datadir       Where you install application data. (Use a subdir)
# kde_locale        Where translation files should go to.(contains lang subdirs)
# kde_cgidir        Where cgi-bin executables should go to.
# kde_confdir       Where config files should go to.
# kde_mimedir       Where mimetypes should go to.
# kde_toolbardir    Where general toolbar icons should go to.
# kde_wallpaperdir  Where general wallpapers should go to.

# just set the variable


SHELL = /bin/sh

srcdir = .
top_srcdir = ..
prefix = /opt/kde
exec_prefix = ${prefix}

bindir = /opt/kde/bin
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

DISTDIR =

pkgdatadir = $(datadir)/kodo
pkglibdir = $(libdir)/kodo
pkgincludedir = $(includedir)/kodo

top_builddir = ..

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_alias = i586-pc-linux-gnu
build_triplet = i586-pc-linux-gnu
host_alias = i586-pc-linux-gnu
host_triplet = i586-pc-linux-gnu
target_alias = i586-pc-linux-gnu
target_triplet = i586-pc-linux-gnu
CC = gcc
CPP = gcc -E
CXX = g++
GLINC = @GLINC@
GLLIB = @GLLIB@
GMSGFMT = /usr/bin/msgfmt
IDL = @IDL@
KDE_EXTRA_RPATH = 
KDE_INCLUDES = -I/opt/kde/include
KDE_LDFLAGS = -L/opt/kde/lib
KDE_RPATH = -rpath $(kde_libraries) -rpath $(x_libraries)
LD = /usr/bin/ld
LIBCOMPAT = 
LIBCRYPT = -lcrypt
LIBDL = @LIBDL@
LIBJPEG = @LIBJPEG@
LIBMICO = @LIBMICO@
LIBOBJS = @LIBOBJS@
LIBPYTHON = @LIBPYTHON@
LIBSOCKET = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBUCB = 
LN_S = ln -s
MAKEINFO = makeinfo
MICO_INCLUDES = @MICO_INCLUDES@
MICO_LDFLAGS = @MICO_LDFLAGS@
MOC = /usr/bin/moc
MSGFMT = /usr/bin/msgfmt
NM = /usr/bin/nm -B
PACKAGE = kodo
PAMINC = @PAMINC@
PAMLIBPATHS = @PAMLIBPATHS@
PAMLIBS = @PAMLIBS@
PYTHONINC = @PYTHONINC@
PYTHONLIB = @PYTHONLIB@
QT_INCLUDES = -I/usr/lib/qt/include
QT_LDFLAGS = 
RANLIB = ranlib
USE_NLS = yes
VERSION = 0.1
XGETTEXT = /usr/bin/xgettext
XPMINC = @XPMINC@
XPMLIB = @XPMLIB@
X_EXTRA_LIBS = 
X_INCLUDES = -I/usr/X11R6/include
X_LDFLAGS = -L/usr/X11R6/lib
all_includes = -I/opt/kde/include -I/usr/lib/qt/include -I/usr/X11R6/include
all_libraries = -L/opt/kde/lib -L/usr/X11R6/lib
install_root = 
kde_appsdir = /opt/kde/share/applnk
kde_bindir = /opt/kde/bin
kde_cgidir = /opt/kde/cgi-bin
kde_confdir = /opt/kde/share/config
kde_datadir = /opt/kde/share/apps
kde_htmldir = /opt/kde/share/doc/HTML
kde_icondir = /opt/kde/share/icons
kde_includes = /opt/kde/include
kde_libraries = /opt/kde/lib
kde_locale = /opt/kde/share/locale
kde_mimedir = /opt/kde/share/mimelnk
kde_minidir = /opt/kde/share/icons/mini
kde_partsdir = /opt/kde/parts
kde_sounddir = /opt/kde/share/sounds
kde_toolbardir = /opt/kde/share/toolbar
kde_wallpaperdir = /opt/kde/share/wallpapers
qt_includes = /usr/lib/qt/include
qt_libraries = 
x_includes = /usr/X11R6/include
x_libraries = /usr/X11R6/lib

APPSDIR = $(kde_appsdir)/Utilities
# set the include path for X, qt and KDE
INCLUDES= $(all_includes)
# claim, which subdirectories you want to install
# if you don't have subdirectories, comment it
#SUBDIRS = 

####### This part is very kodo specific
# you can add here more. This one gets installed 
bin_PROGRAMS = 	kodo

# Which sources should be compiled for kodo.
kodo_SOURCES = kodo.cpp kimgnum.cpp gridbag.cpp

kodo_METASOURCES = USE_AUTOMOC

# the library search path. 
kodo_LDFLAGS = $(all_libraries) $(KDE_RPATH)

# the libraries to link against. Be aware of the order. First the libraries,
# that depend on the following ones.
kodo_LDADD   = -lkdeui -lkdecore -lqt -lXext -lX11 $(LIBSOCKET)

# this option you can leave out. Just, if you use "make dist", you need it
noinst_HEADERS = kodo.h kimgnum.h gridbag.h

# if you "make distclean", this files get removed. If you want to remove
# them while "make clean", use CLEANFILES
DISTCLEANFILES = $(kodo_METASOURCES)

doc_DATA = index.html logotp3.gif guide.gif
docdir = $(kde_htmldir)/en/kodo
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES = 
PROGRAMS =  $(bin_PROGRAMS)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I..
CPPFLAGS = 
LDFLAGS = -s
LIBS = 
kodo_OBJECTS =  kodo.o kimgnum.o gridbag.o gridbag.moc.o kimgnum.moc.o kodo.moc.o 
kodo_DEPENDENCIES = 
CXXFLAGS = -O2 -Wall
CXXCOMPILE = $(CXX) $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CXXFLAGS)
LTCXXCOMPILE = $(LIBTOOL) --mode=compile $(CXX) $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CXXFLAGS)
CXXLINK = $(LIBTOOL) --mode=link $(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@
DATA =  $(doc_DATA)

HEADERS =  $(noinst_HEADERS)

DIST_COMMON =  Makefile.am Makefile.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP = --best
SOURCES = $(kodo_SOURCES)
OBJECTS = $(kodo_OBJECTS)

all: Makefile $(PROGRAMS) $(DATA) $(HEADERS)

.SUFFIXES:
.SUFFIXES: .S .c .cpp .lo .o .s
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4)
	cd $(top_srcdir) && $(AUTOMAKE) --gnu --include-deps kodo/Makefile
	perl $(top_builddir)/automoc /home/armen/src/kodo-0.1/kodo/Makefile.in

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-binPROGRAMS:

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)

distclean-binPROGRAMS:

maintainer-clean-binPROGRAMS:

install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`"; \
	    $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	list='$(bin_PROGRAMS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	done

.c.o:
	$(COMPILE) -c $<

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

.c.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.s.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.S.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:

maintainer-clean-libtool:

kodo: $(kodo_OBJECTS) $(kodo_DEPENDENCIES)
	@rm -f kodo
	$(CXXLINK) $(kodo_LDFLAGS) $(kodo_OBJECTS) $(kodo_LDADD) $(LIBS)
.cpp.o:
	$(CXXCOMPILE) -c $<
.cpp.lo:
	$(LTCXXCOMPILE) -c $<

install-docDATA: $(doc_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(docdir)
	@list='$(doc_DATA)'; for p in $$list; do \
	  if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(docdir)/$$p"; \
	    $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(docdir)/$$p; \
	  else if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(docdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(docdir)/$$p; \
	  fi; fi; \
	done

uninstall-docDATA:
	@$(NORMAL_UNINSTALL)
	list='$(doc_DATA)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(docdir)/$$p; \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $(SOURCES) $(HEADERS) $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags  $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = kodo

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  test -f $(distdir)/$$file \
	  || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	  || cp -p $$d/$$file $(distdir)/$$file; \
	done
info:
dvi:
check: all
	$(MAKE)
installcheck:
install-exec: install-binPROGRAMS
	@$(NORMAL_INSTALL)

install-data: install-docDATA install-data-local
	@$(NORMAL_INSTALL)

install: install-exec install-data all
	@:

uninstall: uninstall-binPROGRAMS uninstall-docDATA uninstall-local

install-strip:
	$(MAKE) INSTALL_PROGRAM='$(INSTALL_PROGRAM) -s' INSTALL_SCRIPT='$(INSTALL_PROGRAM)' install
installdirs:
	$(mkinstalldirs)  $(DATADIR)$(bindir) $(DATADIR)$(docdir)


mostlyclean-generic:
	-test -z "$(MOSTLYCLEANFILES)" || rm -f $(MOSTLYCLEANFILES)

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(DISTCLEANFILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	-test -z "$(MAINTAINERCLEANFILES)" || rm -f $(MAINTAINERCLEANFILES)
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
mostlyclean:  mostlyclean-binPROGRAMS mostlyclean-compile \
		mostlyclean-libtool mostlyclean-tags \
		mostlyclean-generic

clean:  clean-binPROGRAMS clean-compile clean-libtool clean-tags \
		clean-generic mostlyclean

distclean:  distclean-binPROGRAMS distclean-compile distclean-libtool \
		distclean-tags distclean-generic clean
	-rm -f config.status
	-rm -f libtool

maintainer-clean:  maintainer-clean-binPROGRAMS maintainer-clean-compile \
		maintainer-clean-libtool maintainer-clean-tags \
		maintainer-clean-generic distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

.PHONY: mostlyclean-binPROGRAMS distclean-binPROGRAMS clean-binPROGRAMS \
maintainer-clean-binPROGRAMS uninstall-binPROGRAMS install-binPROGRAMS \
mostlyclean-compile distclean-compile clean-compile \
maintainer-clean-compile mostlyclean-libtool distclean-libtool \
clean-libtool maintainer-clean-libtool uninstall-docDATA \
install-docDATA tags mostlyclean-tags distclean-tags clean-tags \
maintainer-clean-tags distdir info dvi installcheck install-exec \
install-data install uninstall all installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


# make messages.po. Move this one to ../po/ and "make merge" in po
# the -x is for skipping messages already translated in kdelibs
messages:
	$(XGETTEXT) -C -ki18n -x ../../../kdelibs/po/kde.pot $(kodo_SOURCES) && mv messages.po ../po/kodo.pot

# just install datas here. Use install-exec-local for scripts and etc.
# the binary itself is already installed from automake
# use mkinstalldirs, not "install -d"
# don't install a list of file. Just one file per install.
# if you have more of them, create a subdirectory with an extra Makefile 
install-data-local: 
	$(mkinstalldirs) $(APPSDIR)
	$(INSTALL_DATA) kodo.kdelnk $(APPSDIR)
	$(mkinstalldirs) $(kde_datadir)/kodo
	$(INSTALL_DATA) 57-2.gif $(kde_datadir)/kodo
	$(mkinstalldirs) $(kde_icondir)
	$(INSTALL_DATA) kodo.xpm $(kde_icondir)
	$(mkinstalldirs) $(kde_minidir)
	$(INSTALL_DATA) mini-kodo.xpm $(kde_minidir)/kodo.xpm

# remove ALL you have installed in install-data-local or install-exec-local
uninstall-local:
	-rm -f $(APPSDIR)/kodo.kdelnk
	-rm -f $(kde_icondir)/kodo.xpm
	-rm -f $(kde_minidir)/kodo.xpm

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:


gridbag.moc.cpp: gridbag.h
	$(MOC) gridbag.h -o gridbag.moc.cpp

kimgnum.moc.cpp: kimgnum.h
	$(MOC) kimgnum.h -o kimgnum.moc.cpp

kodo.moc.cpp: kodo.h
	$(MOC) kodo.h -o kodo.moc.cpp

