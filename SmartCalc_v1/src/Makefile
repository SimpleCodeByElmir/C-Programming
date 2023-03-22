CC=gcc
CFLAGS=-std=c11 -Wall -Werror -Wextra -g
SOURCES= ./exe/s21*.c
OBJECTS=$(SOURCES:.c=.o)
OS = $(shell uname)
UNIT_TESTS=./exe/unit_tests.c

ifeq ($(OS), Darwin)
	TEST_LIBS=-lcheck
else
	TEST_LIBS=-lcheck -lsubunit -pthread -lrt -lm
endif

all: gcov_report

install: build
	cd application; make

build:
	rm -rf application
	mkdir application
	cd application; cmake ../exe

uninstall:
	rm -rf application

dist: build
	tar --totals -cvf application.tar application

s21_smartcalc.a: clean $(OBJECTS)
	ar -rcs s21_smartcalc.a $(OBJECTS)
	rm -f *.o

test: $(UNIT_TESTS) s21_smartcalc.a
	$(CC) $(CFLAGS) $(UNIT_TESTS) $(SOURCES) -o test $(TEST_LIBS) -L. --coverage
	./test

gcov_report: test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

dvi:
	cp about/info.pdf .
	open about/info.pdf

clean:
	rm -rf ./exe/*.o *.o *.a *.so *.gcda *.gcno *.gch rep.info *.html *.css test report *.txt test.info test.dSYM

check: test
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config ./exe/*.c ./exe/*.h
	#cp ../style_test/.clang-format ./exe
	#clang-format -n ./exe/*.c ./exe/s21_smartcalc.h ./exe/main.cpp ./exe/mainwindow.cpp ./exe/mainwindow.h
	#rm -rf ./exe/.clang-format
ifeq ($(OS), Darwin)
	leaks --atExit -- test
else
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all -s --log-file=VALGRIND_RESULT.txt ./test #--verbose - to see more
endif

# install lcov:
# 	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
# 	brew install lcov
