#include <DdsTopics/SizeTopics.h>

namespace atech::common
{
	// DdsData

	size_t SizeTopics::MaxSizeDataCollectionInt = 0;
	size_t SizeTopics::MaxSizeDataCollectionFloat = 0;
	size_t SizeTopics::MaxSizeDataCollectionDouble = 0;
	size_t SizeTopics::MaxSizeDataCollectionChar = 0;
	size_t SizeTopics::MaxSizeDataChar = 0;

	void SizeTopics::SetMaxSizeDataCollectionFloat(size_t size) { MaxSizeDataCollectionFloat = size; };
	void SizeTopics::SetMaxSizeDataCollectionInt(size_t size) { MaxSizeDataCollectionInt = size; };
	void SizeTopics::SetMaxSizeDataCollectionDouble(size_t size) { MaxSizeDataCollectionDouble = size; };
	void SizeTopics::SetMaxSizeDataCollectionChar(size_t size) { MaxSizeDataCollectionChar = size; };
	void SizeTopics::SetMaxSizeDataChar(size_t size) { MaxSizeDataChar = size; };															  

	size_t SizeTopics::GetMaxSizeDataCollectionInt() { return MaxSizeDataCollectionInt; };
	size_t SizeTopics::GetMaxSizeDataCollectionFloat() { return MaxSizeDataCollectionFloat; };
	size_t SizeTopics::GetMaxSizeDataCollectionDouble() { return MaxSizeDataCollectionDouble; };
	size_t SizeTopics::GetMaxSizeDataCollectionChar() { return MaxSizeDataCollectionChar; };
	size_t SizeTopics::GetMaxSizeDataChar() { return MaxSizeDataChar; };

	// DdsDataEx

	size_t SizeTopics::MaxSizeDdsDataExVectorInt = 0;
	size_t SizeTopics::MaxSizeDdsDataExVectorFloat = 0;
	size_t SizeTopics::MaxSizeDdsDataExVectorDouble = 0;
	size_t SizeTopics::MaxSizeDdsDataExVectorChar = 0;
	size_t SizeTopics::MaxSizeDataExCharVectorChar = 0;

	void SizeTopics::SetMaxSizeDdsDataExVectorInt(size_t size) { MaxSizeDdsDataExVectorInt = size; };
	void SizeTopics::SetMaxSizeDdsDataExVectorFloat(size_t size) { MaxSizeDdsDataExVectorFloat = size; };
	void SizeTopics::SetMaxSizeDdsDataExVectorDouble(size_t size) { MaxSizeDdsDataExVectorDouble = size; };
	void SizeTopics::SetMaxSizeDdsDataExVectorChar(size_t size) { MaxSizeDdsDataExVectorChar = size; };
	void SizeTopics::SetMaxSizeDataExVectorChar(size_t size) { MaxSizeDataExCharVectorChar = size; };

	size_t SizeTopics::GetMaxSizeDdsDataExVectorInt() { return MaxSizeDdsDataExVectorInt; };
	size_t SizeTopics::GetMaxSizeDdsDataExVectorFloat() { return MaxSizeDdsDataExVectorFloat; };
	size_t SizeTopics::GetMaxSizeDdsDataExVectorDouble() { return MaxSizeDdsDataExVectorDouble; };
	size_t SizeTopics::GetMaxSizeDdsDataExVectorChar() { return MaxSizeDdsDataExVectorChar; };
	size_t SizeTopics::GetMaxSizeDataExVectorChar() { return MaxSizeDataExCharVectorChar; };

	//DdsAlarm

	size_t SizeTopics::MaxSizeDdsAlarmVectorAlarms = 0;
	void SizeTopics::SetMaxSizeDdsAlarmVectorAlarms(size_t size) { MaxSizeDdsAlarmVectorAlarms = size; };
	size_t SizeTopics::GetMaxSizeDdsAlarmVectorAlarms() { return MaxSizeDdsAlarmVectorAlarms; };

	// DdsAlarm

	size_t SizeTopics::MaxSizeDdsAlarmExVectorAlarms = 0;
	void SizeTopics::SetMaxSizeDdsAlarmExVectorAlarms(size_t size) { MaxSizeDdsAlarmExVectorAlarms = size; };
	size_t SizeTopics::GetMaxSizeDdsAlarmExVectorAlarms() { return MaxSizeDdsAlarmExVectorAlarms; };


	// DdsConfig
	size_t SizeTopics::MaxSizeDdsConfig = 0;
	void SizeTopics::SetMaxSizeDdsConfig(size_t size) { MaxSizeDdsConfig = size; }
	size_t SizeTopics::GetMaxSizeDdsConfig() { return MaxSizeDdsConfig; };

}
