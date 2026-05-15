#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AquisitoCoreAddPlaceToCollectionRequestDto, AquisitoCoreAddPlaceToCollectionRequestDtoCompanion, AquisitoCoreAddPlaceToCollectionUseCase, AquisitoCoreAmenity, AquisitoCoreAmenityDto, AquisitoCoreAmenityDtoCompanion, AquisitoCoreApiConstant, AquisitoCoreApiConstantArea, AquisitoCoreApiConstantAuth, AquisitoCoreApiConstantCollection, AquisitoCoreApiConstantPlace, AquisitoCoreApiConstantRatingPlace, AquisitoCoreApiConstantUser, AquisitoCoreAquisitoConfig, AquisitoCoreAuthActionResponseDto, AquisitoCoreAuthActionResponseDtoCompanion, AquisitoCoreAuthActionResult, AquisitoCoreAuthEvent, AquisitoCoreAuthEventLoggedIn, AquisitoCoreAuthEventLoggedOut, AquisitoCoreAuthLocalDataSourceImplCompanion, AquisitoCoreAuthor, AquisitoCoreAuthorDto, AquisitoCoreAuthorDtoCompanion, AquisitoCoreAvailableArea, AquisitoCoreAvailableAreaDto, AquisitoCoreAvailableAreaDtoCompanion, AquisitoCoreCartEntry, AquisitoCoreCartEntryDto, AquisitoCoreCartEntryDtoCompanion, AquisitoCoreCategory, AquisitoCoreCategoryDto, AquisitoCoreCategoryDtoCompanion, AquisitoCoreCheckUserLocationUseCase, AquisitoCoreCollection, AquisitoCoreCollectionApi, AquisitoCoreCollectionDto, AquisitoCoreCollectionDtoCompanion, AquisitoCoreCreateCollectionRequestDto, AquisitoCoreCreateCollectionRequestDtoCompanion, AquisitoCoreCreateCollectionUseCase, AquisitoCoreCuisine, AquisitoCoreCuisineDto, AquisitoCoreCuisineDtoCompanion, AquisitoCoreCurrency, AquisitoCoreCurrencyCompanion, AquisitoCoreCurrencyManager, AquisitoCoreCurrencySymbolPosition, AquisitoCoreDataResponse<T>, AquisitoCoreDataResponseCompanion, AquisitoCoreDeleteAccountUseCase, AquisitoCoreDepartment, AquisitoCoreDepartmentCompanion, AquisitoCoreDepartmentDto, AquisitoCoreDepartmentDtoCompanion, AquisitoCoreDistrict, AquisitoCoreDistrictCompanion, AquisitoCoreDistrictDto, AquisitoCoreDistrictDtoCompanion, AquisitoCoreEnsureSetLocationUserUseCase, AquisitoCoreError, AquisitoCoreErrorHandler, AquisitoCoreErrorResponseDto, AquisitoCoreErrorResponseDtoCompanion, AquisitoCoreForgotPasswordRequestDto, AquisitoCoreForgotPasswordRequestDtoCompanion, AquisitoCoreForgotPasswordUseCase, AquisitoCoreGeoPoint, AquisitoCoreGetAvailableAreaByLocationUseCase, AquisitoCoreGetAvailableAreasUseCase, AquisitoCoreGetCartDetailUseCase, AquisitoCoreGetListRatingsUseCase, AquisitoCoreGetOnboardingStatusUseCase, AquisitoCoreGetPlaceDetailUseCase, AquisitoCoreGetPlacesUseCase, AquisitoCoreGetUserCollectionsUseCase, AquisitoCoreGetUserDataOnContextUseCase, AquisitoCoreGetUserDataUseCase, AquisitoCoreGroupedArea, AquisitoCoreGroupedAreaDto, AquisitoCoreGroupedAreaDtoCompanion, AquisitoCoreGroupedMenuEntry, AquisitoCoreGroupedMenuEntryDto, AquisitoCoreGroupedMenuEntryDtoCompanion, AquisitoCoreHttpClientFactory, AquisitoCoreImageMedia, AquisitoCoreImageMediaDto, AquisitoCoreImageMediaDtoCompanion, AquisitoCoreJsonNapierLogger, AquisitoCoreKmpFile, AquisitoCoreKmpFileCompanion, AquisitoCoreKoin_coreBeanDefinition<T>, AquisitoCoreKoin_coreCallbacks<T>, AquisitoCoreKoin_coreExtensionManager, AquisitoCoreKoin_coreInstanceContext, AquisitoCoreKoin_coreInstanceFactory<T>, AquisitoCoreKoin_coreInstanceFactoryCompanion, AquisitoCoreKoin_coreInstanceRegistry, AquisitoCoreKoin_coreKind, AquisitoCoreKoin_coreKoin, AquisitoCoreKoin_coreKoinApplication, AquisitoCoreKoin_coreKoinApplicationCompanion, AquisitoCoreKoin_coreKoinDefinition<R>, AquisitoCoreKoin_coreLevel, AquisitoCoreKoin_coreLockable, AquisitoCoreKoin_coreLogger, AquisitoCoreKoin_coreModule, AquisitoCoreKoin_coreParametersHolder, AquisitoCoreKoin_corePropertyRegistry, AquisitoCoreKoin_coreScope, AquisitoCoreKoin_coreScopeDSL, AquisitoCoreKoin_coreScopeRegistry, AquisitoCoreKoin_coreScopeRegistryCompanion, AquisitoCoreKoin_coreSingleInstanceFactory<T>, AquisitoCoreKotlinAbstractCoroutineContextElement, AquisitoCoreKotlinAbstractCoroutineContextKey<B, E>, AquisitoCoreKotlinArray<T>, AquisitoCoreKotlinByteArray, AquisitoCoreKotlinByteIterator, AquisitoCoreKotlinCancellationException, AquisitoCoreKotlinEnum<E>, AquisitoCoreKotlinEnumCompanion, AquisitoCoreKotlinException, AquisitoCoreKotlinIllegalStateException, AquisitoCoreKotlinKTypeProjection, AquisitoCoreKotlinKTypeProjectionCompanion, AquisitoCoreKotlinKVariance, AquisitoCoreKotlinLazyThreadSafetyMode, AquisitoCoreKotlinNothing, AquisitoCoreKotlinPair<__covariant A, __covariant B>, AquisitoCoreKotlinRuntimeException, AquisitoCoreKotlinThrowable, AquisitoCoreKotlinUnit, AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher, AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcherKey, AquisitoCoreKotlinx_serialization_coreSerialKind, AquisitoCoreKotlinx_serialization_coreSerializersModule, AquisitoCoreKtor_client_coreHttpClient, AquisitoCoreKtor_client_coreHttpClientCall, AquisitoCoreKtor_client_coreHttpClientCallCompanion, AquisitoCoreKtor_client_coreHttpClientConfig<T>, AquisitoCoreKtor_client_coreHttpClientEngineConfig, AquisitoCoreKtor_client_coreHttpReceivePipeline, AquisitoCoreKtor_client_coreHttpReceivePipelinePhases, AquisitoCoreKtor_client_coreHttpRequestBuilder, AquisitoCoreKtor_client_coreHttpRequestBuilderCompanion, AquisitoCoreKtor_client_coreHttpRequestData, AquisitoCoreKtor_client_coreHttpRequestPipeline, AquisitoCoreKtor_client_coreHttpRequestPipelinePhases, AquisitoCoreKtor_client_coreHttpResponse, AquisitoCoreKtor_client_coreHttpResponseContainer, AquisitoCoreKtor_client_coreHttpResponseData, AquisitoCoreKtor_client_coreHttpResponsePipeline, AquisitoCoreKtor_client_coreHttpResponsePipelinePhases, AquisitoCoreKtor_client_coreHttpSendPipeline, AquisitoCoreKtor_client_coreHttpSendPipelinePhases, AquisitoCoreKtor_client_coreProxyConfig, AquisitoCoreKtor_eventsEventDefinition<T>, AquisitoCoreKtor_eventsEvents, AquisitoCoreKtor_httpContentType, AquisitoCoreKtor_httpContentTypeCompanion, AquisitoCoreKtor_httpHeaderValueParam, AquisitoCoreKtor_httpHeaderValueWithParameters, AquisitoCoreKtor_httpHeaderValueWithParametersCompanion, AquisitoCoreKtor_httpHeadersBuilder, AquisitoCoreKtor_httpHttpMethod, AquisitoCoreKtor_httpHttpMethodCompanion, AquisitoCoreKtor_httpHttpProtocolVersion, AquisitoCoreKtor_httpHttpProtocolVersionCompanion, AquisitoCoreKtor_httpHttpStatusCode, AquisitoCoreKtor_httpHttpStatusCodeCompanion, AquisitoCoreKtor_httpOutgoingContent, AquisitoCoreKtor_httpURLBuilder, AquisitoCoreKtor_httpURLBuilderCompanion, AquisitoCoreKtor_httpURLProtocol, AquisitoCoreKtor_httpURLProtocolCompanion, AquisitoCoreKtor_httpUrl, AquisitoCoreKtor_httpUrlCompanion, AquisitoCoreKtor_ioBuffer, AquisitoCoreKtor_ioBufferCompanion, AquisitoCoreKtor_ioByteReadPacket, AquisitoCoreKtor_ioByteReadPacketCompanion, AquisitoCoreKtor_ioChunkBuffer, AquisitoCoreKtor_ioChunkBufferCompanion, AquisitoCoreKtor_ioInput, AquisitoCoreKtor_ioInputCompanion, AquisitoCoreKtor_ioMemory, AquisitoCoreKtor_ioMemoryCompanion, AquisitoCoreKtor_utilsAttributeKey<T>, AquisitoCoreKtor_utilsGMTDate, AquisitoCoreKtor_utilsGMTDateCompanion, AquisitoCoreKtor_utilsMonth, AquisitoCoreKtor_utilsMonthCompanion, AquisitoCoreKtor_utilsPipeline<TSubject, TContext>, AquisitoCoreKtor_utilsPipelinePhase, AquisitoCoreKtor_utilsStringValuesBuilderImpl, AquisitoCoreKtor_utilsTypeInfo, AquisitoCoreKtor_utilsWeekDay, AquisitoCoreKtor_utilsWeekDayCompanion, AquisitoCoreLatLongRequest, AquisitoCoreLatLongRequestCompanion, AquisitoCoreLink, AquisitoCoreLinkDto, AquisitoCoreLinkDtoCompanion, AquisitoCoreListResponse<T>, AquisitoCoreListResponseCompanion, AquisitoCoreLocationClientResult, AquisitoCoreLocationClientResultPermissionDenied, AquisitoCoreLocationClientResultServicesDisabled, AquisitoCoreLocationClientResultSuccess, AquisitoCoreLocationClientResultUnknown, AquisitoCoreLocationContext, AquisitoCoreLocationError, AquisitoCoreLocationErrorDistrictNotFound, AquisitoCoreLocationErrorPermissionDenied, AquisitoCoreLocationErrorServicesDisabled, AquisitoCoreLocationErrorUnknown, AquisitoCoreLocationEvent, AquisitoCoreLocationEventAllCleared, AquisitoCoreLocationEventDistrictCleared, AquisitoCoreLocationEventDistrictSet, AquisitoCoreLocationRepositoryStoredLocationResult, AquisitoCoreLocationRepositoryStoredLocationResultMissing, AquisitoCoreLocationRepositoryStoredLocationResultValid, AquisitoCoreLocationState, AquisitoCoreLoginDataDto, AquisitoCoreLoginDataDtoCompanion, AquisitoCoreLoginRequestDto, AquisitoCoreLoginRequestDtoCompanion, AquisitoCoreLoginResponseDto, AquisitoCoreLoginResponseDtoCompanion, AquisitoCoreLoginResult, AquisitoCoreLoginUseCase, AquisitoCoreLogoutResponseDto, AquisitoCoreLogoutResponseDtoCompanion, AquisitoCoreLogoutResult, AquisitoCoreLogoutUseCase, AquisitoCoreMarkOnboardingCompletedUseCase, AquisitoCoreMention, AquisitoCoreMentionDto, AquisitoCoreMentionDtoCompanion, AquisitoCoreMenuEntry, AquisitoCoreMenuEntryDto, AquisitoCoreMenuEntryDtoCompanion, AquisitoCoreNetworkConfig, AquisitoCorePhone, AquisitoCorePhoneDto, AquisitoCorePhoneDtoCompanion, AquisitoCorePlace, AquisitoCorePlaceDetailDto, AquisitoCorePlaceDetailDtoCompanion, AquisitoCorePlaceDto, AquisitoCorePlaceDtoCompanion, AquisitoCorePlaceReferenceDto, AquisitoCorePlaceReferenceDtoCompanion, AquisitoCorePlaceStatus, AquisitoCorePlatformContext, AquisitoCorePlatformEngine, AquisitoCoreProvince, AquisitoCoreProvinceCompanion, AquisitoCoreProvinceDto, AquisitoCoreProvinceDtoCompanion, AquisitoCoreRating, AquisitoCoreRatingDto, AquisitoCoreRatingDtoCompanion, AquisitoCoreRatingStatus, AquisitoCoreRatingStatusCompanion, AquisitoCoreReactRatingUseCase, AquisitoCoreReactionType, AquisitoCoreRemoveCollectionResponseDto, AquisitoCoreRemoveCollectionResponseDtoCompanion, AquisitoCoreRemoveCollectionUseCase, AquisitoCoreRemovePlaceFromCollectionResponseDto, AquisitoCoreRemovePlaceFromCollectionResponseDtoCompanion, AquisitoCoreRemovePlaceFromCollectionUseCase, AquisitoCoreRemoveReactionUseCase, AquisitoCoreReservationDto, AquisitoCoreReservationDtoCompanion, AquisitoCoreResetPasswordRequestDto, AquisitoCoreResetPasswordRequestDtoCompanion, AquisitoCoreResetPasswordUseCase, AquisitoCoreRestaurantCart, AquisitoCoreRestaurantCartDto, AquisitoCoreRestaurantCartDtoCompanion, AquisitoCoreSchedule, AquisitoCoreScheduleDto, AquisitoCoreScheduleDtoCompanion, AquisitoCoreSetLocationOnContextUseCase, AquisitoCoreSignUpDataDto, AquisitoCoreSignUpDataDtoCompanion, AquisitoCoreSignUpRequestDto, AquisitoCoreSignUpRequestDtoCompanion, AquisitoCoreSignUpResponseDto, AquisitoCoreSignUpResponseDtoCompanion, AquisitoCoreSignUpResult, AquisitoCoreSignUpUseCase, AquisitoCoreSocialLoginDataDto, AquisitoCoreSocialLoginDataDtoCompanion, AquisitoCoreSocialLoginRequestDto, AquisitoCoreSocialLoginRequestDtoCompanion, AquisitoCoreSocialLoginResponseDto, AquisitoCoreSocialLoginResponseDtoCompanion, AquisitoCoreSocialLoginResult, AquisitoCoreSocialLoginUseCase, AquisitoCoreStately_concurrencyThreadLocalRef<T>, AquisitoCoreSuccess<__covariant T>, AquisitoCoreSystemClock, AquisitoCoreTag, AquisitoCoreTagDto, AquisitoCoreTagDtoCompanion, AquisitoCoreTokenManager, AquisitoCoreUpsertRatingUseCase, AquisitoCoreUseCaseProvider, AquisitoCoreUser, AquisitoCoreUserCompanion, AquisitoCoreUserDto, AquisitoCoreUserDtoCompanion, AquisitoCoreVerifyCodeRequestDto, AquisitoCoreVerifyCodeRequestDtoCompanion, AquisitoCoreVerifyCodeUseCase;

@protocol AquisitoCoreAreaRepository, AquisitoCoreAuthLocalDataSource, AquisitoCoreAuthRepository, AquisitoCoreCartRepository, AquisitoCoreClock, AquisitoCoreCollectionRepository, AquisitoCoreKeyValueStorage, AquisitoCoreKoin_coreKoinComponent, AquisitoCoreKoin_coreKoinExtension, AquisitoCoreKoin_coreKoinScopeComponent, AquisitoCoreKoin_coreQualifier, AquisitoCoreKoin_coreScopeCallback, AquisitoCoreKotlinAnnotation, AquisitoCoreKotlinAppendable, AquisitoCoreKotlinComparable, AquisitoCoreKotlinContinuation, AquisitoCoreKotlinContinuationInterceptor, AquisitoCoreKotlinCoroutineContext, AquisitoCoreKotlinCoroutineContextElement, AquisitoCoreKotlinCoroutineContextKey, AquisitoCoreKotlinFunction, AquisitoCoreKotlinIterator, AquisitoCoreKotlinKAnnotatedElement, AquisitoCoreKotlinKClass, AquisitoCoreKotlinKClassifier, AquisitoCoreKotlinKDeclarationContainer, AquisitoCoreKotlinKType, AquisitoCoreKotlinLazy, AquisitoCoreKotlinMapEntry, AquisitoCoreKotlinSequence, AquisitoCoreKotlinSuspendFunction1, AquisitoCoreKotlinSuspendFunction2, AquisitoCoreKotlinx_coroutines_coreChildHandle, AquisitoCoreKotlinx_coroutines_coreChildJob, AquisitoCoreKotlinx_coroutines_coreCoroutineScope, AquisitoCoreKotlinx_coroutines_coreDisposableHandle, AquisitoCoreKotlinx_coroutines_coreFlow, AquisitoCoreKotlinx_coroutines_coreFlowCollector, AquisitoCoreKotlinx_coroutines_coreJob, AquisitoCoreKotlinx_coroutines_coreParentJob, AquisitoCoreKotlinx_coroutines_coreRunnable, AquisitoCoreKotlinx_coroutines_coreSelectClause, AquisitoCoreKotlinx_coroutines_coreSelectClause0, AquisitoCoreKotlinx_coroutines_coreSelectInstance, AquisitoCoreKotlinx_coroutines_coreSharedFlow, AquisitoCoreKotlinx_coroutines_coreStateFlow, AquisitoCoreKotlinx_serialization_coreCompositeDecoder, AquisitoCoreKotlinx_serialization_coreCompositeEncoder, AquisitoCoreKotlinx_serialization_coreDecoder, AquisitoCoreKotlinx_serialization_coreDeserializationStrategy, AquisitoCoreKotlinx_serialization_coreEncoder, AquisitoCoreKotlinx_serialization_coreKSerializer, AquisitoCoreKotlinx_serialization_coreSerialDescriptor, AquisitoCoreKotlinx_serialization_coreSerializationStrategy, AquisitoCoreKotlinx_serialization_coreSerializersModuleCollector, AquisitoCoreKtor_client_coreHttpClientEngine, AquisitoCoreKtor_client_coreHttpClientEngineCapability, AquisitoCoreKtor_client_coreHttpClientPlugin, AquisitoCoreKtor_client_coreHttpRequest, AquisitoCoreKtor_client_loggingLogger, AquisitoCoreKtor_httpHeaders, AquisitoCoreKtor_httpHttpMessage, AquisitoCoreKtor_httpHttpMessageBuilder, AquisitoCoreKtor_httpParameters, AquisitoCoreKtor_httpParametersBuilder, AquisitoCoreKtor_ioByteReadChannel, AquisitoCoreKtor_ioCloseable, AquisitoCoreKtor_ioObjectPool, AquisitoCoreKtor_ioReadSession, AquisitoCoreKtor_utilsAttributes, AquisitoCoreKtor_utilsStringValues, AquisitoCoreKtor_utilsStringValuesBuilder, AquisitoCoreLocationClient, AquisitoCoreLocationRepository, AquisitoCoreLocationStorage, AquisitoCoreOnboardingRepository, AquisitoCorePlaceRepository, AquisitoCorePlatform, AquisitoCoreRatingPlaceRepository, AquisitoCoreResultViewState, AquisitoCoreSessionManager, AquisitoCoreUserRepository;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AquisitoCoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AquisitoCoreBase (AquisitoCoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AquisitoCoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AquisitoCoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAquisitoCoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AquisitoCoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface AquisitoCoreByte : AquisitoCoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AquisitoCoreUByte : AquisitoCoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AquisitoCoreShort : AquisitoCoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AquisitoCoreUShort : AquisitoCoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AquisitoCoreInt : AquisitoCoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AquisitoCoreUInt : AquisitoCoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AquisitoCoreLong : AquisitoCoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AquisitoCoreULong : AquisitoCoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AquisitoCoreFloat : AquisitoCoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AquisitoCoreDouble : AquisitoCoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AquisitoCoreBoolean : AquisitoCoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Platform")))
@protocol AquisitoCorePlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface AquisitoCoreIOSPlatform : AquisitoCoreBase <AquisitoCorePlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformContext")))
@interface AquisitoCorePlatformContext : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformEngine")))
@interface AquisitoCorePlatformEngine : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformEngine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCorePlatformEngine *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKtor_client_coreHttpClientEngine>)provideEngine __attribute__((swift_name("provideEngine()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseProvider")))
@interface AquisitoCoreUseCaseProvider : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)useCaseProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreUseCaseProvider *shared __attribute__((swift_name("shared")));
- (BOOL)configureCurrencyCurrencyCode:(NSString *)currencyCode __attribute__((swift_name("configureCurrency(currencyCode:)")));
- (AquisitoCoreAddPlaceToCollectionUseCase *)getAddPlaceToCollectionUseCase __attribute__((swift_name("getAddPlaceToCollectionUseCase()")));
- (AquisitoCoreGetAvailableAreasUseCase *)getAvailableAreasUseCase __attribute__((swift_name("getAvailableAreasUseCase()")));
- (AquisitoCoreCheckUserLocationUseCase *)getCheckUserLocationUseCase __attribute__((swift_name("getCheckUserLocationUseCase()")));
- (AquisitoCoreCreateCollectionUseCase *)getCreateCollectionUseCase __attribute__((swift_name("getCreateCollectionUseCase()")));
- (NSString *)getDefaultCurrencyCode __attribute__((swift_name("getDefaultCurrencyCode()")));
- (AquisitoCoreDeleteAccountUseCase *)getDeleteAccountUseCase __attribute__((swift_name("getDeleteAccountUseCase()")));
- (AquisitoCoreEnsureSetLocationUserUseCase *)getEnsureSetLocationUserUseCase __attribute__((swift_name("getEnsureSetLocationUserUseCase()")));
- (AquisitoCoreForgotPasswordUseCase *)getForgotPasswordUseCase __attribute__((swift_name("getForgotPasswordUseCase()")));
- (AquisitoCoreGetAvailableAreaByLocationUseCase *)getGetAvailableAreaByLocationUseCase __attribute__((swift_name("getGetAvailableAreaByLocationUseCase()")));
- (AquisitoCoreGetCartDetailUseCase *)getGetCartDetailUseCase __attribute__((swift_name("getGetCartDetailUseCase()")));
- (AquisitoCoreGetUserDataOnContextUseCase *)getGetLocalUserDataUseCase __attribute__((swift_name("getGetLocalUserDataUseCase()")));
- (AquisitoCoreGetOnboardingStatusUseCase *)getGetOnboardingStatusUseCase __attribute__((swift_name("getGetOnboardingStatusUseCase()")));
- (AquisitoCoreGetPlaceDetailUseCase *)getGetPlaceDetailUseCase __attribute__((swift_name("getGetPlaceDetailUseCase()")));
- (AquisitoCoreGetPlacesUseCase *)getGetPlacesUseCase __attribute__((swift_name("getGetPlacesUseCase()")));
- (AquisitoCoreGetUserCollectionsUseCase *)getGetUserCollectionsUseCase __attribute__((swift_name("getGetUserCollectionsUseCase()")));
- (AquisitoCoreGetUserDataUseCase *)getGetUserDataUseCase __attribute__((swift_name("getGetUserDataUseCase()")));
- (AquisitoCoreGetListRatingsUseCase *)getListRatingsUseCase __attribute__((swift_name("getListRatingsUseCase()")));
- (AquisitoCoreLocationContext *)getLocationContext __attribute__((swift_name("getLocationContext()")));
- (AquisitoCoreLoginUseCase *)getLoginUseCase __attribute__((swift_name("getLoginUseCase()")));
- (AquisitoCoreLogoutUseCase *)getLogoutUseCase __attribute__((swift_name("getLogoutUseCase()")));
- (AquisitoCoreMarkOnboardingCompletedUseCase *)getMarkOnboardingCompletedUseCase __attribute__((swift_name("getMarkOnboardingCompletedUseCase()")));
- (AquisitoCoreReactRatingUseCase *)getReactRatingUseCase __attribute__((swift_name("getReactRatingUseCase()")));
- (AquisitoCoreRemoveCollectionUseCase *)getRemoveCollectionUseCase __attribute__((swift_name("getRemoveCollectionUseCase()")));
- (AquisitoCoreRemovePlaceFromCollectionUseCase *)getRemovePlaceFromCollectionUseCase __attribute__((swift_name("getRemovePlaceFromCollectionUseCase()")));
- (AquisitoCoreRemoveReactionUseCase *)getRemoveReactionUseCase __attribute__((swift_name("getRemoveReactionUseCase()")));
- (AquisitoCoreResetPasswordUseCase *)getResetPasswordUseCase __attribute__((swift_name("getResetPasswordUseCase()")));
- (id<AquisitoCoreSessionManager>)getSessionManager __attribute__((swift_name("getSessionManager()")));
- (AquisitoCoreSetLocationOnContextUseCase *)getSetLocationOnContextUseCase __attribute__((swift_name("getSetLocationOnContextUseCase()")));
- (AquisitoCoreSignUpUseCase *)getSignUpUseCase __attribute__((swift_name("getSignUpUseCase()")));
- (AquisitoCoreSocialLoginUseCase *)getSocialLoginUseCase __attribute__((swift_name("getSocialLoginUseCase()")));
- (AquisitoCoreUpsertRatingUseCase *)getUpsertRatingUseCase __attribute__((swift_name("getUpsertRatingUseCase()")));
- (AquisitoCoreVerifyCodeUseCase *)getVerifyCodeUseCase __attribute__((swift_name("getVerifyCodeUseCase()")));
- (void)setDefaultCurrencyCurrency:(AquisitoCoreCurrency *)currency __attribute__((swift_name("setDefaultCurrency(currency:)")));
- (void)useFakeLocationForTesting __attribute__((swift_name("useFakeLocationForTesting()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AquisitoConfig")))
@interface AquisitoCoreAquisitoConfig : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)aquisitoConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAquisitoConfig *shared __attribute__((swift_name("shared")));
- (NSString *)getBaseUrl __attribute__((swift_name("getBaseUrl()")));
- (void)initializeBaseUrl:(NSString *)baseUrl __attribute__((swift_name("initialize(baseUrl:)")));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@end

__attribute__((swift_name("AuthLocalDataSource")))
@protocol AquisitoCoreAuthLocalDataSource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAccessTokenWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearUserWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccessTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveAccessTokenToken:(NSString *)token completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveAccessToken(token:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUserJson:(NSString *)userJson completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(userJson:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthLocalDataSourceImpl")))
@interface AquisitoCoreAuthLocalDataSourceImpl : AquisitoCoreBase <AquisitoCoreAuthLocalDataSource>
- (instancetype)initWithStorage:(id<AquisitoCoreKeyValueStorage>)storage __attribute__((swift_name("init(storage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAuthLocalDataSourceImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAccessTokenWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearUserWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccessTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveAccessTokenToken:(NSString *)token completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveAccessToken(token:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUserJson:(NSString *)userJson completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(userJson:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthLocalDataSourceImpl.Companion")))
@interface AquisitoCoreAuthLocalDataSourceImplCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAuthLocalDataSourceImplCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KeyValueStorage")))
@protocol AquisitoCoreKeyValueStorage
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue completionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBoolean(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putBooleanKey:(NSString *)key value:(BOOL)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putBoolean(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSKeyValueStorage")))
@interface AquisitoCoreIOSKeyValueStorage : AquisitoCoreBase <AquisitoCoreKeyValueStorage>
- (instancetype)initWithContext:(AquisitoCorePlatformContext *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue completionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBoolean(key:defaultValue:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putBooleanKey:(NSString *)key value:(BOOL)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putBoolean(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenManager")))
@interface AquisitoCoreTokenManager : AquisitoCoreBase
- (instancetype)initWithLocal:(id<AquisitoCoreAuthLocalDataSource>)local __attribute__((swift_name("init(local:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));
- (NSString * _Nullable)getToken __attribute__((swift_name("getToken()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doInit(completionHandler:)")));
@end

__attribute__((swift_name("LocationStorage")))
@protocol AquisitoCoreLocationStorage
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectedWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelected(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSelectedDistrictWithCompletionHandler:(void (^)(AquisitoCoreDistrict * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getSelectedDistrict(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setSelectedDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setSelected(district:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationStorageImpl")))
@interface AquisitoCoreLocationStorageImpl : AquisitoCoreBase <AquisitoCoreLocationStorage>
- (instancetype)initWithKv:(id<AquisitoCoreKeyValueStorage>)kv __attribute__((swift_name("init(kv:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectedWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelected(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSelectedDistrictWithCompletionHandler:(void (^)(AquisitoCoreDistrict * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getSelectedDistrict(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setSelectedDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setSelected(district:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientFactory")))
@interface AquisitoCoreHttpClientFactory : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClientFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreHttpClientFactory *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_client_coreHttpClient *)createTokenManager:(AquisitoCoreTokenManager *)tokenManager __attribute__((swift_name("create(tokenManager:)")));
@end

__attribute__((swift_name("Ktor_client_loggingLogger")))
@protocol AquisitoCoreKtor_client_loggingLogger
@required
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNapierLogger")))
@interface AquisitoCoreJsonNapierLogger : AquisitoCoreBase <AquisitoCoreKtor_client_loggingLogger>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNapierLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreJsonNapierLogger *shared __attribute__((swift_name("shared")));
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkConfig")))
@interface AquisitoCoreNetworkConfig : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)networkConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreNetworkConfig *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpFile")))
@interface AquisitoCoreKmpFile : AquisitoCoreBase
- (instancetype)initWithBytes:(AquisitoCoreKotlinByteArray *)bytes fileName:(NSString *)fileName mimeType:(NSString *)mimeType __attribute__((swift_name("init(bytes:fileName:mimeType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKmpFileCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKmpFile *)doCopyBytes:(AquisitoCoreKotlinByteArray *)bytes fileName:(NSString *)fileName mimeType:(NSString *)mimeType __attribute__((swift_name("doCopy(bytes:fileName:mimeType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKotlinByteArray *bytes __attribute__((swift_name("bytes")));
@property (readonly) NSString *fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *mimeType __attribute__((swift_name("mimeType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmpFile.Companion")))
@interface AquisitoCoreKmpFileCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKmpFileCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPlaceToCollectionRequestDto")))
@interface AquisitoCoreAddPlaceToCollectionRequestDto : AquisitoCoreBase
- (instancetype)initWithPlace_id:(int32_t)place_id __attribute__((swift_name("init(place_id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAddPlaceToCollectionRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreAddPlaceToCollectionRequestDto *)doCopyPlace_id:(int32_t)place_id __attribute__((swift_name("doCopy(place_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t place_id __attribute__((swift_name("place_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPlaceToCollectionRequestDto.Companion")))
@interface AquisitoCoreAddPlaceToCollectionRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAddPlaceToCollectionRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateCollectionRequestDto")))
@interface AquisitoCoreCreateCollectionRequestDto : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type is_public:(BOOL)is_public track_changes:(BOOL)track_changes __attribute__((swift_name("init(name:description:type:is_public:track_changes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCreateCollectionRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCreateCollectionRequestDto *)doCopyName:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type is_public:(BOOL)is_public track_changes:(BOOL)track_changes __attribute__((swift_name("doCopy(name:description:type:is_public:track_changes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL is_public __attribute__((swift_name("is_public")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL track_changes __attribute__((swift_name("track_changes")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateCollectionRequestDto.Companion")))
@interface AquisitoCoreCreateCollectionRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCreateCollectionRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordRequestDto")))
@interface AquisitoCoreForgotPasswordRequestDto : AquisitoCoreBase
- (instancetype)initWithEmail:(NSString *)email __attribute__((swift_name("init(email:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreForgotPasswordRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreForgotPasswordRequestDto *)doCopyEmail:(NSString *)email __attribute__((swift_name("doCopy(email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordRequestDto.Companion")))
@interface AquisitoCoreForgotPasswordRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreForgotPasswordRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLongRequest")))
@interface AquisitoCoreLatLongRequest : AquisitoCoreBase
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLatLongRequestCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLatLongRequest *)doCopyLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("doCopy(latitude:longitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLongRequest.Companion")))
@interface AquisitoCoreLatLongRequestCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLatLongRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequestDto")))
@interface AquisitoCoreLoginRequestDto : AquisitoCoreBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLoginRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLoginRequestDto *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequestDto.Companion")))
@interface AquisitoCoreLoginRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLoginRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordRequestDto")))
@interface AquisitoCoreResetPasswordRequestDto : AquisitoCoreBase
- (instancetype)initWithEmail:(NSString *)email code:(NSString *)code password:(NSString *)password password_confirmation:(NSString *)password_confirmation __attribute__((swift_name("init(email:code:password:password_confirmation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreResetPasswordRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreResetPasswordRequestDto *)doCopyEmail:(NSString *)email code:(NSString *)code password:(NSString *)password password_confirmation:(NSString *)password_confirmation __attribute__((swift_name("doCopy(email:code:password:password_confirmation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *password_confirmation __attribute__((swift_name("password_confirmation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordRequestDto.Companion")))
@interface AquisitoCoreResetPasswordRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreResetPasswordRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginRequestDto")))
@interface AquisitoCoreSocialLoginRequestDto : AquisitoCoreBase
- (instancetype)initWithSocial_driver:(NSString *)social_driver social_token:(NSString *)social_token __attribute__((swift_name("init(social_driver:social_token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSocialLoginRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSocialLoginRequestDto *)doCopySocial_driver:(NSString *)social_driver social_token:(NSString *)social_token __attribute__((swift_name("doCopy(social_driver:social_token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *social_driver __attribute__((swift_name("social_driver")));
@property (readonly) NSString *social_token __attribute__((swift_name("social_token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginRequestDto.Companion")))
@interface AquisitoCoreSocialLoginRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSocialLoginRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyCodeRequestDto")))
@interface AquisitoCoreVerifyCodeRequestDto : AquisitoCoreBase
- (instancetype)initWithEmail:(NSString *)email code:(NSString *)code __attribute__((swift_name("init(email:code:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreVerifyCodeRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreVerifyCodeRequestDto *)doCopyEmail:(NSString *)email code:(NSString *)code __attribute__((swift_name("doCopy(email:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyCodeRequestDto.Companion")))
@interface AquisitoCoreVerifyCodeRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreVerifyCodeRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmenityDto")))
@interface AquisitoCoreAmenityDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAmenityDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreAmenityDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AmenityDto.Companion")))
@interface AquisitoCoreAmenityDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAmenityDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthActionResponseDto")))
@interface AquisitoCoreAuthActionResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAuthActionResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreAuthActionResponseDto *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthActionResponseDto.Companion")))
@interface AquisitoCoreAuthActionResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAuthActionResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorDto")))
@interface AquisitoCoreAuthorDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug identifier:(NSString * _Nullable)identifier __attribute__((swift_name("init(id:name:slug:identifier:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAuthorDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreAuthorDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug identifier:(NSString * _Nullable)identifier __attribute__((swift_name("doCopy(id:name:slug:identifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthorDto.Companion")))
@interface AquisitoCoreAuthorDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAuthorDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailableAreaDto")))
@interface AquisitoCoreAvailableAreaDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvinceDto *)province __attribute__((swift_name("init(id:name:ubigeo:province:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreAvailableAreaDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreAvailableAreaDto *)doCopyId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvinceDto *)province __attribute__((swift_name("doCopy(id:name:ubigeo:province:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) AquisitoCoreProvinceDto *province __attribute__((swift_name("province")));
@property (readonly) NSString *ubigeo __attribute__((swift_name("ubigeo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailableAreaDto.Companion")))
@interface AquisitoCoreAvailableAreaDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAvailableAreaDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartEntryDto")))
@interface AquisitoCoreCartEntryDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString * _Nullable)name image:(NSString * _Nullable)image categories_count:(AquisitoCoreInt * _Nullable)categories_count __attribute__((swift_name("init(id:name:image:categories_count:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCartEntryDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCartEntryDto *)doCopyId:(int32_t)id name:(NSString * _Nullable)name image:(NSString * _Nullable)image categories_count:(AquisitoCoreInt * _Nullable)categories_count __attribute__((swift_name("doCopy(id:name:image:categories_count:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable categories_count __attribute__((swift_name("categories_count")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartEntryDto.Companion")))
@interface AquisitoCoreCartEntryDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCartEntryDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryDto")))
@interface AquisitoCoreCategoryDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCategoryDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCategoryDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryDto.Companion")))
@interface AquisitoCoreCategoryDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCategoryDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionDto")))
@interface AquisitoCoreCollectionDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id slug:(NSString *)slug name:(NSString *)name description:(NSString *)description type:(NSString *)type is_public:(BOOL)is_public track_changes:(BOOL)track_changes places:(NSArray<AquisitoCorePlaceDetailDto *> *)places created_at:(NSString * _Nullable)created_at __attribute__((swift_name("init(id:slug:name:description:type:is_public:track_changes:places:created_at:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCollectionDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCollectionDto *)doCopyId:(int32_t)id slug:(NSString *)slug name:(NSString *)name description:(NSString *)description type:(NSString *)type is_public:(BOOL)is_public track_changes:(BOOL)track_changes places:(NSArray<AquisitoCorePlaceDetailDto *> *)places created_at:(NSString * _Nullable)created_at __attribute__((swift_name("doCopy(id:slug:name:description:type:is_public:track_changes:places:created_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable created_at __attribute__((swift_name("created_at")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL is_public __attribute__((swift_name("is_public")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<AquisitoCorePlaceDetailDto *> *places __attribute__((swift_name("places")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@property (readonly) BOOL track_changes __attribute__((swift_name("track_changes")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionDto.Companion")))
@interface AquisitoCoreCollectionDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCollectionDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CuisineDto")))
@interface AquisitoCoreCuisineDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCuisineDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCuisineDto *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CuisineDto.Companion")))
@interface AquisitoCoreCuisineDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCuisineDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataResponse")))
@interface AquisitoCoreDataResponse<T> : AquisitoCoreBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreDataResponseCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreDataResponse<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataResponseCompanion")))
@interface AquisitoCoreDataResponseCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreDataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AquisitoCoreKotlinArray<id<AquisitoCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<AquisitoCoreKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepartmentDto")))
@interface AquisitoCoreDepartmentDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreDepartmentDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreDepartmentDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DepartmentDto.Companion")))
@interface AquisitoCoreDepartmentDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreDepartmentDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistrictDto")))
@interface AquisitoCoreDistrictDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name ubigeo:(NSString * _Nullable)ubigeo province:(AquisitoCoreProvinceDto * _Nullable)province __attribute__((swift_name("init(id:name:ubigeo:province:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreDistrictDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreDistrictDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name ubigeo:(NSString * _Nullable)ubigeo province:(AquisitoCoreProvinceDto * _Nullable)province __attribute__((swift_name("doCopy(id:name:ubigeo:province:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) AquisitoCoreProvinceDto * _Nullable province __attribute__((swift_name("province")));
@property (readonly) NSString * _Nullable ubigeo __attribute__((swift_name("ubigeo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistrictDto.Companion")))
@interface AquisitoCoreDistrictDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreDistrictDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseDto")))
@interface AquisitoCoreErrorResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString *)message errors:(NSDictionary<NSString *, NSArray<NSString *> *> *)errors __attribute__((swift_name("init(message:errors:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreErrorResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreErrorResponseDto *)doCopyMessage:(NSString *)message errors:(NSDictionary<NSString *, NSArray<NSString *> *> *)errors __attribute__((swift_name("doCopy(message:errors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *errors __attribute__((swift_name("errors")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorResponseDto.Companion")))
@interface AquisitoCoreErrorResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreErrorResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedAreaDto")))
@interface AquisitoCoreGroupedAreaDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name city:(AquisitoCoreDepartmentDto *)city areas:(NSArray<AquisitoCoreDistrictDto *> *)areas __attribute__((swift_name("init(id:name:city:areas:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreGroupedAreaDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreGroupedAreaDto *)doCopyId:(int32_t)id name:(NSString *)name city:(AquisitoCoreDepartmentDto *)city areas:(NSArray<AquisitoCoreDistrictDto *> *)areas __attribute__((swift_name("doCopy(id:name:city:areas:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AquisitoCoreDistrictDto *> *areas __attribute__((swift_name("areas")));
@property (readonly) AquisitoCoreDepartmentDto *city __attribute__((swift_name("city")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedAreaDto.Companion")))
@interface AquisitoCoreGroupedAreaDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreGroupedAreaDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedMenuEntryDto")))
@interface AquisitoCoreGroupedMenuEntryDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name menuEntries:(NSArray<AquisitoCoreMenuEntryDto *> * _Nullable)menuEntries __attribute__((swift_name("init(id:name:menuEntries:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreGroupedMenuEntryDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreGroupedMenuEntryDto *)doCopyId:(int32_t)id name:(NSString *)name menuEntries:(NSArray<AquisitoCoreMenuEntryDto *> * _Nullable)menuEntries __attribute__((swift_name("doCopy(id:name:menuEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AquisitoCoreMenuEntryDto *> * _Nullable menuEntries __attribute__((swift_name("menuEntries")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedMenuEntryDto.Companion")))
@interface AquisitoCoreGroupedMenuEntryDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreGroupedMenuEntryDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageMediaDto")))
@interface AquisitoCoreImageMediaDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id original:(NSString *)original thumb:(NSString *)thumb optimized:(NSString *)optimized __attribute__((swift_name("init(id:original:thumb:optimized:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreImageMediaDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreImageMediaDto *)doCopyId:(int32_t)id original:(NSString *)original thumb:(NSString *)thumb optimized:(NSString *)optimized __attribute__((swift_name("doCopy(id:original:thumb:optimized:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *optimized __attribute__((swift_name("optimized")));
@property (readonly) NSString *original __attribute__((swift_name("original")));
@property (readonly) NSString *thumb __attribute__((swift_name("thumb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageMediaDto.Companion")))
@interface AquisitoCoreImageMediaDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreImageMediaDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkDto")))
@interface AquisitoCoreLinkDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id type:(NSString * _Nullable)type url:(NSString * _Nullable)url thumbnail_url:(NSString * _Nullable)thumbnail_url __attribute__((swift_name("init(id:type:url:thumbnail_url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLinkDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLinkDto *)doCopyId:(AquisitoCoreInt * _Nullable)id type:(NSString * _Nullable)type url:(NSString * _Nullable)url thumbnail_url:(NSString * _Nullable)thumbnail_url __attribute__((swift_name("doCopy(id:type:url:thumbnail_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable thumbnail_url __attribute__((swift_name("thumbnail_url")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkDto.Companion")))
@interface AquisitoCoreLinkDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLinkDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListResponse")))
@interface AquisitoCoreListResponse<T> : AquisitoCoreBase
- (instancetype)initWithData:(NSArray<id> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreListResponseCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreListResponse<T> *)doCopyData:(NSArray<id> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ListResponseCompanion")))
@interface AquisitoCoreListResponseCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(AquisitoCoreKotlinArray<id<AquisitoCoreKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<AquisitoCoreKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataDto")))
@interface AquisitoCoreLoginDataDto : AquisitoCoreBase
- (instancetype)initWithAccess_token:(NSString *)access_token __attribute__((swift_name("init(access_token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLoginDataDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLoginDataDto *)doCopyAccess_token:(NSString *)access_token __attribute__((swift_name("doCopy(access_token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *access_token __attribute__((swift_name("access_token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginDataDto.Companion")))
@interface AquisitoCoreLoginDataDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLoginDataDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponseDto")))
@interface AquisitoCoreLoginResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString *)message data:(AquisitoCoreLoginDataDto *)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLoginResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLoginResponseDto *)doCopyMessage:(NSString *)message data:(AquisitoCoreLoginDataDto *)data __attribute__((swift_name("doCopy(message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreLoginDataDto *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResponseDto.Companion")))
@interface AquisitoCoreLoginResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLoginResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutResponseDto")))
@interface AquisitoCoreLogoutResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreLogoutResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreLogoutResponseDto *)doCopyMessage:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutResponseDto.Companion")))
@interface AquisitoCoreLogoutResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLogoutResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MentionDto")))
@interface AquisitoCoreMentionDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id author:(AquisitoCoreAuthorDto * _Nullable)author place:(AquisitoCorePlaceReferenceDto * _Nullable)place link:(AquisitoCoreLinkDto * _Nullable)link __attribute__((swift_name("init(id:author:place:link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreMentionDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreMentionDto *)doCopyId:(AquisitoCoreInt * _Nullable)id author:(AquisitoCoreAuthorDto * _Nullable)author place:(AquisitoCorePlaceReferenceDto * _Nullable)place link:(AquisitoCoreLinkDto * _Nullable)link __attribute__((swift_name("doCopy(id:author:place:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreAuthorDto * _Nullable author __attribute__((swift_name("author")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) AquisitoCoreLinkDto * _Nullable link __attribute__((swift_name("link")));
@property (readonly) AquisitoCorePlaceReferenceDto * _Nullable place __attribute__((swift_name("place")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MentionDto.Companion")))
@interface AquisitoCoreMentionDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreMentionDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuEntryDto")))
@interface AquisitoCoreMenuEntryDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name featured:(AquisitoCoreBoolean * _Nullable)featured description:(NSString * _Nullable)description price:(NSString * _Nullable)price image:(NSString * _Nullable)image __attribute__((swift_name("init(id:name:featured:description:price:image:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreMenuEntryDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreMenuEntryDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name featured:(AquisitoCoreBoolean * _Nullable)featured description:(NSString * _Nullable)description price:(NSString * _Nullable)price image:(NSString * _Nullable)image __attribute__((swift_name("doCopy(id:name:featured:description:price:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) AquisitoCoreBoolean * _Nullable featured __attribute__((swift_name("featured")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuEntryDto.Companion")))
@interface AquisitoCoreMenuEntryDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreMenuEntryDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneDto")))
@interface AquisitoCorePhoneDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id number:(NSString * _Nullable)number featured:(AquisitoCoreBoolean * _Nullable)featured __attribute__((swift_name("init(id:number:featured:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCorePhoneDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCorePhoneDto *)doCopyId:(AquisitoCoreInt * _Nullable)id number:(NSString * _Nullable)number featured:(AquisitoCoreBoolean * _Nullable)featured __attribute__((swift_name("doCopy(id:number:featured:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreBoolean * _Nullable featured __attribute__((swift_name("featured")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneDto.Companion")))
@interface AquisitoCorePhoneDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCorePhoneDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceDetailDto")))
@interface AquisitoCorePlaceDetailDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString * _Nullable)description address:(NSString * _Nullable)address latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude price_range:(NSString * _Nullable)price_range schedule:(NSArray<AquisitoCoreScheduleDto *> *)schedule logo:(NSString * _Nullable)logo gallery:(NSArray<NSString *> * _Nullable)gallery district:(AquisitoCoreDistrictDto * _Nullable)district province:(AquisitoCoreProvinceDto * _Nullable)province department:(AquisitoCoreDepartmentDto * _Nullable)department cuisines:(NSArray<AquisitoCoreCuisineDto *> *)cuisines amenities:(NSArray<AquisitoCoreAmenityDto *> *)amenities phones:(NSArray<AquisitoCorePhoneDto *> *)phones featured:(AquisitoCoreBoolean * _Nullable)featured links:(NSArray<AquisitoCoreLinkDto *> *)links thumbnail_url:(NSString * _Nullable)thumbnail_url created_at:(NSString * _Nullable)created_at updated_at:(NSString * _Nullable)updated_at mentions:(NSArray<AquisitoCoreMentionDto *> *)mentions restaurantCarts:(NSArray<AquisitoCoreRestaurantCartDto *> *)restaurantCarts cartEntries:(NSArray<AquisitoCoreCartEntryDto *> *)cartEntries tags:(NSArray<AquisitoCoreTagDto *> *)tags categories:(NSArray<AquisitoCoreCategoryDto *> *)categories popularDishes:(NSArray<AquisitoCoreMenuEntryDto *> *)popularDishes reservations:(NSArray<AquisitoCoreReservationDto *> *)reservations ratings_count:(int32_t)ratings_count ratings_avg_score:(NSString * _Nullable)ratings_avg_score rating_status:(NSString *)rating_status rating_category:(NSString * _Nullable)rating_category ratings:(NSArray<AquisitoCoreRatingDto *> *)ratings __attribute__((swift_name("init(id:name:slug:description:address:latitude:longitude:price_range:schedule:logo:gallery:district:province:department:cuisines:amenities:phones:featured:links:thumbnail_url:created_at:updated_at:mentions:restaurantCarts:cartEntries:tags:categories:popularDishes:reservations:ratings_count:ratings_avg_score:rating_status:rating_category:ratings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCorePlaceDetailDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCorePlaceDetailDto *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString * _Nullable)description address:(NSString * _Nullable)address latitude:(NSString * _Nullable)latitude longitude:(NSString * _Nullable)longitude price_range:(NSString * _Nullable)price_range schedule:(NSArray<AquisitoCoreScheduleDto *> *)schedule logo:(NSString * _Nullable)logo gallery:(NSArray<NSString *> * _Nullable)gallery district:(AquisitoCoreDistrictDto * _Nullable)district province:(AquisitoCoreProvinceDto * _Nullable)province department:(AquisitoCoreDepartmentDto * _Nullable)department cuisines:(NSArray<AquisitoCoreCuisineDto *> *)cuisines amenities:(NSArray<AquisitoCoreAmenityDto *> *)amenities phones:(NSArray<AquisitoCorePhoneDto *> *)phones featured:(AquisitoCoreBoolean * _Nullable)featured links:(NSArray<AquisitoCoreLinkDto *> *)links thumbnail_url:(NSString * _Nullable)thumbnail_url created_at:(NSString * _Nullable)created_at updated_at:(NSString * _Nullable)updated_at mentions:(NSArray<AquisitoCoreMentionDto *> *)mentions restaurantCarts:(NSArray<AquisitoCoreRestaurantCartDto *> *)restaurantCarts cartEntries:(NSArray<AquisitoCoreCartEntryDto *> *)cartEntries tags:(NSArray<AquisitoCoreTagDto *> *)tags categories:(NSArray<AquisitoCoreCategoryDto *> *)categories popularDishes:(NSArray<AquisitoCoreMenuEntryDto *> *)popularDishes reservations:(NSArray<AquisitoCoreReservationDto *> *)reservations ratings_count:(int32_t)ratings_count ratings_avg_score:(NSString * _Nullable)ratings_avg_score rating_status:(NSString *)rating_status rating_category:(NSString * _Nullable)rating_category ratings:(NSArray<AquisitoCoreRatingDto *> *)ratings __attribute__((swift_name("doCopy(id:name:slug:description:address:latitude:longitude:price_range:schedule:logo:gallery:district:province:department:cuisines:amenities:phones:featured:links:thumbnail_url:created_at:updated_at:mentions:restaurantCarts:cartEntries:tags:categories:popularDishes:reservations:ratings_count:ratings_avg_score:rating_status:rating_category:ratings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) NSArray<AquisitoCoreAmenityDto *> *amenities __attribute__((swift_name("amenities")));
@property (readonly) NSArray<AquisitoCoreCartEntryDto *> *cartEntries __attribute__((swift_name("cartEntries")));
@property (readonly) NSArray<AquisitoCoreCategoryDto *> *categories __attribute__((swift_name("categories")));
@property (readonly) NSString * _Nullable created_at __attribute__((swift_name("created_at")));
@property (readonly) NSArray<AquisitoCoreCuisineDto *> *cuisines __attribute__((swift_name("cuisines")));
@property (readonly) AquisitoCoreDepartmentDto * _Nullable department __attribute__((swift_name("department")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) AquisitoCoreDistrictDto * _Nullable district __attribute__((swift_name("district")));
@property (readonly) AquisitoCoreBoolean * _Nullable featured __attribute__((swift_name("featured")));
@property (readonly) NSArray<NSString *> * _Nullable gallery __attribute__((swift_name("gallery")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable latitude __attribute__((swift_name("latitude")));
@property (readonly) NSArray<AquisitoCoreLinkDto *> *links __attribute__((swift_name("links")));
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));
@property (readonly) NSString * _Nullable longitude __attribute__((swift_name("longitude")));
@property (readonly) NSArray<AquisitoCoreMentionDto *> *mentions __attribute__((swift_name("mentions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<AquisitoCorePhoneDto *> *phones __attribute__((swift_name("phones")));
@property (readonly) NSArray<AquisitoCoreMenuEntryDto *> *popularDishes __attribute__((swift_name("popularDishes")));
@property (readonly) NSString * _Nullable price_range __attribute__((swift_name("price_range")));
@property (readonly) AquisitoCoreProvinceDto * _Nullable province __attribute__((swift_name("province")));
@property (readonly) NSString * _Nullable rating_category __attribute__((swift_name("rating_category")));
@property (readonly) NSString *rating_status __attribute__((swift_name("rating_status")));
@property (readonly) NSArray<AquisitoCoreRatingDto *> *ratings __attribute__((swift_name("ratings")));
@property (readonly) NSString * _Nullable ratings_avg_score __attribute__((swift_name("ratings_avg_score")));
@property (readonly) int32_t ratings_count __attribute__((swift_name("ratings_count")));
@property (readonly) NSArray<AquisitoCoreReservationDto *> *reservations __attribute__((swift_name("reservations")));
@property (readonly) NSArray<AquisitoCoreRestaurantCartDto *> *restaurantCarts __attribute__((swift_name("restaurantCarts")));
@property (readonly) NSArray<AquisitoCoreScheduleDto *> *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<AquisitoCoreTagDto *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable thumbnail_url __attribute__((swift_name("thumbnail_url")));
@property (readonly) NSString * _Nullable updated_at __attribute__((swift_name("updated_at")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceDetailDto.Companion")))
@interface AquisitoCorePlaceDetailDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCorePlaceDetailDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceDto")))
@interface AquisitoCorePlaceDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString * _Nullable)description address:(NSString *)address latitude:(NSString *)latitude longitude:(NSString *)longitude price_range:(NSString *)price_range logo:(NSString * _Nullable)logo cuisines:(NSArray<AquisitoCoreCuisineDto *> * _Nullable)cuisines schedule:(NSArray<AquisitoCoreScheduleDto *> * _Nullable)schedule gallery:(NSArray<NSString *> * _Nullable)gallery amenities:(NSArray<AquisitoCoreAmenityDto *> * _Nullable)amenities phones:(NSArray<AquisitoCorePhoneDto *> * _Nullable)phones links:(NSArray<AquisitoCoreLinkDto *> * _Nullable)links ratings_count:(int32_t)ratings_count ratings_avg_score:(NSString * _Nullable)ratings_avg_score rating_status:(NSString *)rating_status rating_category:(NSString * _Nullable)rating_category __attribute__((swift_name("init(id:name:slug:description:address:latitude:longitude:price_range:logo:cuisines:schedule:gallery:amenities:phones:links:ratings_count:ratings_avg_score:rating_status:rating_category:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCorePlaceDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCorePlaceDto *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString * _Nullable)description address:(NSString *)address latitude:(NSString *)latitude longitude:(NSString *)longitude price_range:(NSString *)price_range logo:(NSString * _Nullable)logo cuisines:(NSArray<AquisitoCoreCuisineDto *> * _Nullable)cuisines schedule:(NSArray<AquisitoCoreScheduleDto *> * _Nullable)schedule gallery:(NSArray<NSString *> * _Nullable)gallery amenities:(NSArray<AquisitoCoreAmenityDto *> * _Nullable)amenities phones:(NSArray<AquisitoCorePhoneDto *> * _Nullable)phones links:(NSArray<AquisitoCoreLinkDto *> * _Nullable)links ratings_count:(int32_t)ratings_count ratings_avg_score:(NSString * _Nullable)ratings_avg_score rating_status:(NSString *)rating_status rating_category:(NSString * _Nullable)rating_category __attribute__((swift_name("doCopy(id:name:slug:description:address:latitude:longitude:price_range:logo:cuisines:schedule:gallery:amenities:phones:links:ratings_count:ratings_avg_score:rating_status:rating_category:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSArray<AquisitoCoreAmenityDto *> * _Nullable amenities __attribute__((swift_name("amenities")));
@property (readonly) NSArray<AquisitoCoreCuisineDto *> * _Nullable cuisines __attribute__((swift_name("cuisines")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> * _Nullable gallery __attribute__((swift_name("gallery")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *latitude __attribute__((swift_name("latitude")));
@property (readonly) NSArray<AquisitoCoreLinkDto *> * _Nullable links __attribute__((swift_name("links")));
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));
@property (readonly) NSString *longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<AquisitoCorePhoneDto *> * _Nullable phones __attribute__((swift_name("phones")));
@property (readonly) NSString *price_range __attribute__((swift_name("price_range")));
@property (readonly) NSString * _Nullable rating_category __attribute__((swift_name("rating_category")));
@property (readonly) NSString *rating_status __attribute__((swift_name("rating_status")));
@property (readonly) NSString * _Nullable ratings_avg_score __attribute__((swift_name("ratings_avg_score")));
@property (readonly) int32_t ratings_count __attribute__((swift_name("ratings_count")));
@property (readonly) NSArray<AquisitoCoreScheduleDto *> * _Nullable schedule __attribute__((swift_name("schedule")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceDto.Companion")))
@interface AquisitoCorePlaceDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCorePlaceDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceReferenceDto")))
@interface AquisitoCorePlaceReferenceDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCorePlaceReferenceDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCorePlaceReferenceDto *)doCopyId:(AquisitoCoreInt * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceReferenceDto.Companion")))
@interface AquisitoCorePlaceReferenceDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCorePlaceReferenceDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvinceDto")))
@interface AquisitoCoreProvinceDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name department:(AquisitoCoreDepartmentDto * _Nullable)department __attribute__((swift_name("init(id:name:department:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreProvinceDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreProvinceDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name department:(AquisitoCoreDepartmentDto * _Nullable)department __attribute__((swift_name("doCopy(id:name:department:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreDepartmentDto * _Nullable department __attribute__((swift_name("department")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvinceDto.Companion")))
@interface AquisitoCoreProvinceDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreProvinceDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingDto")))
@interface AquisitoCoreRatingDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id food_rating:(int32_t)food_rating service_rating:(int32_t)service_rating ambience_rating:(int32_t)ambience_rating price_rating:(int32_t)price_rating overall_score:(NSString *)overall_score comment:(NSString * _Nullable)comment is_featured:(BOOL)is_featured likes_count:(int32_t)likes_count dislikes_count:(int32_t)dislikes_count user:(AquisitoCoreUserDto * _Nullable)user user_reaction:(NSString * _Nullable)user_reaction created_at:(NSString * _Nullable)created_at updated_at:(NSString * _Nullable)updated_at images:(NSArray<AquisitoCoreImageMediaDto *> *)images __attribute__((swift_name("init(id:food_rating:service_rating:ambience_rating:price_rating:overall_score:comment:is_featured:likes_count:dislikes_count:user:user_reaction:created_at:updated_at:images:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreRatingDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreRatingDto *)doCopyId:(int32_t)id food_rating:(int32_t)food_rating service_rating:(int32_t)service_rating ambience_rating:(int32_t)ambience_rating price_rating:(int32_t)price_rating overall_score:(NSString *)overall_score comment:(NSString * _Nullable)comment is_featured:(BOOL)is_featured likes_count:(int32_t)likes_count dislikes_count:(int32_t)dislikes_count user:(AquisitoCoreUserDto * _Nullable)user user_reaction:(NSString * _Nullable)user_reaction created_at:(NSString * _Nullable)created_at updated_at:(NSString * _Nullable)updated_at images:(NSArray<AquisitoCoreImageMediaDto *> *)images __attribute__((swift_name("doCopy(id:food_rating:service_rating:ambience_rating:price_rating:overall_score:comment:is_featured:likes_count:dislikes_count:user:user_reaction:created_at:updated_at:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t ambience_rating __attribute__((swift_name("ambience_rating")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable created_at __attribute__((swift_name("created_at")));
@property (readonly) int32_t dislikes_count __attribute__((swift_name("dislikes_count")));
@property (readonly) int32_t food_rating __attribute__((swift_name("food_rating")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AquisitoCoreImageMediaDto *> *images __attribute__((swift_name("images")));
@property (readonly) BOOL is_featured __attribute__((swift_name("is_featured")));
@property (readonly) int32_t likes_count __attribute__((swift_name("likes_count")));
@property (readonly) NSString *overall_score __attribute__((swift_name("overall_score")));
@property (readonly) int32_t price_rating __attribute__((swift_name("price_rating")));
@property (readonly) int32_t service_rating __attribute__((swift_name("service_rating")));
@property (readonly) NSString * _Nullable updated_at __attribute__((swift_name("updated_at")));
@property (readonly) AquisitoCoreUserDto * _Nullable user __attribute__((swift_name("user")));
@property (readonly) NSString * _Nullable user_reaction __attribute__((swift_name("user_reaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingDto.Companion")))
@interface AquisitoCoreRatingDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreRatingDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveCollectionResponseDto")))
@interface AquisitoCoreRemoveCollectionResponseDto : AquisitoCoreBase
- (instancetype)initWithDeleted:(BOOL)deleted __attribute__((swift_name("init(deleted:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreRemoveCollectionResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreRemoveCollectionResponseDto *)doCopyDeleted:(BOOL)deleted __attribute__((swift_name("doCopy(deleted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL deleted __attribute__((swift_name("deleted")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveCollectionResponseDto.Companion")))
@interface AquisitoCoreRemoveCollectionResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreRemoveCollectionResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemovePlaceFromCollectionResponseDto")))
@interface AquisitoCoreRemovePlaceFromCollectionResponseDto : AquisitoCoreBase
- (instancetype)initWithRemoved:(BOOL)removed __attribute__((swift_name("init(removed:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreRemovePlaceFromCollectionResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreRemovePlaceFromCollectionResponseDto *)doCopyRemoved:(BOOL)removed __attribute__((swift_name("doCopy(removed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL removed __attribute__((swift_name("removed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemovePlaceFromCollectionResponseDto.Companion")))
@interface AquisitoCoreRemovePlaceFromCollectionResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreRemovePlaceFromCollectionResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationDto")))
@interface AquisitoCoreReservationDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id link:(AquisitoCoreLinkDto *)link __attribute__((swift_name("init(id:link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreReservationDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreReservationDto *)doCopyId:(int32_t)id link:(AquisitoCoreLinkDto *)link __attribute__((swift_name("doCopy(id:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) AquisitoCoreLinkDto *link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReservationDto.Companion")))
@interface AquisitoCoreReservationDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreReservationDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantCartDto")))
@interface AquisitoCoreRestaurantCartDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name place:(AquisitoCorePlaceReferenceDto * _Nullable)place link:(AquisitoCoreLinkDto * _Nullable)link __attribute__((swift_name("init(id:name:place:link:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreRestaurantCartDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreRestaurantCartDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name place:(AquisitoCorePlaceReferenceDto * _Nullable)place link:(AquisitoCoreLinkDto * _Nullable)link __attribute__((swift_name("doCopy(id:name:place:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) AquisitoCoreLinkDto * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) AquisitoCorePlaceReferenceDto * _Nullable place __attribute__((swift_name("place")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantCartDto.Companion")))
@interface AquisitoCoreRestaurantCartDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreRestaurantCartDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleDto")))
@interface AquisitoCoreScheduleDto : AquisitoCoreBase
- (instancetype)initWithDayOfWeek:(NSString * _Nullable)dayOfWeek opens:(NSString * _Nullable)opens closes:(NSString * _Nullable)closes __attribute__((swift_name("init(dayOfWeek:opens:closes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreScheduleDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreScheduleDto *)doCopyDayOfWeek:(NSString * _Nullable)dayOfWeek opens:(NSString * _Nullable)opens closes:(NSString * _Nullable)closes __attribute__((swift_name("doCopy(dayOfWeek:opens:closes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable closes __attribute__((swift_name("closes")));
@property (readonly) NSString * _Nullable dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) NSString * _Nullable opens __attribute__((swift_name("opens")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleDto.Companion")))
@interface AquisitoCoreScheduleDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreScheduleDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpDataDto")))
@interface AquisitoCoreSignUpDataDto : AquisitoCoreBase
- (instancetype)initWithUser:(AquisitoCoreUserDto *)user access_token:(NSString *)access_token __attribute__((swift_name("init(user:access_token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSignUpDataDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSignUpDataDto *)doCopyUser:(AquisitoCoreUserDto *)user access_token:(NSString *)access_token __attribute__((swift_name("doCopy(user:access_token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *access_token __attribute__((swift_name("access_token")));
@property (readonly) AquisitoCoreUserDto *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpDataDto.Companion")))
@interface AquisitoCoreSignUpDataDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSignUpDataDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpRequestDto")))
@interface AquisitoCoreSignUpRequestDto : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name email:(NSString *)email username:(NSString *)username phone:(NSString *)phone password:(NSString * _Nullable)password avatar:(NSString * _Nullable)avatar social_driver:(NSString * _Nullable)social_driver social_id:(NSString * _Nullable)social_id __attribute__((swift_name("init(name:email:username:phone:password:avatar:social_driver:social_id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSignUpRequestDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSignUpRequestDto *)doCopyName:(NSString *)name email:(NSString *)email username:(NSString *)username phone:(NSString *)phone password:(NSString * _Nullable)password avatar:(NSString * _Nullable)avatar social_driver:(NSString * _Nullable)social_driver social_id:(NSString * _Nullable)social_id __attribute__((swift_name("doCopy(name:email:username:phone:password:avatar:social_driver:social_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable social_driver __attribute__((swift_name("social_driver")));
@property (readonly) NSString * _Nullable social_id __attribute__((swift_name("social_id")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpRequestDto.Companion")))
@interface AquisitoCoreSignUpRequestDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSignUpRequestDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpResponseDto")))
@interface AquisitoCoreSignUpResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString *)message data:(AquisitoCoreSignUpDataDto *)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSignUpResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSignUpResponseDto *)doCopyMessage:(NSString *)message data:(AquisitoCoreSignUpDataDto *)data __attribute__((swift_name("doCopy(message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreSignUpDataDto *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpResponseDto.Companion")))
@interface AquisitoCoreSignUpResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSignUpResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginDataDto")))
@interface AquisitoCoreSocialLoginDataDto : AquisitoCoreBase
- (instancetype)initWithAccess_token:(NSString *)access_token __attribute__((swift_name("init(access_token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSocialLoginDataDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSocialLoginDataDto *)doCopyAccess_token:(NSString *)access_token __attribute__((swift_name("doCopy(access_token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *access_token __attribute__((swift_name("access_token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginDataDto.Companion")))
@interface AquisitoCoreSocialLoginDataDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSocialLoginDataDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginResponseDto")))
@interface AquisitoCoreSocialLoginResponseDto : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString *)message data:(AquisitoCoreSocialLoginDataDto *)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreSocialLoginResponseDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreSocialLoginResponseDto *)doCopyMessage:(NSString *)message data:(AquisitoCoreSocialLoginDataDto *)data __attribute__((swift_name("doCopy(message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreSocialLoginDataDto *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginResponseDto.Companion")))
@interface AquisitoCoreSocialLoginResponseDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSocialLoginResponseDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagDto")))
@interface AquisitoCoreTagDto : AquisitoCoreBase
- (instancetype)initWithId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreTagDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreTagDto *)doCopyId:(AquisitoCoreInt * _Nullable)id name:(NSString * _Nullable)name slug:(NSString * _Nullable)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TagDto.Companion")))
@interface AquisitoCoreTagDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreTagDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto")))
@interface AquisitoCoreUserDto : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name email:(NSString *)email username:(NSString *)username email_verified_at:(NSString * _Nullable)email_verified_at phone:(NSString * _Nullable)phone avatar:(NSString * _Nullable)avatar created_at:(NSString *)created_at updated_at:(NSString *)updated_at __attribute__((swift_name("init(id:name:email:username:email_verified_at:phone:avatar:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreUserDtoCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreUserDto *)doCopyId:(int32_t)id name:(NSString *)name email:(NSString *)email username:(NSString *)username email_verified_at:(NSString * _Nullable)email_verified_at phone:(NSString * _Nullable)phone avatar:(NSString * _Nullable)avatar created_at:(NSString *)created_at updated_at:(NSString *)updated_at __attribute__((swift_name("doCopy(id:name:email:username:email_verified_at:phone:avatar:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString *created_at __attribute__((swift_name("created_at")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable email_verified_at __attribute__((swift_name("email_verified_at")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString *updated_at __attribute__((swift_name("updated_at")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDto.Companion")))
@interface AquisitoCoreUserDtoCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreUserDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant")))
@interface AquisitoCoreApiConstant : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)apiConstant __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstant *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE __attribute__((swift_name("BASE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.Area")))
@interface AquisitoCoreApiConstantArea : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)area __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantArea *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *AVAILABLE_AREAS __attribute__((swift_name("AVAILABLE_AREAS")));
@property (readonly) NSString *CHECK_LOCATION __attribute__((swift_name("CHECK_LOCATION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.Auth")))
@interface AquisitoCoreApiConstantAuth : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)auth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantAuth *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *FORGOT_PASSWORD __attribute__((swift_name("FORGOT_PASSWORD")));
@property (readonly) NSString *LOGIN __attribute__((swift_name("LOGIN")));
@property (readonly) NSString *LOGIN_SOCIAL __attribute__((swift_name("LOGIN_SOCIAL")));
@property (readonly) NSString *LOGOUT __attribute__((swift_name("LOGOUT")));
@property (readonly) NSString *RESET_PASSWORD __attribute__((swift_name("RESET_PASSWORD")));
@property (readonly) NSString *SIGN_UP __attribute__((swift_name("SIGN_UP")));
@property (readonly) NSString *VERIFY_CODE __attribute__((swift_name("VERIFY_CODE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.Collection")))
@interface AquisitoCoreApiConstantCollection : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)collection __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantCollection *shared __attribute__((swift_name("shared")));
- (NSString *)addPlaceToCollectionCollectionSlug:(NSString *)collectionSlug __attribute__((swift_name("addPlaceToCollection(collectionSlug:)")));
- (NSString *)createCollection __attribute__((swift_name("createCollection()")));
- (NSString *)getCollection __attribute__((swift_name("getCollection()")));
- (NSString *)removeCollectionCollectionSlug:(NSString *)collectionSlug __attribute__((swift_name("removeCollection(collectionSlug:)")));
- (NSString *)removePlaceFromCollectionCollectionSlug:(NSString *)collectionSlug placeSlug:(NSString *)placeSlug __attribute__((swift_name("removePlaceFromCollection(collectionSlug:placeSlug:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.Place")))
@interface AquisitoCoreApiConstantPlace : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)place __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantPlace *shared __attribute__((swift_name("shared")));
- (NSString *)getCartDetailSlug:(NSString *)slug id:(int32_t)id __attribute__((swift_name("getCartDetail(slug:id:)")));
- (NSString *)getPlaceSlug:(NSString *)slug __attribute__((swift_name("getPlace(slug:)")));
@property (readonly) NSString *SEARCH __attribute__((swift_name("SEARCH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.RatingPlace")))
@interface AquisitoCoreApiConstantRatingPlace : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)ratingPlace __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantRatingPlace *shared __attribute__((swift_name("shared")));
- (NSString *)getListSlug:(NSString *)slug __attribute__((swift_name("getList(slug:)")));
- (NSString *)reactToRatingRatingId:(int32_t)ratingId __attribute__((swift_name("reactToRating(ratingId:)")));
- (NSString *)removeToRatingRatingId:(int32_t)ratingId __attribute__((swift_name("removeToRating(ratingId:)")));
- (NSString *)upsertRatingSlug:(NSString *)slug __attribute__((swift_name("upsertRating(slug:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiConstant.User")))
@interface AquisitoCoreApiConstantUser : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)user __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreApiConstantUser *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ME __attribute__((swift_name("ME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AreaApi")))
@interface AquisitoCoreAreaApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvailableAreaByLocationRequest:(AquisitoCoreLatLongRequest *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvailableAreaByLocation(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvailableAreasWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvailableAreas(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthApi")))
@interface AquisitoCoreAuthApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAccountWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAccount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)forgotPasswordRequest:(AquisitoCoreForgotPasswordRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forgotPassword(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginRequest:(AquisitoCoreLoginRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginSocialRequest:(AquisitoCoreSocialLoginRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginSocial(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetPasswordRequest:(AquisitoCoreResetPasswordRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetPassword(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpRequest:(AquisitoCoreSignUpRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUp(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyCodeRequest:(AquisitoCoreVerifyCodeRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyCode(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartApi")))
@interface AquisitoCoreCartApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCartDetailSlug:(NSString *)slug id:(int32_t)id completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCartDetail(slug:id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionApi")))
@interface AquisitoCoreCollectionApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPlaceToCollectionCollectionSlug:(NSString *)collectionSlug placeId:(int32_t)placeId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPlaceToCollection(collectionSlug:placeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createCollectionRequest:(AquisitoCoreCreateCollectionRequestDto *)request completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createCollection(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCollectionWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCollection(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeCollectionCollectionSlug:(NSString *)collectionSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeCollection(collectionSlug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePlaceFromCollectionCollectionSlug:(NSString *)collectionSlug placeSlug:(NSString *)placeSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removePlaceFromCollection(collectionSlug:placeSlug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorHandler")))
@interface AquisitoCoreErrorHandler : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreErrorHandler *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)parseErrorException:(AquisitoCoreKotlinException *)exception completionHandler:(void (^)(AquisitoCoreError * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("parseError(exception:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceApi")))
@interface AquisitoCorePlaceApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlaceDetailSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlaceDetail(slug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlacesQuery:(NSDictionary<NSString *, NSString *> *)query completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlaces(query:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingPlaceApi")))
@interface AquisitoCoreRatingPlaceApi : AquisitoCoreBase
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListRatingSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListRating(slug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactToRatingRatingId:(int32_t)ratingId reactionType:(NSString *)reactionType completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactToRating(ratingId:reactionType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeReactionRatingId:(int32_t)ratingId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeReaction(ratingId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upsertRatingSlug:(NSString *)slug foodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating comment:(NSString * _Nullable)comment images:(NSArray<AquisitoCoreKmpFile *> *)images completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upsertRating(slug:foodRating:serviceRating:ambienceRating:priceRating:comment:images:completionHandler:)")));
@end

__attribute__((swift_name("CollectionRepository")))
@protocol AquisitoCoreCollectionRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPlaceToCollectionCollectionSlug:(NSString *)collectionSlug placeId:(int32_t)placeId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPlaceToCollection(collectionSlug:placeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createCollectionName:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type isPublic:(BOOL)isPublic trackChanges:(BOOL)trackChanges completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createCollection(name:description:type:isPublic:trackChanges:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserCollectionsWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserCollections(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeCollectionCollectionSlug:(NSString *)collectionSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeCollection(collectionSlug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePlaceFromCollectionCollectionSlug:(NSString *)collectionSlug placeSlug:(NSString *)placeSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removePlaceFromCollection(collectionSlug:placeSlug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionRepositoryImpl")))
@interface AquisitoCoreCollectionRepositoryImpl : AquisitoCoreBase <AquisitoCoreCollectionRepository>
- (instancetype)initWithApi:(AquisitoCoreCollectionApi *)api __attribute__((swift_name("init(api:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPlaceToCollectionCollectionSlug:(NSString *)collectionSlug placeId:(int32_t)placeId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addPlaceToCollection(collectionSlug:placeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createCollectionName:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type isPublic:(BOOL)isPublic trackChanges:(BOOL)trackChanges completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createCollection(name:description:type:isPublic:trackChanges:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserCollectionsWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserCollections(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeCollectionCollectionSlug:(NSString *)collectionSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeCollection(collectionSlug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePlaceFromCollectionCollectionSlug:(NSString *)collectionSlug placeSlug:(NSString *)placeSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removePlaceFromCollection(collectionSlug:placeSlug:completionHandler:)")));
@end

__attribute__((swift_name("LocationRepository")))
@protocol AquisitoCoreLocationRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectedDistrictWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelectedDistrict(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectionAndContextWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelectionAndContext(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStoredLocationWithCompletionHandler:(void (^)(AquisitoCoreLocationRepositoryStoredLocationResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStoredLocation(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setSelectedDistrictDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setSelectedDistrict(district:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationRepositoryImpl")))
@interface AquisitoCoreLocationRepositoryImpl : AquisitoCoreBase <AquisitoCoreLocationRepository>
- (instancetype)initWithStorage:(id<AquisitoCoreLocationStorage>)storage __attribute__((swift_name("init(storage:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectedDistrictWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelectedDistrict(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSelectionAndContextWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSelectionAndContext(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStoredLocationWithCompletionHandler:(void (^)(AquisitoCoreLocationRepositoryStoredLocationResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStoredLocation(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setSelectedDistrictDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setSelectedDistrict(district:completionHandler:)")));
@end

__attribute__((swift_name("LocationClient")))
@protocol AquisitoCoreLocationClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getApproxLocationWithCompletionHandler:(void (^)(AquisitoCoreLocationClientResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getApproxLocation(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FakeLocationClient")))
@interface AquisitoCoreFakeLocationClient : AquisitoCoreBase <AquisitoCoreLocationClient>
- (instancetype)initWithPoint:(AquisitoCoreGeoPoint *)point __attribute__((swift_name("init(point:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getApproxLocationWithCompletionHandler:(void (^)(AquisitoCoreLocationClientResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getApproxLocation(completionHandler:)")));
@end

__attribute__((swift_name("LocationClientResult")))
@interface AquisitoCoreLocationClientResult : AquisitoCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationClientResult.PermissionDenied")))
@interface AquisitoCoreLocationClientResultPermissionDenied : AquisitoCoreLocationClientResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)permissionDenied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationClientResultPermissionDenied *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationClientResult.ServicesDisabled")))
@interface AquisitoCoreLocationClientResultServicesDisabled : AquisitoCoreLocationClientResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)servicesDisabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationClientResultServicesDisabled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationClientResult.Success")))
@interface AquisitoCoreLocationClientResultSuccess : AquisitoCoreLocationClientResult
- (instancetype)initWithPoint:(AquisitoCoreGeoPoint *)point __attribute__((swift_name("init(point:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLocationClientResultSuccess *)doCopyPoint:(AquisitoCoreGeoPoint *)point __attribute__((swift_name("doCopy(point:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreGeoPoint *point __attribute__((swift_name("point")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationClientResult.Unknown")))
@interface AquisitoCoreLocationClientResultUnknown : AquisitoCoreLocationClientResult
- (instancetype)initWithDetail:(NSString * _Nullable)detail __attribute__((swift_name("init(detail:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLocationClientResultUnknown *)doCopyDetail:(NSString * _Nullable)detail __attribute__((swift_name("doCopy(detail:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable detail __attribute__((swift_name("detail")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StubLocationClient")))
@interface AquisitoCoreStubLocationClient : AquisitoCoreBase <AquisitoCoreLocationClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getApproxLocationWithCompletionHandler:(void (^)(AquisitoCoreLocationClientResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getApproxLocation(completionHandler:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AquisitoCoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AquisitoCoreKotlinEnum<E> : AquisitoCoreBase <AquisitoCoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingStatus")))
@interface AquisitoCoreRatingStatus : AquisitoCoreKotlinEnum<AquisitoCoreRatingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreRatingStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AquisitoCoreRatingStatus *unrated __attribute__((swift_name("unrated")));
@property (class, readonly) AquisitoCoreRatingStatus *preliminary __attribute__((swift_name("preliminary")));
@property (class, readonly) AquisitoCoreRatingStatus *consolidated __attribute__((swift_name("consolidated")));
+ (AquisitoCoreKotlinArray<AquisitoCoreRatingStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreRatingStatus *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingStatus.Companion")))
@interface AquisitoCoreRatingStatusCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreRatingStatusCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreRatingStatus *)fromStatusStatus:(NSString * _Nullable)status __attribute__((swift_name("fromStatus(status:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationContext")))
@interface AquisitoCoreLocationContext : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)locationContext __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationContext *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearDistrictWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearDistrict(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setDistrictDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setDistrict(district:completionHandler:)")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreSharedFlow> eventsFlow __attribute__((swift_name("eventsFlow")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreStateFlow> stateFlow __attribute__((swift_name("stateFlow")));
@end

__attribute__((swift_name("LocationError")))
@interface AquisitoCoreLocationError : AquisitoCoreBase
- (AquisitoCoreError *)toError __attribute__((swift_name("toError()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationError.DistrictNotFound")))
@interface AquisitoCoreLocationErrorDistrictNotFound : AquisitoCoreLocationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)districtNotFound __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationErrorDistrictNotFound *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationError.PermissionDenied")))
@interface AquisitoCoreLocationErrorPermissionDenied : AquisitoCoreLocationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)permissionDenied __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationErrorPermissionDenied *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationError.ServicesDisabled")))
@interface AquisitoCoreLocationErrorServicesDisabled : AquisitoCoreLocationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)servicesDisabled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationErrorServicesDisabled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationError.Unknown")))
@interface AquisitoCoreLocationErrorUnknown : AquisitoCoreLocationError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationErrorUnknown *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("LocationEvent")))
@interface AquisitoCoreLocationEvent : AquisitoCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationEvent.AllCleared")))
@interface AquisitoCoreLocationEventAllCleared : AquisitoCoreLocationEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)allCleared __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationEventAllCleared *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationEvent.DistrictCleared")))
@interface AquisitoCoreLocationEventDistrictCleared : AquisitoCoreLocationEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)districtCleared __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationEventDistrictCleared *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationEvent.DistrictSet")))
@interface AquisitoCoreLocationEventDistrictSet : AquisitoCoreLocationEvent
- (instancetype)initWithDistrict:(AquisitoCoreDistrict *)district __attribute__((swift_name("init(district:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLocationEventDistrictSet *)doCopyDistrict:(AquisitoCoreDistrict *)district __attribute__((swift_name("doCopy(district:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreDistrict *district __attribute__((swift_name("district")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Amenity")))
@interface AquisitoCoreAmenity : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreAmenity *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthActionResult")))
@interface AquisitoCoreAuthActionResult : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreAuthActionResult *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Author")))
@interface AquisitoCoreAuthor : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug identifier:(NSString *)identifier __attribute__((swift_name("init(id:name:slug:identifier:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreAuthor *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug identifier:(NSString *)identifier __attribute__((swift_name("doCopy(id:name:slug:identifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AvailableArea")))
@interface AquisitoCoreAvailableArea : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvince *)province __attribute__((swift_name("init(id:name:ubigeo:province:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreAvailableArea *)doCopyId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvince *)province __attribute__((swift_name("doCopy(id:name:ubigeo:province:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) AquisitoCoreProvince *province __attribute__((swift_name("province")));
@property (readonly) NSString *ubigeo __attribute__((swift_name("ubigeo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartEntry")))
@interface AquisitoCoreCartEntry : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name image:(NSString *)image categoryCount:(int32_t)categoryCount __attribute__((swift_name("init(id:name:image:categoryCount:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreCartEntry *)doCopyId:(int32_t)id name:(NSString *)name image:(NSString *)image categoryCount:(int32_t)categoryCount __attribute__((swift_name("doCopy(id:name:image:categoryCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t categoryCount __attribute__((swift_name("categoryCount")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Category")))
@interface AquisitoCoreCategory : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreCategory *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Collection")))
@interface AquisitoCoreCollection : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id slug:(NSString *)slug name:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type isPublic:(BOOL)isPublic trackChanges:(BOOL)trackChanges places:(NSArray<AquisitoCorePlace *> *)places createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("init(id:slug:name:description:type:isPublic:trackChanges:places:createdAt:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreCollection *)doCopyId:(int32_t)id slug:(NSString *)slug name:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type isPublic:(BOOL)isPublic trackChanges:(BOOL)trackChanges places:(NSArray<AquisitoCorePlace *> *)places createdAt:(NSString * _Nullable)createdAt __attribute__((swift_name("doCopy(id:slug:name:description:type:isPublic:trackChanges:places:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) BOOL isPublic __attribute__((swift_name("isPublic")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<AquisitoCorePlace *> *places __attribute__((swift_name("places")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@property (readonly) BOOL trackChanges __attribute__((swift_name("trackChanges")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cuisine")))
@interface AquisitoCoreCuisine : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreCuisine *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Department")))
@interface AquisitoCoreDepartment : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreDepartmentCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreDepartment *)doCopyId:(int32_t)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Department.Companion")))
@interface AquisitoCoreDepartmentCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreDepartmentCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("District")))
@interface AquisitoCoreDistrict : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvince * _Nullable)province __attribute__((swift_name("init(id:name:ubigeo:province:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreDistrictCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreDistrict *)doCopyId:(int32_t)id name:(NSString *)name ubigeo:(NSString *)ubigeo province:(AquisitoCoreProvince * _Nullable)province __attribute__((swift_name("doCopy(id:name:ubigeo:province:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) AquisitoCoreProvince * _Nullable province __attribute__((swift_name("province")));
@property (readonly) NSString *ubigeo __attribute__((swift_name("ubigeo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("District.Companion")))
@interface AquisitoCoreDistrictCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreDistrictCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ResultViewState")))
@protocol AquisitoCoreResultViewState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface AquisitoCoreError : AquisitoCoreBase <AquisitoCoreResultViewState>
- (instancetype)initWithMessage:(NSString * _Nullable)message throwable:(AquisitoCoreKotlinThrowable * _Nullable)throwable code:(AquisitoCoreInt * _Nullable)code validationErrors:(NSDictionary<NSString *, NSArray<NSString *> *> *)validationErrors __attribute__((swift_name("init(message:throwable:code:validationErrors:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreError *)doCopyMessage:(NSString * _Nullable)message throwable:(AquisitoCoreKotlinThrowable * _Nullable)throwable code:(AquisitoCoreInt * _Nullable)code validationErrors:(NSDictionary<NSString *, NSArray<NSString *> *> *)validationErrors __attribute__((swift_name("doCopy(message:throwable:code:validationErrors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<NSString *> *)getAllValidationErrors __attribute__((swift_name("getAllValidationErrors()")));
- (NSArray<NSString *> *)getFieldErrorsField:(NSString *)field __attribute__((swift_name("getFieldErrors(field:)")));
- (BOOL)hasFieldErrorField:(NSString *)field __attribute__((swift_name("hasFieldError(field:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) AquisitoCoreKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *validationErrors __attribute__((swift_name("validationErrors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedArea")))
@interface AquisitoCoreGroupedArea : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name city:(AquisitoCoreDepartment *)city areas:(NSArray<AquisitoCoreDistrict *> *)areas __attribute__((swift_name("init(id:name:city:areas:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreGroupedArea *)doCopyId:(int32_t)id name:(NSString *)name city:(AquisitoCoreDepartment *)city areas:(NSArray<AquisitoCoreDistrict *> *)areas __attribute__((swift_name("doCopy(id:name:city:areas:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AquisitoCoreDistrict *> *areas __attribute__((swift_name("areas")));
@property (readonly) AquisitoCoreDepartment *city __attribute__((swift_name("city")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedMenuEntry")))
@interface AquisitoCoreGroupedMenuEntry : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name menuEntries:(NSArray<AquisitoCoreMenuEntry *> *)menuEntries __attribute__((swift_name("init(id:name:menuEntries:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreGroupedMenuEntry *)doCopyId:(int32_t)id name:(NSString *)name menuEntries:(NSArray<AquisitoCoreMenuEntry *> *)menuEntries __attribute__((swift_name("doCopy(id:name:menuEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AquisitoCoreMenuEntry *> *menuEntries __attribute__((swift_name("menuEntries")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageMedia")))
@interface AquisitoCoreImageMedia : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id original:(NSString *)original thumb:(NSString *)thumb optimized:(NSString *)optimized __attribute__((swift_name("init(id:original:thumb:optimized:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreImageMedia *)doCopyId:(int32_t)id original:(NSString *)original thumb:(NSString *)thumb optimized:(NSString *)optimized __attribute__((swift_name("doCopy(id:original:thumb:optimized:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *optimized __attribute__((swift_name("optimized")));
@property (readonly) NSString *original __attribute__((swift_name("original")));
@property (readonly) NSString *thumb __attribute__((swift_name("thumb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link")))
@interface AquisitoCoreLink : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id type:(NSString *)type url:(NSString *)url thumbnailUrl:(NSString * _Nullable)thumbnailUrl __attribute__((swift_name("init(id:type:url:thumbnailUrl:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLink *)doCopyId:(int32_t)id type:(NSString *)type url:(NSString *)url thumbnailUrl:(NSString * _Nullable)thumbnailUrl __attribute__((swift_name("doCopy(id:type:url:thumbnailUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginResult")))
@interface AquisitoCoreLoginResult : AquisitoCoreBase
- (instancetype)initWithAccessToken:(NSString *)accessToken message:(NSString *)message __attribute__((swift_name("init(accessToken:message:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLoginResult *)doCopyAccessToken:(NSString *)accessToken message:(NSString *)message __attribute__((swift_name("doCopy(accessToken:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutResult")))
@interface AquisitoCoreLogoutResult : AquisitoCoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("init(message:data:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLogoutResult *)doCopyMessage:(NSString * _Nullable)message data:(NSString * _Nullable)data __attribute__((swift_name("doCopy(message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Mention")))
@interface AquisitoCoreMention : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id author:(AquisitoCoreAuthor *)author placeId:(AquisitoCoreInt * _Nullable)placeId link:(AquisitoCoreLink * _Nullable)link __attribute__((swift_name("init(id:author:placeId:link:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreMention *)doCopyId:(int32_t)id author:(AquisitoCoreAuthor *)author placeId:(AquisitoCoreInt * _Nullable)placeId link:(AquisitoCoreLink * _Nullable)link __attribute__((swift_name("doCopy(id:author:placeId:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreAuthor *author __attribute__((swift_name("author")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) AquisitoCoreLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) AquisitoCoreInt * _Nullable placeId __attribute__((swift_name("placeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuEntry")))
@interface AquisitoCoreMenuEntry : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name featured:(BOOL)featured description:(NSString *)description price:(double)price image:(NSString * _Nullable)image __attribute__((swift_name("init(id:name:featured:description:price:image:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreMenuEntry *)doCopyId:(int32_t)id name:(NSString *)name featured:(BOOL)featured description:(NSString *)description price:(double)price image:(NSString * _Nullable)image __attribute__((swift_name("doCopy(id:name:featured:description:price:image:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) BOOL featured __attribute__((swift_name("featured")));
@property (readonly) NSString *formattedPrice __attribute__((swift_name("formattedPrice")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) double price __attribute__((swift_name("price")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phone")))
@interface AquisitoCorePhone : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id number:(NSString *)number __attribute__((swift_name("init(id:number:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCorePhone *)doCopyId:(int32_t)id number:(NSString *)number __attribute__((swift_name("doCopy(id:number:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *number __attribute__((swift_name("number")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Place")))
@interface AquisitoCorePlace : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString *)description address:(NSString *)address latitude:(double)latitude longitude:(double)longitude priceRange:(NSString *)priceRange schedule:(NSArray<AquisitoCoreSchedule *> *)schedule logo:(NSString *)logo gallery:(NSArray<NSString *> *)gallery district:(AquisitoCoreDistrict *)district province:(AquisitoCoreProvince *)province department:(AquisitoCoreDepartment *)department cuisines:(NSArray<AquisitoCoreCuisine *> *)cuisines amenities:(NSArray<AquisitoCoreAmenity *> *)amenities phones:(NSArray<AquisitoCorePhone *> *)phones featured:(BOOL)featured links:(NSArray<AquisitoCoreLink *> *)links thumbnailUrl:(NSString * _Nullable)thumbnailUrl createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt mentions:(NSArray<AquisitoCoreMention *> *)mentions restaurantCarts:(NSArray<AquisitoCoreRestaurantCart *> *)restaurantCarts cartEntries:(NSArray<AquisitoCoreCartEntry *> *)cartEntries tags:(NSArray<AquisitoCoreTag *> *)tags categories:(NSArray<AquisitoCoreCategory *> *)categories popularDishes:(NSArray<AquisitoCoreMenuEntry *> *)popularDishes reservations:(NSArray<AquisitoCoreLink *> *)reservations ratingsCount:(int32_t)ratingsCount ratingsAvgScore:(NSString * _Nullable)ratingsAvgScore ratingStatus:(AquisitoCoreRatingStatus *)ratingStatus ratingCategory:(NSString * _Nullable)ratingCategory ratings:(NSArray<AquisitoCoreRating *> *)ratings __attribute__((swift_name("init(id:name:slug:description:address:latitude:longitude:priceRange:schedule:logo:gallery:district:province:department:cuisines:amenities:phones:featured:links:thumbnailUrl:createdAt:updatedAt:mentions:restaurantCarts:cartEntries:tags:categories:popularDishes:reservations:ratingsCount:ratingsAvgScore:ratingStatus:ratingCategory:ratings:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCorePlace *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug description:(NSString *)description address:(NSString *)address latitude:(double)latitude longitude:(double)longitude priceRange:(NSString *)priceRange schedule:(NSArray<AquisitoCoreSchedule *> *)schedule logo:(NSString *)logo gallery:(NSArray<NSString *> *)gallery district:(AquisitoCoreDistrict *)district province:(AquisitoCoreProvince *)province department:(AquisitoCoreDepartment *)department cuisines:(NSArray<AquisitoCoreCuisine *> *)cuisines amenities:(NSArray<AquisitoCoreAmenity *> *)amenities phones:(NSArray<AquisitoCorePhone *> *)phones featured:(BOOL)featured links:(NSArray<AquisitoCoreLink *> *)links thumbnailUrl:(NSString * _Nullable)thumbnailUrl createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt mentions:(NSArray<AquisitoCoreMention *> *)mentions restaurantCarts:(NSArray<AquisitoCoreRestaurantCart *> *)restaurantCarts cartEntries:(NSArray<AquisitoCoreCartEntry *> *)cartEntries tags:(NSArray<AquisitoCoreTag *> *)tags categories:(NSArray<AquisitoCoreCategory *> *)categories popularDishes:(NSArray<AquisitoCoreMenuEntry *> *)popularDishes reservations:(NSArray<AquisitoCoreLink *> *)reservations ratingsCount:(int32_t)ratingsCount ratingsAvgScore:(NSString * _Nullable)ratingsAvgScore ratingStatus:(AquisitoCoreRatingStatus *)ratingStatus ratingCategory:(NSString * _Nullable)ratingCategory ratings:(NSArray<AquisitoCoreRating *> *)ratings __attribute__((swift_name("doCopy(id:name:slug:description:address:latitude:longitude:priceRange:schedule:logo:gallery:district:province:department:cuisines:amenities:phones:featured:links:thumbnailUrl:createdAt:updatedAt:mentions:restaurantCarts:cartEntries:tags:categories:popularDishes:reservations:ratingsCount:ratingsAvgScore:ratingStatus:ratingCategory:ratings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *address __attribute__((swift_name("address")));
@property (readonly) NSArray<AquisitoCoreAmenity *> *amenities __attribute__((swift_name("amenities")));
@property (readonly) NSArray<AquisitoCoreCartEntry *> *cartEntries __attribute__((swift_name("cartEntries")));
@property (readonly) NSArray<AquisitoCoreCategory *> *categories __attribute__((swift_name("categories")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSArray<AquisitoCoreCuisine *> *cuisines __attribute__((swift_name("cuisines")));
@property (readonly) AquisitoCoreDepartment *department __attribute__((swift_name("department")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) AquisitoCoreDistrict *district __attribute__((swift_name("district")));
@property (readonly) BOOL featured __attribute__((swift_name("featured")));
@property (readonly) NSArray<NSString *> *gallery __attribute__((swift_name("gallery")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) NSArray<AquisitoCoreLink *> *links __attribute__((swift_name("links")));
@property (readonly) NSString *logo __attribute__((swift_name("logo")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSArray<AquisitoCoreMention *> *mentions __attribute__((swift_name("mentions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<AquisitoCorePhone *> *phones __attribute__((swift_name("phones")));
@property (readonly) NSArray<AquisitoCoreMenuEntry *> *popularDishes __attribute__((swift_name("popularDishes")));
@property (readonly) NSString *priceRange __attribute__((swift_name("priceRange")));
@property (readonly) AquisitoCoreProvince *province __attribute__((swift_name("province")));
@property (readonly) NSString * _Nullable ratingCategory __attribute__((swift_name("ratingCategory")));
@property (readonly) AquisitoCoreRatingStatus *ratingStatus __attribute__((swift_name("ratingStatus")));
@property (readonly) NSArray<AquisitoCoreRating *> *ratings __attribute__((swift_name("ratings")));
@property (readonly) NSString * _Nullable ratingsAvgScore __attribute__((swift_name("ratingsAvgScore")));
@property (readonly) int32_t ratingsCount __attribute__((swift_name("ratingsCount")));
@property (readonly) NSArray<AquisitoCoreLink *> *reservations __attribute__((swift_name("reservations")));
@property (readonly) NSArray<AquisitoCoreRestaurantCart *> *restaurantCarts __attribute__((swift_name("restaurantCarts")));
@property (readonly) NSArray<AquisitoCoreSchedule *> *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@property (readonly) AquisitoCorePlaceStatus *status __attribute__((swift_name("status")));
@property (readonly) NSArray<AquisitoCoreTag *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceStatus")))
@interface AquisitoCorePlaceStatus : AquisitoCoreKotlinEnum<AquisitoCorePlaceStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCorePlaceStatus *open __attribute__((swift_name("open")));
@property (class, readonly) AquisitoCorePlaceStatus *closed __attribute__((swift_name("closed")));
@property (class, readonly) AquisitoCorePlaceStatus *opensSoon __attribute__((swift_name("opensSoon")));
@property (class, readonly) AquisitoCorePlaceStatus *closesSoon __attribute__((swift_name("closesSoon")));
+ (AquisitoCoreKotlinArray<AquisitoCorePlaceStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCorePlaceStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Province")))
@interface AquisitoCoreProvince : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name department:(AquisitoCoreDepartment * _Nullable)department __attribute__((swift_name("init(id:name:department:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreProvinceCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreProvince *)doCopyId:(int32_t)id name:(NSString *)name department:(AquisitoCoreDepartment * _Nullable)department __attribute__((swift_name("doCopy(id:name:department:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreDepartment * _Nullable department __attribute__((swift_name("department")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Province.Companion")))
@interface AquisitoCoreProvinceCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreProvinceCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rating")))
@interface AquisitoCoreRating : AquisitoCoreBase
- (instancetype)initWithFoodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating comment:(NSString * _Nullable)comment __attribute__((swift_name("init(foodRating:serviceRating:ambienceRating:priceRating:comment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id foodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating overallScore:(NSString *)overallScore comment:(NSString * _Nullable)comment isFeatured:(BOOL)isFeatured likesCount:(int32_t)likesCount dislikesCount:(int32_t)dislikesCount images:(NSArray<AquisitoCoreImageMedia *> *)images user:(AquisitoCoreUser * _Nullable)user userReaction:(NSString * _Nullable)userReaction createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("init(id:foodRating:serviceRating:ambienceRating:priceRating:overallScore:comment:isFeatured:likesCount:dislikesCount:images:user:userReaction:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreRating *)doCopyId:(int32_t)id foodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating overallScore:(NSString *)overallScore comment:(NSString * _Nullable)comment isFeatured:(BOOL)isFeatured likesCount:(int32_t)likesCount dislikesCount:(int32_t)dislikesCount images:(NSArray<AquisitoCoreImageMedia *> *)images user:(AquisitoCoreUser * _Nullable)user userReaction:(NSString * _Nullable)userReaction createdAt:(NSString * _Nullable)createdAt updatedAt:(NSString * _Nullable)updatedAt __attribute__((swift_name("doCopy(id:foodRating:serviceRating:ambienceRating:priceRating:overallScore:comment:isFeatured:likesCount:dislikesCount:images:user:userReaction:createdAt:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t ambienceRating __attribute__((swift_name("ambienceRating")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int32_t dislikesCount __attribute__((swift_name("dislikesCount")));
@property (readonly) int32_t foodRating __attribute__((swift_name("foodRating")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<AquisitoCoreImageMedia *> *images __attribute__((swift_name("images")));
@property (readonly) BOOL isFeatured __attribute__((swift_name("isFeatured")));
@property (readonly) int32_t likesCount __attribute__((swift_name("likesCount")));
@property (readonly) NSString *overallScore __attribute__((swift_name("overallScore")));
@property (readonly) int32_t priceRating __attribute__((swift_name("priceRating")));
@property (readonly) int32_t serviceRating __attribute__((swift_name("serviceRating")));
@property (readonly) NSString * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) AquisitoCoreUser * _Nullable user __attribute__((swift_name("user")));
@property (readonly) NSString * _Nullable userReaction __attribute__((swift_name("userReaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReactionType")))
@interface AquisitoCoreReactionType : AquisitoCoreKotlinEnum<AquisitoCoreReactionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreReactionType *like __attribute__((swift_name("like")));
@property (class, readonly) AquisitoCoreReactionType *dislike __attribute__((swift_name("dislike")));
+ (AquisitoCoreKotlinArray<AquisitoCoreReactionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreReactionType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestaurantCart")))
@interface AquisitoCoreRestaurantCart : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name placeId:(AquisitoCoreInt * _Nullable)placeId link:(AquisitoCoreLink * _Nullable)link __attribute__((swift_name("init(id:name:placeId:link:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreRestaurantCart *)doCopyId:(int32_t)id name:(NSString *)name placeId:(AquisitoCoreInt * _Nullable)placeId link:(AquisitoCoreLink * _Nullable)link __attribute__((swift_name("doCopy(id:name:placeId:link:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) AquisitoCoreLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) AquisitoCoreInt * _Nullable placeId __attribute__((swift_name("placeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule")))
@interface AquisitoCoreSchedule : AquisitoCoreBase
- (instancetype)initWithDayOfWeek:(NSString *)dayOfWeek opens:(NSString *)opens closes:(NSString *)closes __attribute__((swift_name("init(dayOfWeek:opens:closes:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreSchedule *)doCopyDayOfWeek:(NSString *)dayOfWeek opens:(NSString *)opens closes:(NSString *)closes __attribute__((swift_name("doCopy(dayOfWeek:opens:closes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *closes __attribute__((swift_name("closes")));
@property (readonly) NSString *closesFormatted __attribute__((swift_name("closesFormatted")));
@property (readonly) NSString *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) BOOL isToday __attribute__((swift_name("isToday")));
@property (readonly) NSString *opens __attribute__((swift_name("opens")));
@property (readonly) NSString *opensFormatted __attribute__((swift_name("opensFormatted")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpResult")))
@interface AquisitoCoreSignUpResult : AquisitoCoreBase
- (instancetype)initWithUser:(AquisitoCoreUser *)user accessToken:(NSString *)accessToken __attribute__((swift_name("init(user:accessToken:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreSignUpResult *)doCopyUser:(AquisitoCoreUser *)user accessToken:(NSString *)accessToken __attribute__((swift_name("doCopy(user:accessToken:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) AquisitoCoreUser *user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginResult")))
@interface AquisitoCoreSocialLoginResult : AquisitoCoreBase
- (instancetype)initWithAccessToken:(NSString *)accessToken message:(NSString *)message __attribute__((swift_name("init(accessToken:message:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreSocialLoginResult *)doCopyAccessToken:(NSString *)accessToken message:(NSString *)message __attribute__((swift_name("doCopy(accessToken:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Success")))
@interface AquisitoCoreSuccess<__covariant T> : AquisitoCoreBase <AquisitoCoreResultViewState>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag")))
@interface AquisitoCoreTag : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("init(id:name:slug:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreTag *)doCopyId:(int32_t)id name:(NSString *)name slug:(NSString *)slug __attribute__((swift_name("doCopy(id:name:slug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *slug __attribute__((swift_name("slug")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface AquisitoCoreUser : AquisitoCoreBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name email:(NSString *)email username:(NSString *)username emailVerifiedAt:(NSString * _Nullable)emailVerifiedAt phone:(NSString *)phone avatar:(NSString * _Nullable)avatar createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("init(id:name:email:username:emailVerifiedAt:phone:avatar:createdAt:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreUserCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreUser *)doCopyId:(int32_t)id name:(NSString *)name email:(NSString *)email username:(NSString *)username emailVerifiedAt:(NSString * _Nullable)emailVerifiedAt phone:(NSString *)phone avatar:(NSString * _Nullable)avatar createdAt:(NSString *)createdAt updatedAt:(NSString *)updatedAt __attribute__((swift_name("doCopy(id:name:email:username:emailVerifiedAt:phone:avatar:createdAt:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable emailVerifiedAt __attribute__((swift_name("emailVerifiedAt")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *phone __attribute__((swift_name("phone")));
@property (readonly) NSString *updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface AquisitoCoreUserCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreUserCompanion *shared __attribute__((swift_name("shared")));
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPoint")))
@interface AquisitoCoreGeoPoint : AquisitoCoreBase
- (instancetype)initWithLat:(double)lat lon:(double)lon __attribute__((swift_name("init(lat:lon:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreGeoPoint *)doCopyLat:(double)lat lon:(double)lon __attribute__((swift_name("doCopy(lat:lon:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationState")))
@interface AquisitoCoreLocationState : AquisitoCoreBase
- (instancetype)initWithDistrict:(AquisitoCoreDistrict * _Nullable)district __attribute__((swift_name("init(district:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLocationState *)doCopyDistrict:(AquisitoCoreDistrict * _Nullable)district __attribute__((swift_name("doCopy(district:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreDistrict * _Nullable district __attribute__((swift_name("district")));
@property (readonly) BOOL hasDistrict __attribute__((swift_name("hasDistrict")));
@end

__attribute__((swift_name("AreaRepository")))
@protocol AquisitoCoreAreaRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvailableAreaByLocationLatitude:(double)latitude longitude:(double)longitude completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvailableAreaByLocation(latitude:longitude:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvailableAreasWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvailableAreas(completionHandler:)")));
@end

__attribute__((swift_name("AuthRepository")))
@protocol AquisitoCoreAuthRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAccountWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAccount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)forgotPasswordEmail:(NSString *)email completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forgotPassword(email:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(email:password:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginSocialSocialDriver:(NSString *)socialDriver socialToken:(NSString *)socialToken completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginSocial(socialDriver:socialToken:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetPasswordEmail:(NSString *)email code:(NSString *)code password:(NSString *)password passwordConfirmation:(NSString *)passwordConfirmation completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resetPassword(email:code:password:passwordConfirmation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)signUpName:(NSString *)name email:(NSString *)email username:(NSString *)username phone:(NSString *)phone password:(NSString * _Nullable)password avatar:(NSString * _Nullable)avatar completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signUp(name:email:username:phone:password:avatar:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyCodeEmail:(NSString *)email code:(NSString *)code completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyCode(email:code:completionHandler:)")));
@end

__attribute__((swift_name("CartRepository")))
@protocol AquisitoCoreCartRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCartDetailSlug:(NSString *)slug id:(int32_t)id completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCartDetail(slug:id:completionHandler:)")));
@end

__attribute__((swift_name("LocationRepositoryStoredLocationResult")))
@interface AquisitoCoreLocationRepositoryStoredLocationResult : AquisitoCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationRepositoryStoredLocationResult.Missing")))
@interface AquisitoCoreLocationRepositoryStoredLocationResultMissing : AquisitoCoreLocationRepositoryStoredLocationResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)missing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreLocationRepositoryStoredLocationResultMissing *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationRepositoryStoredLocationResult.Valid")))
@interface AquisitoCoreLocationRepositoryStoredLocationResultValid : AquisitoCoreLocationRepositoryStoredLocationResult
- (instancetype)initWithDistrict:(AquisitoCoreDistrict *)district __attribute__((swift_name("init(district:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreLocationRepositoryStoredLocationResultValid *)doCopyDistrict:(AquisitoCoreDistrict *)district __attribute__((swift_name("doCopy(district:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreDistrict *district __attribute__((swift_name("district")));
@end

__attribute__((swift_name("OnboardingRepository")))
@protocol AquisitoCoreOnboardingRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasCompletedOnboardingWithCompletionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasCompletedOnboarding(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)markOnboardingCompletedWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("markOnboardingCompleted(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resetOnboardingWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("resetOnboarding(completionHandler:)")));
@end

__attribute__((swift_name("PlaceRepository")))
@protocol AquisitoCorePlaceRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlaceDetailSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlaceDetail(slug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlacesQuery:(NSDictionary<NSString *, NSString *> *)query completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlaces(query:completionHandler:)")));
@end

__attribute__((swift_name("RatingPlaceRepository")))
@protocol AquisitoCoreRatingPlaceRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getListRatingsSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getListRatings(slug:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactToRatingRatingId:(int32_t)ratingId reactionType:(NSString *)reactionType completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactToRating(ratingId:reactionType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeToReactionRatingId:(int32_t)ratingId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeToReaction(ratingId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upsertRatingSlug:(NSString *)slug foodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating comment:(NSString * _Nullable)comment images:(NSArray<AquisitoCoreKmpFile *> *)images completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upsertRating(slug:foodRating:serviceRating:ambienceRating:priceRating:comment:images:completionHandler:)")));
@end

__attribute__((swift_name("UserRepository")))
@protocol AquisitoCoreUserRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserDataWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserDataOnContextWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserDataOnContext(completionHandler:)")));
@end

__attribute__((swift_name("AuthEvent")))
@interface AquisitoCoreAuthEvent : AquisitoCoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthEvent.LoggedIn")))
@interface AquisitoCoreAuthEventLoggedIn : AquisitoCoreAuthEvent
- (instancetype)initWithUser:(AquisitoCoreUser * _Nullable)user __attribute__((swift_name("init(user:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreAuthEventLoggedIn *)doCopyUser:(AquisitoCoreUser * _Nullable)user __attribute__((swift_name("doCopy(user:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreUser * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthEvent.LoggedOut")))
@interface AquisitoCoreAuthEventLoggedOut : AquisitoCoreAuthEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loggedOut __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreAuthEventLoggedOut *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("SessionManager")))
@protocol AquisitoCoreSessionManager
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSessionWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSession(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccessTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentUserWithCompletionHandler:(void (^)(AquisitoCoreUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isLoggedInWithCompletionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isLoggedIn(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyLoggedInUser:(AquisitoCoreUser * _Nullable)user completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyLoggedIn(user:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUser:(AquisitoCoreUser *)user completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(user:completionHandler:)")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreSharedFlow> eventsFlow __attribute__((swift_name("eventsFlow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionManagerImpl")))
@interface AquisitoCoreSessionManagerImpl : AquisitoCoreBase <AquisitoCoreSessionManager>
- (instancetype)initWithLocalDataSource:(id<AquisitoCoreAuthLocalDataSource>)localDataSource __attribute__((swift_name("init(localDataSource:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearSessionWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearSession(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccessTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccessToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentUserWithCompletionHandler:(void (^)(AquisitoCoreUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isLoggedInWithCompletionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isLoggedIn(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notifyLoggedInUser:(AquisitoCoreUser * _Nullable)user completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("notifyLoggedIn(user:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUser:(AquisitoCoreUser *)user completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(user:completionHandler:)")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreSharedFlow> eventsFlow __attribute__((swift_name("eventsFlow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAvailableAreaByLocationUseCase")))
@interface AquisitoCoreGetAvailableAreaByLocationUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAreaRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeLatitude:(double)latitude longitude:(double)longitude completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(latitude:longitude:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAvailableAreasUseCase")))
@interface AquisitoCoreGetAvailableAreasUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAreaRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAccountUseCase")))
@interface AquisitoCoreDeleteAccountUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasswordUseCase")))
@interface AquisitoCoreForgotPasswordUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginUseCase")))
@interface AquisitoCoreLoginUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:password:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutUseCase")))
@interface AquisitoCoreLogoutUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResetPasswordUseCase")))
@interface AquisitoCoreResetPasswordUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email code:(NSString *)code password:(NSString *)password passwordConfirmation:(NSString *)passwordConfirmation completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:code:password:passwordConfirmation:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpUseCase")))
@interface AquisitoCoreSignUpUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeName:(NSString *)name email:(NSString *)email username:(NSString *)username phone:(NSString *)phone password:(NSString * _Nullable)password avatar:(NSString * _Nullable)avatar completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(name:email:username:phone:password:avatar:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocialLoginUseCase")))
@interface AquisitoCoreSocialLoginUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSocialDriver:(NSString *)socialDriver socialToken:(NSString *)socialToken completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(socialDriver:socialToken:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyCodeUseCase")))
@interface AquisitoCoreVerifyCodeUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreAuthRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeEmail:(NSString *)email code:(NSString *)code completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(email:code:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCartDetailUseCase")))
@interface AquisitoCoreGetCartDetailUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCartRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSlug:(NSString *)slug id:(int32_t)id completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(slug:id:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPlaceToCollectionUseCase")))
@interface AquisitoCoreAddPlaceToCollectionUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCollectionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCollectionSlug:(NSString *)collectionSlug placeId:(int32_t)placeId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(collectionSlug:placeId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateCollectionUseCase")))
@interface AquisitoCoreCreateCollectionUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCollectionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeName:(NSString *)name description:(NSString * _Nullable)description type:(NSString *)type isPublic:(BOOL)isPublic trackChanges:(BOOL)trackChanges completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(name:description:type:isPublic:trackChanges:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserCollectionsUseCase")))
@interface AquisitoCoreGetUserCollectionsUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCollectionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveCollectionUseCase")))
@interface AquisitoCoreRemoveCollectionUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCollectionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCollectionSlug:(NSString *)collectionSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(collectionSlug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemovePlaceFromCollectionUseCase")))
@interface AquisitoCoreRemovePlaceFromCollectionUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreCollectionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCollectionSlug:(NSString *)collectionSlug placeSlug:(NSString *)placeSlug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(collectionSlug:placeSlug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckUserLocationUseCase")))
@interface AquisitoCoreCheckUserLocationUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreLocationRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EnsureSetLocationUserUseCase")))
@interface AquisitoCoreEnsureSetLocationUserUseCase : AquisitoCoreBase
- (instancetype)initWithLocationClient:(id<AquisitoCoreLocationClient>)locationClient getAvailableAreaByLocationUseCase:(AquisitoCoreGetAvailableAreaByLocationUseCase *)getAvailableAreaByLocationUseCase setLocationOnContextUseCase:(AquisitoCoreSetLocationOnContextUseCase *)setLocationOnContextUseCase __attribute__((swift_name("init(locationClient:getAvailableAreaByLocationUseCase:setLocationOnContextUseCase:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetLocationOnContextUseCase")))
@interface AquisitoCoreSetLocationOnContextUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreLocationRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeDistrict:(AquisitoCoreDistrict *)district completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(district:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetOnboardingStatusUseCase")))
@interface AquisitoCoreGetOnboardingStatusUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreOnboardingRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarkOnboardingCompletedUseCase")))
@interface AquisitoCoreMarkOnboardingCompletedUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreOnboardingRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPlaceDetailUseCase")))
@interface AquisitoCoreGetPlaceDetailUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCorePlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(slug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPlacesUseCase")))
@interface AquisitoCoreGetPlacesUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCorePlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeQuery:(NSDictionary<NSString *, NSString *> *)query completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(query:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetListRatingsUseCase")))
@interface AquisitoCoreGetListRatingsUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreRatingPlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSlug:(NSString *)slug completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(slug:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReactRatingUseCase")))
@interface AquisitoCoreReactRatingUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreRatingPlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeRatingId:(int32_t)ratingId reactionType:(AquisitoCoreReactionType *)reactionType completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(ratingId:reactionType:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveReactionUseCase")))
@interface AquisitoCoreRemoveReactionUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreRatingPlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeRatingId:(int32_t)ratingId completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(ratingId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpsertRatingUseCase")))
@interface AquisitoCoreUpsertRatingUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreRatingPlaceRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeSlug:(NSString *)slug foodRating:(int32_t)foodRating serviceRating:(int32_t)serviceRating ambienceRating:(int32_t)ambienceRating priceRating:(int32_t)priceRating comment:(NSString * _Nullable)comment images:(NSArray<AquisitoCoreKmpFile *> *)images completionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(slug:foodRating:serviceRating:ambienceRating:priceRating:comment:images:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserDataOnContextUseCase")))
@interface AquisitoCoreGetUserDataOnContextUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreUserRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserDataUseCase")))
@interface AquisitoCoreGetUserDataUseCase : AquisitoCoreBase
- (instancetype)initWithRepository:(id<AquisitoCoreUserRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<AquisitoCoreResultViewState> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Clock")))
@protocol AquisitoCoreClock
@required
- (int64_t)nowMillis __attribute__((swift_name("nowMillis()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface AquisitoCoreCurrency : AquisitoCoreBase
- (instancetype)initWithCode:(NSString *)code symbol:(NSString *)symbol name:(NSString *)name decimalPlaces:(int32_t)decimalPlaces symbolPosition:(AquisitoCoreCurrencySymbolPosition *)symbolPosition __attribute__((swift_name("init(code:symbol:name:decimalPlaces:symbolPosition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreCurrencyCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreCurrency *)doCopyCode:(NSString *)code symbol:(NSString *)symbol name:(NSString *)name decimalPlaces:(int32_t)decimalPlaces symbolPosition:(AquisitoCoreCurrencySymbolPosition *)symbolPosition __attribute__((swift_name("doCopy(code:symbol:name:decimalPlaces:symbolPosition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) int32_t decimalPlaces __attribute__((swift_name("decimalPlaces")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
@property (readonly) AquisitoCoreCurrencySymbolPosition *symbolPosition __attribute__((swift_name("symbolPosition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface AquisitoCoreCurrencyCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCurrencyCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreCurrency * _Nullable)fromCodeCode:(NSString *)code __attribute__((swift_name("fromCode(code:)")));
@property (readonly) AquisitoCoreCurrency *EUR __attribute__((swift_name("EUR")));
@property (readonly) AquisitoCoreCurrency *PEN __attribute__((swift_name("PEN")));
@property (readonly) AquisitoCoreCurrency *USD __attribute__((swift_name("USD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.SymbolPosition")))
@interface AquisitoCoreCurrencySymbolPosition : AquisitoCoreKotlinEnum<AquisitoCoreCurrencySymbolPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreCurrencySymbolPosition *before __attribute__((swift_name("before")));
@property (class, readonly) AquisitoCoreCurrencySymbolPosition *after __attribute__((swift_name("after")));
+ (AquisitoCoreKotlinArray<AquisitoCoreCurrencySymbolPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreCurrencySymbolPosition *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyManager")))
@interface AquisitoCoreCurrencyManager : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)currencyManager __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreCurrencyManager *shared __attribute__((swift_name("shared")));
- (AquisitoCoreCurrency *)getDefaultCurrency __attribute__((swift_name("getDefaultCurrency()")));
- (void)setDefaultCurrencyCurrency:(AquisitoCoreCurrency *)currency __attribute__((swift_name("setDefaultCurrency(currency:)")));
- (BOOL)setDefaultCurrencyByCodeCode:(NSString *)code __attribute__((swift_name("setDefaultCurrencyByCode(code:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SystemClock")))
@interface AquisitoCoreSystemClock : AquisitoCoreBase <AquisitoCoreClock>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)systemClock __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreSystemClock *shared __attribute__((swift_name("shared")));
- (int64_t)nowMillis __attribute__((swift_name("nowMillis()")));
@end

@interface AquisitoCoreAmenityDto (Extensions)
- (AquisitoCoreAmenity *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreAuthorDto (Extensions)
- (AquisitoCoreAuthor *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreAvailableAreaDto (Extensions)
- (AquisitoCoreAvailableArea *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreCartEntryDto (Extensions)
- (AquisitoCoreCartEntry *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreCategoryDto (Extensions)
- (AquisitoCoreCategory *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreCollectionDto (Extensions)
- (AquisitoCoreCollection *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreDepartmentDto (Extensions)
- (AquisitoCoreDepartment *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreDistrictDto (Extensions)
- (AquisitoCoreDistrict *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreGroupedAreaDto (Extensions)
- (AquisitoCoreGroupedArea *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreGroupedMenuEntryDto (Extensions)
- (AquisitoCoreGroupedMenuEntry *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreImageMediaDto (Extensions)
- (AquisitoCoreImageMedia *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreLinkDto (Extensions)
- (AquisitoCoreLink *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreMentionDto (Extensions)
- (AquisitoCoreMention *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreMenuEntryDto (Extensions)
- (AquisitoCoreMenuEntry *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCorePhoneDto (Extensions)
- (AquisitoCorePhone *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCorePlaceDetailDto (Extensions)
- (AquisitoCorePlace *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCorePlaceDto (Extensions)
- (AquisitoCorePlace *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreProvinceDto (Extensions)
- (AquisitoCoreProvince *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreRatingDto (Extensions)
- (AquisitoCoreRating *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreRestaurantCartDto (Extensions)
- (AquisitoCoreRestaurantCart *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreScheduleDto (Extensions)
- (AquisitoCoreSchedule *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreSignUpDataDto (Extensions)
- (AquisitoCoreSignUpResult *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreSocialLoginDataDto (Extensions)
- (AquisitoCoreSocialLoginResult *)toDomainMessage:(NSString *)message __attribute__((swift_name("toDomain(message:)")));
@end

@interface AquisitoCoreTagDto (Extensions)
- (AquisitoCoreTag *)toDomain __attribute__((swift_name("toDomain()")));
@end

@interface AquisitoCoreUserDto (Extensions)
- (AquisitoCoreUser *)toDomain __attribute__((swift_name("toDomain()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AreaModuleKt")))
@interface AquisitoCoreAreaModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *areaModule __attribute__((swift_name("areaModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationModuleKt")))
@interface AquisitoCoreAuthenticationModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *authenticationModule __attribute__((swift_name("authenticationModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CartModuleKt")))
@interface AquisitoCoreCartModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *cartModule __attribute__((swift_name("cartModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionModuleKt")))
@interface AquisitoCoreCollectionModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *collectionModule __attribute__((swift_name("collectionModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreModuleKt")))
@interface AquisitoCoreCoreModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *coreModule __attribute__((swift_name("coreModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CurrencyFormatterKt")))
@interface AquisitoCoreCurrencyFormatterKt : AquisitoCoreBase
+ (NSString *)toCurrencyString:(double)receiver currency:(AquisitoCoreCurrency * _Nullable)currency __attribute__((swift_name("toCurrencyString(_:currency:)")));
+ (NSString *)toCurrencyString:(float)receiver currency_:(AquisitoCoreCurrency * _Nullable)currency __attribute__((swift_name("toCurrencyString(_:currency_:)")));
+ (NSString *)toCurrencyString:(int32_t)receiver currency__:(AquisitoCoreCurrency * _Nullable)currency __attribute__((swift_name("toCurrencyString(_:currency__:)")));
+ (NSString *)toCurrencyString:(NSString *)receiver currency___:(AquisitoCoreCurrency * _Nullable)currency __attribute__((swift_name("toCurrencyString(_:currency___:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateTime_iosKt")))
@interface AquisitoCoreDateTime_iosKt : AquisitoCoreBase
+ (NSString *)getCurrentDayOfWeek __attribute__((swift_name("getCurrentDayOfWeek()")));
+ (AquisitoCoreKotlinPair<AquisitoCoreInt *, AquisitoCoreInt *> *)getCurrentTime __attribute__((swift_name("getCurrentTime()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HaversineKt")))
@interface AquisitoCoreHaversineKt : AquisitoCoreBase
+ (double)haversineMetersA:(AquisitoCoreGeoPoint *)a b:(AquisitoCoreGeoPoint *)b __attribute__((swift_name("haversineMeters(a:b:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosLocationClientKt")))
@interface AquisitoCoreIosLocationClientKt : AquisitoCoreBase
+ (id<AquisitoCoreLocationClient>)createLocationClientPlatformContext:(AquisitoCorePlatformContext *)platformContext __attribute__((swift_name("createLocationClient(platformContext:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyValueStorageFactoryKt")))
@interface AquisitoCoreKeyValueStorageFactoryKt : AquisitoCoreBase
+ (id<AquisitoCoreKeyValueStorage>)createKeyValueStorageContext:(AquisitoCorePlatformContext *)context __attribute__((swift_name("createKeyValueStorage(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinStarterKt")))
@interface AquisitoCoreKoinStarterKt : AquisitoCoreBase
+ (void)doInitKoinAndAppPlatformContext:(AquisitoCorePlatformContext *)platformContext currencyCode:(NSString * _Nullable)currencyCode appDeclaration:(void (^)(AquisitoCoreKoin_coreKoinApplication *))appDeclaration __attribute__((swift_name("doInitKoinAndApp(platformContext:currencyCode:appDeclaration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationConstantsKt")))
@interface AquisitoCoreLocationConstantsKt : AquisitoCoreBase
@property (class, readonly) double DEFAULT_MATCH_RADIUS_M __attribute__((swift_name("DEFAULT_MATCH_RADIUS_M")));
@property (class, readonly) int64_t LOCATION_TTL_MS __attribute__((swift_name("LOCATION_TTL_MS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationModuleKt")))
@interface AquisitoCoreLocationModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *locationModule __attribute__((swift_name("locationModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModuleKt")))
@interface AquisitoCoreNetworkModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *networkModule __attribute__((swift_name("networkModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaceModuleKt")))
@interface AquisitoCorePlaceModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *placeModule __attribute__((swift_name("placeModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface AquisitoCorePlatform_iosKt : AquisitoCoreBase
+ (id<AquisitoCorePlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@property (class, readonly) BOOL isDebugBuild __attribute__((swift_name("isDebugBuild")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface AquisitoCorePlatformKt : AquisitoCoreBase
+ (void)doInitLogger __attribute__((swift_name("doInitLogger()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RatingPlaceModuleKt")))
@interface AquisitoCoreRatingPlaceModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *ratingPlaceModule __attribute__((swift_name("ratingPlaceModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserModuleKt")))
@interface AquisitoCoreUserModuleKt : AquisitoCoreBase
@property (class, readonly) AquisitoCoreKoin_coreModule *userModule __attribute__((swift_name("userModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AquisitoCoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AquisitoCoreKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol AquisitoCoreKtor_client_coreHttpClientEngine <AquisitoCoreKotlinx_coroutines_coreCoroutineScope, AquisitoCoreKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(AquisitoCoreKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(AquisitoCoreKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) AquisitoCoreKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<AquisitoCoreKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface AquisitoCoreKotlinThrowable : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (AquisitoCoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface AquisitoCoreKotlinException : AquisitoCoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface AquisitoCoreKotlinRuntimeException : AquisitoCoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AquisitoCoreKotlinIllegalStateException : AquisitoCoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface AquisitoCoreKotlinCancellationException : AquisitoCoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface AquisitoCoreKtor_client_coreHttpClient : AquisitoCoreBase <AquisitoCoreKotlinx_coroutines_coreCoroutineScope, AquisitoCoreKtor_ioCloseable>
- (instancetype)initWithEngine:(id<AquisitoCoreKtor_client_coreHttpClientEngine>)engine userConfig:(AquisitoCoreKtor_client_coreHttpClientConfig<AquisitoCoreKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (AquisitoCoreKtor_client_coreHttpClient *)configBlock:(void (^)(AquisitoCoreKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<AquisitoCoreKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<AquisitoCoreKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) AquisitoCoreKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) AquisitoCoreKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) AquisitoCoreKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AquisitoCoreKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) AquisitoCoreKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) AquisitoCoreKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AquisitoCoreKotlinByteArray : AquisitoCoreBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AquisitoCoreByte *(^)(AquisitoCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AquisitoCoreKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AquisitoCoreKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AquisitoCoreKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AquisitoCoreKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AquisitoCoreKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AquisitoCoreKotlinx_serialization_coreKSerializer <AquisitoCoreKotlinx_serialization_coreSerializationStrategy, AquisitoCoreKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AquisitoCoreKotlinArray<T> : AquisitoCoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AquisitoCoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AquisitoCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AquisitoCoreKotlinEnumCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol AquisitoCoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<AquisitoCoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol AquisitoCoreKotlinx_coroutines_coreSharedFlow <AquisitoCoreKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol AquisitoCoreKotlinx_coroutines_coreStateFlow <AquisitoCoreKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface AquisitoCoreKoin_coreModule : AquisitoCoreBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (AquisitoCoreKoin_coreKoinDefinition<id> *)factoryQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(AquisitoCoreKotlinArray<AquisitoCoreKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(AquisitoCoreKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(AquisitoCoreKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<AquisitoCoreKoin_coreModule *> *)plusModules:(NSArray<AquisitoCoreKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<AquisitoCoreKoin_coreModule *> *)plusModule:(AquisitoCoreKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(AquisitoCoreKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(AquisitoCoreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<AquisitoCoreKoin_coreQualifier>)qualifier scopeSet:(void (^)(AquisitoCoreKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (AquisitoCoreKoin_coreKoinDefinition<id> *)singleQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) AquisitoCoreMutableSet<AquisitoCoreKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<AquisitoCoreKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) AquisitoCoreMutableDictionary<NSString *, AquisitoCoreKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface AquisitoCoreKotlinPair<__covariant A, __covariant B> : AquisitoCoreBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication")))
@interface AquisitoCoreKoin_coreKoinApplication : AquisitoCoreBase
@property (class, readonly, getter=companion) AquisitoCoreKoin_coreKoinApplicationCompanion *companion __attribute__((swift_name("companion")));
- (void)allowOverrideOverride:(BOOL)override __attribute__((swift_name("allowOverride(override:)")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (AquisitoCoreKoin_coreKoinApplication *)loggerLogger:(AquisitoCoreKoin_coreLogger *)logger __attribute__((swift_name("logger(logger:)")));
- (AquisitoCoreKoin_coreKoinApplication *)modulesModules:(AquisitoCoreKotlinArray<AquisitoCoreKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules:)")));
- (AquisitoCoreKoin_coreKoinApplication *)modulesModules_:(NSArray<AquisitoCoreKoin_coreModule *> *)modules __attribute__((swift_name("modules(modules_:)")));
- (AquisitoCoreKoin_coreKoinApplication *)modulesModules__:(AquisitoCoreKoin_coreModule *)modules __attribute__((swift_name("modules(modules__:)")));
- (AquisitoCoreKoin_coreKoinApplication *)printLoggerLevel:(AquisitoCoreKoin_coreLevel *)level __attribute__((swift_name("printLogger(level:)")));
- (AquisitoCoreKoin_coreKoinApplication *)propertiesValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("properties(values:)")));
@property (readonly) AquisitoCoreKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface AquisitoCoreKtor_client_coreHttpRequestData : AquisitoCoreBase
- (instancetype)initWithUrl:(AquisitoCoreKtor_httpUrl *)url method:(AquisitoCoreKtor_httpHttpMethod *)method headers:(id<AquisitoCoreKtor_httpHeaders>)headers body:(AquisitoCoreKtor_httpOutgoingContent *)body executionContext:(id<AquisitoCoreKotlinx_coroutines_coreJob>)executionContext attributes:(id<AquisitoCoreKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<AquisitoCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AquisitoCoreKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<AquisitoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AquisitoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface AquisitoCoreKtor_client_coreHttpResponseData : AquisitoCoreBase
- (instancetype)initWithStatusCode:(AquisitoCoreKtor_httpHttpStatusCode *)statusCode requestTime:(AquisitoCoreKtor_utilsGMTDate *)requestTime headers:(id<AquisitoCoreKtor_httpHeaders>)headers version:(AquisitoCoreKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<AquisitoCoreKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<AquisitoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AquisitoCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AquisitoCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface AquisitoCoreKtor_client_coreHttpClientEngineConfig : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property AquisitoCoreKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AquisitoCoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AquisitoCoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AquisitoCoreKotlinCoroutineContextElement> _Nullable)getKey:(id<AquisitoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<AquisitoCoreKotlinCoroutineContext>)minusKeyKey:(id<AquisitoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AquisitoCoreKotlinCoroutineContext>)plusContext:(id<AquisitoCoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AquisitoCoreKotlinCoroutineContextElement <AquisitoCoreKotlinCoroutineContext>
@required
@property (readonly) id<AquisitoCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface AquisitoCoreKotlinAbstractCoroutineContextElement : AquisitoCoreBase <AquisitoCoreKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<AquisitoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<AquisitoCoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol AquisitoCoreKotlinContinuationInterceptor <AquisitoCoreKotlinCoroutineContextElement>
@required
- (id<AquisitoCoreKotlinContinuation>)interceptContinuationContinuation:(id<AquisitoCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<AquisitoCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher : AquisitoCoreKotlinAbstractCoroutineContextElement <AquisitoCoreKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<AquisitoCoreKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<AquisitoCoreKotlinCoroutineContext>)context block:(id<AquisitoCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<AquisitoCoreKotlinCoroutineContext>)context block:(id<AquisitoCoreKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<AquisitoCoreKotlinContinuation>)interceptContinuationContinuation:(id<AquisitoCoreKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<AquisitoCoreKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<AquisitoCoreKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol AquisitoCoreKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface AquisitoCoreKtor_client_coreHttpClientConfig<T> : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AquisitoCoreKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<AquisitoCoreKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(AquisitoCoreKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(AquisitoCoreKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AquisitoCoreKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AquisitoCoreKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface AquisitoCoreKtor_eventsEvents : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(AquisitoCoreKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<AquisitoCoreKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(AquisitoCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(AquisitoCoreKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AquisitoCoreKtor_utilsPipeline<TSubject, TContext> : AquisitoCoreBase
- (instancetype)initWithPhases:(AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(AquisitoCoreKtor_utilsPipelinePhase *)reference phase:(AquisitoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AquisitoCoreKtor_utilsPipelinePhase *)reference phase:(AquisitoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase block:(id<AquisitoCoreKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(AquisitoCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(AquisitoCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(AquisitoCoreKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AquisitoCoreKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface AquisitoCoreKtor_client_coreHttpReceivePipeline : AquisitoCoreKtor_utilsPipeline<AquisitoCoreKtor_client_coreHttpResponse *, AquisitoCoreKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface AquisitoCoreKtor_client_coreHttpRequestPipeline : AquisitoCoreKtor_utilsPipeline<id, AquisitoCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface AquisitoCoreKtor_client_coreHttpResponsePipeline : AquisitoCoreKtor_utilsPipeline<AquisitoCoreKtor_client_coreHttpResponseContainer *, AquisitoCoreKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface AquisitoCoreKtor_client_coreHttpSendPipeline : AquisitoCoreKtor_utilsPipeline<id, AquisitoCoreKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AquisitoCoreKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AquisitoCoreKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AquisitoCoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface AquisitoCoreKotlinByteIterator : AquisitoCoreBase <AquisitoCoreKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AquisitoCoreByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AquisitoCoreKotlinx_serialization_coreEncoder
@required
- (id<AquisitoCoreKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AquisitoCoreKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AquisitoCoreKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AquisitoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AquisitoCoreKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AquisitoCoreKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AquisitoCoreKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AquisitoCoreKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AquisitoCoreKotlinx_serialization_coreDecoder
@required
- (id<AquisitoCoreKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AquisitoCoreKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AquisitoCoreKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AquisitoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol AquisitoCoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface AquisitoCoreKoin_coreKoinDefinition<R> : AquisitoCoreBase
- (instancetype)initWithModule:(AquisitoCoreKoin_coreModule *)module factory:(AquisitoCoreKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKoin_coreKoinDefinition<R> *)doCopyModule:(AquisitoCoreKoin_coreModule *)module factory:(AquisitoCoreKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) AquisitoCoreKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol AquisitoCoreKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface AquisitoCoreKoin_coreLockable : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface AquisitoCoreKoin_coreScope : AquisitoCoreKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<AquisitoCoreKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(AquisitoCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<AquisitoCoreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<AquisitoCoreKotlinKClass>)clazz qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<AquisitoCoreKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (AquisitoCoreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<AquisitoCoreKotlinKClass>)clazz qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (AquisitoCoreKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<AquisitoCoreKotlinLazy>)injectQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier mode:(AquisitoCoreKotlinLazyThreadSafetyMode *)mode parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<AquisitoCoreKotlinLazy>)injectOrNullQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier mode:(AquisitoCoreKotlinLazyThreadSafetyMode *)mode parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(AquisitoCoreKotlinArray<AquisitoCoreKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<AquisitoCoreKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(AquisitoCoreKotlinArray<AquisitoCoreKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) AquisitoCoreStately_concurrencyThreadLocalRef<NSMutableArray<AquisitoCoreKoin_coreParametersHolder *> *> *_parameterStackLocal __attribute__((swift_name("_parameterStackLocal")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) AquisitoCoreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<AquisitoCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface AquisitoCoreKoin_coreParametersHolder : AquisitoCoreBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(AquisitoCoreBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<AquisitoCoreKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<AquisitoCoreKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (AquisitoCoreKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) AquisitoCoreBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface AquisitoCoreKoin_coreInstanceFactory<T> : AquisitoCoreKoin_coreLockable
- (instancetype)initWithBeanDefinition:(AquisitoCoreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(AquisitoCoreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(AquisitoCoreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(AquisitoCoreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(AquisitoCoreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) AquisitoCoreKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface AquisitoCoreKoin_coreSingleInstanceFactory<T> : AquisitoCoreKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(AquisitoCoreKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(AquisitoCoreKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(AquisitoCoreKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(AquisitoCoreKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(AquisitoCoreKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface AquisitoCoreKoin_coreScopeDSL : AquisitoCoreBase
- (instancetype)initWithScopeQualifier:(id<AquisitoCoreKoin_coreQualifier>)scopeQualifier module:(AquisitoCoreKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKoin_coreKoinDefinition<id> *)factoryQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (AquisitoCoreKoin_coreKoinDefinition<id> *)scopedQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) AquisitoCoreKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<AquisitoCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinApplication.Companion")))
@interface AquisitoCoreKoin_coreKoinApplicationCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKoin_coreKoinApplicationCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKoin_coreKoinApplication *)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface AquisitoCoreKoin_coreLogger : AquisitoCoreBase
- (instancetype)initWithLevel:(AquisitoCoreKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(AquisitoCoreKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(AquisitoCoreKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(AquisitoCoreKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(AquisitoCoreKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property AquisitoCoreKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface AquisitoCoreKoin_coreLevel : AquisitoCoreKotlinEnum<AquisitoCoreKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) AquisitoCoreKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) AquisitoCoreKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) AquisitoCoreKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) AquisitoCoreKoin_coreLevel *none __attribute__((swift_name("none")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface AquisitoCoreKoin_coreKoin : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (AquisitoCoreKoin_coreScope *)createScopeT:(id<AquisitoCoreKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (AquisitoCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (AquisitoCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (AquisitoCoreKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<AquisitoCoreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<AquisitoCoreKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<AquisitoCoreKotlinKClass>)clazz qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (AquisitoCoreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (AquisitoCoreKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<AquisitoCoreKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<AquisitoCoreKotlinKClass>)clazz qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (AquisitoCoreKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (AquisitoCoreKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<AquisitoCoreKotlinLazy>)injectQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier mode:(AquisitoCoreKotlinLazyThreadSafetyMode *)mode parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<AquisitoCoreKotlinLazy>)injectOrNullQualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier mode:(AquisitoCoreKotlinLazyThreadSafetyMode *)mode parameters:(AquisitoCoreKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<AquisitoCoreKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(AquisitoCoreKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<AquisitoCoreKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) AquisitoCoreKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) AquisitoCoreKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) AquisitoCoreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) AquisitoCoreKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) AquisitoCoreKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AquisitoCoreKtor_httpUrl : AquisitoCoreBase
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AquisitoCoreKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface AquisitoCoreKtor_httpHttpMethod : AquisitoCoreBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AquisitoCoreKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AquisitoCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol AquisitoCoreKtor_httpHeaders <AquisitoCoreKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface AquisitoCoreKtor_httpOutgoingContent : AquisitoCoreBase
- (id _Nullable)getPropertyKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(AquisitoCoreKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<AquisitoCoreKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) AquisitoCoreLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) AquisitoCoreKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<AquisitoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol AquisitoCoreKotlinx_coroutines_coreJob <AquisitoCoreKotlinCoroutineContextElement>
@required
- (id<AquisitoCoreKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<AquisitoCoreKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(AquisitoCoreKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (AquisitoCoreKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<AquisitoCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(AquisitoCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<AquisitoCoreKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(AquisitoCoreKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<AquisitoCoreKotlinx_coroutines_coreJob>)plusOther_:(id<AquisitoCoreKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<AquisitoCoreKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface AquisitoCoreKtor_httpHttpStatusCode : AquisitoCoreBase <AquisitoCoreKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AquisitoCoreKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (AquisitoCoreKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (AquisitoCoreKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface AquisitoCoreKtor_utilsGMTDate : AquisitoCoreBase <AquisitoCoreKotlinComparable>
@property (class, readonly, getter=companion) AquisitoCoreKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AquisitoCoreKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (AquisitoCoreKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(AquisitoCoreKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(AquisitoCoreKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) AquisitoCoreKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) AquisitoCoreKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface AquisitoCoreKtor_httpHttpProtocolVersion : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface AquisitoCoreKtor_client_coreProxyConfig : AquisitoCoreBase
- (instancetype)initWithUrl:(AquisitoCoreKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AquisitoCoreKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol AquisitoCoreKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface AquisitoCoreKotlinAbstractCoroutineContextKey<B, E> : AquisitoCoreBase <AquisitoCoreKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<AquisitoCoreKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<AquisitoCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcherKey : AquisitoCoreKotlinAbstractCoroutineContextKey<id<AquisitoCoreKotlinContinuationInterceptor>, AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<AquisitoCoreKotlinCoroutineContextKey>)baseKey safeCast:(id<AquisitoCoreKotlinCoroutineContextElement> _Nullable (^)(id<AquisitoCoreKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol AquisitoCoreKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol AquisitoCoreKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(AquisitoCoreKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) AquisitoCoreKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AquisitoCoreKtor_utilsAttributeKey<T> : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface AquisitoCoreKtor_eventsEventDefinition<T> : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AquisitoCoreKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AquisitoCoreKtor_utilsPipelinePhase : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol AquisitoCoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AquisitoCoreKotlinSuspendFunction2 <AquisitoCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface AquisitoCoreKtor_client_coreHttpReceivePipelinePhases : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol AquisitoCoreKtor_httpHttpMessage
@required
@property (readonly) id<AquisitoCoreKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface AquisitoCoreKtor_client_coreHttpResponse : AquisitoCoreBase <AquisitoCoreKtor_httpHttpMessage, AquisitoCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<AquisitoCoreKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) AquisitoCoreKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) AquisitoCoreKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AquisitoCoreKotlinUnit : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface AquisitoCoreKtor_client_coreHttpRequestPipelinePhases : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol AquisitoCoreKtor_httpHttpMessageBuilder
@required
@property (readonly) AquisitoCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface AquisitoCoreKtor_client_coreHttpRequestBuilder : AquisitoCoreBase <AquisitoCoreKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<AquisitoCoreKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<AquisitoCoreKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<AquisitoCoreKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (AquisitoCoreKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(AquisitoCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (AquisitoCoreKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(AquisitoCoreKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(AquisitoCoreKtor_httpURLBuilder *, AquisitoCoreKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property AquisitoCoreKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) AquisitoCoreKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property AquisitoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AquisitoCoreKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface AquisitoCoreKtor_client_coreHttpResponsePipelinePhases : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface AquisitoCoreKtor_client_coreHttpResponseContainer : AquisitoCoreBase
- (instancetype)initWithExpectedType:(AquisitoCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(AquisitoCoreKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AquisitoCoreKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface AquisitoCoreKtor_client_coreHttpClientCall : AquisitoCoreBase <AquisitoCoreKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(AquisitoCoreKtor_client_coreHttpClient *)client requestData:(AquisitoCoreKtor_client_coreHttpRequestData *)requestData responseData:(AquisitoCoreKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(AquisitoCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(AquisitoCoreKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<AquisitoCoreKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AquisitoCoreKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<AquisitoCoreKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property AquisitoCoreKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface AquisitoCoreKtor_client_coreHttpSendPipelinePhases : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) AquisitoCoreKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AquisitoCoreKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AquisitoCoreKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AquisitoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AquisitoCoreKotlinx_serialization_coreSerializersModule : AquisitoCoreBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AquisitoCoreKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AquisitoCoreKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AquisitoCoreKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AquisitoCoreKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AquisitoCoreKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AquisitoCoreKotlinx_serialization_coreSerialKind : AquisitoCoreBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AquisitoCoreKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AquisitoCoreKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AquisitoCoreKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AquisitoCoreKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AquisitoCoreKotlinNothing : AquisitoCoreBase
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AquisitoCoreKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AquisitoCoreKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AquisitoCoreKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AquisitoCoreKotlinKClass <AquisitoCoreKotlinKDeclarationContainer, AquisitoCoreKotlinKAnnotatedElement, AquisitoCoreKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol AquisitoCoreKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface AquisitoCoreKotlinLazyThreadSafetyMode : AquisitoCoreKotlinEnum<AquisitoCoreKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) AquisitoCoreKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) AquisitoCoreKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol AquisitoCoreKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(AquisitoCoreKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Stately_concurrencyThreadLocalRef")))
@interface AquisitoCoreStately_concurrencyThreadLocalRef<T> : AquisitoCoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)get __attribute__((swift_name("get()")));
- (void)remove __attribute__((swift_name("remove()")));
- (void)setValue:(T _Nullable)value __attribute__((swift_name("set(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface AquisitoCoreKoin_coreBeanDefinition<T> : AquisitoCoreBase
- (instancetype)initWithScopeQualifier:(id<AquisitoCoreKoin_coreQualifier>)scopeQualifier primaryType:(id<AquisitoCoreKotlinKClass>)primaryType qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition kind:(AquisitoCoreKoin_coreKind *)kind secondaryTypes:(NSArray<id<AquisitoCoreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<AquisitoCoreKoin_coreQualifier>)scopeQualifier primaryType:(id<AquisitoCoreKotlinKClass>)primaryType qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *))definition kind:(AquisitoCoreKoin_coreKind *)kind secondaryTypes:(NSArray<id<AquisitoCoreKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<AquisitoCoreKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<AquisitoCoreKotlinKClass>)clazz qualifier:(id<AquisitoCoreKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<AquisitoCoreKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property AquisitoCoreKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(AquisitoCoreKoin_coreScope *, AquisitoCoreKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) AquisitoCoreKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<AquisitoCoreKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<AquisitoCoreKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<AquisitoCoreKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<AquisitoCoreKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface AquisitoCoreKoin_coreInstanceFactoryCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface AquisitoCoreKoin_coreInstanceContext : AquisitoCoreBase
- (instancetype)initWithLogger:(AquisitoCoreKoin_coreLogger *)logger scope:(AquisitoCoreKoin_coreScope *)scope parameters:(AquisitoCoreKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) AquisitoCoreKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) AquisitoCoreKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) AquisitoCoreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol AquisitoCoreKoin_coreKoinComponent
@required
- (AquisitoCoreKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol AquisitoCoreKoin_coreKoinScopeComponent <AquisitoCoreKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()"))) __attribute__((deprecated("not used internaly anymore")));
@property (readonly) AquisitoCoreKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface AquisitoCoreKoin_coreExtensionManager : AquisitoCoreBase
- (instancetype)initWith_koin:(AquisitoCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<AquisitoCoreKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<AquisitoCoreKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<AquisitoCoreKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface AquisitoCoreKoin_coreInstanceRegistry : AquisitoCoreBase
- (instancetype)initWith_koin:(AquisitoCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(AquisitoCoreKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) AquisitoCoreKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, AquisitoCoreKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface AquisitoCoreKoin_corePropertyRegistry : AquisitoCoreBase
- (instancetype)initWith_koin:(AquisitoCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface AquisitoCoreKoin_coreScopeRegistry : AquisitoCoreBase
- (instancetype)initWith_koin:(AquisitoCoreKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<AquisitoCoreKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) AquisitoCoreKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<AquisitoCoreKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface AquisitoCoreKtor_httpUrlCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AquisitoCoreKtor_httpParameters <AquisitoCoreKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AquisitoCoreKtor_httpURLProtocol : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface AquisitoCoreKtor_httpHttpMethodCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<AquisitoCoreKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol AquisitoCoreKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface AquisitoCoreKtor_httpHeaderValueWithParameters : AquisitoCoreBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AquisitoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<AquisitoCoreKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface AquisitoCoreKtor_httpContentType : AquisitoCoreKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<AquisitoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<AquisitoCoreKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(AquisitoCoreKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (AquisitoCoreKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (AquisitoCoreKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol AquisitoCoreKotlinx_coroutines_coreChildHandle <AquisitoCoreKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(AquisitoCoreKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<AquisitoCoreKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol AquisitoCoreKotlinx_coroutines_coreChildJob <AquisitoCoreKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<AquisitoCoreKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol AquisitoCoreKotlinSequence
@required
- (id<AquisitoCoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol AquisitoCoreKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) AquisitoCoreKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<AquisitoCoreKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(AquisitoCoreKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<AquisitoCoreKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol AquisitoCoreKotlinx_coroutines_coreSelectClause0 <AquisitoCoreKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface AquisitoCoreKtor_httpHttpStatusCodeCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) AquisitoCoreKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<AquisitoCoreKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface AquisitoCoreKtor_utilsGMTDateCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface AquisitoCoreKtor_utilsWeekDay : AquisitoCoreKotlinEnum<AquisitoCoreKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) AquisitoCoreKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface AquisitoCoreKtor_utilsMonth : AquisitoCoreKotlinEnum<AquisitoCoreKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) AquisitoCoreKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface AquisitoCoreKtor_httpHttpProtocolVersionCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (AquisitoCoreKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) AquisitoCoreKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol AquisitoCoreKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(AquisitoCoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(AquisitoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(AquisitoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(AquisitoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AquisitoCoreKtor_ioChunkBuffer *)dst completionHandler:(void (^)(AquisitoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(AquisitoCoreKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AquisitoCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AquisitoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AquisitoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AquisitoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(AquisitoCoreByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(AquisitoCoreDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(AquisitoCoreFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AquisitoCoreKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AquisitoCoreKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(AquisitoCoreInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(AquisitoCoreLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(AquisitoCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(AquisitoCoreKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<AquisitoCoreKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(AquisitoCoreShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<AquisitoCoreKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<AquisitoCoreKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(AquisitoCoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) AquisitoCoreKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol AquisitoCoreKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AquisitoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AquisitoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AquisitoCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AquisitoCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface AquisitoCoreKtor_utilsStringValuesBuilderImpl : AquisitoCoreBase <AquisitoCoreKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AquisitoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AquisitoCoreKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AquisitoCoreKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AquisitoCoreKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) AquisitoCoreMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface AquisitoCoreKtor_httpHeadersBuilder : AquisitoCoreKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AquisitoCoreKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface AquisitoCoreKtor_client_coreHttpRequestBuilderCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface AquisitoCoreKtor_httpURLBuilder : AquisitoCoreBase
- (instancetype)initWithProtocol:(AquisitoCoreKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<AquisitoCoreKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<AquisitoCoreKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AquisitoCoreKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property AquisitoCoreKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface AquisitoCoreKtor_utilsTypeInfo : AquisitoCoreBase
- (instancetype)initWithType:(id<AquisitoCoreKotlinKClass>)type reifiedType:(id<AquisitoCoreKotlinKType>)reifiedType kotlinType:(id<AquisitoCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKtor_utilsTypeInfo *)doCopyType:(id<AquisitoCoreKotlinKClass>)type reifiedType:(id<AquisitoCoreKotlinKType>)reifiedType kotlinType:(id<AquisitoCoreKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AquisitoCoreKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<AquisitoCoreKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<AquisitoCoreKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface AquisitoCoreKtor_client_coreHttpClientCallCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol AquisitoCoreKtor_client_coreHttpRequest <AquisitoCoreKtor_httpHttpMessage, AquisitoCoreKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<AquisitoCoreKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) AquisitoCoreKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) AquisitoCoreKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) AquisitoCoreKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AquisitoCoreKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AquisitoCoreKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AquisitoCoreKotlinKClass>)kClass provider:(id<AquisitoCoreKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AquisitoCoreKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AquisitoCoreKotlinKClass>)kClass serializer:(id<AquisitoCoreKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass actualClass:(id<AquisitoCoreKotlinKClass>)actualClass actualSerializer:(id<AquisitoCoreKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass defaultDeserializerProvider:(id<AquisitoCoreKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AquisitoCoreKotlinKClass>)baseClass defaultSerializerProvider:(id<AquisitoCoreKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface AquisitoCoreKoin_coreKind : AquisitoCoreKotlinEnum<AquisitoCoreKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) AquisitoCoreKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) AquisitoCoreKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface AquisitoCoreKoin_coreCallbacks<T> : AquisitoCoreBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol AquisitoCoreKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
@property AquisitoCoreKoin_coreKoin *koin __attribute__((swift_name("koin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface AquisitoCoreKoin_coreScopeRegistryCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface AquisitoCoreKtor_httpURLProtocolCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) AquisitoCoreKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, AquisitoCoreKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface AquisitoCoreKtor_httpHeaderValueParam : AquisitoCoreBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (AquisitoCoreKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface AquisitoCoreKtor_httpHeaderValueWithParametersCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<AquisitoCoreKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface AquisitoCoreKtor_httpContentTypeCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) AquisitoCoreKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol AquisitoCoreKotlinx_coroutines_coreParentJob <AquisitoCoreKotlinx_coroutines_coreJob>
@required
- (AquisitoCoreKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol AquisitoCoreKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<AquisitoCoreKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<AquisitoCoreKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface AquisitoCoreKtor_utilsWeekDayCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AquisitoCoreKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface AquisitoCoreKtor_utilsMonthCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (AquisitoCoreKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AquisitoCoreKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface AquisitoCoreKtor_ioMemory : AquisitoCoreBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(AquisitoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(AquisitoCoreKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (AquisitoCoreKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (AquisitoCoreKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface AquisitoCoreKtor_ioBuffer : AquisitoCoreBase
- (instancetype)initWithMemory:(AquisitoCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AquisitoCoreKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (AquisitoCoreKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(AquisitoCoreKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) AquisitoCoreKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface AquisitoCoreKtor_ioChunkBuffer : AquisitoCoreKtor_ioBuffer
- (instancetype)initWithMemory:(AquisitoCoreKtor_ioMemory *)memory origin:(AquisitoCoreKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AquisitoCoreKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(AquisitoCoreKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (AquisitoCoreKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<AquisitoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) AquisitoCoreKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) AquisitoCoreKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface AquisitoCoreKtor_ioInput : AquisitoCoreBase <AquisitoCoreKtor_ioCloseable>
- (instancetype)initWithHead:(AquisitoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AquisitoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AquisitoCoreKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AquisitoCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AquisitoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(AquisitoCoreKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(AquisitoCoreKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<AquisitoCoreKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<AquisitoCoreKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<AquisitoCoreKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface AquisitoCoreKtor_ioByteReadPacket : AquisitoCoreKtor_ioInput
- (instancetype)initWithHead:(AquisitoCoreKtor_ioChunkBuffer *)head pool:(id<AquisitoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(AquisitoCoreKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AquisitoCoreKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AquisitoCoreKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (AquisitoCoreKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AquisitoCoreKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AquisitoCoreKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol AquisitoCoreKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (AquisitoCoreKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol AquisitoCoreKotlinSuspendFunction1 <AquisitoCoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol AquisitoCoreKotlinAppendable
@required
- (id<AquisitoCoreKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<AquisitoCoreKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<AquisitoCoreKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface AquisitoCoreKtor_httpURLBuilderCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol AquisitoCoreKtor_httpParametersBuilder <AquisitoCoreKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol AquisitoCoreKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<AquisitoCoreKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<AquisitoCoreKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface AquisitoCoreKtor_ioMemoryCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface AquisitoCoreKtor_ioBufferCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol AquisitoCoreKtor_ioObjectPool <AquisitoCoreKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface AquisitoCoreKtor_ioChunkBufferCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AquisitoCoreKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AquisitoCoreKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface AquisitoCoreKtor_ioInputCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface AquisitoCoreKtor_ioByteReadPacketCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AquisitoCoreKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface AquisitoCoreKotlinKTypeProjection : AquisitoCoreBase
- (instancetype)initWithVariance:(AquisitoCoreKotlinKVariance * _Nullable)variance type:(id<AquisitoCoreKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AquisitoCoreKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (AquisitoCoreKotlinKTypeProjection *)doCopyVariance:(AquisitoCoreKotlinKVariance * _Nullable)variance type:(id<AquisitoCoreKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<AquisitoCoreKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) AquisitoCoreKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface AquisitoCoreKotlinKVariance : AquisitoCoreKotlinEnum<AquisitoCoreKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AquisitoCoreKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) AquisitoCoreKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) AquisitoCoreKotlinKVariance *out __attribute__((swift_name("out")));
+ (AquisitoCoreKotlinArray<AquisitoCoreKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AquisitoCoreKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface AquisitoCoreKotlinKTypeProjectionCompanion : AquisitoCoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AquisitoCoreKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AquisitoCoreKotlinKTypeProjection *)contravariantType:(id<AquisitoCoreKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AquisitoCoreKotlinKTypeProjection *)covariantType:(id<AquisitoCoreKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (AquisitoCoreKotlinKTypeProjection *)invariantType:(id<AquisitoCoreKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) AquisitoCoreKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
