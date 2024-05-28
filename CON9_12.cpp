#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

// BFS do thi vo huong

void findPathBFS(std::vector<std::vector<int>>& ds, int V, int s, int t){
	// Ban dau chua dinh nao duoc tham -> danh dau la false
	std::vector<bool> visited(V + 1, false);
	std::vector<int> parent(V + 1, -1);
	std::queue<int> q;
	// Tham dinh s
	q.push(s);
	visited[s] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		// duyet tat ca cac dinh ke voi dinh dang xet
		for(int v : ds[u]){
			if(!visited[v]){
				visited[v] = true;
				q.push(v);
				parent[v] = u;
			}
		}
	}
	std::vector<int> path;
	// truy van nguoc ve: tu t -> s
	for(int v = t; v != -1; v = parent[v]){
		path.push_back(v);
	}
	if(path.back() == s){
		std::reverse(path.begin(), path.end());
		for(int i : path){
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
	else std::cout << "-1" << std::endl;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int V, E, start, end;
		std::cin >> V >> E >> start >> end;
		std::vector<std::vector<int>> ds(V + 1);
		// chuyen danh sach canh sang danh sach ke
		for(int i = 1; i <= E; i++){
			int u, v;
			std::cin >> u >> v;
			ds[u].push_back(v);
			ds[v].push_back(u);
		}
		// Duyet BFS tu dinh start
		findPathBFS(ds, V, start, end);
	}
	return 0;
}
