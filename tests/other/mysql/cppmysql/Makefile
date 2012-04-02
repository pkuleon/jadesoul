BINPATH = .
BINNAME = msgdispatcher
TARGET =  $(BINPATH)/$(BINNAME)

SRCDIR = .

CC = g++

INCDIR = .

CFLAGS = -pipe -c -I$(INCDIR) -I/usr/local/include/mysql -I/usr/include/mysql -Wno-deprecated -L/usr/local/lib/mysql/ -L/usr/lib/mysql/ 

LFLAGS = -g -lmysqlclient -lm -lz -lpthread -Wall -DMAIN_TEST -L/usr/local/lib/mysql/ -L/usr/lib/mysql/ -L/usr/local/lib \
-I/usr/local/include/mysql

OBJS = cppmysql.cpp test.cpp

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(LFLAGS) 

$(SRCDIR)/%.cpp : $(INCDIR)/%.h

%.o : $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -o $@ $<
	
#rm -f *.o
clean:
	rm -f *.o $(TARGET)

