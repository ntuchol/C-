#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <filesystem> 

int main() {
    std::vector<std::string> paths = {
        "/home/user/documents/file2.txt",
        "/home/user/documents/file1.txt",
        "/home/user/images/photo.jpg",
        "/home/user/videos/movie.mp4"
    };

    std::sort(paths.begin(), paths.end(), [](const std::string& a, const std::string& b) {
        // Example: Sort by parent path first, then by filename
        std::filesystem::path path_a(a);
        std::filesystem::path path_b(b);

        if (path_a.parent_path() != path_b.parent_path()) {
            return path_a.parent_path() < path_b.parent_path();
        }
        return path_a.filename() < path_b.filename();
    });

    for (const auto& path : paths) {
        std::cout << path << std::endl;
    }

    return 0;
}
