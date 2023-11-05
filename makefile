debug: init_debug
	cmake --build build

init_debug:
	@CC=clang cmake -Bbuild -S. -DCMAKE_BUILD_TYPE=Debug -DCDEBUG=ON

.PHONY: clean

clean:
	@rm -rf out .cache build


