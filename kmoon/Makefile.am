
bin_PROGRAMS = kmoon

kmoon_LDFLAGS = $(all_libraries) $(KDE_RPATH)
kmoon_LDADD =   $(LIB_KDEUI) -lm
kmoon_SOURCES = kmoon.cpp phases.cpp
noinst_HEADERS = kmoon.h

INCLUDES = $(all_includes)

METASOURCES = kmoon.moc

kde_icon_DATA = kmoon.xpm

kdelnkdir = $(kde_appsdir)/Utilities
kdelnk_DATA = kmoon.kdelnk

install-data-local:
	$(mkinstalldirs) $(kde_minidir)
	$(INSTALL_DATA) $(srcdir)/mini-kmoon.xpm $(kde_minidir)/kmoon.xpm   

uninstall-local:
	-rm -f $(kde_minidir)/kmoon.xpm

SUBDIRS = pics

messages:
	$(XGETTEXT) -C -ki18n -x $(includedir)/kde.pot $(kmoon_SOURCES) && mv messages.po ../po/kmoon.pot

