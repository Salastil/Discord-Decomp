package cd;

import android.text.TextUtils;

/* loaded from: classes3.dex */
public final class v {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f3485b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f3486c;

    public v(String str, boolean z5, boolean z6) {
        this.a = str;
        this.f3485b = z5;
        this.f3486c = z6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != v.class) {
            return false;
        }
        v vVar = (v) obj;
        return TextUtils.equals(this.a, vVar.a) && this.f3485b == vVar.f3485b && this.f3486c == vVar.f3486c;
    }

    public final int hashCode() {
        return ((a3.e.d(31, 31, this.a) + (this.f3485b ? 1231 : 1237)) * 31) + (this.f3486c ? 1231 : 1237);
    }
}
