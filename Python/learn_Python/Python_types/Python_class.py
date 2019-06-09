class Foo:
    name_foo="hello from Foo"
    def foo(): pass
    def foo2():pass
class Bar(Foo):
    def __init__(self, name, age, major):
        self.name = name
        self.age = age
        self.major = major
    name_bar="hello from Bar"
    def bar(): pass

x_Foo=Foo()
print "List all attributes and methods of Foo class:"
print dir(Foo)
print x_Foo.name_foo
print "List Class that object x was created from:"
print x_Foo.__class__.__name__

x_Bar=Bar('John', 88, None)

print "List all attributes and methods of Bar class:"
print dir(Bar)
print "List all attributes and methods of Bar.__init__ class function:"
print dir(Bar.__init__)
print "List all attributes and methods of Bar.bar class function:"
#print dir(Bar.bar.__class__.__name__)
print x_Bar.name_bar
print x_Bar.age
print "List Class that object x was created from:"
print x_Bar.__class__.__name__
print "List __init__"
#print x_Bar.__init__
