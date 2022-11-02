all: build install

clean:
	-rm -rf bin/*
	-rm -rf build/*

build:
	cmake -B build -S .
	make --directory=build

install:
	cmake --install build

.PHONY: all clean build install
