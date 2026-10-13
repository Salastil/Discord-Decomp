package qe;

import android.content.Context;
import android.util.LogPrinter;
import bf.t;
import com.google.android.gms.internal.gtm.zzav;
import java.lang.Thread;
import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class i {

    /* renamed from: e, reason: collision with root package name */
    public static volatile i f16882e;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final f f16883b;

    /* renamed from: c, reason: collision with root package name */
    public volatile zzav f16884c;

    /* renamed from: d, reason: collision with root package name */
    public Thread.UncaughtExceptionHandler f16885d;

    public i(Context context) {
        Context applicationContext = context.getApplicationContext();
        t.g(applicationContext);
        this.a = applicationContext;
        this.f16883b = new f(this);
        new CopyOnWriteArrayList();
        new LogPrinter(4, "GA/LogCatTransport");
    }

    public static void a() {
        if (!(Thread.currentThread() instanceof h)) {
            throw new IllegalStateException("Call expected from worker thread");
        }
    }
}
