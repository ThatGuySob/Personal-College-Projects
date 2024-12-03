def example_function(value):
    if value < 0:
        raise ValueError("Value must be a non-negative number.")
        return value * 2
# Example usage
    try:
        result = example_function(-5)
    except ValueError as e:
            print(f"Caught an exception: {e}")
    else:
        print("Function executed successfully.")