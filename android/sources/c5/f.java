package c5;

import android.text.TextUtils;

/* loaded from: classes.dex */
public final class f {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3330b;

    public f(String str, String str2) {
        this.a = str;
        this.f3330b = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && f.class == obj.getClass()) {
            f fVar = (f) obj;
            if (TextUtils.equals(this.a, fVar.a) && TextUtils.equals(this.f3330b, fVar.f3330b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f3330b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("Header[name=");
        sb2.append(this.a);
        sb2.append(",value=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f3330b, "]");
    }
}
