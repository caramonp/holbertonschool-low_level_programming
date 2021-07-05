#!/usr/bin/python3
"""[funtion island_perimeter]
"""


def island_perimeter(grid):
	
		"""[funtions that returns the perimeter of the island]

		Args:
				grid ([integers]): [list of integers]
				
		Return: perimeter
		"""


		water_zone = 0
		land_zone = 1
		perimeter = 0

		for y, row in enumerate(grid):
				for x, column in enumerate(row):
						if column == land_zone:
								if x == 0 or grid[y][x - 1] == water_zone:
										perimeter += 1
								if (x + 1) == len(row) or grid[y][x + 1] == water_zone:
										perimeter += 1
								if y == 0 or grid[y - 1][x] == water_zone:
										perimeter += 1
								if (y + 1) == len(grid) or grid[y + 1][x] == water_zone:
										perimeter += 1

		return perimeter
