package qh;

import android.app.Activity;

/* loaded from: classes3.dex */
public final class g {
    public final Activity a;

    public g(Activity activity) {
        this.a = activity;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof g) {
            return this.a.equals(((g) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode() ^ 1000003;
    }

    public final String toString() {
        return s4.h.f("AgeSignalsAccessRequest{activity=", this.a.toString(), "}");
    }
}
