#include <iterator>
#include <algorithm>

class notFoundException : public std::exception {
	const char *what() const throw() {
		return "element not found";
	}
};

template < typename T1, typename T2 >
typename T1::iterator easyfind(T1 &cont, T2 const &needle) {
typename T1::iterator const &found = std::find(cont.begin(), cont.end(), needle);
	if (found == cont.end())
		throw notFoundException();
	return (found);
}
