.PHONY: all
all: $(patsubst src/%.c,bin/%,$(wildcard src/*.c))

.PHONY: clean
clean:
	rm -rf bin/*

bin/%: src/%.c
	mkdir -p bin
	gcc -std=c11 -o $@ $^