
bin_PROGRAMS = kmoon

kmoon_LDFLAGS = $(all_libraries) $(KDE_RPATH)
kmoon_LDADD =       -lm $(LIB_KDEUI)
kmoon_SOURCES = kmoon.cpp phases.cpp
noinst_HEADERS = kmoon.h

DISTCLEANFILES = *.moc

INCLUDES = $(all_includes)

kmoon.cpp: kmoon.moc
kmoon.moc: kmoon.h
	$(MOC) -o kmoon.moc kmoon.h

icondir = $(kde_icondir)
icon_DATA = kmoon.xpm

kdelnkdir = $(kde_appsdir)/Utilities
kdelnk_DATA = kmoon.kdelnk

install-data-local:
	$(mkinstalldirs) $(kde_minidir)
	$(INSTALL_DATA) mini-kmoon.xpm $(kde_minidir)/kmoon.xpm   

uninstall-local:
	-rm -f $(kde_minidir)/kmoon.xpm

SUBDIRS = pics

messages:
	$(XGETTEXT) -C -ki18n -x $(includedir)/kde.pot $(kmoon_SOURCES) && mv messages.po ../po/kmoon.pot

