#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PortmoneSDKEcom",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Bill model
SWIFT_CLASS("_TtC15PortmoneSDKEcom4Bill")
@interface Bill : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Supported currencies
typedef SWIFT_ENUM(NSInteger, Currency, closed) {
  CurrencyUah = 0,
  CurrencyUsd = 1,
  CurrencyEur = 2,
  CurrencyGbr = 3,
  CurrencyByn = 4,
  CurrencyKzt = 5,
  CurrencyRub = 6,
};



/// Supported languages
typedef SWIFT_ENUM(NSInteger, Language, closed) {
  LanguageUkrainian = 0,
  LanguageRussian = 1,
  LanguageEnglish = 2,
};

@class TransferParams;

/// Payment by card parameters model
SWIFT_CLASS("_TtC15PortmoneSDKEcom13PaymentParams")
@interface PaymentParams : NSObject
/// Init
- (nonnull instancetype)initWithDescription:(NSString * _Nonnull)description attribute1:(NSString * _Nonnull)attribute1 attribute2:(NSString * _Nonnull)attribute2 attribute3:(NSString * _Nonnull)attribute3 attribute4:(NSString * _Nonnull)attribute4 billNumber:(NSString * _Nonnull)billNumber contractNumber:(NSString * _Nonnull)contractNumber preauthFlag:(BOOL)preauthFlag billCurrency:(enum Currency)billCurrency billAmount:(double)billAmount payeeId:(NSString * _Nonnull)payeeId OBJC_DESIGNATED_INITIALIZER;
/// Init from Transfer parms
- (nonnull instancetype)init:(TransferParams * _Nonnull)transferParams OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol PaymentPresenterDelegate;
@protocol StyleSource;
@class UIViewController;
@class PreauthParams;
@class TokenPaymentParams;

/// Object for interaction with PortmoneSDKEcom
SWIFT_CLASS("_TtC15PortmoneSDKEcom16PaymentPresenter")
@interface PaymentPresenter : NSObject
/// Initializer
- (nonnull instancetype)initWithDelegate:(id <PaymentPresenterDelegate> _Nonnull)delegate styleSource:(id <StyleSource> _Nullable)styleSource language:(enum Language)language biometricAuth:(BOOL)biometricAuth OBJC_DESIGNATED_INITIALIZER;
/// Method to present payment by card screen
- (void)presentPaymentByCardOn:(UIViewController * _Nonnull)controller params:(PaymentParams * _Nonnull)params;
/// Method to present preauth card screen
- (void)presentPreauthCardOn:(UIViewController * _Nonnull)controller params:(PreauthParams * _Nonnull)params;
/// Method to present payment by token screen
- (void)presentPaymentByTokenOn:(UIViewController * _Nonnull)controller payParams:(PaymentParams * _Nonnull)payParams tokenParams:(TokenPaymentParams * _Nonnull)tokenParams;
/// Method to present transfer by token screen
- (void)presentTransferByTokenOn:(UIViewController * _Nonnull)controller transferParams:(TransferParams * _Nonnull)transferParams tokenParams:(TokenPaymentParams * _Nonnull)tokenParams;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Protocol for return payment result
SWIFT_PROTOCOL("_TtP15PortmoneSDKEcom24PaymentPresenterDelegate_")
@protocol PaymentPresenterDelegate
/// Method triggered as result of payment process.
/// \param bill Bill
///
/// \param error Error
///
- (void)didFinishPaymentWithBill:(Bill * _Nullable)bill error:(NSError * _Nullable)error;
@optional
/// Optional method.
/// Method triggered when payment is canceled.
- (void)didCancelPayment;
@end


/// Preauth card parameters model
SWIFT_CLASS("_TtC15PortmoneSDKEcom13PreauthParams")
@interface PreauthParams : NSObject
/// Init
- (nonnull instancetype)initWithPayeeId:(NSString * _Nonnull)payeeId accountId:(NSString * _Nonnull)accountId description:(NSString * _Nonnull)description billNumber:(NSString * _Nonnull)billNumber OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIFont;
@class UIColor;

/// Protocol for changing style of elements on screens
SWIFT_PROTOCOL("_TtP15PortmoneSDKEcom11StyleSource_")
@protocol StyleSource
/// Title label font (All screens)
- (UIFont * _Nonnull)titleFont SWIFT_WARN_UNUSED_RESULT;
/// Title label color (All screens)
- (UIColor * _Nonnull)titleColor SWIFT_WARN_UNUSED_RESULT;
/// Title background color (All screens)
- (UIColor * _Nonnull)titleBackgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Section header label font (Payment, commission screens)
- (UIFont * _Nonnull)headersFont SWIFT_WARN_UNUSED_RESULT;
/// Section header label color (Payment, commission screens)
- (UIColor * _Nonnull)headersColor SWIFT_WARN_UNUSED_RESULT;
/// Section header view background color (Payment, commission screens)
- (UIColor * _Nonnull)headersBackgroundColor SWIFT_WARN_UNUSED_RESULT;
/// All textFields placeholder font
- (UIFont * _Nonnull)placeholdersFont SWIFT_WARN_UNUSED_RESULT;
/// All textFields placeholder color
- (UIColor * _Nonnull)placeholdersColor SWIFT_WARN_UNUSED_RESULT;
/// All textFields text font
- (UIFont * _Nonnull)textsFont SWIFT_WARN_UNUSED_RESULT;
/// All textFields text color
- (UIColor * _Nonnull)textsColor SWIFT_WARN_UNUSED_RESULT;
/// All error strings text font
- (UIFont * _Nonnull)errorsFont SWIFT_WARN_UNUSED_RESULT;
/// All error strings text color
- (UIColor * _Nonnull)errorsColor SWIFT_WARN_UNUSED_RESULT;
/// All background color (Table, cells, navigation bar)
- (UIColor * _Nonnull)backgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Message label font (Result screens)
- (UIFont * _Nonnull)resultMessageFont SWIFT_WARN_UNUSED_RESULT;
/// Message label color (Result screens)
- (UIColor * _Nonnull)resultMessageColor SWIFT_WARN_UNUSED_RESULT;
/// Informative label on button (Save card screen)
- (UIFont * _Nonnull)infoTextsFont SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)infoTextsColor SWIFT_WARN_UNUSED_RESULT;
/// Buttons back and next title font
- (UIFont * _Nonnull)buttonTitleFont SWIFT_WARN_UNUSED_RESULT;
/// Bottom button text color
- (UIColor * _Nonnull)buttonTitleColor SWIFT_WARN_UNUSED_RESULT;
/// Bottom button background and top button text color if 2 buttons present
- (UIColor * _Nonnull)buttonColor SWIFT_WARN_UNUSED_RESULT;
/// Biometric button title color
- (UIColor * _Nonnull)biometricButtonColor SWIFT_WARN_UNUSED_RESULT;
@end


/// Payment by token parameters additional model
SWIFT_CLASS("_TtC15PortmoneSDKEcom18TokenPaymentParams")
@interface TokenPaymentParams : NSObject
/// Init
- (nonnull instancetype)initWithCardNumberMasked:(NSString * _Nonnull)cardNumberMasked tokenData:(NSString * _Nonnull)tokenData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Transfer by token parameters additional model
SWIFT_CLASS("_TtC15PortmoneSDKEcom14TransferParams")
@interface TransferParams : NSObject
/// Init
- (nonnull instancetype)initWithAttribute2:(NSString * _Nonnull)attribute2 attribute3:(NSString * _Nonnull)attribute3 attribute4:(NSString * _Nonnull)attribute4 billNumber:(NSString * _Nonnull)billNumber billAmount:(double)billAmount payeeId:(NSString * _Nonnull)payeeId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end











#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.0.1 (swiftlang-1001.0.82.4 clang-1001.0.46.5)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PortmoneSDKEcom",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


/// Bill model
SWIFT_CLASS("_TtC15PortmoneSDKEcom4Bill")
@interface Bill : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Supported currencies
typedef SWIFT_ENUM(NSInteger, Currency, closed) {
  CurrencyUah = 0,
  CurrencyUsd = 1,
  CurrencyEur = 2,
  CurrencyGbr = 3,
  CurrencyByn = 4,
  CurrencyKzt = 5,
  CurrencyRub = 6,
};



/// Supported languages
typedef SWIFT_ENUM(NSInteger, Language, closed) {
  LanguageUkrainian = 0,
  LanguageRussian = 1,
  LanguageEnglish = 2,
};

@class TransferParams;

/// Payment by card parameters model
SWIFT_CLASS("_TtC15PortmoneSDKEcom13PaymentParams")
@interface PaymentParams : NSObject
/// Init
- (nonnull instancetype)initWithDescription:(NSString * _Nonnull)description attribute1:(NSString * _Nonnull)attribute1 attribute2:(NSString * _Nonnull)attribute2 attribute3:(NSString * _Nonnull)attribute3 attribute4:(NSString * _Nonnull)attribute4 billNumber:(NSString * _Nonnull)billNumber contractNumber:(NSString * _Nonnull)contractNumber preauthFlag:(BOOL)preauthFlag billCurrency:(enum Currency)billCurrency billAmount:(double)billAmount payeeId:(NSString * _Nonnull)payeeId OBJC_DESIGNATED_INITIALIZER;
/// Init from Transfer parms
- (nonnull instancetype)init:(TransferParams * _Nonnull)transferParams OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol PaymentPresenterDelegate;
@protocol StyleSource;
@class UIViewController;
@class PreauthParams;
@class TokenPaymentParams;

/// Object for interaction with PortmoneSDKEcom
SWIFT_CLASS("_TtC15PortmoneSDKEcom16PaymentPresenter")
@interface PaymentPresenter : NSObject
/// Initializer
- (nonnull instancetype)initWithDelegate:(id <PaymentPresenterDelegate> _Nonnull)delegate styleSource:(id <StyleSource> _Nullable)styleSource language:(enum Language)language biometricAuth:(BOOL)biometricAuth OBJC_DESIGNATED_INITIALIZER;
/// Method to present payment by card screen
- (void)presentPaymentByCardOn:(UIViewController * _Nonnull)controller params:(PaymentParams * _Nonnull)params;
/// Method to present preauth card screen
- (void)presentPreauthCardOn:(UIViewController * _Nonnull)controller params:(PreauthParams * _Nonnull)params;
/// Method to present payment by token screen
- (void)presentPaymentByTokenOn:(UIViewController * _Nonnull)controller payParams:(PaymentParams * _Nonnull)payParams tokenParams:(TokenPaymentParams * _Nonnull)tokenParams;
/// Method to present transfer by token screen
- (void)presentTransferByTokenOn:(UIViewController * _Nonnull)controller transferParams:(TransferParams * _Nonnull)transferParams tokenParams:(TokenPaymentParams * _Nonnull)tokenParams;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Protocol for return payment result
SWIFT_PROTOCOL("_TtP15PortmoneSDKEcom24PaymentPresenterDelegate_")
@protocol PaymentPresenterDelegate
/// Method triggered as result of payment process.
/// \param bill Bill
///
/// \param error Error
///
- (void)didFinishPaymentWithBill:(Bill * _Nullable)bill error:(NSError * _Nullable)error;
@optional
/// Optional method.
/// Method triggered when payment is canceled.
- (void)didCancelPayment;
@end


/// Preauth card parameters model
SWIFT_CLASS("_TtC15PortmoneSDKEcom13PreauthParams")
@interface PreauthParams : NSObject
/// Init
- (nonnull instancetype)initWithPayeeId:(NSString * _Nonnull)payeeId accountId:(NSString * _Nonnull)accountId description:(NSString * _Nonnull)description billNumber:(NSString * _Nonnull)billNumber OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIFont;
@class UIColor;

/// Protocol for changing style of elements on screens
SWIFT_PROTOCOL("_TtP15PortmoneSDKEcom11StyleSource_")
@protocol StyleSource
/// Title label font (All screens)
- (UIFont * _Nonnull)titleFont SWIFT_WARN_UNUSED_RESULT;
/// Title label color (All screens)
- (UIColor * _Nonnull)titleColor SWIFT_WARN_UNUSED_RESULT;
/// Title background color (All screens)
- (UIColor * _Nonnull)titleBackgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Section header label font (Payment, commission screens)
- (UIFont * _Nonnull)headersFont SWIFT_WARN_UNUSED_RESULT;
/// Section header label color (Payment, commission screens)
- (UIColor * _Nonnull)headersColor SWIFT_WARN_UNUSED_RESULT;
/// Section header view background color (Payment, commission screens)
- (UIColor * _Nonnull)headersBackgroundColor SWIFT_WARN_UNUSED_RESULT;
/// All textFields placeholder font
- (UIFont * _Nonnull)placeholdersFont SWIFT_WARN_UNUSED_RESULT;
/// All textFields placeholder color
- (UIColor * _Nonnull)placeholdersColor SWIFT_WARN_UNUSED_RESULT;
/// All textFields text font
- (UIFont * _Nonnull)textsFont SWIFT_WARN_UNUSED_RESULT;
/// All textFields text color
- (UIColor * _Nonnull)textsColor SWIFT_WARN_UNUSED_RESULT;
/// All error strings text font
- (UIFont * _Nonnull)errorsFont SWIFT_WARN_UNUSED_RESULT;
/// All error strings text color
- (UIColor * _Nonnull)errorsColor SWIFT_WARN_UNUSED_RESULT;
/// All background color (Table, cells, navigation bar)
- (UIColor * _Nonnull)backgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Message label font (Result screens)
- (UIFont * _Nonnull)resultMessageFont SWIFT_WARN_UNUSED_RESULT;
/// Message label color (Result screens)
- (UIColor * _Nonnull)resultMessageColor SWIFT_WARN_UNUSED_RESULT;
/// Informative label on button (Save card screen)
- (UIFont * _Nonnull)infoTextsFont SWIFT_WARN_UNUSED_RESULT;
- (UIColor * _Nonnull)infoTextsColor SWIFT_WARN_UNUSED_RESULT;
/// Buttons back and next title font
- (UIFont * _Nonnull)buttonTitleFont SWIFT_WARN_UNUSED_RESULT;
/// Bottom button text color
- (UIColor * _Nonnull)buttonTitleColor SWIFT_WARN_UNUSED_RESULT;
/// Bottom button background and top button text color if 2 buttons present
- (UIColor * _Nonnull)buttonColor SWIFT_WARN_UNUSED_RESULT;
/// Biometric button title color
- (UIColor * _Nonnull)biometricButtonColor SWIFT_WARN_UNUSED_RESULT;
@end


/// Payment by token parameters additional model
SWIFT_CLASS("_TtC15PortmoneSDKEcom18TokenPaymentParams")
@interface TokenPaymentParams : NSObject
/// Init
- (nonnull instancetype)initWithCardNumberMasked:(NSString * _Nonnull)cardNumberMasked tokenData:(NSString * _Nonnull)tokenData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Transfer by token parameters additional model
SWIFT_CLASS("_TtC15PortmoneSDKEcom14TransferParams")
@interface TransferParams : NSObject
/// Init
- (nonnull instancetype)initWithAttribute2:(NSString * _Nonnull)attribute2 attribute3:(NSString * _Nonnull)attribute3 attribute4:(NSString * _Nonnull)attribute4 billNumber:(NSString * _Nonnull)billNumber billAmount:(double)billAmount payeeId:(NSString * _Nonnull)payeeId OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end











#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

#endif
