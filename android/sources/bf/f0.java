package bf;

import android.content.Context;
import android.content.ServiceConnection;
import android.os.HandlerThread;
import android.os.Looper;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class f0 {

    /* renamed from: g, reason: collision with root package name */
    public static final Object f2872g = new Object();

    /* renamed from: h, reason: collision with root package name */
    public static f0 f2873h;

    /* renamed from: i, reason: collision with root package name */
    public static HandlerThread f2874i;
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final Context f2875b;

    /* renamed from: c, reason: collision with root package name */
    public volatile fg.a f2876c;

    /* renamed from: d, reason: collision with root package name */
    public final ff.a f2877d;

    /* renamed from: e, reason: collision with root package name */
    public final long f2878e;

    /* renamed from: f, reason: collision with root package name */
    public final long f2879f;

    public f0(Context context, Looper looper) {
        e0 e0Var = new e0(this);
        this.f2875b = context.getApplicationContext();
        fg.a aVar = new fg.a(looper, e0Var);
        Looper.getMainLooper();
        this.f2876c = aVar;
        this.f2877d = ff.a.a();
        this.f2878e = 5000L;
        this.f2879f = LogThrottleSingleton.RATE_LIMIT_FIVE_MINUTES;
    }

    public final ye.b a(c0 c0Var, y yVar, String str) {
        ye.b bVar;
        HashMap hashMap = this.a;
        synchronized (hashMap) {
            try {
                d0 d0Var = (d0) hashMap.get(c0Var);
                if (d0Var == null) {
                    d0Var = new d0(this, c0Var);
                    d0Var.f2857d.put(yVar, yVar);
                    bVar = d0Var.a(str, null);
                    hashMap.put(c0Var, d0Var);
                } else {
                    this.f2876c.removeMessages(0, c0Var);
                    if (d0Var.f2857d.containsKey(yVar)) {
                        String c0Var2 = c0Var.toString();
                        StringBuilder sb2 = new StringBuilder(c0Var2.length() + 81);
                        sb2.append("Trying to bind a GmsServiceConnection that was already connected before.  config=");
                        sb2.append(c0Var2);
                        throw new IllegalStateException(sb2.toString());
                    }
                    d0Var.f2857d.put(yVar, yVar);
                    int i5 = d0Var.f2858e;
                    if (i5 == 1) {
                        yVar.onServiceConnected(d0Var.f2862x, d0Var.f2860v);
                    } else if (i5 == 2) {
                        bVar = d0Var.a(str, null);
                    }
                    bVar = null;
                }
                if (d0Var.f2859i) {
                    return ye.b.f20904x;
                }
                if (bVar == null) {
                    bVar = new ye.b(-1, null, null);
                }
                return bVar;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void b(String str, ServiceConnection serviceConnection, boolean z5) {
        c0 c0Var = new c0(str, z5);
        t.h(serviceConnection, "ServiceConnection must not be null");
        HashMap hashMap = this.a;
        synchronized (hashMap) {
            try {
                d0 d0Var = (d0) hashMap.get(c0Var);
                if (d0Var == null) {
                    String c0Var2 = c0Var.toString();
                    StringBuilder sb2 = new StringBuilder(c0Var2.length() + 50);
                    sb2.append("Nonexistent connection status for service config: ");
                    sb2.append(c0Var2);
                    throw new IllegalStateException(sb2.toString());
                }
                if (!d0Var.f2857d.containsKey(serviceConnection)) {
                    String c0Var3 = c0Var.toString();
                    StringBuilder sb3 = new StringBuilder(c0Var3.length() + 76);
                    sb3.append("Trying to unbind a GmsServiceConnection  that was not bound before.  config=");
                    sb3.append(c0Var3);
                    throw new IllegalStateException(sb3.toString());
                }
                d0Var.f2857d.remove(serviceConnection);
                if (d0Var.f2857d.isEmpty()) {
                    this.f2876c.sendMessageDelayed(this.f2876c.obtainMessage(0, c0Var), this.f2878e);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
