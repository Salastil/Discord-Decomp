package androidx.core.app;

import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationChannelGroup;
import android.app.NotificationManager;
import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import u3.e;
import x0.b1;
import x0.k;
import x0.l;
import x0.m;
import x0.n;
import x0.y0;

/* loaded from: classes.dex */
public final class NotificationManagerCompat {

    /* renamed from: d, reason: collision with root package name */
    public static String f1476d;

    /* renamed from: g, reason: collision with root package name */
    public static b1 f1479g;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final NotificationManager f1480b;

    /* renamed from: c, reason: collision with root package name */
    public static final Object f1475c = new Object();

    /* renamed from: e, reason: collision with root package name */
    public static HashSet f1477e = new HashSet();

    /* renamed from: f, reason: collision with root package name */
    public static final Object f1478f = new Object();

    public NotificationManagerCompat(Context context) {
        this.a = context;
        this.f1480b = (NotificationManager) context.getSystemService("notification");
    }

    public final void a(List list) {
        NotificationChannelGroup notificationChannelGroup;
        if (Build.VERSION.SDK_INT < 26 || list.isEmpty()) {
            return;
        }
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            n nVar = (n) it.next();
            int i5 = Build.VERSION.SDK_INT;
            if (i5 < 26) {
                nVar.getClass();
                notificationChannelGroup = null;
            } else {
                NotificationChannelGroup e9 = k.e(nVar.f20204b, nVar.a);
                if (i5 >= 28) {
                    m.f(e9, nVar.f20205c);
                }
                notificationChannelGroup = e9;
            }
            arrayList.add(notificationChannelGroup);
        }
        k.f(this.f1480b, arrayList);
    }

    public final void b(List list) {
        NotificationChannel notificationChannel;
        String str;
        String str2;
        if (Build.VERSION.SDK_INT < 26 || list.isEmpty()) {
            return;
        }
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            NotificationChannelCompat notificationChannelCompat = (NotificationChannelCompat) it.next();
            int i5 = Build.VERSION.SDK_INT;
            if (i5 < 26) {
                notificationChannelCompat.getClass();
                notificationChannel = null;
            } else {
                NotificationChannel d6 = k.d(notificationChannelCompat.f1429c, notificationChannelCompat.f1428b, notificationChannelCompat.a);
                k.E(d6, notificationChannelCompat.f1430d);
                k.F(d6, notificationChannelCompat.f1431e);
                k.K(d6, notificationChannelCompat.f1432f);
                k.L(d6, notificationChannelCompat.f1433g, notificationChannelCompat.f1434h);
                k.j(d6, notificationChannelCompat.f1435i);
                k.H(d6, notificationChannelCompat.j);
                k.N(d6, notificationChannelCompat.f1436l);
                k.k(d6, notificationChannelCompat.k);
                if (i5 >= 30 && (str = notificationChannelCompat.f1437m) != null && (str2 = notificationChannelCompat.f1438n) != null) {
                    l.d(d6, str, str2);
                }
                notificationChannel = d6;
            }
            arrayList.add(notificationChannel);
        }
        k.g(this.f1480b, arrayList);
    }

    public final NotificationChannelCompat c(String str) {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 26) {
            NotificationChannel w5 = i5 >= 26 ? k.w(this.f1480b, str) : null;
            if (w5 != null) {
                return new NotificationChannelCompat(w5);
            }
        }
        return null;
    }

    public final NotificationChannelGroup d(String str) {
        int i5 = Build.VERSION.SDK_INT;
        NotificationManager notificationManager = this.f1480b;
        if (i5 >= 28) {
            return m.d(notificationManager, str);
        }
        if (i5 < 26) {
            return null;
        }
        Iterator it = (i5 >= 26 ? k.x(notificationManager) : Collections.EMPTY_LIST).iterator();
        while (it.hasNext()) {
            NotificationChannelGroup b10 = e.b(it.next());
            if (b10.getId().equals(str)) {
                return b10;
            }
        }
        return null;
    }

    public final List e() {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 26) {
            NotificationManager notificationManager = this.f1480b;
            List x5 = i5 >= 26 ? k.x(notificationManager) : Collections.EMPTY_LIST;
            if (!x5.isEmpty()) {
                List y5 = i5 >= 28 ? Collections.EMPTY_LIST : i5 >= 26 ? k.y(notificationManager) : Collections.EMPTY_LIST;
                ArrayList arrayList = new ArrayList(x5.size());
                Iterator it = x5.iterator();
                while (it.hasNext()) {
                    NotificationChannelGroup b10 = e.b(it.next());
                    if (Build.VERSION.SDK_INT >= 28) {
                        arrayList.add(new n(b10, Collections.EMPTY_LIST));
                    } else {
                        arrayList.add(new n(b10, y5));
                    }
                }
                return arrayList;
            }
        }
        return Collections.EMPTY_LIST;
    }

    public final List f() {
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 26) {
            List y5 = i5 >= 26 ? k.y(this.f1480b) : Collections.EMPTY_LIST;
            if (!y5.isEmpty()) {
                ArrayList arrayList = new ArrayList(y5.size());
                Iterator it = y5.iterator();
                while (it.hasNext()) {
                    arrayList.add(new NotificationChannelCompat((NotificationChannel) it.next()));
                }
                return arrayList;
            }
        }
        return Collections.EMPTY_LIST;
    }

    public final void g(String str, int i5, Notification notification) {
        NotificationManager notificationManager = this.f1480b;
        Bundle bundle = notification.extras;
        if (bundle == null || !bundle.getBoolean("android.support.useSideChannel")) {
            notificationManager.notify(str, i5, notification);
            return;
        }
        y0 y0Var = new y0(this.a.getPackageName(), i5, str, notification);
        synchronized (f1478f) {
            try {
                if (f1479g == null) {
                    f1479g = new b1(this.a.getApplicationContext());
                }
                f1479g.f20180e.obtainMessage(0, y0Var).sendToTarget();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        notificationManager.cancel(str, i5);
    }
}
