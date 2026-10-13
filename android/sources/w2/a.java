package w2;

import a5.u;
import android.os.Handler;
import android.os.Looper;
import com.google.android.gms.internal.play_billing.v0;
import java.util.concurrent.atomic.AtomicBoolean;
import l4.b0;
import ve.d;

/* loaded from: classes.dex */
public final class a implements Runnable {

    /* renamed from: x, reason: collision with root package name */
    public static Handler f19620x;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ d f19625w;

    /* renamed from: e, reason: collision with root package name */
    public volatile int f19622e = 1;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicBoolean f19623i = new AtomicBoolean();

    /* renamed from: v, reason: collision with root package name */
    public final AtomicBoolean f19624v = new AtomicBoolean();

    /* renamed from: d, reason: collision with root package name */
    public final b0 f19621d = new b0(this, new u(3, this));

    public a(d dVar) {
        this.f19625w = dVar;
    }

    public final void a(Object obj) {
        Handler handler;
        synchronized (a.class) {
            try {
                if (f19620x == null) {
                    f19620x = new Handler(Looper.getMainLooper());
                }
                handler = f19620x;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        handler.post(new v0(this, obj, 23, false));
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f19625w.b();
    }
}
