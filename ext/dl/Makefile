
SHELL = /bin/sh

#### Start of system configuration section. ####
top_srcdir = $(topdir)/.
srcdir = $(top_srcdir)/ext/dl
topdir = ../..
hdrdir = $(top_srcdir)/include
arch_hdrdir = $(extout)/include/$(arch)
VPATH = $(srcdir):$(arch_hdrdir)/ruby:$(hdrdir)/ruby
RUBYLIB = -
RUBYOPT = -r$(top_srcdir)/ext/purelib.rb
prefix = $(DESTDIR)/usr/local
exec_prefix = $(prefix)
vendorhdrdir = $(rubyhdrdir)/vendor_ruby
sitehdrdir = $(rubyhdrdir)/site_ruby
rubyhdrdir = $(includedir)/$(RUBY_INSTALL_NAME)-$(ruby_version)
vendordir = $(libdir)/$(RUBY_INSTALL_NAME)/vendor_ruby
sitedir = $(libdir)/$(RUBY_INSTALL_NAME)/site_ruby
mandir = $(datarootdir)/man
localedir = $(datarootdir)/locale
libdir = $(exec_prefix)/lib
psdir = $(docdir)
pdfdir = $(docdir)
dvidir = $(docdir)
htmldir = $(docdir)
infodir = $(datarootdir)/info
docdir = $(datarootdir)/doc/$(PACKAGE)
oldincludedir = $(DESTDIR)/usr/include
includedir = $(prefix)/include
localstatedir = $(prefix)/var
sharedstatedir = $(prefix)/com
sysconfdir = $(prefix)/etc
datadir = $(datarootdir)
datarootdir = $(prefix)/share
libexecdir = $(exec_prefix)/libexec
sbindir = $(exec_prefix)/sbin
bindir = $(exec_prefix)/bin
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
CFLAGS   =  -fPIC  $(cflags) -fno-defer-pop -fno-omit-frame-pointer 
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

CLEANFILES = mkmf.log $(HDRDIR)/dl.h
DISTCLEANFILES = callback.h callback-0.c callback-1.c callback-2.c callback-3.c callback-4.c callback-5.c callback-6.c callback-7.c callback-8.c
DISTCLEANDIRS = $(HDRDIR)

extout = $(topdir)/.ext
extout_prefix = $(extout)$(target_prefix)/
target_prefix = 
LOCAL_LIBS = 
LIBS =  -ldl  -lpthread -lrt -ldl -lcrypt -lm   -lc
SRCS = cfunc.c dl.c cptr.c handle.c callback-0.c callback-1.c callback-2.c callback-3.c callback-4.c callback-5.c callback-6.c callback-7.c callback-8.c
OBJS = cfunc.o dl.o cptr.o handle.o callback-0.o callback-1.o callback-2.o callback-3.o callback-4.o callback-5.o callback-6.o callback-7.o callback-8.o
TARGET = dl
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
pre-install-rb-default: $(RUBYLIBDIR)/dl
install-rb-default: $(RUBYLIBDIR)/dl/callback.rb
$(RUBYLIBDIR)/dl/callback.rb: $(srcdir)/lib/dl/callback.rb
	$(COPY) $(srcdir)/lib/dl/callback.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/callback.rb
install-rb-default: $(RUBYLIBDIR)/dl/cparser.rb
$(RUBYLIBDIR)/dl/cparser.rb: $(srcdir)/lib/dl/cparser.rb
	$(COPY) $(srcdir)/lib/dl/cparser.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/cparser.rb
install-rb-default: $(RUBYLIBDIR)/dl/func.rb
$(RUBYLIBDIR)/dl/func.rb: $(srcdir)/lib/dl/func.rb
	$(COPY) $(srcdir)/lib/dl/func.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/func.rb
install-rb-default: $(RUBYLIBDIR)/dl/import.rb
$(RUBYLIBDIR)/dl/import.rb: $(srcdir)/lib/dl/import.rb
	$(COPY) $(srcdir)/lib/dl/import.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/import.rb
install-rb-default: $(RUBYLIBDIR)/dl/pack.rb
$(RUBYLIBDIR)/dl/pack.rb: $(srcdir)/lib/dl/pack.rb
	$(COPY) $(srcdir)/lib/dl/pack.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/pack.rb
install-rb-default: $(RUBYLIBDIR)/dl/stack.rb
$(RUBYLIBDIR)/dl/stack.rb: $(srcdir)/lib/dl/stack.rb
	$(COPY) $(srcdir)/lib/dl/stack.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/stack.rb
install-rb-default: $(RUBYLIBDIR)/dl/struct.rb
$(RUBYLIBDIR)/dl/struct.rb: $(srcdir)/lib/dl/struct.rb
	$(COPY) $(srcdir)/lib/dl/struct.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/struct.rb
install-rb-default: $(RUBYLIBDIR)/dl/types.rb
$(RUBYLIBDIR)/dl/types.rb: $(srcdir)/lib/dl/types.rb
	$(COPY) $(srcdir)/lib/dl/types.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/types.rb
install-rb-default: $(RUBYLIBDIR)/dl/value.rb
$(RUBYLIBDIR)/dl/value.rb: $(srcdir)/lib/dl/value.rb
	$(COPY) $(srcdir)/lib/dl/value.rb $(@D)
clean-rb-default::
	@-$(RM) $(RUBYLIBDIR)/dl/value.rb
clean-rb-default::
	@-$(RMDIRS) $(RUBYLIBDIR)/dl
pre-install-rb: $(HDRDIR)
install-rb: $(HDRDIR)/dl.h
$(HDRDIR)/dl.h: $(srcdir)/dl.h
	$(COPY) $(srcdir)/dl.h $(@D)
clean-rb::
	@-$(RM) $(HDRDIR)/dl.h
clean-rb::
	@-$(RMDIRS) $(HDRDIR)
	@-$(RMDIRS) $(RUBYLIBDIR)/dl
$(RUBYARCHDIR):
	$(MAKEDIRS) $@
$(HDRDIR):
	$(MAKEDIRS) $@
$(RUBYLIBDIR)/dl:
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

###
$(OBJS): $(RUBY_EXTCONF_H)

cfunc.o: cfunc.c dl.h $(hdrdir)/ruby/ruby.h

cptr.o: cptr.c dl.h $(hdrdir)/ruby/ruby.h $(hdrdir)/ruby/io.h

handle.o: handle.c dl.h $(hdrdir)/ruby/ruby.h

dl.o: dl.c dl.h callback.h $(hdrdir)/ruby/ruby.h $(hdrdir)/ruby/io.h

callback-0.o: callback-0.c $(hdrdir)/ruby/ruby.h
callback-1.o: callback-1.c $(hdrdir)/ruby/ruby.h
callback-2.o: callback-2.c $(hdrdir)/ruby/ruby.h
callback-3.o: callback-3.c $(hdrdir)/ruby/ruby.h
callback-4.o: callback-4.c $(hdrdir)/ruby/ruby.h
callback-5.o: callback-5.c $(hdrdir)/ruby/ruby.h
callback-6.o: callback-6.c $(hdrdir)/ruby/ruby.h
callback-7.o: callback-7.c $(hdrdir)/ruby/ruby.h
callback-8.o: callback-8.c $(hdrdir)/ruby/ruby.h

callback-0.c callback-1.c callback-2.c \
callback-3.c callback-4.c callback-5.c \
callback-6.c callback-7.c callback-8.c \
callback.h: $(srcdir)/mkcallback.rb dl.h
	@echo "generating callback.h"
	@$(RUBY) $(srcdir)/mkcallback.rb $(srcdir)/dl.h 
