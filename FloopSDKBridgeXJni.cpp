#include "cocos2d.h"
#include "FloopSDKBridgeX.h"
#include "FloopSDKBridgeXJni.h"

#if( CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID )
#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#endif

extern "C" {
void showGalleryJNI() {
	JniMethodInfo t;
	if (JniHelper::getStaticMethodInfo(t,
			"com.getfloop.android.sdk.cocos2dx.FloopSDKBridge", "showGallery",
			"()V")) {
		t.env->CallStaticVoidMethod(t.classID, t.methodID);
		t.env->DeleteLocalRef(t.classID);
	}
}

void showCrossPromotionGroupJNI() {
	JniMethodInfo t;
	if (JniHelper::getStaticMethodInfo(t,
			"com.getfloop.android.sdk.cocos2dx.FloopSDKBridge",
			"showCrossPromotionGroup", "()V")) {
		t.env->CallStaticVoidMethod(t.classID, t.methodID);
		t.env->DeleteLocalRef(t.classID);
	}
}

void showParentalGateJNI() {
	JniMethodInfo t;
	if (JniHelper::getStaticMethodInfo(t,
			"com.getfloop.android.sdk.cocos2dx.FloopSDKBridge",
			"showParentalGate", "()V")) {
		t.env->CallStaticVoidMethod(t.classID, t.methodID);
		t.env->DeleteLocalRef(t.classID);
	}
}

jboolean Java_com_getfloop_android_sdk_cocos2dx_FloopSDKBridge_parentalGateOnSuccessAnswer(
		JNIEnv* env, jobject thiz) {
	if (FloopSDKBridgeXDelegate* delegate =
			FloopSDKBridgeX::sharedFloopSDKBridgeX()->getDelegate()) {
		delegate->parentalGateOnSuccessAnswer();
	}

	return true;
}

jboolean Java_com_getfloop_android_sdk_cocos2dx_FloopSDKBridge_parentalGateOnFailureAnswer(
		JNIEnv* env, jobject thiz) {
	if (FloopSDKBridgeXDelegate* delegate =
			FloopSDKBridgeX::sharedFloopSDKBridgeX()->getDelegate()) {
		delegate->parentalGateOnFailureAnswer();
	}
	return true;
}

jboolean Java_com_getfloop_android_sdk_cocos2dx_FloopSDKBridge_parentalGateOnError(
		JNIEnv* env, jobject thiz) {
	if (FloopSDKBridgeXDelegate* delegate =
			FloopSDKBridgeX::sharedFloopSDKBridgeX()->getDelegate()) {
		delegate->parentalGateOnError();
	}

	return true;
}

jboolean Java_com_getfloop_android_sdk_cocos2dx_FloopSDKBridge_onSuccessFloopClient(
		JNIEnv* env, jobject thiz) {
	if (FloopSDKBridgeXDelegate* delegate =
			FloopSDKBridgeX::sharedFloopSDKBridgeX()->getDelegate()) {
		delegate->onSuccessFloopClient();
	}

	return true;
}

jboolean Java_com_getfloop_android_sdk_cocos2dx_FloopSDKBridge_onFailureFloopClient(
		JNIEnv* env, jobject thiz) {
	if (FloopSDKBridgeXDelegate* delegate =
			FloopSDKBridgeX::sharedFloopSDKBridgeX()->getDelegate()) {
		delegate->onFailureFloopClient();
	}

	return true;
}
}
