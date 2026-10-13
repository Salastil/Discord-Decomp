package bf;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class k implements ze.b {

    /* renamed from: e, reason: collision with root package name */
    public static final k f2896e = new k(null);

    /* renamed from: d, reason: collision with root package name */
    public final String f2897d;

    public /* synthetic */ k(String str) {
        this.f2897d = str;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof k) {
            return t.j(this.f2897d, ((k) obj).f2897d);
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f2897d});
    }
}
