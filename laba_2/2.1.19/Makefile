all: clean buildMain buildTest runTest

buildMain:
	mkdir -p project/main
	gcc -o project/main/bank main.c -lm

buildTest:
	mkdir -p project/testing
	gcc -o project/testing/testing -Dmain=_main main.c main_test.c -lm

runTest:
	./project/testing/testing
	
clean:
	rm -rf project
