import os
for i in range(0,6) :
    os.system(f"mkdir serie0{i}")
    for j in range(1,6) :
        open(f"./serie0{i}/exo{j}",mode="x")
