cpp_vspython.png: times_cpp.csv times_python.csv
	pythpn JuanQuijano_graficas.py
times_cpp.csv: gen_times.x
	./gen_times.x > times_cpp.csv

gen_times.x :
	c++ JuanQuijano_generartiempos.cpp -o gentimes.x
times_python.csv:
	python JuanQuijano_generartiempos.py > times_python.csv
clean:
	rm times_cpp.csv gen_times.x times_python.csv
