/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:54:39 by mtrautne          #+#    #+#             */
/*   Updated: 2023/12/06 14:54:39 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array {
	private:
		T	*_elements;
	public:
		Array() {
			_elements = new T[0];
			std::cout << "Empty constructor" << std::endl;
		}
		Array(unsigned int n) {
			_elements = new T[n];
			std::cout << "unsigned int constructor" << std::endl;
		}
	};

#endif
