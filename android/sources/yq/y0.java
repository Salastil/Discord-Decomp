package yq;

/* loaded from: classes3.dex */
public final class y0 extends p {

    /* renamed from: e, reason: collision with root package name */
    public final String f21084e;

    public y0(String str) {
        this.f21084e = str;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0044  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x003e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void F0(int i5) {
        String format;
        String str = (i5 == 1 || i5 == 4) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 4) ? 2 : 3];
        if (i5 != 1) {
            if (i5 == 2) {
                objArr[0] = "delegate";
            } else if (i5 == 3) {
                objArr[0] = "kotlinTypeRefiner";
            } else if (i5 != 4) {
                objArr[0] = "newAttributes";
            }
            if (i5 != 1) {
                objArr[1] = "toString";
            } else if (i5 != 4) {
                objArr[1] = "kotlin/reflect/jvm/internal/impl/types/TypeUtils$SpecialType";
            } else {
                objArr[1] = "refine";
            }
            if (i5 != 1) {
                if (i5 == 2) {
                    objArr[2] = "replaceDelegate";
                } else if (i5 == 3) {
                    objArr[2] = "refine";
                } else if (i5 != 4) {
                    objArr[2] = "replaceAttributes";
                }
            }
            format = String.format(str, objArr);
            if (i5 == 1 && i5 != 4) {
                throw new IllegalArgumentException(format);
            }
            throw new IllegalStateException(format);
        }
        objArr[0] = "kotlin/reflect/jvm/internal/impl/types/TypeUtils$SpecialType";
        if (i5 != 1) {
        }
        if (i5 != 1) {
        }
        format = String.format(str, objArr);
        if (i5 == 1) {
        }
        throw new IllegalStateException(format);
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        throw new IllegalStateException(this.f21084e);
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 k0Var) {
        if (k0Var != null) {
            throw new IllegalStateException(this.f21084e);
        }
        F0(0);
        throw null;
    }

    @Override // yq.p
    public final c0 C0() {
        throw new IllegalStateException(this.f21084e);
    }

    @Override // yq.p
    /* renamed from: D0 */
    public final c0 y0(zq.f fVar) {
        if (fVar != null) {
            return this;
        }
        F0(3);
        throw null;
    }

    @Override // yq.p
    public final p E0(c0 c0Var) {
        if (c0Var != null) {
            throw new IllegalStateException(this.f21084e);
        }
        F0(2);
        throw null;
    }

    @Override // yq.c0
    public final String toString() {
        String str = this.f21084e;
        if (str != null) {
            return str;
        }
        F0(1);
        throw null;
    }

    @Override // yq.p, yq.y
    /* renamed from: v0 */
    public final y y0(zq.f fVar) {
        if (fVar != null) {
            return this;
        }
        F0(3);
        throw null;
    }

    @Override // yq.c0, yq.b1
    public final /* bridge */ /* synthetic */ b1 x0(boolean z5) {
        x0(z5);
        throw null;
    }

    @Override // yq.p, yq.b1
    public final b1 y0(zq.f fVar) {
        if (fVar != null) {
            return this;
        }
        F0(3);
        throw null;
    }

    @Override // yq.c0, yq.b1
    public final /* bridge */ /* synthetic */ b1 z0(k0 k0Var) {
        z0(k0Var);
        throw null;
    }
}
