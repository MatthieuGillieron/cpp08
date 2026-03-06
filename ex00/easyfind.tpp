
template <typename T>
typename T::const_iterator easyfind(const T &container, int target)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), target);
	if (it == container.end())
	{
		throw std::runtime_error("Not Found !");
	}
	return it;	
}