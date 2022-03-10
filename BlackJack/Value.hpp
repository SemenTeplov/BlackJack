#include <string>

#ifndef __VALUE__
#define __VALUE__

//--------------------------------------------------

class Value {
public:
	Value() {};
	virtual ~Value() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value;
	int _point;
};

//--------------------------------------------------

class Six : public Value {
public:
	Six() {};
	virtual ~Six() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Six";
	int _point = 6;
};

//--------------------------------------------------

class Seven : public Value {
public:
	Seven() {};
	virtual ~Seven() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Seven";
	int _point = 7;
};

//--------------------------------------------------

class Eight : public Value {
public:
	Eight() {};
	virtual ~Eight() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Eight";
	int _point = 8;
};

//--------------------------------------------------

class Nine : public Value {
public:
	Nine() {};
	virtual ~Nine() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Nine";
	int _point = 9;
};

//--------------------------------------------------

class Ten : public Value {
public:
	Ten() {};
	virtual ~Ten() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Ten";
	int _point = 10;
};

//--------------------------------------------------

class Jack : public Value {
public:
	Jack() {};
	virtual ~Jack() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Jack";
	int _point = 10;
};

//--------------------------------------------------

class Queen : public Value {
public:
	Queen() {};
	virtual ~Queen() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "Queen";
	int _point = 10;
};

//--------------------------------------------------

class King : public Value {
public:
	King() {};
	virtual ~King() {};

	std::string virtual getValue() const {
		return _value;
	};
	int point() const {
		return _point;
	};

private:
	std::string _value = "King";
	int _point = 10;
};

//--------------------------------------------------

#endif //__VALUE__
