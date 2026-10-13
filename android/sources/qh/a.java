package qh;

import com.google.android.gms.common.api.Status;
import java.util.HashMap;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class a extends ze.e {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int i5, int i6) {
        super(new Status(i5, String.format(Locale.getDefault(), "Age Signals Error: %d", Integer.valueOf(i5)), null, null));
        String str;
        switch (i6) {
            case 1:
                Locale locale = Locale.getDefault();
                Integer valueOf = Integer.valueOf(i5);
                HashMap hashMap = vh.a.a;
                Integer valueOf2 = Integer.valueOf(i5);
                if (hashMap.containsKey(valueOf2)) {
                    str = ((String) hashMap.get(valueOf2)) + " (https://developer.android.com/reference/com/google/android/play/core/assetpacks/model/AssetPackErrorCode.html#" + ((String) vh.a.f19415b.get(valueOf2)) + ")";
                } else {
                    str = "";
                }
                super(new Status(i5, String.format(locale, "Asset Pack Download Error(%d): %s", valueOf, str), null, null));
                if (i5 == 0) {
                    throw new IllegalArgumentException("errorCode should not be 0.");
                }
                return;
            default:
                if (i5 == 0) {
                    throw new IllegalArgumentException("errorCode should not be 0.");
                }
                return;
        }
    }
}
