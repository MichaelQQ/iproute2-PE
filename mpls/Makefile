MPLSOBJ=mpls.o mpls_monitor.o

include ../Config

MPLSMODULES :=

MPLSLIB := 

LDFLAGS += -Wl,-export-dynamic -lm

all: mpls 

mpls: $(MPLSOBJ) $(LIBNETLINK) $(LIBUTIL) $(MPLSLIB) 

install: all
	install -m 0755 -s mpls $(DESTDIR)$(SBINDIR)

clean:
	rm -f $(MPLSOBJ) $(MPLSLIB) mpls
