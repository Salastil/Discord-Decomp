package zh;

import com.google.android.gms.common.api.Status;
import java.util.HashMap;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class a extends ze.e {
    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public a(int i5) {
        super(new Status(i5, String.format(r1, "Review Error(%d): %s", r2, r3), null, null));
        String str;
        Locale locale = Locale.getDefault();
        Integer valueOf = Integer.valueOf(i5);
        HashMap hashMap = bi.a.a;
        Integer valueOf2 = Integer.valueOf(i5);
        if (hashMap.containsKey(valueOf2)) {
            str = ((String) hashMap.get(valueOf2)) + " (https://developer.android.com/reference/com/google/android/play/core/review/model/ReviewErrorCode.html#" + ((String) bi.a.f3018b.get(valueOf2)) + ")";
        } else {
            str = "";
        }
    }
}
