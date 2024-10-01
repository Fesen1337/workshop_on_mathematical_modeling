#include <iostream>
#include <string>
#include <vector>

#include "inmost.h"

using namespace INMOST;

int main(int argc, char *argv[]) {
    if (argc < 2)  return 0;

    Mesh::Initialize(&argc, &argv);

    Mesh m;
    m.Load(argv[1]);
    double sum_res = 0.0;
    for (auto icell = m.BeginCell(); icell != m.EndCell(); icell++) {
      sum_res += icell->Volume();
    }
    std::cout << "\nres volume: " << sum_res << "\n";

    Mesh::Finalize();
    return 0;
}
