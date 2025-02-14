import os

num_of_files = int(input("Enter number of files : "))
folder_name = input("Enter the folder name : ")

if folder_name and not os.path.exists(folder_name):
    os.makedirs(folder_name)
    
if folder_name:
    try:
        os.chdir(folder_name) 
    except FileNotFoundError:
        print(f"Folder '{folder_name}' not found.")
        exit()


for i in range(num_of_files):
    try:
        with open(f"assignment_{i+1}.cpp", 'x'):
            print(f"Created assignment_{i+1}.cpp")
            
        with open(f"assignment_{i+1}.cpp", "w") as f:
            f.write("#include <iostream>\n")
            f.write("using namespace std;\n\n")
            f.write("int main() {\n")
            f.write("    // Your code here\n")
            f.write("    return 0;\n")
            f.write("}\n")
            
    except:
        print(f"assignment_{i+1}.cpp already exists")
    
    
    
input("Press Enter to exit")