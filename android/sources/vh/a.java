package vh;

import java.util.HashMap;
import s4.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f19415b;

    static {
        HashMap hashMap = new HashMap();
        a = hashMap;
        HashMap hashMap2 = new HashMap();
        f19415b = hashMap2;
        Integer c6 = h.c(hashMap, -1, "The requesting app is unavailable (e.g. unpublished, nonexistent version code).", -2, "The requested pack is not available.");
        Integer c8 = h.c(hashMap, -3, "The request is invalid.", -4, "The requested download is not found.");
        Integer c10 = h.c(hashMap, -5, "The Asset Delivery API is not available.", -6, "Network error. Unable to obtain the asset pack details.");
        Integer c11 = h.c(hashMap, -7, "Download not permitted under current device circumstances (e.g. in background).", -10, "Asset pack download failed due to insufficient storage.");
        Integer c12 = h.c(hashMap, -11, "The Play Store app is either not installed or not the official version.", -12, "Tried to show the cellular data confirmation but no asset packs are waiting for Wi-Fi.");
        Integer c13 = h.c(hashMap, -13, "The app is not owned by any user on this device. An app is \"owned\" if it has been acquired from Play.", -14, "Tried to show the confirmation dialog but no asset packs are waiting for user confirmation.");
        Integer c14 = h.c(hashMap, c13, "The installed app version was not installed by Play.", -100, "Unknown error downloading an asset pack.");
        hashMap2.put(-1, "APP_UNAVAILABLE");
        hashMap2.put(c6, "PACK_UNAVAILABLE");
        hashMap2.put(-3, "INVALID_REQUEST");
        hashMap2.put(c8, "DOWNLOAD_NOT_FOUND");
        hashMap2.put(-5, "API_NOT_AVAILABLE");
        hashMap2.put(c10, "NETWORK_ERROR");
        hashMap2.put(-7, "ACCESS_DENIED");
        hashMap2.put(c11, "INSUFFICIENT_STORAGE");
        hashMap2.put(-11, "PLAY_STORE_NOT_FOUND");
        hashMap2.put(c12, "NETWORK_UNRESTRICTED");
        hashMap2.put(-13, "APP_NOT_OWNED");
        hashMap2.put(c13, "CONFIRMATION_NOT_REQUIRED");
        hashMap2.put(-15, "UNRECOGNIZED_INSTALLATION");
        hashMap2.put(c14, "INTERNAL_ERROR");
    }
}
