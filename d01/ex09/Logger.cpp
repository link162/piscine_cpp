/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:04:56 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 17:54:18 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

std::string Logger::makeLogEntry(std::string str)
{
	time_t now = time(0);
	tm *curr = localtime(&now);
	std::ostringstream ss;
   	ss	<< "[" << std::setfill('0') << std::setw(4) << (1900 + curr->tm_year) << std::setfill('0') << std::setw(2) <<  (1 + curr->tm_mon) << std::setfill('0') << std::setw(2) <<  curr->tm_mday << "_" << std::setfill('0') << std::setw(2) <<  (1 + curr->tm_hour) << std::setfill('0') << std::setw(2) <<  curr->tm_min << std::setfill('0') << std::setw(2) <<  curr->tm_sec << "] ";
	return ss.str() + str;
}

Logger::Logger(std::string str) : filename(str) {}

void Logger::logToConsole(std::string str)
{
	std::cout << makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string str)
{
	std::ofstream file(this->filename, std::ios::app);
	if (file == 0)
	{
		std::cout << "Couldn't create file" << std::endl;
		return;
	}
	file << makeLogEntry(str) << std::endl;
	file.close();
}

void Logger::log(std::string const & dest, std::string const & message)
{
	std::string actions[2] = {"console", "file"};
	void (Logger::*act_ptr[2])(std::string) = {&Logger::logToConsole, &Logger::logToFile}; 
	for (int i = 0; i < 2; i++)
	{
		if (actions[i] == dest)
			(this->*act_ptr[i])(message);
	}
}
