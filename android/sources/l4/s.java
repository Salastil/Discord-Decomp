package l4;

import android.graphics.drawable.Drawable;
import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Semaphore;

/* loaded from: classes.dex */
public final /* synthetic */ class s implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13779d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ v f13780e;

    public /* synthetic */ s(v vVar, int i5) {
        this.f13779d = i5;
        this.f13780e = vVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f13779d) {
            case 0:
                Drawable drawable = this.f13780e;
                Drawable.Callback callback = drawable.getCallback();
                if (callback != null) {
                    callback.invalidateDrawable(drawable);
                    return;
                }
                return;
            default:
                v vVar = this.f13780e;
                Semaphore semaphore = vVar.f13795j0;
                t4.c cVar = vVar.N;
                if (cVar == null) {
                    return;
                }
                try {
                    semaphore.acquire();
                    cVar.s(vVar.f13789e.d());
                    if (v.f13782p0 && vVar.h0) {
                        if (vVar.f13796k0 == null) {
                            vVar.f13796k0 = new Handler(Looper.getMainLooper());
                            vVar.f13797l0 = new s(vVar, 0);
                        }
                        vVar.f13796k0.post(vVar.f13797l0);
                    }
                } catch (InterruptedException unused) {
                } catch (Throwable th2) {
                    semaphore.release();
                    throw th2;
                }
                semaphore.release();
                return;
        }
    }
}
