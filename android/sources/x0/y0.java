package x0;

import android.app.Notification;
import android.os.Parcel;

/* loaded from: classes.dex */
public final class y0 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f20240b;

    /* renamed from: c, reason: collision with root package name */
    public final String f20241c;

    /* renamed from: d, reason: collision with root package name */
    public final Notification f20242d;

    public y0(String str, int i5, String str2, Notification notification) {
        this.a = str;
        this.f20240b = i5;
        this.f20241c = str2;
        this.f20242d = notification;
    }

    public final void a(c.c cVar) {
        String str = this.a;
        int i5 = this.f20240b;
        String str2 = this.f20241c;
        c.a aVar = (c.a) cVar;
        aVar.getClass();
        Parcel obtain = Parcel.obtain();
        try {
            obtain.writeInterfaceToken(c.c.f3266d);
            obtain.writeString(str);
            obtain.writeInt(i5);
            obtain.writeString(str2);
            Notification notification = this.f20242d;
            if (notification != null) {
                obtain.writeInt(1);
                notification.writeToParcel(obtain, 0);
            } else {
                obtain.writeInt(0);
            }
            aVar.f3264f.transact(1, obtain, null, 1);
        } finally {
            obtain.recycle();
        }
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("NotifyTask[packageName:");
        sb2.append(this.a);
        sb2.append(", id:");
        sb2.append(this.f20240b);
        sb2.append(", tag:");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f20241c, "]");
    }
}
