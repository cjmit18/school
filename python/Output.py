#Wayne Mitchell
#cis 135-W02
#Week 3 Homework 3
#A program to format and print out a data sheet of prices and reviews for a product
#Variable storing header formatting
fps_header = "{0:<8s}{1:<13s}{2:>10s}{3:>16s}"
#variable storing how to format the data given
fps = "{0:<8s}{1:<15s}{2:>10,.2f}{3:>16,d}"
# Print statments with a formatting function to list the data as a data sheet
print(fps_header.format("Brand", "Model", "Retail Price", "Online Reviews"))
print(fps.format("Casio",  "AP265", 869, 1295))
print(fps.format("Casio",  "PX765CB", 599, 984))
print(fps.format("Kawai",  "ES120", 949, 4134))
print(fps.format("Kawai",  "ES920", 1899, 659))
print(fps.format("Roland", "FP10", 399, 6225))
print(fps.format("Roland", "FRP Nuvola", 600, 11872))
print(fps.format("Roland", "RCP800", 1999, 873))
print(fps.format("Roland", "RP750", 1200, 907))
print(fps.format("Yamaha", "P125ABLB", 699, 1378))
print(fps.format("Yamaha", "P225", 649, 1064))
