package yh;

import java.util.HashMap;
import s4.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f20937b;

    static {
        HashMap hashMap = new HashMap();
        a = hashMap;
        HashMap hashMap2 = new HashMap();
        f20937b = hashMap2;
        Integer c6 = h.c(hashMap, -1, "Integrity API is not available.\nIntegrity API is not enabled, or the Play Store version might be old.\nRecommended actions:\n1) Make sure that Integrity API is enabled in Google Play Console.\n2) Ask the user to update Play Store.\n", -2, "The Play Store app is either not installed or not the official version.\nAsk the user to install an official and recent version of Play Store.\n");
        Integer c8 = h.c(hashMap, -3, "Network error: unable to obtain integrity details.\nRecommended actions:\n1) Ask the user to check and enable their network connection.\n2) For a guided user experience to help the user establish a network connection, you can show either the 'GET_INTEGRITY' or 'GET_STRONG_INTEGRITY' dialog.\n", -4, "No active account found in the Play Store app. Note that the Play Integrity API now supports unauthenticated requests. This error code is used only for older Play Store versions that lack support.\nAsk the user to authenticate in Play Store.\n");
        Integer c10 = h.c(hashMap, -5, "PackageManager could not find this app.\nSomething is wrong (possibly an attack). Non-actionable.\n", -6, "Google Play Services is not available or version is too old.\nRecommended actions:\n1) Ask the user to install or update Play Services.\n2) For a guided user experience that helps the user to enable, install or update Play Services, you can show either the 'GET_INTEGRITY' or 'GET_STRONG_INTEGRITY' dialog.\n");
        Integer c11 = h.c(hashMap, -7, "The calling app UID (user id) does not match the one from Package Manager.\nSomething is wrong (possibly an attack). Non-actionable.\n", -8, "The calling app has made too many requests to the API and has been throttled, or your app has exceeded its daily request quota.\nRetry with an exponential backoff. Request an increase to your daily request quota if you're at your daily request limit.\n");
        Integer c12 = h.c(hashMap, -9, "Binding to the service in the Play Store has failed. This can be due to having an old Play Store version installed on the device.\nAsk the user to update Play Store.\n", -10, "Nonce length is too short. The nonce must be a minimum of 16 bytes (before base64 encoding) to allow for a better security.\nRetry with a longer nonce.\n");
        Integer c13 = h.c(hashMap, -11, "Nonce length is too long. The nonce must be less than 500 bytes before base64 encoding.\nRetry with a shorter nonce.\n", -12, "Unknown internal Google server error.\nRetry with an exponential backoff. Consider filing a bug if fails consistently.\n");
        Integer c14 = h.c(hashMap, -13, "Nonce is not encoded as a base64 web-safe no-wrap string.\nRetry with correct nonce format.\n", -14, "The Play Store needs to be updated.\nAsk the user to update the Google Play Store.\n");
        Integer c15 = h.c(hashMap, -15, "Play Services needs to be updated.\nRecommended actions:\n1) Ask the user to update Google Play Services.\n2) For a guided user experience that helps the user to update Play Services, you can show either the 'GET_INTEGRITY' or 'GET_STRONG_INTEGRITY' dialog.\n", -16, "The provided cloud project number is invalid.\nUse the cloud project number which can be found in Project info in your Google Cloud Console for the cloud project where Play Integrity API is enabled.\n");
        Integer c16 = h.c(hashMap, -100, "Unknown error processing integrity request.\nRetry with an exponential backoff. Consider filing a bug if fails consistently.\n", -17, "There is a transient error on the calling device.\nRetry with an exponential backoff.\n");
        hashMap2.put(-1, "API_NOT_AVAILABLE");
        hashMap2.put(-3, "NETWORK_ERROR");
        hashMap2.put(c6, "PLAY_STORE_NOT_FOUND");
        hashMap2.put(c8, "PLAY_STORE_ACCOUNT_NOT_FOUND");
        hashMap2.put(c14, "PLAY_STORE_VERSION_OUTDATED");
        hashMap2.put(-5, "APP_NOT_INSTALLED");
        hashMap2.put(c10, "PLAY_SERVICES_NOT_FOUND");
        hashMap2.put(-15, "PLAY_SERVICES_VERSION_OUTDATED");
        hashMap2.put(-7, "APP_UID_MISMATCH");
        hashMap2.put(c11, "TOO_MANY_REQUESTS");
        hashMap2.put(-9, "CANNOT_BIND_TO_SERVICE");
        hashMap2.put(c12, "NONCE_TOO_SHORT");
        hashMap2.put(-11, "NONCE_TOO_LONG");
        hashMap2.put(-13, "NONCE_IS_NOT_BASE64");
        hashMap2.put(c15, "CLOUD_PROJECT_NUMBER_IS_INVALID");
        hashMap2.put(c13, "GOOGLE_SERVER_UNAVAILABLE");
        hashMap2.put(-100, "INTERNAL_ERROR");
        hashMap2.put(c16, "CLIENT_TRANSIENT_ERROR");
    }
}
