#pragma once
#include "NotificationBase.h"

class CNotificationLogitechMediaServer : public CNotificationBase {
public:
	CNotificationLogitechMediaServer();
	~CNotificationLogitechMediaServer() override = default;
	bool IsConfigured() override;

      protected:
	bool SendMessageImplementation(uint64_t Idx, const std::string &Name, const std::string &Subject, const std::string &Text, const std::string &ExtraData, int Priority, const std::string &Sound,
				       bool bFromNotification) override;

      private:
	std::string _PlayerMac;
	int _Duration;
};
