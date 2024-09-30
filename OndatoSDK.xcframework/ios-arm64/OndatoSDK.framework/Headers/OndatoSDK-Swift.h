#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef ONDATOSDK_SWIFT_H
#define ONDATOSDK_SWIFT_H
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
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="OndatoSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;
@class UITouch;
@class UIEvent;

/// Lottie comes prepacked with a two Animated Controls, <code>AnimatedSwitch</code> and
/// <code>AnimatedButton</code>. Both of these controls are built on top of <code>AnimatedControl</code>
/// <code>AnimatedControl</code> is a subclass of <code>UIControl</code> that provides an interactive
/// mechanism for controlling the visual state of an animation in response to
/// user actions.
/// The <code>AnimatedControl</code> will show and hide layers depending on the current
/// <code>UIControl.State</code> of the control.
/// Users of <code>AnimationControl</code> can set a Layer Name for each <code>UIControl.State</code>.
/// When the state is change the <code>AnimationControl</code> will change the visibility
/// of its layers.
/// NOTE: Do not initialize directly. This is intended to be subclassed.
SWIFT_CLASS("_TtC9OndatoSDK15AnimatedControl")
@interface AnimatedControl : UIControl
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)continueTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
- (void)cancelTrackingWithEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// An interactive button that plays an animation when pressed.
SWIFT_CLASS("_TtC9OndatoSDK14AnimatedButton")
@interface AnimatedButton : AnimatedControl
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
@end



/// An interactive switch with an ‘On’ and ‘Off’ state. When the user taps on the
/// switch the state is toggled and the appropriate animation is played.
/// Both the ‘On’ and ‘Off’ have an animation play range associated with their state.
SWIFT_CLASS("_TtC9OndatoSDK14AnimatedSwitch")
@interface AnimatedSwitch : AnimatedControl
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
@end


/// A view that can be added to a keypath of an AnimationView
SWIFT_CLASS("_TtC9OndatoSDK16AnimationSubview")
@interface AnimationSubview : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9OndatoSDK10LottieView")
@interface LottieView : UIView
@property (nonatomic) UIViewContentMode contentMode;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC9OndatoSDK13AnimationView")
@interface AnimationView : LottieView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)_ OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end





@class NSString;
@class NSBundle;

/// An Objective-C compatible wrapper around Lottie’s Animation class.
/// Use in tandem with CompatibleAnimationView when using Lottie in Objective-C
SWIFT_CLASS("_TtC9OndatoSDK19CompatibleAnimation")
@interface CompatibleAnimation : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name bundle:(NSBundle * _Nonnull)bundle OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// An Objective-C compatible wrapper around Lottie’s AnimationKeypath
SWIFT_CLASS("_TtC9OndatoSDK26CompatibleAnimationKeypath")
@interface CompatibleAnimationKeypath : NSObject
/// Creates a keypath from a dot separated string. The string is separated by “.”
- (nonnull instancetype)initWithKeypath:(NSString * _Nonnull)keypath OBJC_DESIGNATED_INITIALIZER;
/// Creates a keypath from a list of strings.
- (nonnull instancetype)initWithKeys:(NSArray<NSString *> * _Nonnull)keys OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;

/// An Objective-C compatible wrapper around Lottie’s AnimationView.
SWIFT_CLASS("_TtC9OndatoSDK23CompatibleAnimationView")
@interface CompatibleAnimationView : UIView
- (nonnull instancetype)initWithCompatibleAnimation:(CompatibleAnimation * _Nonnull)compatibleAnimation OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)_ SWIFT_UNAVAILABLE;
@property (nonatomic, strong) CompatibleAnimation * _Nullable compatibleAnimation;
@property (nonatomic) CGFloat loopAnimationCount;
@property (nonatomic) UIViewContentMode contentMode;
@property (nonatomic) BOOL shouldRasterizeWhenIdle;
@property (nonatomic) CGFloat currentProgress;
@property (nonatomic) NSTimeInterval currentTime;
@property (nonatomic) CGFloat currentFrame;
@property (nonatomic, readonly) CGFloat realtimeAnimationFrame;
@property (nonatomic, readonly) CGFloat realtimeAnimationProgress;
@property (nonatomic) CGFloat animationSpeed;
@property (nonatomic) BOOL respectAnimationFrameRate;
@property (nonatomic, readonly) BOOL isAnimationPlaying;
- (void)play;
- (void)playWithCompletion:(void (^ _Nullable)(BOOL))completion;
- (void)playFromProgress:(CGFloat)fromProgress toProgress:(CGFloat)toProgress completion:(void (^ _Nullable)(BOOL))completion;
- (void)playFromFrame:(CGFloat)fromFrame toFrame:(CGFloat)toFrame completion:(void (^ _Nullable)(BOOL))completion;
- (void)playFromMarker:(NSString * _Nonnull)fromMarker toMarker:(NSString * _Nonnull)toMarker completion:(void (^ _Nullable)(BOOL))completion;
- (void)stop;
- (void)pause;
- (void)reloadImages;
- (void)forceDisplayUpdate;
- (id _Nullable)getValueFor:(CompatibleAnimationKeypath * _Nonnull)keypath atFrame:(CGFloat)atFrame SWIFT_WARN_UNUSED_RESULT;
- (void)logHierarchyKeypaths;
- (void)setColorValue:(UIColor * _Nonnull)color forKeypath:(CompatibleAnimationKeypath * _Nonnull)keypath;
- (UIColor * _Nullable)getColorValueFor:(CompatibleAnimationKeypath * _Nonnull)keypath atFrame:(CGFloat)atFrame SWIFT_WARN_UNUSED_RESULT;
- (void)addSubview:(AnimationSubview * _Nonnull)subview forLayerAt:(CompatibleAnimationKeypath * _Nonnull)keypath;
- (CGRect)convertWithRect:(CGRect)rect toLayerAt:(CompatibleAnimationKeypath * _Nullable)keypath SWIFT_WARN_UNUSED_RESULT;
- (CGPoint)convertWithPoint:(CGPoint)point toLayerAt:(CompatibleAnimationKeypath * _Nullable)keypath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)progressTimeForMarker:(NSString * _Nonnull)named SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)frameTimeForMarker:(NSString * _Nonnull)named SWIFT_WARN_UNUSED_RESULT;
@end








@protocol OndatoFlowDelegate;
@class OndatoServiceConfiguration;
@class OndatoViewController;

SWIFT_CLASS_NAMED("Ondato")
@interface Ondato : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Ondato * _Nonnull sdk;)
+ (Ondato * _Nonnull)sdk SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, weak) id <OndatoFlowDelegate> _Nullable delegate;
@property (nonatomic, strong) OndatoServiceConfiguration * _Nonnull configuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setIdentityVerificationId:(NSString * _Nonnull)id;
- (void)setSetupId:(NSString * _Nonnull)setupId;
- (void)setClientId:(NSString * _Nonnull)clientId;
- (void)setClientSecret:(NSString * _Nonnull)clientSecret;
- (OndatoViewController * _Nonnull)instantiateOndatoViewController SWIFT_WARN_UNUSED_RESULT;
@end

@class OndatoGDRPAppearance;

SWIFT_CLASS_NAMED("OndatoAppearance")
@interface OndatoAppearance : NSObject
@property (nonatomic, strong) OndatoGDRPAppearance * _Nonnull consentWindow;
@property (nonatomic, strong) UIColor * _Nonnull progressColor;
@property (nonatomic, strong) UIColor * _Nonnull errorColor;
@property (nonatomic, strong) UIColor * _Nonnull errorTextColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonColor;
@property (nonatomic, strong) UIColor * _Nonnull buttonTextColor;
@property (nonatomic, strong) UIColor * _Nonnull textColor;
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull imageTintColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIFont;

SWIFT_CLASS_NAMED("OndatoButtonAppearance")
@interface OndatoButtonAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull backgroundColor;
@property (nonatomic, strong) UIColor * _Nonnull tintColor;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
@property (nonatomic) CGFloat cornerRadius;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class OndatoLabelAppearance;
@class OndatoTextViewAppearance;

SWIFT_CLASS_NAMED("OndatoConsentAppearance")
@interface OndatoGDRPAppearance : NSObject
@property (nonatomic, strong) OndatoLabelAppearance * _Nonnull header;
@property (nonatomic, strong) OndatoTextViewAppearance * _Nonnull body;
@property (nonatomic, strong) OndatoButtonAppearance * _Nonnull acceptButton;
@property (nonatomic, strong) OndatoButtonAppearance * _Nonnull declineButton;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoDocumentType, "OndatoDocumentType", open) {
  OndatoDocumentTypePassport = 0,
  OndatoDocumentTypeIdCard = 1,
  OndatoDocumentTypeDrivingLicence = 2,
  OndatoDocumentTypeProofOfAddress = 3,
};

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoServerMode, "OndatoEnvironment", open) {
  OndatoServerModeTest = 0,
  OndatoServerModeLive = 1,
};


SWIFT_CLASS_NAMED("OndatoFlowConfiguration")
@interface OndatoFlowConfiguration : NSObject
@property (nonatomic) BOOL showStartScreen;
@property (nonatomic) BOOL showSuccessWindow;
@property (nonatomic) BOOL removeSelfieFrame;
@property (nonatomic) BOOL skipRegistrationIfDriverLicense;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIViewController;
@class OndatoServiceError;

SWIFT_PROTOCOL_NAMED("OndatoFlowDelegate")
@protocol OndatoFlowDelegate
@optional
- (UIViewController * _Nonnull)viewControllerForStartWithStartPressed:(void (^ _Nonnull)(void))startPressed SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)viewForLoadingWithProgress:(float)progress SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)viewForSuccessWithContinue:(void (^ _Nonnull)(void))continue_ SWIFT_WARN_UNUSED_RESULT;
@required
- (void)flowDidSucceedWithIdentificationId:(NSString * _Nullable)identificationId;
- (void)flowDidFailWithIdentificationId:(NSString * _Nullable)identificationId error:(OndatoServiceError * _Nonnull)error;
@end


SWIFT_CLASS_NAMED("OndatoLabelAppearance")
@interface OndatoLabelAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull color;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("OndatoLocalizationBundle")
@interface OndatoLocalizationBundle : NSObject
+ (OndatoLocalizationBundle * _Nonnull)bundleWith:(NSBundle * _Nonnull)bundle tableName:(NSString * _Nonnull)tableName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithBundle:(NSBundle * _Nonnull)bundle tableName:(NSString * _Nonnull)tableName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum OndatoSupportedLanguage : NSInteger;

SWIFT_CLASS_NAMED("OndatoLocalizeHelper")
@interface OndatoLocalizeHelper : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum OndatoSupportedLanguage language;)
+ (enum OndatoSupportedLanguage)language SWIFT_WARN_UNUSED_RESULT;
+ (void)setLanguage:(enum OndatoSupportedLanguage)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (void)setLocalizationBundle:(OndatoLocalizationBundle * _Nonnull)bundle for:(enum OndatoSupportedLanguage)language;
@end


SWIFT_CLASS("_TtC9OndatoSDK9OndatoLog")
@interface OndatoLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("OndatoLogManager")
@interface OndatoLogManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) OndatoLogManager * _Nonnull manager;)
+ (OndatoLogManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)showLogButton;
- (void)hideLogButton;
@end


SWIFT_CLASS_NAMED("OndatoServiceConfiguration")
@interface OndatoServiceConfiguration : NSObject
@property (nonatomic, strong) OndatoAppearance * _Nonnull appearance;
@property (nonatomic, strong) OndatoFlowConfiguration * _Nonnull flowConfiguration;
@property (nonatomic) enum OndatoServerMode mode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("OndatoServiceError")
@interface OndatoServiceError : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoServiceErrorType, "OndatoServiceErrorType", open) {
  OndatoServiceErrorTypeCancelled = 0,
  OndatoServiceErrorTypeConsentDenied = 1,
  OndatoServiceErrorTypeFaceDataNotPresent = 2,
  OndatoServiceErrorTypeInvalidServerResponse = 3,
  OndatoServiceErrorTypeInvalidCredentials = 4,
  OndatoServiceErrorTypeRecorderPermissions = 5,
  OndatoServiceErrorTypeRecorderStartError = 6,
  OndatoServiceErrorTypeRecorderEndError = 7,
  OndatoServiceErrorTypeVerificationFailed = 8,
  OndatoServiceErrorTypeNfcNotSupported = 9,
  OndatoServiceErrorTypeAccessToken = 10,
  OndatoServiceErrorTypeIdvConfig = 11,
  OndatoServiceErrorTypeIdvSetup = 12,
  OndatoServiceErrorTypeFacetecSdk = 13,
  OndatoServiceErrorTypeFaceSetup = 14,
  OndatoServiceErrorTypeFacetecLicense = 15,
  OndatoServiceErrorTypeKycCompleted = 16,
  OndatoServiceErrorTypeKycConfig = 17,
  OndatoServiceErrorTypeKycId = 18,
  OndatoServiceErrorTypeKycSetup = 19,
  OndatoServiceErrorTypeMrzScanner = 20,
  OndatoServiceErrorTypePersonalCodeUpload = 21,
  OndatoServiceErrorTypeRecordingUpload = 22,
  OndatoServiceErrorTypeRestartFailed = 23,
  OndatoServiceErrorTypeVerificationFailedNoStatus = 24,
  OndatoServiceErrorTypeVerificationStatusFailed = 25,
};

typedef SWIFT_ENUM_NAMED(NSInteger, OndatoSupportedLanguage, "OndatoSupportedLanguage", open) {
  OndatoSupportedLanguageBG = 0,
  OndatoSupportedLanguageDE = 1,
  OndatoSupportedLanguageEN = 2,
  OndatoSupportedLanguageES = 3,
  OndatoSupportedLanguageET = 4,
  OndatoSupportedLanguageFR = 5,
  OndatoSupportedLanguageEL = 6,
  OndatoSupportedLanguageIT = 7,
  OndatoSupportedLanguageLT = 8,
  OndatoSupportedLanguageLV = 9,
  OndatoSupportedLanguageNL = 10,
  OndatoSupportedLanguageRO = 11,
  OndatoSupportedLanguageRU = 12,
  OndatoSupportedLanguageSQ = 13,
};


SWIFT_CLASS_NAMED("OndatoTextViewAppearance")
@interface OndatoTextViewAppearance : NSObject
@property (nonatomic, strong) UIFont * _Nonnull font;
@property (nonatomic, strong) UIColor * _Nonnull textColor;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC9OndatoSDK20OndatoViewController")
@interface OndatoViewController : UIPageViewController
- (nonnull instancetype)initWithTransitionStyle:(UIPageViewControllerTransitionStyle)style navigationOrientation:(UIPageViewControllerNavigationOrientation)navigationOrientation options:(NSDictionary<UIPageViewControllerOptionsKey, id> * _Nullable)options OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9OndatoSDK14PassportReader") SWIFT_AVAILABILITY(ios,introduced=13)
@interface PassportReader : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end






























#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
