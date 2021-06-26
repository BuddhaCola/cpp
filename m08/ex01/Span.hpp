#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
class Span
{
private:
	Span();
	std::vector<int>	_stored;
public:
	void	addNumber(int const &);
	int		shortestSpan();
	int		longestSpan();
	void	printsorted();
	Span (unsigned int size);
	Span &operator = (Span const &);
	Span(const Span &);
	~Span();
};

#endif // !SPAN_HPP