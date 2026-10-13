package androidx.core.app;

import android.app.Notification;
import android.app.NotificationChannel;
import android.media.AudioAttributes;
import android.net.Uri;
import android.os.Build;
import android.provider.Settings;
import x0.g;
import x0.k;
import x0.l;

/* loaded from: classes.dex */
public final class NotificationChannelCompat {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public CharSequence f1428b;

    /* renamed from: c, reason: collision with root package name */
    public final int f1429c;

    /* renamed from: d, reason: collision with root package name */
    public String f1430d;

    /* renamed from: e, reason: collision with root package name */
    public String f1431e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1432f;

    /* renamed from: g, reason: collision with root package name */
    public Uri f1433g;

    /* renamed from: h, reason: collision with root package name */
    public AudioAttributes f1434h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f1435i;
    public int j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public long[] f1436l;

    /* renamed from: m, reason: collision with root package name */
    public final String f1437m;

    /* renamed from: n, reason: collision with root package name */
    public final String f1438n;

    public static class Builder {
        public final NotificationChannelCompat a;

        public Builder(String str, int i5) {
            this.a = new NotificationChannelCompat(str, i5);
        }
    }

    public NotificationChannelCompat(String str, int i5) {
        this.f1432f = true;
        this.f1433g = Settings.System.DEFAULT_NOTIFICATION_URI;
        this.j = 0;
        str.getClass();
        this.a = str;
        this.f1429c = i5;
        this.f1434h = Notification.AUDIO_ATTRIBUTES_DEFAULT;
    }

    public NotificationChannelCompat(NotificationChannel notificationChannel) {
        this(k.p(notificationChannel), k.r(notificationChannel));
        this.f1428b = k.u(notificationChannel);
        this.f1430d = k.n(notificationChannel);
        this.f1431e = k.o(notificationChannel);
        this.f1432f = k.b(notificationChannel);
        this.f1433g = k.z(notificationChannel);
        this.f1434h = k.l(notificationChannel);
        this.f1435i = k.O(notificationChannel);
        this.j = k.s(notificationChannel);
        this.k = k.P(notificationChannel);
        this.f1436l = k.A(notificationChannel);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 30) {
            this.f1437m = l.b(notificationChannel);
            this.f1438n = l.a(notificationChannel);
        }
        k.a(notificationChannel);
        k.t(notificationChannel);
        if (i5 >= 29) {
            g.a(notificationChannel);
        }
        if (i5 >= 30) {
            l.c(notificationChannel);
        }
    }
}
