/**************************************************************************/
/*!
  @file     Adafruit_CC3000.cpp
  @author   Ranthor (Paul Schulze)
    @license  BSD (see license.txt)

    This is a library for the Adafruit CC3000 WiFi breakout board
    This library works with the Adafruit CC3000 breakout
    ----> https://www.adafruit.com/products/1469

    Check out the links above for our tutorials and wiring diagrams
    These chips use SPI to communicate.

    Adafruit invests time and resources providing this open source code,
    please support Adafruit and open-source hardware by purchasing
    products from Adafruit!

    @section  HISTORY

    v1.0    - Initial release
*/
/**************************************************************************/
#ifndef __CC3000_MESSAGES_H__
#define __CC3000_MESSAGES_H__

#include "utility/cc3000_common.h"

// Message base defines
#ifdef CC3000_MESSAGES_VERBOSE
    #define CC3000_MESSAGE(normal, verbose) (verbose)
#else
    #define CC3000_MESSAGE(normal, verbose) (normal)
#endif

// Messages
//#define CC3000_MSG_XXX  CC3000_MESSAGE("XXX", "XXX")
#define CC3000_MSG_SCAN_STARTED     CC3000_MESSAGE("s", "Started AP/SSID scan\n")
#define CC3000_MSG_CONNECTING       CC3000_MESSAGE(">", "\nConnecting to ")
#define CC3000_MSG_WAITING_CONNECT  CC3000_MESSAGE(".", "Waiting to connect...")
#define CC3000_MSG_CONNECT_TO       CC3000_MESSAGE(">", "\nConnect to ")

// Errors
#define CC3000_MSG_IRQ_NOT_INT_PIN          CC3000_MESSAGE("1", "IRQ pin is not an INT pin!")
#define CC3000_MSG_FAIL_SET_EVNT_MASK_2     CC3000_MESSAGE("2", "WLAN Set Event Mask FAIL")
#define CC3000_MSG_TIMEOUT_SMART_CFG        CC3000_MESSAGE("3", "Timed out using SmartConfig data")
#define CC3000_MSG_FAIL_PROFILES_CONN       CC3000_MESSAGE("4", "deleteProfiles connection failure")
#define CC3000_MSG_FAIL_DEL_PROFILES_5      CC3000_MESSAGE("5", "Failed deleting profiles")
#define CC3000_MSG_FAIL_READ_MAC_ADDR       CC3000_MESSAGE("6", "Failed reading MAC address!")
#define CC3000_MSG_FAIL_SET_MAC_ADDR        CC3000_MESSAGE("7", "Failed setting MAC address!")
#define CC3000_MSG_FAIL_READ_FW_VER         CC3000_MESSAGE("8", "Unable to read the firmware version")
#define CC3000_MSG_FAIL_SSID_SCAN           CC3000_MESSAGE("9", "SSID scan failed!")
#define CC3000_MSG_ERR_SSID_SCAN_RESULT     CC3000_MESSAGE("a", "Problem with the SSID scan results")
#define CC3000_MSG_FAIL_SET_CONN_POLICY_11  CC3000_MESSAGE("b", "Failed setting the connection policy")
#define CC3000_MSG_FAIL_DISCONNECT_AP       CC3000_MESSAGE("c", "Failed to disconnect from AP")
#define CC3000_MSG_FAIL_DEL_PROFILES_13     CC3000_MESSAGE("d", "Failed deleting profiles")
#define CC3000_MSG_FAIL_NEW_NVMEM_ENTRY     CC3000_MESSAGE("e", "Failed create NVMEM entry")
#define CC3000_MSG_FAIL_WRITE_AES_KEY       CC3000_MESSAGE("f", "Failed writing AES key")
#define CC3000_MSG_FAIL_SMART_CFG_PREFIX    CC3000_MESSAGE("g", "Failed setting the SmartConfig prefix")
#define CC3000_MSG_FAIL_START_SMART_CFG     CC3000_MESSAGE("h", "Failed starting smart config")
#define CC3000_MSG_FAIL_SMART_CFG_PROC      CC3000_MESSAGE("i", "wlan_smart_config_process failed")
#define CC3000_MSG_FAIL_SET_CONN_POLICY_19  CC3000_MESSAGE("j", "Failed setting connection policy")
#define CC3000_MSG_FAIL_SET_EVNT_MASK_20    CC3000_MESSAGE("k", "Failed setting event mask")
#define CC3000_MSG_TIMEOUT_CONNECT          CC3000_MESSAGE("l", "Timed out waiting to connect")
#define CC3000_MSG_FAIL_SET_CONN_POLICY_22  CC3000_MESSAGE("m", "Failed to set connection policy")
#define CC3000_MSG_FAIL_CONNECT_SSID_23     CC3000_MESSAGE("n", "SSID connection failed")
#define CC3000_MSG_FAIL_SET_SECURITY_MODE   CC3000_MESSAGE("o", "Security mode must be between 0 and 3")
#define CC3000_MSG_ERR_SSID_LENGTH          CC3000_MESSAGE("p", "SSID length must be < " )
#define CC3000_MSG_ERR_KEY_LENGTH           CC3000_MESSAGE("q", "Key length must be < ")
#define CC3000_MSG_FAIL_SET_CONN_POLICY_27  CC3000_MESSAGE("r", "Failed setting the connection policy")
#define CC3000_MSG_FAIL_CONNECT_SSID_28     CC3000_MESSAGE("s", "SSID connection failed")
#define CC3000_MSG_FAIL_CONNECT_OPEN        CC3000_MESSAGE("t", "connectOpen failed!")
#define CC3000_MSG_FAIL_CONNECT_SECURE      CC3000_MESSAGE("u", "connectSecure failed!")
#define CC3000_MSG_TIMEOUT                  CC3000_MESSAGE("v", "Timed out!")
#define CC3000_MSG_FAIL_OPEN_SOCKET_TCP     CC3000_MESSAGE("w", "Failed to open TCP socket")
#define CC3000_MSG_ERR_CONN_TCP             CC3000_MESSAGE("x", "TCP connection error")
#define CC3000_MSG_FAIL_OPEN_SOCKET_UDP     CC3000_MESSAGE("y", "Failed to open UDP socket")
#define CC3000_MSG_ERR_CONN_UDP             CC3000_MESSAGE("z", "UDP connection error")
#define CC3000_MSG_ERR_SET_CLIENT_TIMEOUT   CC3000_MESSAGE("A", "Error setting inactivity timeout!")
#define CC3000_MSG_FAIL_CREATE_LISTEN_SOCK  CC3000_MESSAGE("B", "Couldn't create listening socket!")
#define CC3000_MSG_FAIL_SET_SOCKET_NOBLOCK  CC3000_MESSAGE("C", "Couldn't set socket as non-blocking!")
#define CC3000_MSG_FAIL_SOCKET_BIND_ADDR    CC3000_MESSAGE("D", "Error binding listen socket to address!")
#define CC3000_MSG_ERR_OPEN_SOCKET_LISTEN   CC3000_MESSAGE("E", "Error opening socket for listening!")
#define CC3000_MSG_FAIL_SSID_PARAMS         CC3000_MESSAGE("F", "Failed setting params for SSID scan")

#endif
