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
  

  
## Commands in Terminal

- Show entries in the Address Resolution Protocol

		arp -a
		
- Try and ping to the ip assigned to something named similar to `enx5c857e353ef4`

		ssh ubuntu@10.153.0.1
		or
		ssh ubuntu@hostname.local (replace hostname)
		
  - (IP may be different in your case)
 
- Enter `yes` at the prompt

- Login for `Telecom` Raspberry Pi is `rpi_rover`


## Network Knowledge

- Internet sharing via PC to router WAN port.
  - Connect ethernet from WAN to PC.
  - In PC network settings, make WiFi adapter share to ethernet.

## Connect Pi to Wi-Fi
Note: Connecting to Student Wi-Fi does not work with this method.
- Find Pi WLAN network card name. For example "wlan0". Then edit the Net

		sudo ls /sys/class/net
- Edit the Netplan Config File

		sudo nano /etc/netplan/50-cloud-init.yaml
- Add "wifis" section to file and edit the Wi-Fi name and password.
		
```
# This file is generated from information provided by the datasource.  Changes
# to it will not persist across an instance reboot.  To disable cloud-init's
# network configuration capabilities, write a file
# /etc/cloud/cloud.cfg.d/99-disable-network-config.cfg with the following:
# network: {config: disabled}
network:
    ethernets:
        eth0:
            dhcp4: true
            optional: true
    wifis:
        wlan0:
            dhcp4: true
            access-points:
                "NETGEAR25":
                    password: "password123"
    version: 2
```








- Save and close file, then apply these commands to verify and apply the new Netplan

		sudo netplan --debug try
		sudo netplan --debug generate
		sudo netplan --debug apply
- Finally, reboot Pi

		sudo reboot
- https://arstech.net/raspberry-pi-4-ubuntu-wifi/
