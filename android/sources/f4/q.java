package f4;

import android.content.Context;
import android.os.Build;
import com.google.android.gms.internal.play_billing.v0;

/* loaded from: classes.dex */
public final class q implements Runnable {

    /* renamed from: y, reason: collision with root package name */
    public static final String f8357y = v3.p.f("WorkForegroundRunnable");

    /* renamed from: d, reason: collision with root package name */
    public final g4.j f8358d = new g4.j();

    /* renamed from: e, reason: collision with root package name */
    public final Context f8359e;

    /* renamed from: i, reason: collision with root package name */
    public final e4.o f8360i;

    /* renamed from: v, reason: collision with root package name */
    public final v3.o f8361v;

    /* renamed from: w, reason: collision with root package name */
    public final s f8362w;

    /* renamed from: x, reason: collision with root package name */
    public final h4.b f8363x;

    public q(Context context, e4.o oVar, v3.o oVar2, s sVar, h4.b bVar) {
        this.f8359e = context;
        this.f8360i = oVar;
        this.f8361v = oVar2;
        this.f8362w = sVar;
        this.f8363x = bVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (!this.f8360i.f7980q || Build.VERSION.SDK_INT >= 31) {
            this.f8358d.j(null);
            return;
        }
        g4.j jVar = new g4.j();
        h4.b bVar = this.f8363x;
        bVar.f9518d.execute(new com.mkuczera.haptic.a(5, this, jVar));
        jVar.a(new v0(this, jVar, 11, false), bVar.f9518d);
    }
}
