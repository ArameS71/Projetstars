#
# Makefile.c++
#
# Instructions:
#
# 1. Edit Makefile using vi or emacs:
#    a. rename target, if desired
#    b. add list of source files at SRCS = ...
# 2. % touch Makefile.dep
# 3. % make depend
# 4. % make
#

TARGET = station
CC = g++
CFLAGS = -Wall -O -I . -g 

#Version materielle
INCLDIRS =
LIBDIRS = 

#dependance librairie libsmartcard_borne (voir git)
LIBS64 = 

SRCS = Carburant.cpp Afficheur.cpp Pompe.cpp Pompe3C.cpp Station.cpp

OBJS = ${SRCS:.cpp=.o} 

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLDIRS) -o $@ $(OBJS) $(LIBS64)

$(OBJS):
	$(CC) $(CFLAGS) $(INCLDIRS) -c $*.cpp

depend:
	$(CC) -MM $(SRCS) $(INCLDIRS) > Makefile.dep

clean:
	rm -f $(OBJS) core

veryclean: clean
	rm -f $(TARGET) a.out *.*~

include Makefile.dep

