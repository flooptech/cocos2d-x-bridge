## Documentation
You can find the complete documentation here: http://www.getfloop.com/docs/category/cocos-2d-x/cocos-android/
## Add to your project

### Android

#### Install Floop SDK
You can find all the steps to integrate Floop SDK within your application in our documentation: http://www.getfloop.com/docs/cocos-2d-x/cocos-android/install-and-setup-cocos2d-x/

#### Sepcific cocos2d-x settings

* Add `FloopSDKBridgeX.h` in your **Classes** folder
* Add `FloopSDKBridgeX_android.cpp`, `FloopSDKBridgeXJni.cpp` and `FloopSDKBridgeXJni.h` to your **jni** fold.
* Add `FloopSDKBridgeX_android.cpp`, `FloopSDKBridgeXJni.cpp` to your jni's **Android.mk**.

```
LOCAL_SRC_FILES := FloopSDKBridgeX_android.cpp \
                   FloopSDKBridgeXJni.cpp
```

#### Links: next step
* [initializing the framework](http://www.getfloop.com/docs/cocos-2d-x/cocos-android/install-and-setup-cocos2d-x/#initializing-the-framework)
* [parental gate]()
* [cross promotion](http://www.getfloop.com/docs/cocos-2d-x/cross-promotion-cocos-2d-x/)
* [video gallery](http://www.getfloop.com/docs/cocos-2d-x/video-gallery-cocos-2d-x/)
* [error codes](http://www.getfloop.com/docs/cocos-2d-x/cocos-android/errors-http-responses-codes-5/)
