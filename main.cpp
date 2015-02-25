#include <iostream>
#include <iomanip>
#include "GraphGenerator.hpp"

void printMatrix(int **matrix, int length)
{
    /**
        Helper function to print a matrix (2d array)
    */
    std::cout << "    ";
    for(int i = 0; i < length; i++)
    {
        std::cout << std::setiosflags(std::ios::left) << std::setw(4) << i;
    }
    std::cout << std::endl;
    for(int i = 0; i < length + 1; i++)
    {
        std::cout << std::setiosflags(std::ios::left) << std::setw(4) << "----";
    }
    std::cout << std::endl;
    for (int i = 0; i < length; i++)
	{
        std::cout << std::setiosflags(std::ios::left) << std::setw(3) << i << "|";
		for (int j = 0; j < length; j++)
		{
			std::cout << std::setiosflags(std::ios::left) << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}
}

void printArray(int *array, int length)
{
    /**
        Helper function to print an array
    */
    for (int i = 0; i < length; i++)
	{
        std::cout << std::setiosflags(std::ios::left) << std::setw(4) << array[i];
	}
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
	const int nbNodes = 20;
    //Create a new generator, which build a square matrix with the length passed in parameter
	GraphGenerator generator(nbNodes);
	int **graphMatrix = generator.getGraphMatrix();
	int *nodesToVisit = generator.getNodesToVisit(); //A list of nodes to visit

    std::cout << "graphMatrix:" << std::endl;
	printMatrix(graphMatrix, nbNodes);
    
    std::cout << "nodesToVisit:" << std::endl;
    printArray(nodesToVisit, nbNodes);
	return 0;

}
