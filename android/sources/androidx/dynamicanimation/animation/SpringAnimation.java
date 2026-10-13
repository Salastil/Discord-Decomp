package androidx.dynamicanimation.animation;

import af.s;
import android.os.CancellationSignal;
import android.util.AndroidRuntimeException;
import androidx.core.view.n1;
import androidx.transition.Transition;
import com.discord.mobile_voice_overlay.views.OverlayBubbleWrap;
import j2.c;
import j2.d;
import j2.e;
import j2.h;
import j2.i;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import m3.q;
import m3.r;
import m3.t;
import m3.z;
import zk.a;

/* loaded from: classes.dex */
public final class SpringAnimation {

    /* renamed from: p, reason: collision with root package name */
    public static final d f1867p = new d(2);

    /* renamed from: q, reason: collision with root package name */
    public static final d f1868q = new d(3);

    /* renamed from: r, reason: collision with root package name */
    public static final d f1869r = new d(4);

    /* renamed from: s, reason: collision with root package name */
    public static final d f1870s = new d(5);

    /* renamed from: t, reason: collision with root package name */
    public static final d f1871t = new d(6);

    /* renamed from: u, reason: collision with root package name */
    public static final d f1872u = new d(7);

    /* renamed from: v, reason: collision with root package name */
    public static final d f1873v = new d(0);

    /* renamed from: w, reason: collision with root package name */
    public static final d f1874w = new d(1);
    public float a;

    /* renamed from: b, reason: collision with root package name */
    public float f1875b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f1876c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f1877d;

    /* renamed from: e, reason: collision with root package name */
    public final a f1878e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f1879f;

    /* renamed from: g, reason: collision with root package name */
    public float f1880g;

    /* renamed from: h, reason: collision with root package name */
    public float f1881h;

    /* renamed from: i, reason: collision with root package name */
    public long f1882i;
    public float j;
    public final ArrayList k;

    /* renamed from: l, reason: collision with root package name */
    public final ArrayList f1883l;

    /* renamed from: m, reason: collision with root package name */
    public i f1884m;

    /* renamed from: n, reason: collision with root package name */
    public float f1885n;

    /* renamed from: o, reason: collision with root package name */
    public boolean f1886o;

    public SpringAnimation(h hVar) {
        this(hVar, 0);
        this.f1884m = null;
        this.f1885n = Float.MAX_VALUE;
        this.f1886o = false;
    }

    public static c d() {
        ThreadLocal threadLocal = c.f12385i;
        if (threadLocal.get() == null) {
            threadLocal.set(new c(new io.sentry.internal.debugmeta.c(13)));
        }
        return (c) threadLocal.get();
    }

    public final void a(float f2) {
        if (this.f1879f) {
            this.f1885n = f2;
            return;
        }
        if (this.f1884m == null) {
            this.f1884m = new i(f2);
        }
        this.f1884m.f12403i = f2;
        g();
    }

    public final void b() {
        if (!d().b()) {
            throw new AndroidRuntimeException("Animations may only be canceled from the same thread as the animation handler");
        }
        if (this.f1879f) {
            c(true);
        }
        float f2 = this.f1885n;
        if (f2 != Float.MAX_VALUE) {
            i iVar = this.f1884m;
            if (iVar == null) {
                this.f1884m = new i(f2);
            } else {
                iVar.f12403i = f2;
            }
            this.f1885n = Float.MAX_VALUE;
        }
    }

    public final void c(boolean z5) {
        int i5 = 0;
        this.f1879f = false;
        c d6 = d();
        d6.a.remove(this);
        ArrayList arrayList = d6.f12386b;
        int indexOf = arrayList.indexOf(this);
        if (indexOf >= 0) {
            arrayList.set(indexOf, null);
            d6.f12390f = true;
        }
        this.f1882i = 0L;
        this.f1876c = false;
        while (true) {
            ArrayList arrayList2 = this.k;
            if (i5 >= arrayList2.size()) {
                for (int size = arrayList2.size() - 1; size >= 0; size--) {
                    if (arrayList2.get(size) == null) {
                        arrayList2.remove(size);
                    }
                }
                return;
            }
            if (arrayList2.get(i5) != null) {
                q qVar = (q) arrayList2.get(i5);
                float f2 = this.f1875b;
                int i6 = qVar.a;
                Object obj = qVar.f14377b;
                switch (i6) {
                    case 0:
                        r rVar = (r) obj;
                        z zVar = rVar.f14384h;
                        if (z5) {
                            break;
                        } else {
                            t tVar = t.f14385l;
                            if (f2 < 1.0f) {
                                long j = zVar.W;
                                Transition R = zVar.R(0);
                                Transition transition = R.Q;
                                R.Q = null;
                                zVar.H(-1L, rVar.a);
                                zVar.H(j, -1L);
                                rVar.a = j;
                                Runnable runnable = rVar.f14383g;
                                if (runnable != null) {
                                    runnable.run();
                                }
                                zVar.S.clear();
                                if (transition != null) {
                                    transition.A(transition, tVar, true);
                                    break;
                                } else {
                                    break;
                                }
                            } else {
                                zVar.A(zVar, tVar, false);
                                break;
                            }
                        }
                    default:
                        s sVar = (s) obj;
                        if (Intrinsics.areEqual(this, (SpringAnimation) sVar.f598f)) {
                            sVar.f598f = null;
                        }
                        gj.c cVar = (gj.c) sVar.f594b;
                        if (cVar == null) {
                            CancellationSignal cancellationSignal = (CancellationSignal) sVar.f595c;
                            if (cancellationSignal != null) {
                                cancellationSignal.cancel();
                                break;
                            } else {
                                break;
                            }
                        } else {
                            n1 n1Var = (n1) cVar.f9329e;
                            int i10 = n1Var.n0().f1514d;
                            int i11 = n1Var.p0().f1514d;
                            int i12 = n1Var.o0().f1514d;
                            if (i10 == i11) {
                                cVar.E(true);
                                break;
                            } else if (i10 == i12) {
                                cVar.E(false);
                                break;
                            } else if (n1Var.m0() >= 0.15f) {
                                cVar.E(!sVar.a);
                                break;
                            } else {
                                cVar.E(sVar.a);
                                break;
                            }
                        }
                }
            }
            i5++;
        }
    }

    public final void e(float f2) {
        ArrayList arrayList;
        this.f1878e.K(this.f1877d, f2);
        int i5 = 0;
        while (true) {
            arrayList = this.f1883l;
            if (i5 >= arrayList.size()) {
                break;
            }
            if (arrayList.get(i5) != null) {
                r rVar = (r) arrayList.get(i5);
                float f10 = this.f1875b;
                z zVar = rVar.f14384h;
                long max = Math.max(-1L, Math.min(zVar.W + 1, Math.round(f10)));
                zVar.H(max, rVar.a);
                rVar.a = max;
            }
            i5++;
        }
        for (int size = arrayList.size() - 1; size >= 0; size--) {
            if (arrayList.get(size) == null) {
                arrayList.remove(size);
            }
        }
    }

    public final void f() {
        if (this.f1884m.f12396b <= 0.0d) {
            throw new UnsupportedOperationException("Spring animations can only come to an end when there is damping");
        }
        if (!d().b()) {
            throw new AndroidRuntimeException("Animations may only be started on the same thread as the animation handler");
        }
        if (this.f1879f) {
            this.f1886o = true;
        }
    }

    public final void g() {
        i iVar = this.f1884m;
        if (iVar == null) {
            throw new UnsupportedOperationException("Incomplete SpringAnimation: Either final position or a spring force needs to be set.");
        }
        double d6 = (float) iVar.f12403i;
        if (d6 > this.f1880g) {
            throw new UnsupportedOperationException("Final position of the spring cannot be greater than the max value.");
        }
        if (d6 < this.f1881h) {
            throw new UnsupportedOperationException("Final position of the spring cannot be less than the min value.");
        }
        double abs = Math.abs(this.j * 0.75f);
        iVar.f12398d = abs;
        iVar.f12399e = abs * 62.5d;
        if (!d().b()) {
            throw new AndroidRuntimeException("Animations may only be started on the same thread as the animation handler");
        }
        boolean z5 = this.f1879f;
        if (z5 || z5) {
            return;
        }
        this.f1879f = true;
        if (!this.f1876c) {
            this.f1875b = this.f1878e.t(this.f1877d);
        }
        float f2 = this.f1875b;
        if (f2 > this.f1880g || f2 < this.f1881h) {
            throw new IllegalArgumentException("Starting value need to be in between min value and max value");
        }
        d().a(this);
    }

    public SpringAnimation(Object obj, a aVar) {
        this(obj, aVar, 0);
        this.f1884m = null;
        this.f1885n = Float.MAX_VALUE;
        this.f1886o = false;
    }

    public SpringAnimation(OverlayBubbleWrap overlayBubbleWrap, d dVar) {
        this(overlayBubbleWrap, dVar, 0);
        this.f1884m = null;
        this.f1885n = Float.MAX_VALUE;
        this.f1886o = false;
        this.f1884m = new i(0.0f);
    }

    public SpringAnimation(h hVar, int i5) {
        this.a = 0.0f;
        this.f1875b = Float.MAX_VALUE;
        this.f1876c = false;
        this.f1879f = false;
        this.f1880g = Float.MAX_VALUE;
        this.f1881h = -3.4028235E38f;
        this.f1882i = 0L;
        this.k = new ArrayList();
        this.f1883l = new ArrayList();
        this.f1877d = null;
        this.f1878e = new e(hVar);
        this.j = 1.0f;
    }

    public SpringAnimation(Object obj, a aVar, int i5) {
        this.a = 0.0f;
        this.f1875b = Float.MAX_VALUE;
        this.f1876c = false;
        this.f1879f = false;
        this.f1880g = Float.MAX_VALUE;
        this.f1881h = -3.4028235E38f;
        this.f1882i = 0L;
        this.k = new ArrayList();
        this.f1883l = new ArrayList();
        this.f1877d = obj;
        this.f1878e = aVar;
        if (aVar != f1869r && aVar != f1870s && aVar != f1871t) {
            if (aVar == f1874w) {
                this.j = 0.00390625f;
                return;
            } else if (aVar != f1867p && aVar != f1868q) {
                this.j = 1.0f;
                return;
            } else {
                this.j = 0.002f;
                return;
            }
        }
        this.j = 0.1f;
    }
}
