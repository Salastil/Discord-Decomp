package um;

import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements d {
    public final Drawable a;

    public b(Drawable drawable) {
        this.a = drawable;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof b) && Intrinsics.areEqual(this.a, ((b) obj).a);
    }

    public final int hashCode() {
        Drawable drawable = this.a;
        if (drawable == null) {
            return 0;
        }
        return drawable.hashCode();
    }

    public final String toString() {
        return "Resolved(drawable=" + this.a + ")";
    }
}
