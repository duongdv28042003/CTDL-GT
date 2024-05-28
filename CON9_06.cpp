#include <iostream>
#include <vector>
#include <stack>

// DFS do thi vo huong

void DFStil(std::vector<std::vector<int>>& ds, int u, std::vector<bool>& visited){
	// dinh u duoc tham -> danh dau la true
	visited[u] = true;
	std::cout << u << " ";
	// duyet tat ca cac dinh ke voi dinh u
	for(int v : ds[u]){
		// kiem tra xem dinh v da duoc tham hay chua
		if(!visited[v]){
			// thuc hien tham dinh v
			DFStil(ds, v, visited);
		}
	}
}

void DFS(std::vector<std::vector<int>>& ds, int V, int start){
	// ban dau cac dinh chua duoc tham -> danh dau la false
	std::vector<bool> visited(V, false);
	DFStil(ds, start, visited);
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int V, E, start;
		std::cin >> V >> E >> start;
		std::vector<std::vector<int>> ds(V + 1);
		// chuyen danh sach canh sang danh sach ke
		for(int i = 1; i <= E; i++){
			int u, v;
			std::cin >> u >> v;
			ds[u].push_back(v);
			ds[v].push_back(u);
		}
		// Duyet DFS tu dinh start
		DFS(ds, V, start);
		std::cout << std::endl;
	}
	return 0;
}
