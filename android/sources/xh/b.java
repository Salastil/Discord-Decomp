package xh;

import com.google.android.gms.common.api.Status;
import java.util.HashMap;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class b extends ze.e {

    /* renamed from: e, reason: collision with root package name */
    public final Throwable f20459e;

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Removed duplicated region for block: B:11:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:8:0x0065  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(int i5, Exception exc) {
        super(new Status(i5, "Standard Integrity API error (" + i5 + "): " + r1 + ".", null, null));
        String str;
        Locale locale = Locale.ROOT;
        HashMap hashMap = yh.b.a;
        Integer valueOf = Integer.valueOf(i5);
        if (hashMap.containsKey(valueOf)) {
            HashMap hashMap2 = yh.b.f20938b;
            if (hashMap2.containsKey(valueOf)) {
                str = ((String) hashMap.get(valueOf)) + " (https://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/StandardIntegrityErrorCode.html#" + ((String) hashMap2.get(valueOf)) + ")";
                if (i5 != 0) {
                    throw new IllegalArgumentException("ErrorCode should not be 0.");
                }
                this.f20459e = exc;
                return;
            }
        }
        str = "";
        if (i5 != 0) {
        }
    }

    @Override // java.lang.Throwable
    public final synchronized Throwable getCause() {
        return this.f20459e;
    }
}
