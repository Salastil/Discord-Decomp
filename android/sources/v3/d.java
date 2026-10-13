package v3;

import android.net.Uri;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class d {
    public final Uri a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f19192b;

    public d(boolean z5, Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        this.a = uri;
        this.f19192b = z5;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(d.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type androidx.work.Constraints.ContentUriTrigger");
        d dVar = (d) obj;
        return Intrinsics.areEqual(this.a, dVar.a) && this.f19192b == dVar.f19192b;
    }

    public final int hashCode() {
        return Boolean.hashCode(this.f19192b) + (this.a.hashCode() * 31);
    }
}
