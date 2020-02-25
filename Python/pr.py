plus = lambda x: lambda y: x+y

def filterc(f):
    def g(v):
        return filter(f, v)
    return g

def apply(v, fs):
    return v if fs == [] else apply(fs[0](v), fs[1:])


xs = [1, 2, 3, 4, 5]

y = apply(xs, [
    filterc(lambda y: y <= 3),
    lambda x: map(lambda y: y*y, x),
    sum,
    plus(5),
    print
])
