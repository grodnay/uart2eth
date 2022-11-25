//include "defines.h"
//
//#define ASYNC_UDP_TEENSY41_VERSION_MIN_TARGET      "AsyncUDP_Teensy41 v1.2.1"
//#define ASYNC_UDP_TEENSY41_VERSION_MIN             1002001
//
//#include <AsyncUDP_Teensy41.h>        // https://github.com/khoih-prog/AsyncUDP_Teensy41
//
//#define max_buffer_size=8000;
//
//class eth2uart
//{
//  AsyncUDP udp;
//  HWSerial &uart;
//  long unsigned int dropped=0;
//  packet_size=60;
//  max_latency=15;
//  const buffer_size=2*packet_size;
//  byte to_host_buffer[max_buffer_size], from_host_buffer[max_buffer_size];
//  unsigned long int oldest_byte_time=0;
//  private:
//     udp_cb{if uart.availableForWrite>=packet.size uart.write(packet.data) else dropped++;}
//     udp_send{if availbeForRead>=packt_size or timeout read serial and send udp}
//  public:
//    connect(const unsigned byte IP[4],unsigned int remote_port_,HWSerial &uart_,speed);
//    void update(void);
//    void init(void);
//    ~connect(void);
//}
//
