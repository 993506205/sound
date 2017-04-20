typedef struct {
	unsigned char MAC[6];
	int channel;
	double frequency;
	char essid[100];
	double slevel;
}WIFI_INFO;

#define CMD "sudo iwlist wlan0 scan | egrep \"Address|Frequency|ESSID|Quality\"> scan.txt"

void read_data(void);
