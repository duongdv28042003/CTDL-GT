#include <iostream>
#include <vector>
#include <queue>

// BFS do thi co huong

void BFS(std::vector<std::vector<int>>& ds, int V, int start){
	// Ban dau chua dinh nao duoc tham -> danh dau la false
	std::vector<bool> visited(V + 1, false);
	std::queue<int> q;
	// Tham dinh start
	q.push(start);
	visited[start] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		std::cout << u << " ";
		// duyet tat ca cac dinh ke voi dinh u
		for(int v : ds[u]){
			if(!visited[v]){
				q.push(v);
				visited[v] = true;
			}
		}
	}
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
		}
		// Duyet BFS tu dinh start
		BFS(ds, V, start);
		std::cout << std::endl;
	}
	return 0;
}
