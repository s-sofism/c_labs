all: build_Main build_Test run_Test

build_Main:
	g++ -o number main.cpp -lm

build_Test:
	g++ -o number_test -Dmain=_main main.cpp test.cpp -lm

run_Test:
	./number_test
