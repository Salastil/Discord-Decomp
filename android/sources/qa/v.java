package qa;

import a5.a0;
import com.facebook.imagepipeline.memory.AshmemMemoryChunkPool;
import com.facebook.imagepipeline.memory.BufferMemoryChunkPool;
import com.facebook.imagepipeline.memory.NativeMemoryChunkPool;
import com.google.android.gms.internal.play_billing.w1;
import java.lang.reflect.InvocationTargetException;
import th.c0;
import th.g1;
import th.i0;
import th.p0;
import th.v0;

/* loaded from: classes3.dex */
public final class v implements uh.g {
    public Object E;

    /* renamed from: d, reason: collision with root package name */
    public final Object f16727d;

    /* renamed from: e, reason: collision with root package name */
    public Object f16728e;

    /* renamed from: i, reason: collision with root package name */
    public Object f16729i;

    /* renamed from: v, reason: collision with root package name */
    public Object f16730v;

    /* renamed from: w, reason: collision with root package name */
    public Object f16731w;

    /* renamed from: x, reason: collision with root package name */
    public Object f16732x;

    /* renamed from: y, reason: collision with root package name */
    public Object f16733y;

    public v(uh.f fVar, uh.f fVar2, uh.f fVar3, uh.f fVar4, uh.f fVar5, t tVar, uh.f fVar6, uh.f fVar7) {
        this.f16727d = fVar;
        this.f16728e = fVar2;
        this.f16729i = fVar3;
        this.f16730v = fVar4;
        this.f16731w = fVar5;
        this.f16732x = tVar;
        this.f16733y = fVar6;
        this.E = fVar7;
    }

    @Override // uh.g
    public Object a() {
        Object a = ((uh.f) this.f16727d).a();
        Object a10 = ((uh.f) this.f16728e).a();
        Object a11 = ((uh.f) this.f16729i).a();
        Object a12 = ((uh.f) this.f16730v).a();
        int i5 = 7;
        int i6 = 7;
        return new i0((v0) a, (p0) a10, (g1) a11, (c0) a12, new uh.f(new rd.u(i5, (uh.f) this.f16731w)), new uh.f(new rd.u(i5, (t) this.f16732x)), (th.r) ((uh.f) this.f16733y).a(), new uh.f(new rd.u(i6, (uh.f) this.E)));
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public e b() {
        u uVar = (u) this.f16727d;
        s sVar = uVar.f16719b;
        r8.c cVar = uVar.f16721d;
        if (((e) this.f16731w) == null) {
            String str = uVar.f16726i;
            switch (str.hashCode()) {
                case -1868884870:
                    if (str.equals("legacy_default_params")) {
                        this.f16731w = new h(cVar, j.a(), sVar);
                        break;
                    }
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
                case -1106578487:
                    str.equals("legacy");
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
                case -404562712:
                    if (str.equals("experimental")) {
                        int i5 = uVar.j;
                        s z5 = s.z();
                        w1 w1Var = new w1();
                        w1Var.f5868v = new io.sentry.internal.debugmeta.c(18);
                        w1Var.f5866e = i5;
                        w1Var.f5865d = z5;
                        this.f16731w = w1Var;
                        break;
                    }
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
                case -402149703:
                    if (str.equals("dummy_with_tracking")) {
                        this.f16731w = new ha.l(29, false);
                        break;
                    }
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
                case 95945896:
                    if (str.equals("dummy")) {
                        this.f16731w = new l();
                        break;
                    }
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
                default:
                    this.f16731w = new h(cVar, uVar.a, sVar);
                    break;
            }
        }
        return (e) this.f16731w;
    }

    public e4.c c(int i5) {
        p pVar;
        if (((e4.c) this.f16732x) == null) {
            u uVar = (u) this.f16727d;
            s sVar = uVar.f16723f;
            w wVar = uVar.f16722e;
            r8.c cVar = uVar.f16721d;
            if (i5 == 0) {
                if (((p) this.f16730v) == null) {
                    try {
                        this.f16730v = (p) NativeMemoryChunkPool.class.getConstructor(r8.b.class, w.class, x.class).newInstance(cVar, wVar, sVar);
                    } catch (ClassNotFoundException e9) {
                        p8.a.h("PoolFactory", "", e9);
                        this.f16730v = null;
                    } catch (IllegalAccessException e10) {
                        p8.a.h("PoolFactory", "", e10);
                        this.f16730v = null;
                    } catch (InstantiationException e11) {
                        p8.a.h("PoolFactory", "", e11);
                        this.f16730v = null;
                    } catch (NoSuchMethodException e12) {
                        p8.a.h("PoolFactory", "", e12);
                        this.f16730v = null;
                    } catch (InvocationTargetException e13) {
                        p8.a.h("PoolFactory", "", e13);
                        this.f16730v = null;
                    }
                }
                pVar = (p) this.f16730v;
            } else if (i5 == 1) {
                if (((p) this.f16729i) == null) {
                    try {
                        this.f16729i = (p) BufferMemoryChunkPool.class.getConstructor(r8.b.class, w.class, x.class).newInstance(cVar, wVar, sVar);
                    } catch (ClassNotFoundException unused) {
                        this.f16729i = null;
                    } catch (IllegalAccessException unused2) {
                        this.f16729i = null;
                    } catch (InstantiationException unused3) {
                        this.f16729i = null;
                    } catch (NoSuchMethodException unused4) {
                        this.f16729i = null;
                    } catch (InvocationTargetException unused5) {
                        this.f16729i = null;
                    }
                }
                pVar = (p) this.f16729i;
            } else {
                if (i5 != 2) {
                    throw new IllegalArgumentException("Invalid MemoryChunkType");
                }
                if (((p) this.f16728e) == null) {
                    try {
                        this.f16728e = (p) AshmemMemoryChunkPool.class.getConstructor(r8.b.class, w.class, x.class).newInstance(cVar, wVar, sVar);
                    } catch (ClassNotFoundException unused6) {
                        this.f16728e = null;
                    } catch (IllegalAccessException unused7) {
                        this.f16728e = null;
                    } catch (InstantiationException unused8) {
                        this.f16728e = null;
                    } catch (NoSuchMethodException unused9) {
                        this.f16728e = null;
                    } catch (InvocationTargetException unused10) {
                        this.f16728e = null;
                    }
                }
                pVar = (p) this.f16728e;
            }
            o8.h.d(pVar, "failed to get pool for chunk type: " + i5);
            this.f16732x = new e4.c(pVar, d());
        }
        return (e4.c) this.f16732x;
    }

    public a0 d() {
        if (((a0) this.f16733y) == null) {
            if (((n) this.E) == null) {
                u uVar = (u) this.f16727d;
                this.E = new n(uVar.f16721d, uVar.f16724g, uVar.f16725h);
            }
            this.f16733y = new a0((n) this.E);
        }
        return (a0) this.f16733y;
    }

    public v(u uVar) {
        this.f16727d = uVar;
    }
}
