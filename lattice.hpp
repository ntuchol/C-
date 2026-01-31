// Lattice.hpp
//
// Class respresenting a special kind of tree-like matrix that is
// needed in specific applications, for example binomial and trinomial 
// methods in options pricing.
//
// This structure can be used in other applications, such as computer graphics
// and interpolation schemes. And more generallly in Numerical Analysis.
//
// The matrix is 'expanding' in the form of a lattice; we must define a 
// function that states how many elements to create in moving from step 'n' 
// to step 'n+1'. The lattice is recombining or reconnecting as is usual in 
// some applications.
//
// This class is a basic data structure that can be used in other classes using
// composition or inheritance. It is a structural pattern and it works with lattice
// factories and behavioural patterns for adding functionality to the lattice, mostly 
// new functionality.
//
// (C) Datasim Component Technology 2001-2014
//

#ifndef Lattice_HPP
#define Lattice_HPP


#include <vector>


// The Node class contains the values of interest. 
// LatticeType == 2 for binomial,3 for trinomial.
template <class Node, int LatticeType> class Lattice
{ // Generic lattice class

private:

	// Implement as a full nested vector class
	std::vector<std::vector<Node> > tree;

	
	void InitTree(const Node& val);

public:
	// Constructors & destructor
	Lattice(std::size_t nRows = 2); 					// Number of rows 
	Lattice(std::size_t nRows, const Node& val);		// + value at nodes
	Lattice(const Lattice<Node,LatticeType>& source);	// Copy constructor
	virtual ~Lattice();									// Destructor

	// Iterating in a Lattice; we need forward and backward versions
	std::size_t MinIndex() const;							// Return the minimum row index
	std::size_t MaxIndex() const;							// Return the maximum row index
	std::size_t MinIndex(std::size_t r) const;				// Max row index for row r
	std::size_t MaxIndex(std::size_t r) const;				// Max row index for row r
	std::size_t Depth() const;								// The (depth) number of rows in the lattice
	std::size_t Height(std::size_t j) const;				// The number of columns for a given row value j

	// Operators
	Lattice<Node,LatticeType>& operator = (const Lattice<Node,LatticeType>& source);

	// Accessing the parts of the lattice
	std::vector<Node>& operator [] (std::size_t nLevel );				// Subscripting operator, I
	const std::vector<Node>& operator [] (std::size_t nLevel ) const;	// Subscripting operator, I

	// Base vector
	const std::vector<Node>& BaseVector() const;
	void ModifyBaseVector(const std::vector<Node>& newBase);

	Node& operator () (std::size_t nLevel, std::size_t height);			// Subscripting operator, II
	const Node& operator () (std::size_t nLevel, std::size_t height) const;	// Subscripting operator, II

	std::size_t NumberBaseNodes() const;								// Size of base of lattice								

};

#include "Lattice.cpp"

#endif	