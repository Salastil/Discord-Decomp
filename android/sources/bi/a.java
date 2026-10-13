package bi;

import java.util.HashMap;
import s4.h;

/* loaded from: classes3.dex */
public abstract class a {
    public static final HashMap a;

    /* renamed from: b, reason: collision with root package name */
    public static final HashMap f3018b;

    static {
        HashMap hashMap = new HashMap();
        a = hashMap;
        HashMap hashMap2 = new HashMap();
        f3018b = hashMap2;
        Integer c6 = h.c(hashMap, -1, "The Play Store app is either not installed or not the official version.", -2, "Call first requestReviewFlow to get the ReviewInfo.");
        hashMap.put(-100, "Retry with an exponential backoff. Consider filing a bug if fails consistently.");
        hashMap2.put(-1, "PLAY_STORE_NOT_FOUND");
        hashMap2.put(c6, "INVALID_REQUEST");
        hashMap2.put(-100, "INTERNAL_ERROR");
    }
}
