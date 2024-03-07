/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:06:07 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/03 19:26:41 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T &x, T &y){
    return ((x < y) ? x : y);
}

template <typename T>
T max(T &x, T &y){
    return ((x > y) ? x : y);
}

#endif