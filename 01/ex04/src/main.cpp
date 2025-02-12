/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 12:29:56 by frankgar          #+#    #+#             */
/*   Updated: 2025/02/11 12:55:52 by frankgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>

enum errors
{
	ERROR_INV_ARGS = 1,
	ERROR_EMPTY_WD,
	ERROR_EMPTY_FL,
	ERROR_OPEN_FL,
	ERROR_OUT_FL
};

bool	msg_error(const char *arg, short error)
{
	if (error == ERROR_INV_ARGS)
		std::cout << "Error: invalid arguments" << arg << std::endl;
	if (error == ERROR_EMPTY_WD)
		std::cout << "Error: invalid word: empty: " << arg << std::endl;
	if (error == ERROR_EMPTY_FL)
		std::cout << "Error: invalid file: empty: " << arg << std::endl;
	if (error == ERROR_OPEN_FL)
		std::cout << "Error: open file: " << arg << std::endl;
	if (error == ERROR_OUT_FL)
		std::cout << "Error: creating file: " << arg << std::endl;
	return (EXIT_FAILURE);
}

bool	parse_open(const char *name,  std::ios_base::openmode mode,
		std::fstream &fd)
{
	fd.open(name, mode);
	if (!fd.is_open())
		return ((mode == std::ios_base::in && msg_error(name, ERROR_OPEN_FL))
			|| (mode == std::ios_base::out && msg_error(name, ERROR_OUT_FL)));
	return (EXIT_SUCCESS);
}

std::string	replace_words(std::fstream &file, std::string search,
	std::string replace)
{
	std::string	line;
	std::string	out;
	std::size_t	pos;

	while (std::getline(file, line))
	{
		line += "\n";
		while (true)
		{
			pos = line.find(search);
			if (pos == std::string::npos || search == replace)
			{
				break ;
			}
			line.erase(pos, search.length());
			line.insert(pos, replace);
			pos += replace.length();
		}
		out += line;
	}
	return (out);
}

bool	replace_words_file(char *name, char *search, char *replace)
{
	std::fstream	in_file;
	std::fstream	out_file;
	std::string		file_name;
	
	if (parse_open(name, std::ios_base::in, in_file))
		return (EXIT_FAILURE);
	file_name = name;
	file_name += ".replace";
	if (parse_open(file_name.c_str(), std::ios_base::out, out_file))
	{
		in_file.close();
		return (EXIT_FAILURE);
	}
	out_file << replace_words(in_file, search, replace) << std::endl;
	in_file.close();
	out_file.close();
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (msg_error("", ERROR_INV_ARGS));
	if (!*argv[1] || !*argv[2] || !*argv[3])
		return ((!*argv[1] && msg_error("file", ERROR_EMPTY_FL))
			  || (!*argv[2] && msg_error("word", ERROR_EMPTY_WD))
			  || (!*argv[3] && msg_error("word", ERROR_EMPTY_WD)));
	replace_words_file(argv[1], argv[2], argv[3]);
	return (EXIT_SUCCESS);
}
