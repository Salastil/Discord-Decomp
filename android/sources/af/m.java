package af;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.Looper;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class m implements DialogInterface.OnCancelListener {

    /* renamed from: d, reason: collision with root package name */
    public final Object f570d;

    /* renamed from: e, reason: collision with root package name */
    public volatile boolean f571e;

    /* renamed from: i, reason: collision with root package name */
    public final AtomicReference f572i;

    /* renamed from: v, reason: collision with root package name */
    public final fg.a f573v;

    /* renamed from: w, reason: collision with root package name */
    public final ye.e f574w;

    /* renamed from: x, reason: collision with root package name */
    public final s.f f575x;

    /* renamed from: y, reason: collision with root package name */
    public final e f576y;

    public m(f fVar, e eVar) {
        ye.e eVar2 = ye.e.f20918d;
        this.f570d = fVar;
        this.f572i = new AtomicReference(null);
        this.f573v = new fg.a(Looper.getMainLooper(), 1);
        this.f574w = eVar2;
        this.f575x = new s.f(0);
        this.f576y = eVar;
        fVar.n(this);
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [af.f, java.lang.Object] */
    public final Activity a() {
        Activity h6 = this.f570d.h();
        bf.t.g(h6);
        return h6;
    }

    public final void b(Bundle bundle) {
        if (bundle != null) {
            this.f572i.set(bundle.getBoolean("resolving_error", false) ? new f0(new ye.b(bundle.getInt("failed_status"), (PendingIntent) bundle.getParcelable("failed_resolution"), null), bundle.getInt("failed_client_id", -1)) : null);
        }
    }

    public final void c() {
        this.f571e = false;
        e eVar = this.f576y;
        eVar.getClass();
        synchronized (e.O) {
            try {
                if (eVar.H == this) {
                    eVar.H = null;
                    eVar.I.clear();
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public final void d() {
        if (this.f575x.isEmpty()) {
            return;
        }
        this.f576y.b(this);
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        ye.b bVar = new ye.b(13, null, null);
        AtomicReference atomicReference = this.f572i;
        f0 f0Var = (f0) atomicReference.get();
        int i5 = f0Var == null ? -1 : f0Var.a;
        atomicReference.set(null);
        this.f576y.h(bVar, i5);
    }
}
