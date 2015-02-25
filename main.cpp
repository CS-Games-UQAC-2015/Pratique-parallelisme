#include <iostream>
#include "GraphGenerator.hpp"

int main(int argc, char **argv)
{
	const int nbNodes = 20;
	GraphGenerator generator(nbNodes);
	int **graphMatrix = generator.getGraphMatrix();
	int *nodesToVisit = generator.getNodesToVisit();

	for (int i = 0; i < nbNodes; i++)
	{
		for (int j = 0; j < nbNodes; j++)
		{
			std::cout << graphMatrix[i][j];
		}
		std::cout << std::endl;
	}
	return 0;

}
