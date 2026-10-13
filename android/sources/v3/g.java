package v3;

import android.app.Notification;

/* loaded from: classes.dex */
public final class g {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f19203b;

    /* renamed from: c, reason: collision with root package name */
    public final Notification f19204c;

    public g(int i5, Notification notification, int i6) {
        this.a = i5;
        this.f19204c = notification;
        this.f19203b = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || g.class != obj.getClass()) {
            return false;
        }
        g gVar = (g) obj;
        if (this.a == gVar.a && this.f19203b == gVar.f19203b) {
            return this.f19204c.equals(gVar.f19204c);
        }
        return false;
    }

    public final int hashCode() {
        return this.f19204c.hashCode() + (((this.a * 31) + this.f19203b) * 31);
    }

    public final String toString() {
        return "ForegroundInfo{mNotificationId=" + this.a + ", mForegroundServiceType=" + this.f19203b + ", mNotification=" + this.f19204c + '}';
    }
}
