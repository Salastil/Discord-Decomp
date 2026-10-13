package y0;

import android.content.LocusId;
import android.os.Build;
import android.text.TextUtils;

/* loaded from: classes.dex */
public final class e {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final LocusId f20595b;

    public e(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("id cannot be empty");
        }
        this.a = str;
        if (Build.VERSION.SDK_INT >= 29) {
            this.f20595b = b.b(str);
        } else {
            this.f20595b = null;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || e.class != obj.getClass()) {
            return false;
        }
        String str = ((e) obj).a;
        String str2 = this.a;
        return str2 == null ? str == null : str2.equals(str);
    }

    public final int hashCode() {
        String str = this.a;
        return 31 + (str == null ? 0 : str.hashCode());
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("LocusIdCompat[");
        sb2.append(this.a.length() + "_chars");
        sb2.append("]");
        return sb2.toString();
    }
}
