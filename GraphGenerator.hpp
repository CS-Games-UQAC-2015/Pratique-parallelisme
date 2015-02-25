#include <cstdlib>

class GraphGenerator
{
	int **graphMatrix;
	int *nodesToVisit;

public:
	GraphGenerator(int nbNodes)
	{
		this->graphMatrix = new int*[nbNodes];
		for (int i = 0; i < nbNodes; i++)
		{
			this->graphMatrix[i] = new int[nbNodes];
			for (int j = 0; j < nbNodes; j++)
			{
				this->graphMatrix[i][j] = (rand() % 100) + 1;
			}
		}

		this->nodesToVisit = new int[nbNodes / 2];
		for (int i = 0; i < nbNodes; i++)
		{
			this->nodesToVisit[i] = i * 2;
		}
	}

	int** getGraphMatrix()
	{
		return graphMatrix;
	}

	int* getNodesToVisit()
	{
		return nodesToVisit;
	}
};
