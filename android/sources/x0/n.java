package x0;

import android.app.NotificationChannel;
import android.app.NotificationChannelGroup;
import android.os.Build;
import androidx.core.app.NotificationChannelCompat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public final class n {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public CharSequence f20204b;

    /* renamed from: c, reason: collision with root package name */
    public String f20205c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f20206d;

    /* renamed from: e, reason: collision with root package name */
    public final List f20207e;

    public n(String str) {
        this.f20207e = Collections.EMPTY_LIST;
        str.getClass();
        this.a = str;
    }

    public final ArrayList a(List list) {
        ArrayList arrayList = new ArrayList();
        Iterator it = list.iterator();
        while (it.hasNext()) {
            NotificationChannel notificationChannel = (NotificationChannel) it.next();
            if (this.a.equals(notificationChannel.getGroup())) {
                arrayList.add(new NotificationChannelCompat(notificationChannel));
            }
        }
        return arrayList;
    }

    public n(NotificationChannelGroup notificationChannelGroup, List list) {
        this(k.q(notificationChannelGroup));
        this.f20204b = k.v(notificationChannelGroup);
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 28) {
            this.f20205c = m.c(notificationChannelGroup);
        }
        if (i5 >= 28) {
            this.f20206d = m.e(notificationChannelGroup);
            a(k.m(notificationChannelGroup));
        } else {
            a(list);
        }
    }
}
