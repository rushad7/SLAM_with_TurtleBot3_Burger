import matplotlib.pyplot as plt
import pandas as pd

# 44 45 46 47 --> index
# 61 --> inc

# 51 52 53 54 --> index
# 68 --> inc

cpu_avg = []
inc = 0
with open(r"/home/rushad/Desktop/cpu_mem_karto.log", "r") as data_file:
	data = data_file.read()
	for i in range(0, data.count("user")):
		try:
			cpu_avg_elem = float(str(data[44+inc]) + str(data[45+inc]) + str(data[46+inc]) + str(data[47+inc]))*10
			with open(r"/home/rushad/Desktop/cpu_mem_karto.csv", "a") as data_csv:
				data_csv.write(str(cpu_avg_elem) + ",\n")
				data_csv.close()
			inc = inc + 61
		except IndexError:
			pass
	data_file.close()

cpu_load = pd.read_csv(r"/home/rushad/Desktop/cpu_mem_karto.csv", header=None)

def ret():
	return cpu_load

cpu_load.plot()
plt.show()
