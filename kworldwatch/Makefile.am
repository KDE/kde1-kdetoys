INCLUDES= $(all_includes) 

CLEANFILES = $(BUILT_SOURCES)
bin_PROGRAMS = kworldwatch
LDFLAGS = $(all_libraries) $(KDE_RPATH)
LDADD =      $(LIB_KFM) $(LIB_KDEUI) 

ICONSDIR=$(kde_icondir)

####### Files

kworldwatch_SOURCES  = main.cpp toplevel.cpp world.cpp kinputline.cpp \
			 astro.c sunclock.c
BUILT_SOURCES  = toplevel.moc world.moc kinputline.moc

SUBDIRS = pics

toplevel.cpp: toplevel.moc
toplevel.moc: toplevel.h
	$(MOC) toplevel.h -o toplevel.moc

kinputline.cpp: kinputline.moc
kinputline.moc: kinputline.h
	$(MOC) kinputline.h -o kinputline.moc

world.cpp: world.moc
world.moc: world.h
	$(MOC) world.h -o world.moc

install-data-local:
	$(mkinstalldirs) $(ICONSDIR)
	$(INSTALL_DATA) kworldwatch.xpm $(ICONSDIR)
	$(mkinstalldirs) $(kde_minidir)
	$(INSTALL_DATA) mini-kworldwatch.xpm $(kde_minidir)/kworldwatch.xpm
	$(mkinstalldirs) $(kde_appsdir)/Utilities
	$(INSTALL_DATA) KWorldWatch.kdelnk $(kde_appsdir)/Utilities

uninstall-local:
	rm -f $(ICONSDIR)/kworldwatch.xpm
	rm -f $(kde_minidir)/kworldwatch.xpm
	rm -r $(kde_appsdir)/Utilities

messages:
	$(XGETTEXT) -C -ki18n -ktranslate -x $(includedir)/kde.pot $(kworldwatch_SOURCES) && mv messages.po ../po/kworldwatch.pot

