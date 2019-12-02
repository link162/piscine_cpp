/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybuhai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:54:33 by ybuhai            #+#    #+#             */
/*   Updated: 2019/12/02 11:06:00 by ybuhai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <functional>
#include "Account.class.hpp"

static int Account::getNBAccounts()
{
	return _nbAccounts;
}

static int Account::getTotalAmount()
{
	return _totalAmount;
}

static int Account::getNBDeposits()
{
	return _totalNBDeposits;
}

static int Account::getNBWithdrawals()
{
	return _totalNBWithdrawals;
}

