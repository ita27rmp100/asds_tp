import os
for i in range(0,5) :
    os.system(f"mkdir serie0{i}")
    for j in range(1,5) :
        open(f"exo{j}",mode="x")
        