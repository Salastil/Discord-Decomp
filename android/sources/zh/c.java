package zh;

import android.app.PendingIntent;

/* loaded from: classes3.dex */
public final class c extends b {

    /* renamed from: d, reason: collision with root package name */
    public final PendingIntent f21242d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f21243e;

    public c(PendingIntent pendingIntent, boolean z5) {
        if (pendingIntent == null) {
            throw new NullPointerException("Null pendingIntent");
        }
        this.f21242d = pendingIntent;
        this.f21243e = z5;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof b) {
            c cVar = (c) ((b) obj);
            if (this.f21242d.equals(cVar.f21242d) && this.f21243e == cVar.f21243e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((this.f21242d.hashCode() ^ 1000003) * 1000003) ^ (true != this.f21243e ? 1237 : 1231);
    }

    public final String toString() {
        return "ReviewInfo{pendingIntent=" + this.f21242d.toString() + ", isNoOp=" + this.f21243e + "}";
    }
}
