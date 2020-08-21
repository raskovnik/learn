def positive_result(function):
    def wrapper(*args, **kwargs):
        result = function(*args, **kwargs)
        assert result >= 0, function.__name__ + "() result isn't >= 0"
        return result
    #ensure that the wrapper() function has the same name and docstring of the original funtion
    wrapper.__name__ = function.__name__
    wrapper.__doc__ = function.__doc__
    
    return wrapper

@positive_result
def discriminant(a, b, c):
    return(b ** 2) - (4 * a * c)

#a more cleaner version of the decorator
def positive_result1(function):
    @functools.wraps(function)#The decorator ensures that the wrapper() function has the same name and docstring of the original function
    def wrapper(*args, **kwargs):
        result = function(*args,  **kwargs)
        assert result >= 0, function.__name__ + "() result isn't >= 0"
        return result

    return wrapper

#Creating a decorator for percentages
def bounded(minimum, maximum):
    def decorator(function):
        @functools.wraps(function)
        def wrapper(*args, **kwargs):
            result = function(*args, **kwargs)
            if result < minimum:
                return minimum
            elif result > maximum:
                return maximum

            return result
        return wrapper
    return decorator


@bounded(0, 100)
def percent(amount, total):
    return (amount / total ) * 100

