/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 17:11:16 by natalierauh       #+#    #+#             */
/*   Updated: 2026/02/27 18:02:09 by natalierauh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// why is the virtual destructor needed?
// dynamic_cast only works on polymorphic dlasses
// -> a class becomes polymorphic when it has at least one virtual fn
class Base {
	public:
		virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
