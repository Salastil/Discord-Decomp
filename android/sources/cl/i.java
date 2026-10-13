package cl;

import android.graphics.Typeface;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i {
    public final Typeface a;

    /* renamed from: b, reason: collision with root package name */
    public final String f3583b;

    public i(String settings, Typeface baseTypeface) {
        Intrinsics.checkNotNullParameter(baseTypeface, "baseTypeface");
        Intrinsics.checkNotNullParameter(settings, "settings");
        this.a = baseTypeface;
        this.f3583b = settings;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return Intrinsics.areEqual(this.a, iVar.a) && Intrinsics.areEqual(this.f3583b, iVar.f3583b);
    }

    public final int hashCode() {
        return this.f3583b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return "VariationCacheKey(baseTypeface=" + this.a + ", settings=" + this.f3583b + ")";
    }
}
