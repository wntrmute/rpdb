LIBS =		-lgflags
CXXFLAGS =	-Werror -Wall
CXX =		clang++


net: net.cc
	$(CXX) $(CXXFLAGS) -o $@ net.cc $(LIBS)

.PHONY: clean
clean:
	rm -f net
