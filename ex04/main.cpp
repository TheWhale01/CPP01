#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	int i;
	char c;

	if (ac != 4)
		return (0);
	std::string filename(av[1]);
	std::string search(av[2]);
	std::string replace(av[3]);
	std::string content;
	std::ifstream infile(filename.c_str());
	std::ofstream outfile((filename + ".replace").c_str());
	while (infile.get(c))
		content += c;
	infile.close();
	while ((i = content.find(search)) != -1)
	{
		content.erase(i, search.length());
		content.insert(i, replace);
	}
	outfile << content;
	outfile.close();
	return (0);
}