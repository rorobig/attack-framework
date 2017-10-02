#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <chrono>
#include <algorithm>
#include <tins/tins.h>
#include <bitset>
#include <type_traits>

typedef unsigned short u16;
typedef unsigned long u32;

using namespace Tins;

void split_str(const std::string& s, char delim,std::vector<std::string>& v);
std::string getIPv4Class(std::string ipAddress);
int getClosestIndex(std::vector<std::chrono::microseconds> v, std::chrono::microseconds refElem);
void snifferIteratorIncrement(Tins::SnifferIterator& iterator);
void convertIPv4toArray(std::string IP, unsigned short IP_bytes[]);
u16 tcp_sum_calc(u16 len_tcp, u16 src_addr[],u16 dest_addr[], bool padding, u16 buff[]);
bool check_tcpChecksum(std::string ipAddressSender, std::string ipAddressReceiver, TCP tcpPkt);

template<class T>
std::string integral_to_binary_string(T byte);

#endif //UTILITIES_H