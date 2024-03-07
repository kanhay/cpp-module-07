/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:58:10 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/03 20:01:22 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void  _print(T &d){
    std::cout << d << "\t";
}

template <typename T, typename U, typename V> 
void iter(T *array, unsigned int length, U (*fun)(V)){
    if(!array || !fun)
        throw("Error: NULL");
    for (unsigned int i = 0; i < length; i++)
        fun(array[i]);
}

#endif