static struct redisFunctionSym symsTable[] = {
{"IOThreadEntryPoint",(unsigned long)IOThreadEntryPoint},
{"_redisAssert",(unsigned long)_redisAssert},
{"_redisPanic",(unsigned long)_redisPanic},
{"acceptHandler",(unsigned long)acceptHandler},
{"addReply",(unsigned long)addReply},
{"addReplyBulk",(unsigned long)addReplyBulk},
{"addReplyBulkCString",(unsigned long)addReplyBulkCString},
{"addReplyBulkLen",(unsigned long)addReplyBulkLen},
{"addReplyBulkSds",(unsigned long)addReplyBulkSds},
{"addReplyDouble",(unsigned long)addReplyDouble},
{"addReplyLongLong",(unsigned long)addReplyLongLong},
{"addReplySds",(unsigned long)addReplySds},
{"addReplyUlong",(unsigned long)addReplyUlong},
{"aofRemoveTempFile",(unsigned long)aofRemoveTempFile},
{"appendCommand",(unsigned long)appendCommand},
{"appendServerSaveParams",(unsigned long)appendServerSaveParams},
{"authCommand",(unsigned long)authCommand},
{"beforeSleep",(unsigned long)beforeSleep},
{"bgrewriteaofCommand",(unsigned long)bgrewriteaofCommand},
{"bgsaveCommand",(unsigned long)bgsaveCommand},
{"blockClientOnSwappedKeys",(unsigned long)blockClientOnSwappedKeys},
{"blockForKeys",(unsigned long)blockForKeys},
{"blockingPopGenericCommand",(unsigned long)blockingPopGenericCommand},
{"blpopCommand",(unsigned long)blpopCommand},
{"brpopCommand",(unsigned long)brpopCommand},
{"bytesToHuman",(unsigned long)bytesToHuman},
{"call",(unsigned long)call},
{"catAppendOnlyExpireAtCommand",(unsigned long)catAppendOnlyExpireAtCommand},
{"catAppendOnlyGenericCommand",(unsigned long)catAppendOnlyGenericCommand},
{"checkType",(unsigned long)checkType},
{"closeTimedoutClients",(unsigned long)closeTimedoutClients},
{"compareStringObjects",(unsigned long)compareStringObjects},
{"computeDatasetDigest",(unsigned long)computeDatasetDigest},
{"computeObjectSwappability",(unsigned long)computeObjectSwappability},
{"configCommand",(unsigned long)configCommand},
{"configGetCommand",(unsigned long)configGetCommand},
{"configSetCommand",(unsigned long)configSetCommand},
{"convertToRealHash",(unsigned long)convertToRealHash},
{"createClient",(unsigned long)createClient},
{"createHashObject",(unsigned long)createHashObject},
{"createListObject",(unsigned long)createListObject},
{"createObject",(unsigned long)createObject},
{"createSetObject",(unsigned long)createSetObject},
{"createSharedObjects",(unsigned long)createSharedObjects},
{"createSortOperation",(unsigned long)createSortOperation},
{"createStringObject",(unsigned long)createStringObject},
{"createStringObjectFromLongLong",(unsigned long)createStringObjectFromLongLong},
{"createVmPointer",(unsigned long)createVmPointer},
{"createZsetObject",(unsigned long)createZsetObject},
{"daemonize",(unsigned long)daemonize},
{"dbAdd",(unsigned long)dbAdd},
{"dbDelete",(unsigned long)dbDelete},
{"dbExists",(unsigned long)dbExists},
{"dbRandomKey",(unsigned long)dbRandomKey},
{"dbReplace",(unsigned long)dbReplace},
{"dbsizeCommand",(unsigned long)dbsizeCommand},
{"debugCommand",(unsigned long)debugCommand},
{"decrCommand",(unsigned long)decrCommand},
{"decrRefCount",(unsigned long)decrRefCount},
{"decrbyCommand",(unsigned long)decrbyCommand},
{"delCommand",(unsigned long)delCommand},
{"deleteIfVolatile",(unsigned long)deleteIfVolatile},
{"dictEncObjKeyCompare",(unsigned long)dictEncObjKeyCompare},
{"dictListDestructor",(unsigned long)dictListDestructor},
{"dictObjKeyCompare",(unsigned long)dictObjKeyCompare},
{"dictRedisObjectDestructor",(unsigned long)dictRedisObjectDestructor},
{"dictSdsDestructor",(unsigned long)dictSdsDestructor},
{"dictSdsKeyCompare",(unsigned long)dictSdsKeyCompare},
{"dictVanillaFree",(unsigned long)dictVanillaFree},
{"discardCommand",(unsigned long)discardCommand},
{"dontWaitForSwappedKey",(unsigned long)dontWaitForSwappedKey},
{"dupClientReplyValue",(unsigned long)dupClientReplyValue},
{"dupStringObject",(unsigned long)dupStringObject},
{"echoCommand",(unsigned long)echoCommand},
{"equalStringObjects",(unsigned long)equalStringObjects},
{"execBlockClientOnSwappedKeys",(unsigned long)execBlockClientOnSwappedKeys},
{"execCommand",(unsigned long)execCommand},
{"execCommandReplicateMulti",(unsigned long)execCommandReplicateMulti},
{"existsCommand",(unsigned long)existsCommand},
{"expireCommand",(unsigned long)expireCommand},
{"expireGenericCommand",(unsigned long)expireGenericCommand},
{"expireIfNeeded",(unsigned long)expireIfNeeded},
{"expireatCommand",(unsigned long)expireatCommand},
{"feedAppendOnlyFile",(unsigned long)feedAppendOnlyFile},
{"findFuncName",(unsigned long)findFuncName},
{"flushAppendOnlyFile",(unsigned long)flushAppendOnlyFile},
{"flushallCommand",(unsigned long)flushallCommand},
{"flushdbCommand",(unsigned long)flushdbCommand},
{"freeClient",(unsigned long)freeClient},
{"freeClientArgv",(unsigned long)freeClientArgv},
{"freeClientMultiState",(unsigned long)freeClientMultiState},
{"freeFakeClient",(unsigned long)freeFakeClient},
{"freeHashObject",(unsigned long)freeHashObject},
{"freeIOJob",(unsigned long)freeIOJob},
{"freeListObject",(unsigned long)freeListObject},
{"freeMemoryIfNeeded",(unsigned long)freeMemoryIfNeeded},
{"freePubsubPattern",(unsigned long)freePubsubPattern},
{"freeSetObject",(unsigned long)freeSetObject},
{"freeStringObject",(unsigned long)freeStringObject},
{"freeZsetObject",(unsigned long)freeZsetObject},
{"fwriteBulkDouble",(unsigned long)fwriteBulkDouble},
{"fwriteBulkLongLong",(unsigned long)fwriteBulkLongLong},
{"fwriteBulkObject",(unsigned long)fwriteBulkObject},
{"fwriteBulkString",(unsigned long)fwriteBulkString},
{"genRedisInfoString",(unsigned long)genRedisInfoString},
{"genericHgetallCommand",(unsigned long)genericHgetallCommand},
{"genericZrangebyscoreCommand",(unsigned long)genericZrangebyscoreCommand},
{"getCommand",(unsigned long)getCommand},
{"getDecodedObject",(unsigned long)getDecodedObject},
{"getDoubleFromObject",(unsigned long)getDoubleFromObject},
{"getDoubleFromObjectOrReply",(unsigned long)getDoubleFromObjectOrReply},
{"getExpire",(unsigned long)getExpire},
{"getGenericCommand",(unsigned long)getGenericCommand},
{"getLongFromObjectOrReply",(unsigned long)getLongFromObjectOrReply},
{"getLongLongFromObject",(unsigned long)getLongLongFromObject},
{"getLongLongFromObjectOrReply",(unsigned long)getLongLongFromObjectOrReply},
{"getMcontextEip",(unsigned long)getMcontextEip},
{"getsetCommand",(unsigned long)getsetCommand},
{"glueReplyBuffersIfNeeded",(unsigned long)glueReplyBuffersIfNeeded},
{"handleClientsBlockedOnSwappedKey",(unsigned long)handleClientsBlockedOnSwappedKey},
{"handleClientsWaitingListPush",(unsigned long)handleClientsWaitingListPush},
{"hashCurrent",(unsigned long)hashCurrent},
{"hashDelete",(unsigned long)hashDelete},
{"hashExists",(unsigned long)hashExists},
{"hashGet",(unsigned long)hashGet},
{"hashInitIterator",(unsigned long)hashInitIterator},
{"hashLookupWriteOrCreate",(unsigned long)hashLookupWriteOrCreate},
{"hashNext",(unsigned long)hashNext},
{"hashReleaseIterator",(unsigned long)hashReleaseIterator},
{"hashSet",(unsigned long)hashSet},
{"hashTryConversion",(unsigned long)hashTryConversion},
{"hashTryObjectEncoding",(unsigned long)hashTryObjectEncoding},
{"hdelCommand",(unsigned long)hdelCommand},
{"hexistsCommand",(unsigned long)hexistsCommand},
{"hgetCommand",(unsigned long)hgetCommand},
{"hgetallCommand",(unsigned long)hgetallCommand},
{"hincrbyCommand",(unsigned long)hincrbyCommand},
{"hkeysCommand",(unsigned long)hkeysCommand},
{"hlenCommand",(unsigned long)hlenCommand},
{"hmgetCommand",(unsigned long)hmgetCommand},
{"hmsetCommand",(unsigned long)hmsetCommand},
{"hsetCommand",(unsigned long)hsetCommand},
{"hsetnxCommand",(unsigned long)hsetnxCommand},
{"htNeedsResize",(unsigned long)htNeedsResize},
{"hvalsCommand",(unsigned long)hvalsCommand},
{"incrCommand",(unsigned long)incrCommand},
{"incrDecrCommand",(unsigned long)incrDecrCommand},
{"incrRefCount",(unsigned long)incrRefCount},
{"incrbyCommand",(unsigned long)incrbyCommand},
{"incrementallyRehash",(unsigned long)incrementallyRehash},
{"infoCommand",(unsigned long)infoCommand},
{"initClientMultiState",(unsigned long)initClientMultiState},
{"initServer",(unsigned long)initServer},
{"initServerConfig",(unsigned long)initServerConfig},
{"isStringRepresentableAsLong",(unsigned long)isStringRepresentableAsLong},
{"keysCommand",(unsigned long)keysCommand},
{"lastsaveCommand",(unsigned long)lastsaveCommand},
{"lindexCommand",(unsigned long)lindexCommand},
{"listMatchObjects",(unsigned long)listMatchObjects},
{"listMatchPubsubPattern",(unsigned long)listMatchPubsubPattern},
{"ll2string",(unsigned long)ll2string},
{"llenCommand",(unsigned long)llenCommand},
{"loadServerConfig",(unsigned long)loadServerConfig},
{"lockThreadedIO",(unsigned long)lockThreadedIO},
{"lookupKey",(unsigned long)lookupKey},
{"lookupKeyByPattern",(unsigned long)lookupKeyByPattern},
{"lookupKeyRead",(unsigned long)lookupKeyRead},
{"lookupKeyReadOrReply",(unsigned long)lookupKeyReadOrReply},
{"lookupKeyWrite",(unsigned long)lookupKeyWrite},
{"lookupKeyWriteOrReply",(unsigned long)lookupKeyWriteOrReply},
{"lpopCommand",(unsigned long)lpopCommand},
{"lpushCommand",(unsigned long)lpushCommand},
{"lrangeCommand",(unsigned long)lrangeCommand},
{"lremCommand",(unsigned long)lremCommand},
{"lsetCommand",(unsigned long)lsetCommand},
{"ltrimCommand",(unsigned long)ltrimCommand},
{"mgetCommand",(unsigned long)mgetCommand},
{"mixDigest",(unsigned long)mixDigest},
{"mixObjectDigest",(unsigned long)mixObjectDigest},
{"monitorCommand",(unsigned long)monitorCommand},
{"moveCommand",(unsigned long)moveCommand},
{"msetCommand",(unsigned long)msetCommand},
{"msetGenericCommand",(unsigned long)msetGenericCommand},
{"msetnxCommand",(unsigned long)msetnxCommand},
{"multiCommand",(unsigned long)multiCommand},
{"oom",(unsigned long)oom},
{"pingCommand",(unsigned long)pingCommand},
{"popGenericCommand",(unsigned long)popGenericCommand},
{"prepareForShutdown",(unsigned long)prepareForShutdown},
{"processCommand",(unsigned long)processCommand},
{"processInputBuffer",(unsigned long)processInputBuffer},
{"psubscribeCommand",(unsigned long)psubscribeCommand},
{"publishCommand",(unsigned long)publishCommand},
{"pubsubPublishMessage",(unsigned long)pubsubPublishMessage},
{"pubsubSubscribeChannel",(unsigned long)pubsubSubscribeChannel},
{"pubsubSubscribePattern",(unsigned long)pubsubSubscribePattern},
{"pubsubUnsubscribeAllChannels",(unsigned long)pubsubUnsubscribeAllChannels},
{"pubsubUnsubscribeAllPatterns",(unsigned long)pubsubUnsubscribeAllPatterns},
{"pubsubUnsubscribeChannel",(unsigned long)pubsubUnsubscribeChannel},
{"pubsubUnsubscribePattern",(unsigned long)pubsubUnsubscribePattern},
{"punsubscribeCommand",(unsigned long)punsubscribeCommand},
{"pushGenericCommand",(unsigned long)pushGenericCommand},
{"qsortCompareSetsByCardinality",(unsigned long)qsortCompareSetsByCardinality},
{"qsortCompareZsetopsrcByCardinality",(unsigned long)qsortCompareZsetopsrcByCardinality},
{"qsortRedisCommands",(unsigned long)qsortRedisCommands},
{"queueIOJob",(unsigned long)queueIOJob},
{"queueMultiCommand",(unsigned long)queueMultiCommand},
{"randomkeyCommand",(unsigned long)randomkeyCommand},
{"rdbEncodeInteger",(unsigned long)rdbEncodeInteger},
{"rdbGenericLoadStringObject",(unsigned long)rdbGenericLoadStringObject},
{"rdbLoad",(unsigned long)rdbLoad},
{"rdbLoadDoubleValue",(unsigned long)rdbLoadDoubleValue},
{"rdbLoadEncodedStringObject",(unsigned long)rdbLoadEncodedStringObject},
{"rdbLoadIntegerObject",(unsigned long)rdbLoadIntegerObject},
{"rdbLoadLen",(unsigned long)rdbLoadLen},
{"rdbLoadLzfStringObject",(unsigned long)rdbLoadLzfStringObject},
{"rdbLoadObject",(unsigned long)rdbLoadObject},
{"rdbLoadStringObject",(unsigned long)rdbLoadStringObject},
{"rdbLoadTime",(unsigned long)rdbLoadTime},
{"rdbLoadType",(unsigned long)rdbLoadType},
{"rdbRemoveTempFile",(unsigned long)rdbRemoveTempFile},
{"rdbSave",(unsigned long)rdbSave},
{"rdbSaveBackground",(unsigned long)rdbSaveBackground},
{"rdbSaveDoubleValue",(unsigned long)rdbSaveDoubleValue},
{"rdbSaveLen",(unsigned long)rdbSaveLen},
{"rdbSaveLzfStringObject",(unsigned long)rdbSaveLzfStringObject},
{"rdbSaveObject",(unsigned long)rdbSaveObject},
{"rdbSaveRawString",(unsigned long)rdbSaveRawString},
{"rdbSaveStringObject",(unsigned long)rdbSaveStringObject},
{"rdbSaveTime",(unsigned long)rdbSaveTime},
{"rdbSaveType",(unsigned long)rdbSaveType},
{"rdbSavedObjectLen",(unsigned long)rdbSavedObjectLen},
{"rdbSavedObjectPages",(unsigned long)rdbSavedObjectPages},
{"rdbTryIntegerEncoding",(unsigned long)rdbTryIntegerEncoding},
{"readQueryFromClient",(unsigned long)readQueryFromClient},
{"redisLog",(unsigned long)redisLog},
{"removeExpire",(unsigned long)removeExpire},
{"renameCommand",(unsigned long)renameCommand},
{"renameGenericCommand",(unsigned long)renameGenericCommand},
{"renamenxCommand",(unsigned long)renamenxCommand},
{"replicationFeedMonitors",(unsigned long)replicationFeedMonitors},
{"replicationFeedSlaves",(unsigned long)replicationFeedSlaves},
{"resetClient",(unsigned long)resetClient},
{"resetServerSaveParams",(unsigned long)resetServerSaveParams},
{"rewriteAppendOnlyFile",(unsigned long)rewriteAppendOnlyFile},
{"rewriteAppendOnlyFileBackground",(unsigned long)rewriteAppendOnlyFileBackground},
{"rpopCommand",(unsigned long)rpopCommand},
{"rpoplpushcommand",(unsigned long)rpoplpushcommand},
{"rpushCommand",(unsigned long)rpushCommand},
{"saddCommand",(unsigned long)saddCommand},
{"saveCommand",(unsigned long)saveCommand},
{"scardCommand",(unsigned long)scardCommand},
{"sdiffCommand",(unsigned long)sdiffCommand},
{"sdiffstoreCommand",(unsigned long)sdiffstoreCommand},
{"sdscatrepr",(unsigned long)sdscatrepr},
{"segvHandler",(unsigned long)segvHandler},
{"selectCommand",(unsigned long)selectCommand},
{"selectDb",(unsigned long)selectDb},
{"sendBulkToSlave",(unsigned long)sendBulkToSlave},
{"sendReplyToClient",(unsigned long)sendReplyToClient},
{"sendReplyToClientWritev",(unsigned long)sendReplyToClientWritev},
{"serverCron",(unsigned long)serverCron},
{"setCommand",(unsigned long)setCommand},
{"setExpire",(unsigned long)setExpire},
{"setGenericCommand",(unsigned long)setGenericCommand},
{"setexCommand",(unsigned long)setexCommand},
{"setnxCommand",(unsigned long)setnxCommand},
{"setupSigSegvAction",(unsigned long)setupSigSegvAction},
{"shutdownCommand",(unsigned long)shutdownCommand},
{"sigtermHandler",(unsigned long)sigtermHandler},
{"sinterCommand",(unsigned long)sinterCommand},
{"sinterGenericCommand",(unsigned long)sinterGenericCommand},
{"sinterstoreCommand",(unsigned long)sinterstoreCommand},
{"sismemberCommand",(unsigned long)sismemberCommand},
{"slaveofCommand",(unsigned long)slaveofCommand},
{"smoveCommand",(unsigned long)smoveCommand},
{"sortCommand",(unsigned long)sortCommand},
{"sortCommandTable",(unsigned long)sortCommandTable},
{"sortCompare",(unsigned long)sortCompare},
{"spawnIOThread",(unsigned long)spawnIOThread},
{"spopCommand",(unsigned long)spopCommand},
{"srandmemberCommand",(unsigned long)srandmemberCommand},
{"sremCommand",(unsigned long)sremCommand},
{"startAppendOnly",(unsigned long)startAppendOnly},
{"stopAppendOnly",(unsigned long)stopAppendOnly},
{"stringObjectLen",(unsigned long)stringObjectLen},
{"stringmatch",(unsigned long)stringmatch},
{"stringmatchlen",(unsigned long)stringmatchlen},
{"subscribeCommand",(unsigned long)subscribeCommand},
{"substrCommand",(unsigned long)substrCommand},
{"sunionCommand",(unsigned long)sunionCommand},
{"sunionDiffGenericCommand",(unsigned long)sunionDiffGenericCommand},
{"sunionstoreCommand",(unsigned long)sunionstoreCommand},
{"syncCommand",(unsigned long)syncCommand},
{"syncRead",(unsigned long)syncRead},
{"syncReadLine",(unsigned long)syncReadLine},
{"syncWithMaster",(unsigned long)syncWithMaster},
{"syncWrite",(unsigned long)syncWrite},
{"touchWatchedKey",(unsigned long)touchWatchedKey},
{"touchWatchedKeysOnFlush",(unsigned long)touchWatchedKeysOnFlush},
{"tryFreeOneObjectFromFreelist",(unsigned long)tryFreeOneObjectFromFreelist},
{"tryObjectEncoding",(unsigned long)tryObjectEncoding},
{"tryResizeHashTables",(unsigned long)tryResizeHashTables},
{"ttlCommand",(unsigned long)ttlCommand},
{"typeCommand",(unsigned long)typeCommand},
{"unblockClientWaitingData",(unsigned long)unblockClientWaitingData},
{"unlockThreadedIO",(unsigned long)unlockThreadedIO},
{"unsubscribeCommand",(unsigned long)unsubscribeCommand},
{"unwatchAllKeys",(unsigned long)unwatchAllKeys},
{"unwatchCommand",(unsigned long)unwatchCommand},
{"updateDictResizePolicy",(unsigned long)updateDictResizePolicy},
{"updateSlavesWaitingBgsave",(unsigned long)updateSlavesWaitingBgsave},
{"usage",(unsigned long)usage},
{"version",(unsigned long)version},
{"vmCanSwapOut",(unsigned long)vmCanSwapOut},
{"vmCancelThreadedIOJob",(unsigned long)vmCancelThreadedIOJob},
{"vmFindContiguousPages",(unsigned long)vmFindContiguousPages},
{"vmFreePage",(unsigned long)vmFreePage},
{"vmGenericLoadObject",(unsigned long)vmGenericLoadObject},
{"vmInit",(unsigned long)vmInit},
{"vmLoadObject",(unsigned long)vmLoadObject},
{"vmMarkPageFree",(unsigned long)vmMarkPageFree},
{"vmMarkPageUsed",(unsigned long)vmMarkPageUsed},
{"vmMarkPagesFree",(unsigned long)vmMarkPagesFree},
{"vmMarkPagesUsed",(unsigned long)vmMarkPagesUsed},
{"vmPreviewObject",(unsigned long)vmPreviewObject},
{"vmReadObjectFromSwap",(unsigned long)vmReadObjectFromSwap},
{"vmReopenSwapFile",(unsigned long)vmReopenSwapFile},
{"vmSwapObjectBlocking",(unsigned long)vmSwapObjectBlocking},
{"vmSwapObjectThreaded",(unsigned long)vmSwapObjectThreaded},
{"vmSwapOneObject",(unsigned long)vmSwapOneObject},
{"vmSwapOneObjectBlocking",(unsigned long)vmSwapOneObjectBlocking},
{"vmSwapOneObjectThreaded",(unsigned long)vmSwapOneObjectThreaded},
{"vmThreadedIOCompletedJob",(unsigned long)vmThreadedIOCompletedJob},
{"vmWriteObjectOnSwap",(unsigned long)vmWriteObjectOnSwap},
{"waitEmptyIOJobsQueue",(unsigned long)waitEmptyIOJobsQueue},
{"waitForMultipleSwappedKeys",(unsigned long)waitForMultipleSwappedKeys},
{"waitForSwappedKey",(unsigned long)waitForSwappedKey},
{"watchCommand",(unsigned long)watchCommand},
{"watchForKey",(unsigned long)watchForKey},
{"xorDigest",(unsigned long)xorDigest},
{"xorObjectDigest",(unsigned long)xorObjectDigest},
{"yesnotoi",(unsigned long)yesnotoi},
{"zaddCommand",(unsigned long)zaddCommand},
{"zaddGenericCommand",(unsigned long)zaddGenericCommand},
{"zcardCommand",(unsigned long)zcardCommand},
{"zcountCommand",(unsigned long)zcountCommand},
{"zincrbyCommand",(unsigned long)zincrbyCommand},
{"zinterstoreCommand",(unsigned long)zinterstoreCommand},
{"zrangeCommand",(unsigned long)zrangeCommand},
{"zrangeGenericCommand",(unsigned long)zrangeGenericCommand},
{"zrangebyscoreCommand",(unsigned long)zrangebyscoreCommand},
{"zrankCommand",(unsigned long)zrankCommand},
{"zrankGenericCommand",(unsigned long)zrankGenericCommand},
{"zremCommand",(unsigned long)zremCommand},
{"zremrangebyrankCommand",(unsigned long)zremrangebyrankCommand},
{"zremrangebyscoreCommand",(unsigned long)zremrangebyscoreCommand},
{"zrevrangeCommand",(unsigned long)zrevrangeCommand},
{"zrevrankCommand",(unsigned long)zrevrankCommand},
{"zscoreCommand",(unsigned long)zscoreCommand},
{"zslCreate",(unsigned long)zslCreate},
{"zslCreateNode",(unsigned long)zslCreateNode},
{"zslDelete",(unsigned long)zslDelete},
{"zslFirstWithScore",(unsigned long)zslFirstWithScore},
{"zslFree",(unsigned long)zslFree},
{"zslFreeNode",(unsigned long)zslFreeNode},
{"zslInsert",(unsigned long)zslInsert},
{"zslRandomLevel",(unsigned long)zslRandomLevel},
{"zunionInterBlockClientOnSwappedKeys",(unsigned long)zunionInterBlockClientOnSwappedKeys},
{"zunionInterGenericCommand",(unsigned long)zunionInterGenericCommand},
{"zunionstoreCommand",(unsigned long)zunionstoreCommand},
{NULL,0}
};
