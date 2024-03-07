/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:30:08 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/03 19:44:51 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array{
    private:
        unsigned int len;
        T *ptr;
    public:
        Array():len(0), ptr(NULL){
        };
        Array(unsigned int n):len(n){
            if (len > 0)
            {
                ptr = new T[len];
                for (unsigned int i = 0; i < len; i++)
                    ptr[i] = T();
            }
            else
                ptr = NULL;
        }
        
        Array(const Array& ob){
            ptr = NULL;
            *this = ob;
        }

        Array& operator=(const Array& ob){
            if (this != &ob){
                len = ob.len;
                if (ptr)
                    delete [] ptr;
                if (len > 0){
                    ptr = new T[len];
                    for (unsigned int i = 0; i < len; i++)
                        ptr[i] = ob.ptr[i];
                }
            }
            return *this;
        }
        
        ~Array(){
            if (ptr){
                delete [] ptr;
                ptr = NULL;
            }
        }
        
        unsigned int size() const{
            return (len);
        }
        
        T& operator[](unsigned int idx){
            if (idx >= len)
                throw std::out_of_range("Invalid index: out of range!");
            return (ptr[idx]);
        }
        
        const T& operator[](unsigned int idx) const{
            if (idx >= len)
                throw std::out_of_range("Invalid index: out of range!");
            return (ptr[idx]);
        }
};

#endif