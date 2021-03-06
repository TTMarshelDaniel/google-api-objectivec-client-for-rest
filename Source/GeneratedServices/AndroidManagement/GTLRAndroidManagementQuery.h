// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Android Management API (androidmanagement/v1)
// Description:
//   The Android Management API provides remote enterprise management of Android
//   devices and apps.
// Documentation:
//   https://developers.google.com/android/management

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidManagement_Command;
@class GTLRAndroidManagement_Device;
@class GTLRAndroidManagement_EnrollmentToken;
@class GTLRAndroidManagement_Enterprise;
@class GTLRAndroidManagement_Policy;
@class GTLRAndroidManagement_WebToken;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Android Management query classes.
 */
@interface GTLRAndroidManagementQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets info about an application.
 *
 *  Method: androidmanagement.enterprises.applications.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesApplicationsGet : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesApplicationsGetWithname:]

/**
 *  The preferred language for localized application info, as a BCP47 tag (e.g.
 *  "en-US", "de"). If not specified the default language of the application
 *  will be used.
 */
@property(nonatomic, copy, nullable) NSString *languageCode;

/**
 *  The name of the application in the form
 *  enterprises/{enterpriseId}/applications/{package_name}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Application.
 *
 *  Gets info about an application.
 *
 *  @param name The name of the application in the form
 *    enterprises/{enterpriseId}/applications/{package_name}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesApplicationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Creates an enterprise. This is the last step in the enterprise signup flow.
 *
 *  Method: androidmanagement.enterprises.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesCreate : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesCreateWithObject:]

/** The enterprise token appended to the callback URL. */
@property(nonatomic, copy, nullable) NSString *enterpriseToken;

/**
 *  The ID of the Google Cloud Platform project which will own the enterprise.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/** The name of the SignupUrl used to sign up for the enterprise. */
@property(nonatomic, copy, nullable) NSString *signupUrlName;

/**
 *  Fetches a @c GTLRAndroidManagement_Enterprise.
 *
 *  Creates an enterprise. This is the last step in the enterprise signup flow.
 *
 *  @param object The @c GTLRAndroidManagement_Enterprise to include in the
 *    query.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesCreate
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_Enterprise *)object;

@end

/**
 *  Deletes a device. This operation wipes the device.
 *
 *  Method: androidmanagement.enterprises.devices.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesDelete : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesDeleteWithname:]

/**
 *  The name of the device in the form
 *  enterprises/{enterpriseId}/devices/{deviceId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Empty.
 *
 *  Deletes a device. This operation wipes the device.
 *
 *  @param name The name of the device in the form
 *    enterprises/{enterpriseId}/devices/{deviceId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a device.
 *
 *  Method: androidmanagement.enterprises.devices.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesGet : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesGetWithname:]

/**
 *  The name of the device in the form
 *  enterprises/{enterpriseId}/devices/{deviceId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Device.
 *
 *  Gets a device.
 *
 *  @param name The name of the device in the form
 *    enterprises/{enterpriseId}/devices/{deviceId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Issues a command to a device. The Operation resource returned contains a
 *  Command in its metadata field. Use the get operation method to get the
 *  status of the command.
 *
 *  Method: androidmanagement.enterprises.devices.issueCommand
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesIssueCommand : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesIssueCommandWithObject:name:]

/**
 *  The name of the device in the form
 *  enterprises/{enterpriseId}/devices/{deviceId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Operation.
 *
 *  Issues a command to a device. The Operation resource returned contains a
 *  Command in its metadata field. Use the get operation method to get the
 *  status of the command.
 *
 *  @param object The @c GTLRAndroidManagement_Command to include in the query.
 *  @param name The name of the device in the form
 *    enterprises/{enterpriseId}/devices/{deviceId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesIssueCommand
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_Command *)object
                           name:(NSString *)name;

@end

/**
 *  Lists devices for a given enterprise.
 *
 *  Method: androidmanagement.enterprises.devices.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesList : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesListWithparent:]

/**
 *  The requested page size. The actual page size may be fixed to a min or max
 *  value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** A token identifying a page of results returned by the server. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidManagement_ListDevicesResponse.
 *
 *  Lists devices for a given enterprise.
 *
 *  @param parent The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  google.rpc.Code.UNIMPLEMENTED. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  Code.CANCELLED.
 *
 *  Method: androidmanagement.enterprises.devices.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesOperationsCancel : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesOperationsCancelWithname:]

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  google.rpc.Code.UNIMPLEMENTED. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  Code.CANCELLED.
 *
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesOperationsCancel
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  google.rpc.Code.UNIMPLEMENTED.
 *
 *  Method: androidmanagement.enterprises.devices.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesOperationsDelete : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesOperationsDeleteWithname:]

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  google.rpc.Code.UNIMPLEMENTED.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesOperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: androidmanagement.enterprises.devices.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesOperationsGet : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesOperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns UNIMPLEMENTED.NOTE: the name
 *  binding allows API services to override the binding to use different
 *  resource name schemes, such as users/ * /operations. To override the
 *  binding, API services can add a binding such as "/v1/{name=users/
 *  *}/operations" to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: androidmanagement.enterprises.devices.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesOperationsList : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesOperationsListWithname:]

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRAndroidManagement_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns UNIMPLEMENTED.NOTE: the name
 *  binding allows API services to override the binding to use different
 *  resource name schemes, such as users/ * /operations. To override the
 *  binding, API services can add a binding such as "/v1/{name=users/
 *  *}/operations" to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesOperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates a device.
 *
 *  Method: androidmanagement.enterprises.devices.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesDevicesPatch : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesDevicesPatchWithObject:name:]

/**
 *  The name of the device in the form
 *  enterprises/{enterpriseId}/devices/{deviceId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The field mask indicating the fields to update. If not set, all modifiable
 *  fields will be modified.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAndroidManagement_Device.
 *
 *  Updates a device.
 *
 *  @param object The @c GTLRAndroidManagement_Device to include in the query.
 *  @param name The name of the device in the form
 *    enterprises/{enterpriseId}/devices/{deviceId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesDevicesPatch
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_Device *)object
                           name:(NSString *)name;

@end

/**
 *  Creates an enrollment token for a given enterprise.
 *
 *  Method: androidmanagement.enterprises.enrollmentTokens.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesEnrollmentTokensCreate : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesEnrollmentTokensCreateWithObject:parent:]

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidManagement_EnrollmentToken.
 *
 *  Creates an enrollment token for a given enterprise.
 *
 *  @param object The @c GTLRAndroidManagement_EnrollmentToken to include in the
 *    query.
 *  @param parent The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesEnrollmentTokensCreate
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_EnrollmentToken *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes an enrollment token. This operation invalidates the token,
 *  preventing its future use.
 *
 *  Method: androidmanagement.enterprises.enrollmentTokens.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesEnrollmentTokensDelete : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesEnrollmentTokensDeleteWithname:]

/**
 *  The name of the enrollment token in the form
 *  enterprises/{enterpriseId}/enrollmentTokens/{enrollmentTokenId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Empty.
 *
 *  Deletes an enrollment token. This operation invalidates the token,
 *  preventing its future use.
 *
 *  @param name The name of the enrollment token in the form
 *    enterprises/{enterpriseId}/enrollmentTokens/{enrollmentTokenId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesEnrollmentTokensDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets an enterprise.
 *
 *  Method: androidmanagement.enterprises.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesGet : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesGetWithname:]

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Enterprise.
 *
 *  Gets an enterprise.
 *
 *  @param name The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Updates an enterprise.
 *
 *  Method: androidmanagement.enterprises.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesPatch : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesPatchWithObject:name:]

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The field mask indicating the fields to update. If not set, all modifiable
 *  fields will be modified.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAndroidManagement_Enterprise.
 *
 *  Updates an enterprise.
 *
 *  @param object The @c GTLRAndroidManagement_Enterprise to include in the
 *    query.
 *  @param name The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesPatch
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_Enterprise *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a policy. This operation is only permitted if no devices are
 *  currently referencing the policy.
 *
 *  Method: androidmanagement.enterprises.policies.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesPoliciesDelete : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesPoliciesDeleteWithname:]

/**
 *  The name of the policy in the form
 *  enterprises/{enterpriseId}/policies/{policyId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Empty.
 *
 *  Deletes a policy. This operation is only permitted if no devices are
 *  currently referencing the policy.
 *
 *  @param name The name of the policy in the form
 *    enterprises/{enterpriseId}/policies/{policyId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesPoliciesDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets a policy.
 *
 *  Method: androidmanagement.enterprises.policies.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesPoliciesGet : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesPoliciesGetWithname:]

/**
 *  The name of the policy in the form
 *  enterprises/{enterpriseId}/policies/{policyId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidManagement_Policy.
 *
 *  Gets a policy.
 *
 *  @param name The name of the policy in the form
 *    enterprises/{enterpriseId}/policies/{policyId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesPoliciesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists policies for a given enterprise.
 *
 *  Method: androidmanagement.enterprises.policies.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesPoliciesList : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesPoliciesListWithparent:]

/**
 *  The requested page size. The actual page size may be fixed to a min or max
 *  value.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** A token identifying a page of results returned by the server. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidManagement_ListPoliciesResponse.
 *
 *  Lists policies for a given enterprise.
 *
 *  @param parent The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesPoliciesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates or creates a policy.
 *
 *  Method: androidmanagement.enterprises.policies.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesPoliciesPatch : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesPoliciesPatchWithObject:name:]

/**
 *  The name of the policy in the form
 *  enterprises/{enterpriseId}/policies/{policyId}.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The field mask indicating the fields to update. If not set, all modifiable
 *  fields will be modified.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRAndroidManagement_Policy.
 *
 *  Updates or creates a policy.
 *
 *  @param object The @c GTLRAndroidManagement_Policy to include in the query.
 *  @param name The name of the policy in the form
 *    enterprises/{enterpriseId}/policies/{policyId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesPoliciesPatch
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_Policy *)object
                           name:(NSString *)name;

@end

/**
 *  Creates a web token to access an embeddable managed Google Play web UI for a
 *  given enterprise.
 *
 *  Method: androidmanagement.enterprises.webTokens.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_EnterprisesWebTokensCreate : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForEnterprisesWebTokensCreateWithObject:parent:]

/** The name of the enterprise in the form enterprises/{enterpriseId}. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRAndroidManagement_WebToken.
 *
 *  Creates a web token to access an embeddable managed Google Play web UI for a
 *  given enterprise.
 *
 *  @param object The @c GTLRAndroidManagement_WebToken to include in the query.
 *  @param parent The name of the enterprise in the form
 *    enterprises/{enterpriseId}.
 *
 *  @returns GTLRAndroidManagementQuery_EnterprisesWebTokensCreate
 */
+ (instancetype)queryWithObject:(GTLRAndroidManagement_WebToken *)object
                         parent:(NSString *)parent;

@end

/**
 *  Creates an enterprise signup URL.
 *
 *  Method: androidmanagement.signupUrls.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeAndroidManagement
 */
@interface GTLRAndroidManagementQuery_SignupUrlsCreate : GTLRAndroidManagementQuery
// Previous library name was
//   +[GTLQueryAndroidManagement queryForSignupUrlsCreate]

/**
 *  The callback URL that the admin will be redirected to after successfully
 *  creating an enterprise. Before redirecting there the system will add a query
 *  parameter to this URL named enterpriseToken which will contain an opaque
 *  token to be used for the create enterprise request. The URL will be parsed
 *  then reformatted in order to add the enterpriseToken parameter, so there may
 *  be some minor formatting changes.
 */
@property(nonatomic, copy, nullable) NSString *callbackUrl;

/**
 *  The ID of the Google Cloud Platform project which will own the enterprise.
 */
@property(nonatomic, copy, nullable) NSString *projectId;

/**
 *  Fetches a @c GTLRAndroidManagement_SignupUrl.
 *
 *  Creates an enterprise signup URL.
 *
 *  @returns GTLRAndroidManagementQuery_SignupUrlsCreate
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
