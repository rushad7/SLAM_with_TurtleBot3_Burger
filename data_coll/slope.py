import pandas as pd
import numpy as np

cpu_data = pd.read_csv(r"/home/rushad/Desktop/cpu_mem_frontier.csv", header=None)
cpu_load = cpu_data[0]
slope = (cpu_load[150] - cpu_load[100])/(150-100)
print("Slope for frontier exploration : " + str(slope))
