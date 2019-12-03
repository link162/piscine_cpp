/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:39:12 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/03 17:46:16 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int main(void)
{
	Logger info("inform");
	info.log("file", "pizdets");
	info.log("file", "vse propalo");
	info.log("console", "everything work fine");
	info.log("console", "hope I will get good mark");
}
