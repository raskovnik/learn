import os
import sys

def get_function(module, function_name):
    function = get_function.cache.get((module, function_name), None)
    if function is None:
        try:
            function = getattr(module, function_name)
            if not hasattr(function, "__call__"):
                raise AttributeError()

            get_function.cache[module, function_name] = function

        except AttributeError:
            function = None
        
    return function
    get_function.cache = {}

def load_modules():
    modules = []
    for name in os.listdir(os.path.dirname(__file__) or "."):
        if name.endswith(".py") and "magic" in name.lower():
            filename = name
            name = os.path.splitext(name)[0]
            if name.isidentifier() and name not in sys.modules:
                fh = None
                try:
                    code = fh.read()
                    module = type(sys)(name)
                    sys.modules[name] = module
                    exec(code, module.__dict__)
                    modules.append(module)
                except (EnvironmentError, SyntaxError) as err:
                    sys.modules.pop(name, None)
                    print(err)
                finally:
                    if fh is not None:
                        fh.close()

    return modules
     


def main():
    modules = load_modules()
    get_file_type_functions = []
    for module in modules:
        get_file_type = get_function(module, "get_file_type")
        if get_file_type is not None:
            get_file_type_functions.append(get_file_type)

# for file in get_files(sys.argv[1:]):
#     fh = None
#     try:
#         fh = open(file, "rb")
#         magic = fh.read(1000)
#         for get_file_type in get_file_type_functions:
#             filetype = get_file_type(magic,
#             os.path.splitext(file)[1])
#     if filetype is not None:
#         print("{0:.<20}{1}".format(filetype, file))
#         break
#     else:
#     print("{0:.<20}{1}".format("Unknown", file))
#     except EnvironmentError as err:
#         print(err)
#     finally:
#         if fh is not None:
#             fh.close()

