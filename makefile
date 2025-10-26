compile: main.cpp 
	 gcc  main.cpp -o sort

run: sort
	 ./sort

clean: sort
	 rm sort
