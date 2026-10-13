package le;

import android.content.Context;
import android.hardware.display.DisplayManager;
import android.view.Surface;
import android.view.WindowManager;
import com.facebook.react.uimanager.ViewProps;
import ke.d0;

/* loaded from: classes3.dex */
public final class t {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final q f13928b;

    /* renamed from: c, reason: collision with root package name */
    public final s f13929c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f13930d;

    /* renamed from: e, reason: collision with root package name */
    public Surface f13931e;

    /* renamed from: f, reason: collision with root package name */
    public float f13932f;

    /* renamed from: g, reason: collision with root package name */
    public float f13933g;

    /* renamed from: h, reason: collision with root package name */
    public float f13934h;

    /* renamed from: i, reason: collision with root package name */
    public float f13935i;
    public int j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public long f13936l;

    /* renamed from: m, reason: collision with root package name */
    public long f13937m;

    /* renamed from: n, reason: collision with root package name */
    public long f13938n;

    /* renamed from: o, reason: collision with root package name */
    public long f13939o;

    /* renamed from: p, reason: collision with root package name */
    public long f13940p;

    /* renamed from: q, reason: collision with root package name */
    public long f13941q;

    /* JADX WARN: Removed duplicated region for block: B:14:0x0056  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public t(Context context) {
        q qVar;
        DisplayManager displayManager;
        d dVar = new d();
        dVar.a = new c();
        dVar.f13867b = new c();
        dVar.f13869d = -9223372036854775807L;
        this.a = dVar;
        if (context != null) {
            Context applicationContext = context.getApplicationContext();
            qVar = (d0.a < 17 || (displayManager = (DisplayManager) applicationContext.getSystemService(ViewProps.DISPLAY)) == null) ? null : new r(displayManager);
            if (qVar == null) {
                WindowManager windowManager = (WindowManager) applicationContext.getSystemService("window");
                if (windowManager != null) {
                    qVar = new gj.c(21, windowManager);
                }
            }
            this.f13928b = qVar;
            this.f13929c = qVar != null ? s.f13923w : null;
            this.k = -9223372036854775807L;
            this.f13936l = -9223372036854775807L;
            this.f13932f = -1.0f;
            this.f13935i = 1.0f;
            this.j = 0;
        }
        qVar = null;
        this.f13928b = qVar;
        this.f13929c = qVar != null ? s.f13923w : null;
        this.k = -9223372036854775807L;
        this.f13936l = -9223372036854775807L;
        this.f13932f = -1.0f;
        this.f13935i = 1.0f;
        this.j = 0;
    }

    public final void a() {
        Surface surface;
        if (d0.a < 30 || (surface = this.f13931e) == null || this.j == Integer.MIN_VALUE || this.f13934h == 0.0f) {
            return;
        }
        this.f13934h = 0.0f;
        p.a(surface, 0.0f);
    }

    /* JADX WARN: Removed duplicated region for block: B:32:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b() {
        float f2;
        float f10;
        if (d0.a < 30 || this.f13931e == null) {
            return;
        }
        d dVar = this.a;
        if (!dVar.a.a()) {
            f2 = this.f13932f;
        } else if (dVar.a.a()) {
            f2 = (float) (1.0E9d / (dVar.a.f13863e != 0 ? r2.f13864f / r4 : 0L));
        } else {
            f2 = -1.0f;
        }
        float f11 = this.f13933g;
        if (f2 == f11) {
            return;
        }
        if (f2 != -1.0f && f11 != -1.0f) {
            if (dVar.a.a()) {
                if ((dVar.a.a() ? dVar.a.f13864f : -9223372036854775807L) >= 5000000000L) {
                    f10 = 0.02f;
                    if (Math.abs(f2 - this.f13933g) < f10) {
                        return;
                    }
                }
            }
            f10 = 1.0f;
            if (Math.abs(f2 - this.f13933g) < f10) {
            }
        } else if (f2 == -1.0f && dVar.f13870e < 30) {
            return;
        }
        this.f13933g = f2;
        c(false);
    }

    public final void c(boolean z5) {
        Surface surface;
        float f2;
        if (d0.a < 30 || (surface = this.f13931e) == null || this.j == Integer.MIN_VALUE) {
            return;
        }
        if (this.f13930d) {
            float f10 = this.f13933g;
            if (f10 != -1.0f) {
                f2 = f10 * this.f13935i;
                if (z5 && this.f13934h == f2) {
                    return;
                }
                this.f13934h = f2;
                p.a(surface, f2);
            }
        }
        f2 = 0.0f;
        if (z5) {
        }
        this.f13934h = f2;
        p.a(surface, f2);
    }
}
