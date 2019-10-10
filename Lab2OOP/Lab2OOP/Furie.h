#pragma once
#include <vector>
#include <complex>

typedef std::complex<double> base;

class FurieTransfomation {
public:
	FurieTransfomation()=default;
	
	void multiply(const std::vector<int> & a, const std::vector<int> & b, std::vector<int> & res);
private:
	void fft(std::vector<base> & a, bool invert);
 };