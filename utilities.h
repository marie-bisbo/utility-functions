#pragma once

#include <iostream>
#include <string>
#include <vector>

// Return array of elements of string in split by char c
std::vector<std::string> Split(const std::string& in, const char c)
{
	std::vector<std::string> elements;
	elements.reserve(in.length());

	int currentPosition = 0;
	int previousPosition = 0;
	while (currentPosition != in.length())
	{
		if (in[currentPosition] == c)
		{
			elements.push_back(in.substr(previousPosition, currentPosition - previousPosition));
			previousPosition = currentPosition + 1;
		}
		++currentPosition;
	}
	elements.push_back(in.substr(previousPosition, currentPosition - previousPosition));

	return elements;
}
