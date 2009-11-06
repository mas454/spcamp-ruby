
SHELL = /bin/sh

#### Start of system configuration section. ####
top_srcdir = $(topdir)/.
srcdir = $(top_srcdir)/ext/json/ext/parser
topdir = ../../../..
hdrdir = $(top_srcdir)/include
arch_hdrdir = $(extout)/include/$(arch)
VPATH = $(srcdir):$(arch_hdrdir)/ruby:$(hdrdir)/ruby
RUBYLIB = -
RUBYOPT = -r$(top_srcdir)/ext/purelib.rb
prefix = $(DESTDIR)/usr/local
exec_prefix = $(prefix)
bindir = $(exec_prefix)/bin
sbindir = $(exec_prefix)/sbin
libexecdir = $(exec_prefix)/libexec
datarootdir = $(prefix)/share
datadir = $(datarootdir)
sysconfdir = $(prefix)/etc
sharedstatedir = $(prefix)/com
localstatedir = $(prefix)/var
includedir = $(prefix)/include
oldincludedir = $(DESTDIR)/usr/include
docdir = $(datarootdir)/doc/$(PACKAGE)
infodir = $(datarootdir)/info
htmldir = $(docdir)
dvidir = $(docdir)
pdfdir = $(docdir)
psdir = $(docdir)
libdir = $(exec_prefix)/lib
localedir = $(datarootdir)/locale
mandir = $(datarootdir)/man
sitedir = $(libdir)/$(RUBY_INSTALL_NAME)/site_ruby
vendordir = $(libdir)/$(RUBY_INSTALL_NAME)/vendor_ruby
rubyhdrdir = $(includedir)/$(RUBY_INSTALL_NAME)-$(ruby_version)
sitehdrdir = $(rubyhdrdir)/site_ruby
vendorhdrdir = $(rubyhdrdir)/vendor_ruby
rubylibdir = $(libdir)/$(ruby_install_name)/$(ruby_version)
archdir = $(rubylibdir)/$(arch)
sitelibdir = $(sitedir)/$(ruby_version)
sitearchdir = $(sitelibdir)/$(sitearch)
vendorlibdir = $(vendordir)/$(ruby_version)
vendorarchdir = $(vendorlibdir)/$(sitearch)

CC = gcc
CXX = g++
LIBRUBY = $(LIBRUBY_A)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
LIBRUBYARG_SHARED = -Wl,-R -Wl,$(libdir) -L$(libdir) -l$(RUBY_SO_NAME)
LIBRUBYARG_STATIC = -Wl,-R -Wl,$(libdir) -L$(libdir) -l$(RUBY_SO_NAME)-static
OUTFLAG = -o 
COUTFLAG = -o 

RUBY_EXTCONF_H = extconf.h
cflags   = $(optflags) $(debugflags) $(warnflags)
optflags = -O2
debugflags = -g
warnflags = -Wall -Wno-parentheses
CFLAGS   =  -fPIC  $(cflags) -Wall 
INCFLAGS = -I. -I$(arch_hdrdir) -I$(hdrdir) -I$(srcdir)
DEFS     = -D_FILE_OFFSET_BITS=64
CPPFLAGS = -DRUBY_EXTCONF_H=\"$(RUBY_EXTCONF_H)\"  $(DEFS) $(cppflags)
CXXFLAGS = $(CFLAGS)  $(cxxflags)
ldflags  = -L.  -rdynamic -Wl,-export-dynamic
dldflags = 
archflag = 
DLDFLAGS = $(ldflags) $(dldflags) $(archflag)
LDSHARED = $(CC) -shared
LDSHAREDXX = $(CXX) -shared
AR = ar
EXEEXT = 

RUBY_INSTALL_NAME = ruby
RUBY_SO_NAME = ruby
arch = i686-linux
sitearch = i686-linux
ruby_version = 1.9.1
ruby = $(topdir)/miniruby -I'$(topdir)' -I'$(top_srcdir)/lib' -I'$(extout)/$(arch)' -I'$(extout)/common' -I./- -I'$(top_srcdir)/ext' -rpurelib.rb
RUBY = $(ruby)
RM = rm -f
RM_RF = $(RUBY) -run -e rm -- -rf
RMDIRS = $(top_srcdir)/tool/rmdirs
MAKEDIRS = mkdir -p
INSTALL = /usr/bin/install -c
INSTALL_PROG = $(INSTALL) -m 0755
INSTALL_DATA = $(INSTALL) -m 644
COPY = cp

#### End of system configuration section. ####

preload = 

libpath = . $(topdir)
LIBPATH =  -L. -L$(topdir)
DEFFILE = 

CLEANFILES = mkmf.log
DISTCLEANFILES = 
DISTCLEANDIRS = 

extout = $(topdir)/.ext
extout_prefix = $(extout)$(target_prefix)/
target_prefix = /json/ext
LOCAL_LIBS = 
LIBS =   -lpthread -lrt -ldl -lcrypt -lm   -lc
SRCS = parser.c unicode.c
OBJS = parser.o unicode.o
TARGET = parser
DLLIB = $(TARGET).so
EXTSTATIC = 
STATIC_LIB = $(TARGET).a

BINDIR        = $(extout)/bin
RUBYCOMMONDIR = $(extout)/common
RUBYLIBDIR    = $(RUBYCOMMONDIR)$(target_prefix)
RUBYARCHDIR   = $(extout)/$(arch)$(target_prefix)
HDRDIR        = $(extout)/include/ruby$(target_prefix)
ARCHHDRDIR    = $(extout)/include/$(arch)/ruby$(target_prefix)

TARGET_SO     = $(RUBYARCHDIR)/$(DLLIB)
CLEANLIBS     = $(RUBYARCHDIR)/$(TARGET).so 
CLEANOBJS     = *.o  *.bak

all:    install
static: $(STATIC_LIB) install-rb

clean-rb-default::
clean-rb::
clean-so::
clean: clean-so clean-rb-default clean-rb
		@-$(RM) $(CLEANLIBS) $(CLEANOBJS) $(CLEANFILES)

distclean-rb-default::
distclean-rb::
distclean-so::
distclean: clean distclean-so distclean-rb-default distclean-rb
		@-$(RM) Makefile $(RUBY_EXTCONF_H) conftest.* mkmf.log
		@-$(RM) core ruby$(EXEEXT) *~ $(DISTCLEANFILES)
		@-$(RMDIRS) $(DISTCLEANDIRS)

realclean: distclean
install: install-so install-rb

install-so: $(RUBYARCHDIR)
install-so: $(RUBYARCHDIR)/$(DLLIB)
clean-so::
	@-$(RM) $(RUBYARCHDIR)/$(DLLIB)
	@-$(RMDIRS) $(RUBYARCHDIR)
install-rb: pre-install-rb install-rb-default
install-rb-default: pre-install-rb-default
pre-install-rb: Makefile
pre-install-rb-default: Makefile
$(RUBYARCHDIR):
	$(MAKEDIRS) $@

site-install: site-install-so site-install-rb
site-install-so: install-so
site-install-rb: install-rb

.SUFFIXES: .c .m .cc .cxx .cpp .C .o

.cc.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.cxx.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.cpp.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.C.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) $(COUTFLAG)$@ -c $<

.c.o:
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) $(COUTFLAG)$@ -c $<

$(RUBYARCHDIR)/$(DLLIB): $(OBJS) Makefile
	@-$(RM) $(@)
	@-$(MAKEDIRS) $(@D)
	$(LDSHARED) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)

$(STATIC_LIB): $(OBJS)
	@-$(RM) $(@)
	$(AR) cru $@ $(OBJS)
	@-ranlib $(DLLIB) 2> /dev/null || true

$(OBJS): $(hdrdir)/ruby.h $(hdrdir)/ruby/defines.h $(arch_hdrdir)/ruby/config.h $(RUBY_EXTCONF_H)
