package bf;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class c0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f2848b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f2849c;

    public c0(String str, boolean z5) {
        t.d(str);
        this.a = str;
        t.d("com.google.android.gms");
        this.f2848b = "com.google.android.gms";
        this.f2849c = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c0)) {
            return false;
        }
        c0 c0Var = (c0) obj;
        return t.j(this.a, c0Var.a) && t.j(this.f2848b, c0Var.f2848b) && t.j(null, null) && this.f2849c == c0Var.f2849c;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f2848b, null, 4225, Boolean.valueOf(this.f2849c)});
    }

    public final String toString() {
        String str = this.a;
        if (str != null) {
            return str;
        }
        t.g(null);
        throw null;
    }
}
