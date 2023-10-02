func = lambda a: a * 10

print(func(10))

func = lambda a, b: a * b

print(func(10, 20))

func = lambda a: print(a * 10)

func(10)

func = lambda a, b: print(a * b)

func(10, 20)

func = lambda: print(300)

func()

func = lambda: 5 < 10

print(func())

func = lambda: 5 > 10

print(func())