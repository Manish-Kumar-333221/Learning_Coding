def display(num):
    try:
        print(int(num))
    except:
        raise ValueError("Value Error Occurred.")

display('df364')