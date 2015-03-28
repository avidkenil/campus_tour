#include "graph_node.h"
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>

struct node2{			//this structure is used to return values
	int *parent;		//to the main form in the specific structure required
	int start;
	int end;
};

struct node{			//this is the graph node data stucture
	int wt[10];			//wt array contains the wight of the neighbours
	int num;			//num contains the number of neighbours
	int index[10];		//index is the index value of all the neighbours
};

struct node g_node[80];

graph_node::graph_node()
{
	g_node[0].num = 2;					//the constructor for the class contains all the data initialized at the start of the object
	g_node[0].wt[0] = 18;				//It defines properties of all the places on the map	
	g_node[0].wt[1] = 40;
	g_node[0].index[0] = 2;
	g_node[0].index[1] = 1;

	g_node[1].num = 2;
	g_node[1].wt[0] = 18;
	g_node[1].wt[1] = 83;
	g_node[1].index[0] = 2;
	g_node[1].index[1] = 0;

	g_node[2].num = 3;
	g_node[2].wt[0] = 18;
	g_node[2].wt[1] = 40;
	g_node[2].wt[2] = 83;
	g_node[2].index[0] = 3;
	g_node[2].index[1] = 1;
	g_node[2].index[2] = 0;

	g_node[3].num = 2;
	g_node[3].wt[0] = 18;
	g_node[3].wt[1] = 37;
	g_node[3].index[0] = 2;
	g_node[3].index[1] = 4;

	g_node[4].num = 2;
	g_node[4].wt[0] = 18;
	g_node[4].wt[1] = 48;
	g_node[4].index[0] = 3;
	g_node[4].index[1] = 5;

	g_node[5].num = 2;
	g_node[5].wt[0] = 10;
	g_node[5].wt[1] = 37;
	g_node[5].index[0] = 6;
	g_node[5].index[1] = 4;

	g_node[6].num = 3;
	g_node[6].wt[0] = 48;
	g_node[6].wt[1] = 71;
	g_node[6].wt[2] = 235;
	g_node[6].index[0] = 5;
	g_node[6].index[1] = 7;
	g_node[6].index[2] = 76;

	g_node[7].num = 3;
	g_node[7].wt[0] = 10;
	g_node[7].wt[1] = 77;
	g_node[7].wt[2] = 127;
	g_node[7].index[0] = 6;
	g_node[7].index[1] = 8;
	g_node[7].index[2] = 28;

	g_node[8].num = 3;
	g_node[8].wt[0] = 18;
	g_node[8].wt[1] = 71;
	g_node[8].wt[2] = 77;
	g_node[8].index[0] = 9;
	g_node[8].index[1] = 7;
	g_node[8].index[2] = 28;

	g_node[9].num = 3;
	g_node[9].wt[0] = 44;
	g_node[9].wt[1] = 61;
	g_node[9].wt[2] = 127;
	g_node[9].index[0] = 10;
	g_node[9].index[1] = 11;
	g_node[9].index[2] = 8;

	g_node[10].num = 1;
	g_node[10].wt[0] = 13;
	g_node[10].index[0] = 9;

	g_node[11].num = 2;
	g_node[11].wt[0] = 13;
	g_node[11].wt[1] = 15;
	g_node[11].index[0] = 9;
	g_node[11].index[1] = 12;

	g_node[12].num = 3;
	g_node[12].wt[0] = 10;
	g_node[12].wt[1] = 54;
	g_node[12].wt[2] = 61;
	g_node[12].index[0] = 16;
	g_node[12].index[1] = 13;
	g_node[12].index[2] = 11;

	g_node[13].num = 2;
	g_node[13].wt[0] = 18;
	g_node[13].wt[1] = 91;
	g_node[13].index[0] = 12;
	g_node[13].index[1] = 14;

	g_node[14].num = 2;
	g_node[14].wt[0] = 54;
	g_node[14].wt[1] = 57;
	g_node[14].index[0] = 13;
	g_node[14].index[1] = 15;

	g_node[15].num = 1;
	g_node[15].wt[0] = 91;
	g_node[15].index[0] = 14;

	g_node[16].num = 2;
	g_node[16].wt[0] = 15;
	g_node[16].wt[1] = 20;
	g_node[16].index[0] = 12;
	g_node[16].index[1] = 17;

	g_node[17].num = 2;
	g_node[17].wt[0] = 20;
	g_node[17].wt[1] = 20;
	g_node[17].index[0] = 16;
	g_node[17].index[1] = 18;

	g_node[18].num = 2;
	g_node[18].wt[0] = 20;
	g_node[18].wt[1] = 20;
	g_node[18].index[0] = 17;
	g_node[18].index[1] = 19;

	g_node[19].num = 3;
	g_node[19].wt[0] = 17;
	g_node[19].wt[1] = 20;
	g_node[19].wt[2] = 25;
	g_node[19].index[0] = 20;
	g_node[19].index[1] = 18;
	g_node[19].index[2] = 22;

	g_node[20].num = 2;
	g_node[20].wt[0] = 17;
	g_node[20].wt[1] = 20;
	g_node[20].index[0] = 19;
	g_node[20].index[1] = 21;

	g_node[21].num = 2;
	g_node[21].wt[0] = 20;
	g_node[21].wt[1] = 20;
	g_node[21].index[0] = 20;
	g_node[21].index[1] = 30;

	g_node[22].num = 3;
	g_node[22].wt[0] = 10;
	g_node[22].wt[1] = 20;
	g_node[22].wt[2] = 20;
	g_node[22].index[0] = 77;
	g_node[22].index[1] = 19;
	g_node[22].index[2] = 24;

	g_node[77].num = 3;
	g_node[77].wt[0] = 10;
	g_node[77].wt[1] = 20;
	g_node[77].wt[2] = 20;
	g_node[77].index[0] = 22;
	g_node[77].index[1] = 23;
	g_node[77].index[2] = 24;

	g_node[23].num = 3;
	g_node[23].wt[0] = 20;
	g_node[23].wt[1] = 20;
	g_node[23].wt[2] = 23;
	g_node[23].index[0] = 77;
	g_node[23].index[1] = 30;
	g_node[23].index[2] = 27;

	g_node[24].num = 3;
	g_node[24].wt[0] = 20;
	g_node[24].wt[1] = 20;
	g_node[24].wt[2] = 20;
	g_node[24].index[0] = 77;
	g_node[24].index[1] = 22;
	g_node[24].index[2] = 25;

	g_node[25].num = 2;
	g_node[25].wt[0] = 20;
	g_node[25].wt[1] = 23;
	g_node[25].index[0] = 24;
	g_node[25].index[1] = 26;

	g_node[26].num = 2;
	g_node[26].wt[0] = 10;
	g_node[26].wt[1] = 23;
	g_node[26].index[0] = 25;
	g_node[26].index[1] = 27;

	g_node[27].num = 3;
	g_node[27].wt[0] = 10;
	g_node[27].wt[1] = 20;
	g_node[27].wt[2] = 23;
	g_node[27].index[0] = 23;
	g_node[27].index[1] = 30;
	g_node[27].index[2] = 26;


	g_node[28].wt[0] = 20;
	g_node[28].wt[2] = 71;
	g_node[28].wt[3] = 127;
	g_node[28].wt[1] = 20;
	g_node[28].num = 4;

	g_node[28].index[0] = 31;
	g_node[28].index[2] = 7;
	g_node[28].index[3] = 8;
	g_node[28].index[1] = 29;


	g_node[29].wt[0] = 20;
	g_node[29].wt[1] = 77;
	g_node[29].wt[2] = 20;
	g_node[29].num = 3;
	g_node[29].index[0] = 30;
	g_node[29].index[1] = 28;
	g_node[29].index[2] = 31;


	g_node[30].wt[0] = 20;
	g_node[30].wt[1] = 20;
	g_node[30].wt[2] = 23;
	g_node[30].num = 3;
	g_node[30].index[0] = 23;
	g_node[30].index[1] = 29;
	g_node[30].index[2] = 27;


	g_node[31].wt[2] = 20;
	g_node[31].wt[0] = 20;
	g_node[31].wt[1] = 77;
	g_node[31].num = 3;
	g_node[31].index[0] = 32;
	g_node[31].index[1] = 28;
	g_node[31].index[2] = 29;


	g_node[32].wt[0] = 20;
	g_node[32].wt[1] = 20;
	g_node[32].num = 2;
	g_node[32].index[0] = 33;
	g_node[32].index[1] = 31;


	g_node[33].wt[0] = 20;
	g_node[33].wt[1] = 20;
	g_node[33].num = 2;
	g_node[33].index[0] = 34;
	g_node[33].index[1] = 32;


	g_node[34].wt[0] = 20;
	g_node[34].wt[1] = 20;
	g_node[34].num = 2;
	g_node[34].index[0] = 35;
	g_node[34].index[1] = 33;


	g_node[35].wt[0] = 10;
	g_node[35].wt[1] = 20;
	g_node[35].num = 2;
	g_node[35].index[0] = 36;
	g_node[35].index[1] = 34;


	g_node[36].wt[0] = 14;
	g_node[36].wt[1] = 14;
	g_node[36].wt[2] = 63;
	g_node[36].num = 3;
	g_node[36].index[0] = 38;
	g_node[36].index[1] = 35;
	g_node[36].index[2] = 37;


	g_node[37].wt[0] = 10;
	g_node[37].wt[1] = 45;
	g_node[37].wt[2] = 10;
	g_node[37].num = 3;
	g_node[37].index[0] = 36;
	g_node[37].index[1] = 54;
	g_node[37].index[2] = 78;

	g_node[38].wt[0] = 10;
	g_node[38].wt[1] = 14;
	g_node[38].num = 2;
	g_node[38].index[0] = 36;
	g_node[38].index[1] = 39;


	g_node[39].wt[0] = 14;
	g_node[39].wt[1] = 14;
	g_node[39].num = 2;
	g_node[39].index[0] = 38;
	g_node[39].index[1] = 40;


	g_node[40].wt[0] = 10;
	g_node[40].wt[1] = 14;
	g_node[40].num = 2;
	g_node[40].index[0] = 41;
	g_node[40].index[1] = 39;


	g_node[41].wt[0] = 14;
	g_node[41].wt[1] = 14;
	g_node[41].wt[2] = 28;
	g_node[41].num = 3;
	g_node[41].index[0] = 40;
	g_node[41].index[1] = 43;
	g_node[41].index[2] = 42;


	g_node[42].wt[0] = 10;
	g_node[42].num = 1;
	g_node[42].index[0] = 41;


	g_node[43].wt[0] = 10;
	g_node[43].wt[1] = 14;
	g_node[43].num = 2;
	g_node[43].index[0] = 41;
	g_node[43].index[1] = 44;


	g_node[44].wt[0] = 14;
	g_node[44].wt[1] = 14;
	g_node[44].num = 2;
	g_node[44].index[0] = 43;
	g_node[44].index[1] = 45;


	g_node[45].wt[0] = 10;
	g_node[45].wt[1] = 14;
	g_node[45].num = 2;
	g_node[45].index[0] = 46;
	g_node[45].index[1] = 44;


	g_node[46].wt[0] = 14;
	g_node[46].wt[1] = 14;
	g_node[46].wt[2] = 61;
	g_node[46].num = 3;
	g_node[46].index[0] = 69;
	g_node[46].index[1] = 45;
	g_node[46].index[2] = 47;


	g_node[47].wt[0] = 10;
	g_node[47].wt[1] = 30;
	g_node[47].wt[2] = 30;
	g_node[47].num = 3;
	g_node[47].index[0] = 46;
	g_node[47].index[1] = 48;
	g_node[47].index[2] = 49;


	g_node[48].wt[0] = 61;
	g_node[48].wt[1] = 61;
	g_node[48].num = 2;
	g_node[48].index[0] = 47;
	g_node[48].index[1] = 50;


	g_node[49].wt[0] = 61;
	g_node[49].wt[1] = 61;
	g_node[49].num = 2;
	g_node[49].index[0] = 47;
	g_node[49].index[1] = 50;


	g_node[50].wt[0] = 30;
	g_node[50].wt[1] = 30;
	g_node[50].wt[2] = 73;
	g_node[50].wt[3] = 102;
	g_node[50].num = 4;
	g_node[50].index[0] = 48;
	g_node[50].index[1] = 49;
	g_node[50].index[2] = 51;
	g_node[50].index[3] = 55;


	g_node[51].wt[0] = 28;
	g_node[51].wt[1] = 102;
	g_node[51].num = 2;
	g_node[51].index[0] = 52;
	g_node[51].index[1] = 55;


	g_node[52].wt[0] = 73;
	g_node[52].wt[1] = 28;
	g_node[52].num = 2;
	g_node[52].index[0] = 51;
	g_node[52].index[1] = 53;


	g_node[53].wt[0] = 28;
	g_node[53].wt[1] = 45;
	g_node[53].num = 2;
	g_node[53].index[0] = 52;
	g_node[53].index[1] = 54;


	g_node[54].wt[0] = 28;
	g_node[54].wt[1] = 63;
	g_node[54].wt[2] = 10;
	g_node[54].num = 3;
	g_node[54].index[0] = 53;
	g_node[54].index[1] = 37;
	g_node[54].index[2] = 78;

	g_node[55].wt[0] = 28;
	g_node[55].wt[1] = 61;
	g_node[55].num = 2;
	g_node[55].index[0] = 56;
	g_node[55].index[1] = 50;


	g_node[56].wt[0] = 10;
	g_node[56].wt[1] = 28;
	g_node[56].num = 2;
	g_node[56].index[0] = 57;
	g_node[56].index[1] = 55;

	g_node[57].num = 2;
	g_node[57].wt[1] = 18;
	g_node[57].wt[0] = 10;
	g_node[57].index[1] = 56;
	g_node[57].index[0] = 58;

	g_node[58].num = 2;
	g_node[58].wt[0] = 10;
	g_node[58].wt[1] = 41;
	g_node[58].index[0] = 57;
	g_node[58].index[1] = 59;

	g_node[59].num = 2;
	g_node[59].wt[0] = 10;
	g_node[59].wt[1] = 41;
	g_node[59].index[0] = 58;
	g_node[59].index[1] = 60;

	g_node[60].num = 2;
	g_node[60].wt[0] = 28;
	g_node[60].wt[1] = 41;
	g_node[60].index[0] = 61;
	g_node[60].index[1] = 59;

	g_node[61].num = 2;
	g_node[61].wt[0] = 13;
	g_node[61].wt[1] = 41;
	g_node[61].index[0] = 62;
	g_node[61].index[1] = 60;

	g_node[62].num = 3;
	g_node[62].wt[0] = 7;
	g_node[62].wt[1] = 26;
	g_node[62].wt[2] = 28;
	g_node[62].index[0] = 63;
	g_node[62].index[1] = 70;
	g_node[62].index[2] = 61;

	g_node[63].num = 2;
	g_node[63].wt[0] = 7;
	g_node[63].wt[1] = 13;
	g_node[63].index[0] = 64;
	g_node[63].index[1] = 62;

	g_node[64].num = 2;
	g_node[64].wt[0] = 7;
	g_node[64].wt[1] = 7;
	g_node[64].index[0] = 63;
	g_node[64].index[1] = 65;

	g_node[65].num = 3;
	g_node[65].wt[0] = 7;
	g_node[65].wt[1] = 7;
	g_node[65].wt[2] = 17;
	g_node[65].index[0] = 64;
	g_node[65].index[1] = 67;
	g_node[65].index[2] = 66;

	g_node[66].num = 1;
	g_node[66].wt[0] = 7;
	g_node[66].index[0] = 65;

	g_node[67].num = 2;
	g_node[67].wt[0] = 7;
	g_node[67].wt[1] = 7;
	g_node[67].index[0] = 65;
	g_node[67].index[1] = 68;

	g_node[68].num = 2;
	g_node[68].wt[0] = 7;
	g_node[68].wt[1] = 7;
	g_node[68].index[0] = 67;
	g_node[68].index[1] = 69;

	g_node[69].num = 2;
	g_node[69].wt[0] = 7;
	g_node[69].wt[1] = 7;
	g_node[69].index[0] = 46;
	g_node[69].index[1] = 68;

	g_node[70].num = 2;
	g_node[70].wt[0] = 13;
	g_node[70].wt[1] = 13;
	g_node[70].index[0] = 62;
	g_node[70].index[1] = 71;

	g_node[71].num = 2;
	g_node[71].wt[0] = 13;
	g_node[71].wt[1] = 26;
	g_node[71].index[0] = 72;
	g_node[71].index[1] = 70;

	g_node[72].num = 2;
	g_node[72].wt[0] = 13;
	g_node[72].wt[1] = 13;
	g_node[72].index[0] = 73;
	g_node[72].index[1] = 71;

	g_node[73].num = 2;
	g_node[73].wt[0] = 13;
	g_node[73].wt[1] = 36;
	g_node[73].index[0] = 72;
	g_node[73].index[1] = 74;

	g_node[74].num = 2;
	g_node[74].wt[0] = 13;
	g_node[74].wt[1] = 19;
	g_node[74].index[0] = 73;
	g_node[74].index[1] = 75;

	g_node[75].num = 2;
	g_node[75].wt[0] = 36;
	g_node[75].wt[1] = 235;
	g_node[75].index[0] = 74;
	g_node[75].index[1] = 76;

	g_node[76].num = 2;
	g_node[76].wt[0] = 10;
	g_node[76].wt[1] = 19;
	g_node[76].index[0] = 6;
	g_node[76].index[1] = 75;

	g_node[78].num = 2;
	g_node[78].wt[0] = 63;
	g_node[78].wt[1] = 45;
	g_node[78].index[0] = 37;
	g_node[78].index[1] = 54;
}

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(long long dist[], bool sptSet[])
{
	// Initialize min value
	int min = INT_MAX, min_index;

	for (int v = 0; v < 79; v++)
	{
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	}
	return min_index;
}


// Funtion that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
node2 graph_node::dijkstra(int start, int end)
{
	int V = 79, *parent;		  // The output array.  dist[i] will hold the shortest
	// distance from src to i
	long long dist[79];
	parent = (int *)malloc(80*sizeof(int));
	bool sptSet[79];		// sptSet[i] will true if vertex i is included in shortest
	// path tree or shortest distance from src to i is finalized

	// Initialize all distances as INFINITE and stpSet[] as false
	for (int i = 0; i < V; i++)
	{
		dist[i] = INT_MAX;
		sptSet[i] = false;
		*(parent+i) = 80;
	}
	// Distance of source vertex from itself is always 0
	dist[start] = 0;

	// Find shortest path for all vertices
	for (int count = 0; count < V - 1; count++)
	{
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		for (int i = 0; i < g_node[u].num; i++)
		{
			// Update dist[v]  there is an edge from u to v, 
			//and total weight of path from src to  v through u is
			// smaller than current value of dist[v]
			int alt = dist[u] + g_node[u].wt[i];
			if (alt < dist[g_node[u].index[i]] && sptSet[g_node[u].index[i]] == false)
			{
				dist[g_node[u].index[i]] = alt;
				parent[g_node[u].index[i]] = u;
			}
		}
	}

	//display shortest path
	
	//printpath(parent, start, end);
	struct node2 printpar;
	printpar.parent = parent;
	printpar.start = start;
	printpar.end = end;
	return printpar;
}