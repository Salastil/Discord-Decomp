package ai;

import a5.c0;
import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.RemoteException;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: n, reason: collision with root package name */
    public static final HashMap f623n = new HashMap();
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final e f624b;

    /* renamed from: g, reason: collision with root package name */
    public boolean f629g;

    /* renamed from: h, reason: collision with root package name */
    public final Intent f630h;

    /* renamed from: l, reason: collision with root package name */
    public c0 f632l;

    /* renamed from: m, reason: collision with root package name */
    public d f633m;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f626d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public final HashSet f627e = new HashSet();

    /* renamed from: f, reason: collision with root package name */
    public final Object f628f = new Object();
    public final g j = new g(0, this);
    public final AtomicInteger k = new AtomicInteger(0);

    /* renamed from: c, reason: collision with root package name */
    public final String f625c = "com.google.android.finsky.inappreviewservice.InAppReviewService";

    /* renamed from: i, reason: collision with root package name */
    public final WeakReference f631i = new WeakReference(null);

    public j(Context context, e eVar, Intent intent) {
        this.a = context;
        this.f624b = eVar;
        this.f630h = intent;
    }

    public final Handler a() {
        Handler handler;
        HashMap hashMap = f623n;
        synchronized (hashMap) {
            try {
                if (!hashMap.containsKey(this.f625c)) {
                    HandlerThread handlerThread = new HandlerThread(this.f625c, 10);
                    handlerThread.start();
                    hashMap.put(this.f625c, new Handler(handlerThread.getLooper()));
                }
                handler = (Handler) hashMap.get(this.f625c);
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return handler;
    }

    public final void b() {
        synchronized (this.f628f) {
            try {
                Iterator it = this.f627e.iterator();
                while (it.hasNext()) {
                    ((jg.g) it.next()).c(new RemoteException(String.valueOf(this.f625c).concat(" : Binder has died.")));
                }
                this.f627e.clear();
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
