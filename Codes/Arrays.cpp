area_codes = []  # Array to store area codes or names
population_densities = []  # Array to store corresponding population densities

def add_data(area_code, population_density):
    area_codes.append(area_code)
    population_densities.append(population_density)

def get_population_density(area_code):
    if area_code in area_codes:
        index = area_codes.index(area_code)  # Find index of the area code
        return population_densities[index]  # Retrieve population density
    else:
        return "Area code not found."

add_data("Area1", 1200)
add_data("Area2", 1500)
add_data("Area3", 800)

print("Population Density of Area1:", get_population_density("Area1"))  # Output: 1200
print("Population Density of Area2:", get_population_density("Area2"))  # Output: 1500
print("Population Density of UnknownArea:", get_population_density("UnknownArea"))  # Output: Area code not found.
