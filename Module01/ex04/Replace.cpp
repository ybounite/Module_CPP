/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:47:16 by ybounite          #+#    #+#             */
/*   Updated: 2025/09/14 16:44:03 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( std::string Filename, std::string S1, std::string S2 )
	: _Filename( Filename ), _S1( S1 ) , _S2( S2 ) {}

Replace::~Replace( void )
{
}

std::string 	Replace::getFilename( void ) { return this->_Filename; }

bool	Replace::process( void )
{
	std::string	outFilename;
	std::fstream	inputFile;
	std::fstream	outputFile;
	std::string	line;


	inputFile.open(getFilename().c_str(), std::ios::in);
	if (!inputFile.is_open()){
		std::cerr << "Error: could not open file " << std::endl;
		return false;
	}
	outFilename = getFilename() + ".replace";
	outputFile.open(outFilename.c_str(), std::ios::out);
	if (!inputFile.is_open()){
		std::cerr << "Error: could not create output file " << outFilename << std::endl;
		inputFile.close();
		return false;
	}
	while (std::getline(inputFile, line))
	{
		line += "\n";
		size_t pos = 0;
		while ((pos = line.find(_S1, pos)) != std::string::npos)
		{
			line.erase(pos, _S1.length());
			line.insert(pos, _S2);
			pos += _S2.length();
		}
		outputFile << line;
	}
	outputFile.close();
	inputFile.close();
	return true;
}
