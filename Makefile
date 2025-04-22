CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

SRCDIR = src/problems
BINDIR = bin

.PHONY: all clean build

all:

$(BINDIR):
	mkdir -p $(BINDIR)

build: $(BINDIR)
	$(CXX) $(CXXFLAGS) $(SRCDIR)/$(filter-out $@,$(MAKECMDGOALS)).cpp -o $(BINDIR)/$(filter-out $@,$(MAKECMDGOALS))

clean:
	rm -rf $(BINDIR)

%:
	@:
