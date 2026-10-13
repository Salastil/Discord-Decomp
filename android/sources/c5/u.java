package c5;

import android.os.SystemClock;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: classes.dex */
public final class u {

    /* renamed from: c, reason: collision with root package name */
    public static final boolean f3357c = v.a;
    public final ArrayList a = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public boolean f3358b = false;

    public final synchronized void a(long j, String str) {
        if (this.f3358b) {
            throw new IllegalStateException("Marker added to finished log");
        }
        this.a.add(new t(j, SystemClock.elapsedRealtime(), str));
    }

    public final synchronized void b(String str) {
        long j;
        this.f3358b = true;
        ArrayList arrayList = this.a;
        if (arrayList.size() == 0) {
            j = 0;
        } else {
            j = ((t) arrayList.get(arrayList.size() - 1)).f3356c - ((t) arrayList.get(0)).f3356c;
        }
        if (j <= 0) {
            return;
        }
        long j5 = ((t) this.a.get(0)).f3356c;
        v.b("(%-4d ms) %s", Long.valueOf(j), str);
        Iterator it = this.a.iterator();
        while (it.hasNext()) {
            t tVar = (t) it.next();
            long j7 = tVar.f3356c;
            v.b("(+%-4d) [%2d] %s", Long.valueOf(j7 - j5), Long.valueOf(tVar.f3355b), tVar.a);
            j5 = j7;
        }
    }

    public final void finalize() {
        if (this.f3358b) {
            return;
        }
        b("Request on the loose");
        v.c("Marker log finalized without finish() - uncaught exit point for request", new Object[0]);
    }
}
