
bin_PROGRAMS = kmoon

kmoon_LDFLAGS = $(all_libraries) $(KDE_RPATH)
kmoon_LDADD = -lkdeui -lkdecore -lqt -lXext -lX11 -lm $(LIBSOCKET)
kmoon_SOURCES = kmoon.cpp phases.cpp
noinst_HEADERS = kmoon.h

DISTCLEANFILES = *.moc

INCLUDES = $(all_includes)

kmoon.cpp: kmoon.moc
kmoon.moc: kmoon.h
	$(MOC) -o kmoon.moc kmoon.h

SUBDIRS = pics

messages:
	@XGETTEXT@ -C -ki18n -x ../../kdelibs/po/kde.pot $(kmoon_SOURCES) && mv messages.po ../po/kmoon.pot

