package k2;

import android.content.Context;
import android.content.pm.PackageManager;
import android.os.Handler;
import io.sentry.android.core.h1;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Objects;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* loaded from: classes.dex */
public final class s implements i {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final i1.c f13145b;

    /* renamed from: c, reason: collision with root package name */
    public final lh.f f13146c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f13147d = new Object();

    /* renamed from: e, reason: collision with root package name */
    public Handler f13148e;

    /* renamed from: f, reason: collision with root package name */
    public ThreadPoolExecutor f13149f;

    /* renamed from: g, reason: collision with root package name */
    public ThreadPoolExecutor f13150g;

    /* renamed from: h, reason: collision with root package name */
    public w3.q f13151h;

    public s(Context context, i1.c cVar) {
        ta.a.k(context, "Context cannot be null");
        this.a = context.getApplicationContext();
        this.f13145b = cVar;
        this.f13146c = t.f13152d;
    }

    @Override // k2.i
    public final void a(w3.q qVar) {
        synchronized (this.f13147d) {
            this.f13151h = qVar;
        }
        synchronized (this.f13147d) {
            try {
                if (this.f13151h == null) {
                    return;
                }
                if (this.f13149f == null) {
                    ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(0, 1, 15L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new a("emojiCompat", 0));
                    threadPoolExecutor.allowCoreThreadTimeOut(true);
                    this.f13150g = threadPoolExecutor;
                    this.f13149f = threadPoolExecutor;
                }
                this.f13149f.execute(new h1(16, this));
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void b() {
        synchronized (this.f13147d) {
            try {
                this.f13151h = null;
                Handler handler = this.f13148e;
                if (handler != null) {
                    handler.removeCallbacks(null);
                }
                this.f13148e = null;
                ThreadPoolExecutor threadPoolExecutor = this.f13150g;
                if (threadPoolExecutor != null) {
                    threadPoolExecutor.shutdown();
                }
                this.f13149f = null;
                this.f13150g = null;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final i1.g c() {
        try {
            lh.f fVar = this.f13146c;
            Context context = this.a;
            i1.c cVar = this.f13145b;
            fVar.getClass();
            Object[] objArr = {cVar};
            ArrayList arrayList = new ArrayList(1);
            Object obj = objArr[0];
            Objects.requireNonNull(obj);
            arrayList.add(obj);
            ad.f a = i1.b.a(context, Collections.unmodifiableList(arrayList));
            int i5 = a.a;
            if (i5 != 0) {
                throw new RuntimeException(s4.h.e(i5, "fetchFonts failed (", ")"));
            }
            i1.g[] gVarArr = (i1.g[]) a.f355b.get(0);
            if (gVarArr == null || gVarArr.length == 0) {
                throw new RuntimeException("fetchFonts failed (empty result)");
            }
            return gVarArr[0];
        } catch (PackageManager.NameNotFoundException e9) {
            throw new RuntimeException("provider not found", e9);
        }
    }
}
