package yq;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h0 extends s0 {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f21039b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f21040c;

    public h0(ip.s0 typeParameter) {
        Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
        this.f21039b = typeParameter;
        this.f21040c = fo.l.b(fo.m.f8827e, new cp.d0(28, this));
    }

    public static /* synthetic */ void e(int i5) {
        String str = (i5 == 4 || i5 == 5) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 4 || i5 == 5) ? 2 : 3];
        switch (i5) {
            case 1:
            case 2:
            case 3:
                objArr[0] = "type";
                break;
            case 4:
            case 5:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/types/TypeProjectionImpl";
                break;
            case 6:
                objArr[0] = "kotlinTypeRefiner";
                break;
            default:
                objArr[0] = "projection";
                break;
        }
        if (i5 == 4) {
            objArr[1] = "getProjectionKind";
        } else if (i5 != 5) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/types/TypeProjectionImpl";
        } else {
            objArr[1] = "getType";
        }
        if (i5 == 3) {
            objArr[2] = "replaceType";
        } else if (i5 != 4 && i5 != 5) {
            if (i5 != 6) {
                objArr[2] = "<init>";
            } else {
                objArr[2] = "refine";
            }
        }
        String format = String.format(str, objArr);
        if (i5 != 4 && i5 != 5) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // yq.s0
    public final c1 a() {
        switch (this.a) {
            case 0:
                return c1.f21015w;
            default:
                c1 c1Var = (c1) this.f21039b;
                if (c1Var != null) {
                    return c1Var;
                }
                e(4);
                throw null;
        }
    }

    /* JADX WARN: Type inference failed for: r0v1, types: [java.lang.Object, kotlin.Lazy] */
    @Override // yq.s0
    public final y b() {
        switch (this.a) {
            case 0:
                return (y) this.f21040c.getValue();
            default:
                y yVar = (y) this.f21040c;
                if (yVar != null) {
                    return yVar;
                }
                e(5);
                throw null;
        }
    }

    @Override // yq.s0
    public final boolean c() {
        switch (this.a) {
            case 0:
                return true;
            default:
                return false;
        }
    }

    @Override // yq.s0
    public final s0 d(zq.f kotlinTypeRefiner) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                return this;
            default:
                if (kotlinTypeRefiner == null) {
                    e(6);
                    throw null;
                }
                c1 c1Var = (c1) this.f21039b;
                y type = (y) this.f21040c;
                kotlinTypeRefiner.getClass();
                Intrinsics.checkNotNullParameter(type, "type");
                return new h0(type, c1Var);
        }
    }

    public h0(y yVar, c1 c1Var) {
        if (c1Var == null) {
            e(0);
            throw null;
        }
        if (yVar != null) {
            this.f21039b = c1Var;
            this.f21040c = yVar;
        } else {
            e(1);
            throw null;
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public h0(y yVar) {
        this(yVar, c1.f21013i);
        if (yVar != null) {
        } else {
            e(2);
            throw null;
        }
    }
}
