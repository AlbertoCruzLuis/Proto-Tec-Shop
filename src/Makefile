CXX = g++
 
OBJECTS = main.o\
		Accessory.o\
		Article.o\
		Device.o\
		InCart.o\
		Notebook.o\
		OperatingSystem.o\
		Phone.o\
		ShoppingCart.o
OUTPUT = ElectronicShoppingCart

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
		$(CXX) -o $@ $^

%.o: %.cpp
		$(CXX) -c $^ 

clean:
		rm -f $(OUTPUT) *.o