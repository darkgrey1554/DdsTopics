#ifndef TOPIC_SIZE_HEADER 
#define TOPIC_SIZE_HEADER

#ifdef __linux__
    #include <cstddef>
#endif // __linux__


namespace atech::common
{
    class SizeTopics
    {
        // DdsData
        static size_t MaxSizeDataCollectionInt;
        static size_t MaxSizeDataCollectionFloat;
        static size_t MaxSizeDataCollectionDouble;
        static size_t MaxSizeDataCollectionChar;
        static size_t MaxSizeDataChar;

        // DdsDataEx
        static size_t MaxSizeDdsDataExVectorInt;
        static size_t MaxSizeDdsDataExVectorFloat;
        static size_t MaxSizeDdsDataExVectorDouble;
        static size_t MaxSizeDdsDataExVectorChar;
        static size_t MaxSizeDataExCharVectorChar;

        //DdsDataAlarm

        static size_t MaxSizeDdsAlarmVectorAlarms;
        
        // DdsAlarmEx
        
        static size_t MaxSizeDdsAlarmExVectorAlarms;

        // DdsConfig
           
        static size_t MaxSizeDdsConfig;

        
    public:

        // DdsData
        static void SetMaxSizeDataCollectionInt(size_t size);
        static void SetMaxSizeDataCollectionFloat(size_t size);
        static void SetMaxSizeDataCollectionDouble(size_t size);
        static void SetMaxSizeDataCollectionChar(size_t size);
        static void SetMaxSizeDataChar(size_t size);

        static size_t GetMaxSizeDataCollectionInt();
        static size_t GetMaxSizeDataCollectionFloat();
        static size_t GetMaxSizeDataCollectionDouble();
        static size_t GetMaxSizeDataCollectionChar();
        static size_t GetMaxSizeDataChar();

        // DdsDataEx

        static void SetMaxSizeDdsDataExVectorInt(size_t size);
        static void SetMaxSizeDdsDataExVectorFloat(size_t size);
        static void SetMaxSizeDdsDataExVectorDouble(size_t size);
        static void SetMaxSizeDdsDataExVectorChar(size_t size);
        static void SetMaxSizeDataExVectorChar(size_t size);

        static size_t GetMaxSizeDdsDataExVectorInt();
        static size_t GetMaxSizeDdsDataExVectorFloat();
        static size_t GetMaxSizeDdsDataExVectorDouble(); 
        static size_t GetMaxSizeDdsDataExVectorChar(); 
        static size_t GetMaxSizeDataExVectorChar();

        // DdsAlarm

        static void SetMaxSizeDdsAlarmVectorAlarms(size_t size);
        static size_t GetMaxSizeDdsAlarmVectorAlarms();

        // DdsAlarmEx

        static void SetMaxSizeDdsAlarmExVectorAlarms(size_t size);
        static size_t GetMaxSizeDdsAlarmExVectorAlarms();

        // DdsConfig

        static void SetMaxSizeDdsConfig(size_t size);
        static size_t GetMaxSizeDdsConfig();

    };    

}

#endif
