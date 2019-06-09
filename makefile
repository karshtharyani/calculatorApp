simple: simpleGTK.cpp window.cpp
	g++ simpleGTK.cpp window.cpp -o $@ `pkg-config gtkmm-3.0 --cflags --libs`
clean: ; rm -f example.o opencv_example
