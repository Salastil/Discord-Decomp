package androidx.core.app;

import android.app.PendingIntent;
import android.os.Bundle;
import androidx.core.graphics.drawable.IconCompat;
import ki.b;

/* loaded from: classes.dex */
public final class NotificationCompat$Action {
    public final Bundle a;

    /* renamed from: b, reason: collision with root package name */
    public IconCompat f1439b;

    /* renamed from: c, reason: collision with root package name */
    public final RemoteInput[] f1440c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f1441d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f1442e;

    /* renamed from: f, reason: collision with root package name */
    public final int f1443f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f1444g;

    /* renamed from: h, reason: collision with root package name */
    public final int f1445h;

    /* renamed from: i, reason: collision with root package name */
    public final CharSequence f1446i;
    public final PendingIntent j;
    public final boolean k;

    public NotificationCompat$Action(IconCompat iconCompat, CharSequence charSequence, PendingIntent pendingIntent, Bundle bundle, RemoteInput[] remoteInputArr, RemoteInput[] remoteInputArr2, boolean z5, int i5, boolean z6, boolean z7, boolean z8) {
        this.f1442e = true;
        this.f1439b = iconCompat;
        if (iconCompat != null) {
            int i6 = iconCompat.a;
            if ((i6 == -1 ? b.G(iconCompat.f1515b) : i6) == 2) {
                this.f1445h = iconCompat.f();
            }
        }
        this.f1446i = NotificationCompat$Builder.e(charSequence);
        this.j = pendingIntent;
        this.a = bundle == null ? new Bundle() : bundle;
        this.f1440c = remoteInputArr;
        this.f1441d = z5;
        this.f1443f = i5;
        this.f1442e = z6;
        this.f1444g = z7;
        this.k = z8;
    }

    public final IconCompat a() {
        int i5;
        if (this.f1439b == null && (i5 = this.f1445h) != 0) {
            this.f1439b = IconCompat.d(null, "", i5);
        }
        return this.f1439b;
    }
}
