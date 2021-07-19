import sys
import os
import glob

if sys.platform.startswith("win"):
    def get_files(names):
        for name in names:
            if os.path.isfile(name):
                yield name
                print(name)
            
            else:
                for file in glob.iglob(name):
                    if not os.path.isfile(file):
                        continue
                    yield file

else:
    def get_files(names):
        print(names)
        return (file for file in names if os.path.isfile(file))