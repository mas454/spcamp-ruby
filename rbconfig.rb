
# This file was created by mkconfig.rb when ruby was built.  Any
# changes made to this file will be lost the next time ruby is built.

module RbConfig
  RUBY_VERSION == "1.9.1" or
    raise "ruby lib version (1.9.1) doesn't match executable version (#{RUBY_VERSION})"

  TOPDIR = File.dirname(__FILE__).chomp!("/lib/ruby/1.9.1/i686-linux")
  DESTDIR = '' unless defined? DESTDIR
  CONFIG = {}
  CONFIG["DESTDIR"] = DESTDIR
  CONFIG["INSTALL"] = '/usr/bin/install -c'
  CONFIG["prefix"] = (TOPDIR || DESTDIR + "/usr/local")
  CONFIG["EXEEXT"] = ""
  CONFIG["ruby_install_name"] = "ruby"
  CONFIG["RUBY_INSTALL_NAME"] = "ruby"
  CONFIG["RUBY_SO_NAME"] = "ruby"
  CONFIG["SHELL"] = "/bin/bash"
  CONFIG["PATH_SEPARATOR"] = ":"
  CONFIG["PACKAGE_NAME"] = ""
  CONFIG["PACKAGE_TARNAME"] = ""
  CONFIG["PACKAGE_VERSION"] = ""
  CONFIG["PACKAGE_STRING"] = ""
  CONFIG["PACKAGE_BUGREPORT"] = ""
  CONFIG["exec_prefix"] = "$(prefix)"
  CONFIG["bindir"] = "$(exec_prefix)/bin"
  CONFIG["sbindir"] = "$(exec_prefix)/sbin"
  CONFIG["libexecdir"] = "$(exec_prefix)/libexec"
  CONFIG["datarootdir"] = "$(prefix)/share"
  CONFIG["datadir"] = "$(datarootdir)"
  CONFIG["sysconfdir"] = "$(prefix)/etc"
  CONFIG["sharedstatedir"] = "$(prefix)/com"
  CONFIG["localstatedir"] = "$(prefix)/var"
  CONFIG["includedir"] = "$(prefix)/include"
  CONFIG["oldincludedir"] = "/usr/include"
  CONFIG["docdir"] = "$(datarootdir)/doc/$(PACKAGE)"
  CONFIG["infodir"] = "$(datarootdir)/info"
  CONFIG["htmldir"] = "$(docdir)"
  CONFIG["dvidir"] = "$(docdir)"
  CONFIG["pdfdir"] = "$(docdir)"
  CONFIG["psdir"] = "$(docdir)"
  CONFIG["libdir"] = "$(exec_prefix)/lib"
  CONFIG["localedir"] = "$(datarootdir)/locale"
  CONFIG["mandir"] = "$(datarootdir)/man"
  CONFIG["DEFS"] = "-D_FILE_OFFSET_BITS=64"
  CONFIG["ECHO_C"] = ""
  CONFIG["ECHO_N"] = "-n"
  CONFIG["ECHO_T"] = ""
  CONFIG["LIBS"] = "-lpthread -lrt -ldl -lcrypt -lm "
  CONFIG["build_alias"] = ""
  CONFIG["host_alias"] = ""
  CONFIG["target_alias"] = ""
  CONFIG["BASERUBY"] = "ruby"
  CONFIG["MAJOR"] = "1"
  CONFIG["MINOR"] = "9"
  CONFIG["TEENY"] = "1"
  CONFIG["build"] = "i686-pc-linux-gnu"
  CONFIG["build_cpu"] = "i686"
  CONFIG["build_vendor"] = "pc"
  CONFIG["build_os"] = "linux-gnu"
  CONFIG["host"] = "i686-pc-linux-gnu"
  CONFIG["host_cpu"] = "i686"
  CONFIG["host_vendor"] = "pc"
  CONFIG["host_os"] = "linux-gnu"
  CONFIG["target"] = "i686-pc-linux-gnu"
  CONFIG["target_cpu"] = "i686"
  CONFIG["target_vendor"] = "pc"
  CONFIG["target_os"] = "linux"
  CONFIG["CC"] = "gcc"
  CONFIG["CFLAGS"] = " $(cflags)"
  CONFIG["LDFLAGS"] = "-L.  -rdynamic -Wl,-export-dynamic"
  CONFIG["CPPFLAGS"] = " $(DEFS) $(cppflags)"
  CONFIG["OBJEXT"] = "o"
  CONFIG["CXX"] = "g++"
  CONFIG["CXXFLAGS"] = " $(cxxflags)"
  CONFIG["CPP"] = "gcc -E"
  CONFIG["GREP"] = "/bin/grep"
  CONFIG["EGREP"] = "/bin/grep -E"
  CONFIG["GNU_LD"] = "yes"
  CONFIG["CPPOUTFILE"] = "-o conftest.i"
  CONFIG["OUTFLAG"] = "-o "
  CONFIG["COUTFLAG"] = "-o "
  CONFIG["RANLIB"] = "ranlib"
  CONFIG["AR"] = "ar"
  CONFIG["AS"] = "as"
  CONFIG["ASFLAGS"] = ""
  CONFIG["OBJDUMP"] = "objdump"
  CONFIG["OBJCOPY"] = "objcopy"
  CONFIG["NM"] = ""
  CONFIG["WINDRES"] = ""
  CONFIG["DLLWRAP"] = ""
  CONFIG["LN_S"] = "ln -s"
  CONFIG["SET_MAKE"] = ""
  CONFIG["INSTALL_PROGRAM"] = "$(INSTALL)"
  CONFIG["INSTALL_SCRIPT"] = "$(INSTALL)"
  CONFIG["INSTALL_DATA"] = "$(INSTALL) -m 644"
  CONFIG["RM"] = "rm -f"
  CONFIG["CP"] = "cp"
  CONFIG["MAKEDIRS"] = "mkdir -p"
  CONFIG["RMDIRS"] = "$(top_srcdir)/tool/rmdirs"
  CONFIG["RMALL"] = "rm -fr"
  CONFIG["ALLOCA"] = ""
  CONFIG["DLDFLAGS"] = ""
  CONFIG["ARCH_FLAG"] = ""
  CONFIG["STATIC"] = ""
  CONFIG["CCDLFLAGS"] = " -fPIC"
  CONFIG["LDSHARED"] = "$(CC) -shared"
  CONFIG["LDSHAREDXX"] = "$(CXX) -shared"
  CONFIG["DLEXT"] = "so"
  CONFIG["DLEXT2"] = ""
  CONFIG["LIBEXT"] = "a"
  CONFIG["LINK_SO"] = ""
  CONFIG["LIBPATHFLAG"] = " -L%1$-s"
  CONFIG["RPATHFLAG"] = " -Wl,-R%1$-s"
  CONFIG["LIBPATHENV"] = "LD_LIBRARY_PATH"
  CONFIG["TRY_LINK"] = ""
  CONFIG["STRIP"] = "strip -S -x"
  CONFIG["EXTSTATIC"] = ""
  CONFIG["setup"] = "Setup"
  CONFIG["PREP"] = "miniruby$(EXEEXT)"
  CONFIG["EXTOUT"] = ".ext"
  CONFIG["ARCHFILE"] = ""
  CONFIG["RDOCTARGET"] = "install-doc"
  CONFIG["cppflags"] = ""
  CONFIG["cflags"] = "$(optflags) $(debugflags) $(warnflags)"
  CONFIG["optflags"] = "-O2"
  CONFIG["debugflags"] = "-g"
  CONFIG["warnflags"] = "-Wall -Wno-parentheses"
  CONFIG["LIBRUBY_LDSHARED"] = "$(CC) -shared"
  CONFIG["LIBRUBY_DLDFLAGS"] = ""
  CONFIG["rubyw_install_name"] = ""
  CONFIG["RUBYW_INSTALL_NAME"] = ""
  CONFIG["LIBRUBY_A"] = "lib$(RUBY_SO_NAME)-static.a"
  CONFIG["LIBRUBY_SO"] = "lib$(RUBY_SO_NAME).so.$(MAJOR).$(MINOR).$(TEENY)"
  CONFIG["LIBRUBY_ALIASES"] = "lib$(RUBY_SO_NAME).so"
  CONFIG["LIBRUBY"] = "$(LIBRUBY_A)"
  CONFIG["LIBRUBYARG"] = "$(LIBRUBYARG_STATIC)"
  CONFIG["LIBRUBYARG_STATIC"] = "-Wl,-R -Wl,$(libdir) -L$(libdir) -l$(RUBY_SO_NAME)-static"
  CONFIG["LIBRUBYARG_SHARED"] = "-Wl,-R -Wl,$(libdir) -L$(libdir) -l$(RUBY_SO_NAME)"
  CONFIG["SOLIBS"] = ""
  CONFIG["DLDLIBS"] = " -lc"
  CONFIG["ENABLE_SHARED"] = "no"
  CONFIG["MAINLIBS"] = ""
  CONFIG["COMMON_LIBS"] = ""
  CONFIG["COMMON_MACROS"] = ""
  CONFIG["COMMON_HEADERS"] = ""
  CONFIG["EXPORT_PREFIX"] = ""
  CONFIG["THREAD_MODEL"] = "pthread"
  CONFIG["MAKEFILES"] = "Makefile"
  CONFIG["arch"] = "i686-linux"
  CONFIG["sitearch"] = "i686-linux"
  CONFIG["ruby_version"] = "1.9.1"
  CONFIG["sitedir"] = "$(libdir)/$(RUBY_INSTALL_NAME)/site_ruby"
  CONFIG["vendordir"] = "$(libdir)/$(RUBY_INSTALL_NAME)/vendor_ruby"
  CONFIG["configure_args"] = ""
  CONFIG["rubyhdrdir"] = "$(includedir)/$(RUBY_INSTALL_NAME)-$(ruby_version)"
  CONFIG["sitehdrdir"] = "$(rubyhdrdir)/site_ruby"
  CONFIG["vendorhdrdir"] = "$(rubyhdrdir)/vendor_ruby"
  CONFIG["NROFF"] = "/usr/bin/nroff"
  CONFIG["MANTYPE"] = "doc"
  CONFIG["BUILTIN_TRANSSRCS"] = " newline.c"
  CONFIG["rubylibdir"] = "$(libdir)/$(ruby_install_name)/$(ruby_version)"
  CONFIG["archdir"] = "$(rubylibdir)/$(arch)"
  CONFIG["sitelibdir"] = "$(sitedir)/$(ruby_version)"
  CONFIG["sitearchdir"] = "$(sitelibdir)/$(sitearch)"
  CONFIG["vendorlibdir"] = "$(vendordir)/$(ruby_version)"
  CONFIG["vendorarchdir"] = "$(vendorlibdir)/$(sitearch)"
  CONFIG["topdir"] = File.dirname(__FILE__)
  MAKEFILE_CONFIG = {}
  CONFIG.each{|k,v| MAKEFILE_CONFIG[k] = v.dup}
  def RbConfig::expand(val, config = CONFIG)
    val.gsub!(/\$\$|\$\(([^()]+)\)|\$\{([^{}]+)\}/) do
      var = $&
      if !(v = $1 || $2)
	'$'
      elsif key = config[v = v[/\A[^:]+(?=(?::(.*?)=(.*))?\z)/]]
	pat, sub = $1, $2
	config[v] = false
	RbConfig::expand(key, config)
	config[v] = key
	key = key.gsub(/#{Regexp.quote(pat)}(?=\s|\z)/n) {sub} if pat
	key
      else
	var
      end
    end
    val
  end
  CONFIG.each_value do |val|
    RbConfig::expand(val)
  end
end
Config = RbConfig # compatibility for ruby-1.8.4 and older.
CROSS_COMPILING = nil unless defined? CROSS_COMPILING
