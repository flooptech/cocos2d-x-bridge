#include <jni.h>
#include "platform/android/jni/JniHelper.h"
#include <android/log.h>

extern "C"
{
    extern void showCrossPromotionGroupJNI();
    extern void showGalleryJNI();
    extern void showParentalGateJNI();
}

