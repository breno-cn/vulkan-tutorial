CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

vulkan-tutorial: *.cpp *.hpp
	g++ $(CFLAGS) -o vulkan-tutorial *.cpp $(LDFLAGS)

.PHONY: test clean

test: vulkan-tutorial
	./vulkan-tutorial

clean:
	rm -f vulkan-tutorial