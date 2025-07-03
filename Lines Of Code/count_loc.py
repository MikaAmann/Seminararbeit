import os
import json

def count_loc(filepath):
    with open(filepath, "r", encoding="utf-8", errors="ignore") as file:
        lines = file.readlines()
    code_lines = [
        line for line in lines
        if line.strip() != "" and not line.strip().startswith("//")
    ]
    return len(code_lines)

loc_dict = {}

for root, dirs, files in os.walk("."):
    for file in files:
        if file.lower().endswith(".c"):
            path = os.path.join(root, file)
            test_id = os.path.splitext(file)[0]  
            loc = count_loc(path)
            loc_dict[test_id] = loc
            print(f"{test_id:15} → {loc} LOC")

# LOC.json schreiben
with open("LOC.json", "w", encoding="utf-8") as out:
    json.dump(loc_dict, out, indent=2)

print("\n LOC.json wurde erstellt.")
