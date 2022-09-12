# Connect Pi to WiFi Using a Computer Running Ubuntu & Ethernet
- Needs:
  
  - Pi
  
  - Ethernet / Adapter
  
  - WiFi Connection on a Computer Running Ubuntu

## Connect Computer to WiFi

- For `Student` WiFi at Saddleback Campus

  - Security: `WPA & WPA2 Enterprise`
  
  - Authentication: `Protected EAP (PEAP)`
  
  - :ballot_box_with_check: `No CA certificate is required`
  
  - PEAP version: `Automatic`
  
  - Inner authentication: `MSCHAPv2`
  
  - Username/Password: Your email/password

## Connect Pi and Computer to eachother via Internet

- In the settings for your ethernet connection (:gear:) go to `IPv4` tab

  - Change `IPv4 method` to `Shared to other computers`
  
## Network Knowledge

- Internet sharing via PC to router WAN port. (So far only successful on Windows)
  - Connect ethernet from WAN to PC.
  - In PC network settings, make WiFi adapter share to ethernet.
  - Connect to router with another device (WiFi or ethernet) to access routerlogin.net interface.
  - On router, go to Advanced > Setup > Internet Setup > point Default Gateway to ethernet adapter IP address of PC. > Apply
- Connect Pi to WiFi
  - https://arstech.net/raspberry-pi-4-ubuntu-wifi/
  
## Commands in Terminal

- Show entries in the Adresss Resolution Protocol

		arp -a
		
- Try and ping to the ip assigned to something named similar to `enx5c857e353ef4`

		ssh ubuntu@10.153.0.1 
		
  - (IP may be different in your case)
 
- Enter `yes` at the prompt

- Login for `Telecom` Raspberry Pi is `rpi_rover`
