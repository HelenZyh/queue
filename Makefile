
queue:queue.cpp
	g++ -o $@ $^ -g
.PHONY:clean
clean:
	rm queue
