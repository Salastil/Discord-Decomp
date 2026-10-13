package lp;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Set;
import yq.w0;

/* loaded from: classes3.dex */
public class h extends t implements ip.k {

    /* renamed from: b0, reason: collision with root package name */
    public final boolean f14144b0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(ip.f fVar, ip.k kVar, jp.h hVar, boolean z5, ip.c cVar, ip.o0 o0Var) {
        super(hq.g.f10215e, cVar, fVar, kVar, o0Var, hVar);
        if (fVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (cVar == null) {
            v0(2);
            throw null;
        }
        if (o0Var == null) {
            v0(3);
            throw null;
        }
        this.f14144b0 = z5;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0018  */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0023  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0096  */
    /* JADX WARN: Removed duplicated region for block: B:25:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00aa A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0028  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x002d  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0032  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x003a  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x003f  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0044  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0053  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        if (i5 != 21 && i5 != 27) {
            switch (i5) {
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 21 && i5 != 27) {
                switch (i5) {
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 5:
                    case 8:
                    case 25:
                        objArr[0] = "annotations";
                        break;
                    case 2:
                    case 24:
                        objArr[0] = "kind";
                        break;
                    case 3:
                    case 6:
                    case 9:
                    case 26:
                        objArr[0] = "source";
                        break;
                    case 4:
                    case 7:
                    default:
                        objArr[0] = "containingDeclaration";
                        break;
                    case 10:
                    case 13:
                        objArr[0] = "unsubstitutedValueParameters";
                        break;
                    case 11:
                    case 14:
                        objArr[0] = "visibility";
                        break;
                    case 12:
                        objArr[0] = "typeParameterDescriptors";
                        break;
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 21:
                    case 27:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassConstructorDescriptorImpl";
                        break;
                    case 20:
                        objArr[0] = "originalSubstitutor";
                        break;
                    case 22:
                        objArr[0] = "overriddenDescriptors";
                        break;
                    case 23:
                        objArr[0] = "newOwner";
                        break;
                }
                if (i5 != 21) {
                    objArr[1] = "getOverriddenDescriptors";
                } else if (i5 != 27) {
                    switch (i5) {
                        case 15:
                        case 16:
                            objArr[1] = "calculateContextReceiverParameters";
                            break;
                        case 17:
                            objArr[1] = "getContainingDeclaration";
                            break;
                        case 18:
                            objArr[1] = "getConstructedClass";
                            break;
                        case 19:
                            objArr[1] = "getOriginal";
                            break;
                        default:
                            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ClassConstructorDescriptorImpl";
                            break;
                    }
                } else {
                    objArr[1] = "copy";
                }
                switch (i5) {
                    case 4:
                    case 5:
                    case 6:
                        objArr[2] = "create";
                        break;
                    case 7:
                    case 8:
                    case 9:
                        objArr[2] = "createSynthesized";
                        break;
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                        objArr[2] = "initialize";
                        break;
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 21:
                    case 27:
                        break;
                    case 20:
                        objArr[2] = "substitute";
                        break;
                    case 22:
                        objArr[2] = "setOverriddenDescriptors";
                        break;
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                        objArr[2] = "createSubstitutedCopy";
                        break;
                    default:
                        objArr[2] = "<init>";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 21 && i5 != 27) {
                    switch (i5) {
                        case 15:
                        case 16:
                        case 17:
                        case 18:
                        case 19:
                            break;
                        default:
                            throw new IllegalArgumentException(format);
                    }
                }
                throw new IllegalStateException(format);
            }
            i6 = 2;
            Object[] objArr2 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 21) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 21) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 21) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 21) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 21) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 21) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 21) {
        }
        throw new IllegalStateException(format222);
    }

    @Override // lp.t, ip.d
    public final ip.d L(ip.f fVar, ip.z zVar, ip.p pVar) {
        return (h) B0(fVar, zVar, pVar);
    }

    @Override // lp.t
    /* renamed from: M0, reason: merged with bridge method [inline-methods] */
    public h D0(hq.e eVar, ip.c cVar, ip.l lVar, ip.v vVar, ip.o0 o0Var, jp.h hVar) {
        if (lVar == null) {
            v0(23);
            throw null;
        }
        if (cVar == null) {
            v0(24);
            throw null;
        }
        if (hVar == null) {
            v0(25);
            throw null;
        }
        ip.c cVar2 = ip.c.f12123d;
        if (cVar == cVar2 || cVar == ip.c.f12126v) {
            return new h((ip.f) lVar, this, hVar, this.f14144b0, cVar2, o0Var);
        }
        throw new IllegalStateException("Attempt at creating a constructor that is not a declaration: \ncopy from: " + this + "\nnewOwner: " + lVar + "\nkind: " + cVar);
    }

    @Override // lp.m, ip.l
    /* renamed from: N0, reason: merged with bridge method [inline-methods] */
    public final ip.f h() {
        ip.f fVar = (ip.f) super.h();
        if (fVar != null) {
            return fVar;
        }
        v0(17);
        throw null;
    }

    @Override // lp.t, lp.m, lp.l, ip.l
    /* renamed from: O0, reason: merged with bridge method [inline-methods] and merged with bridge method [inline-methods] and merged with bridge method [inline-methods] and merged with bridge method [inline-methods] and merged with bridge method [inline-methods] */
    public final h a() {
        h hVar = (h) super.a();
        if (hVar != null) {
            return hVar;
        }
        v0(19);
        throw null;
    }

    public final void P0(List list, ip.p pVar) {
        if (list == null) {
            v0(13);
            throw null;
        }
        if (pVar != null) {
            Q0(list, pVar, h().l());
        } else {
            v0(14);
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0030  */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003e  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void Q0(List list, ip.p pVar, List list2) {
        u uVar;
        ip.f h6;
        List list3;
        if (list == null) {
            v0(10);
            throw null;
        }
        if (pVar == null) {
            v0(11);
            throw null;
        }
        if (list2 == null) {
            v0(12);
            throw null;
        }
        ip.f h7 = h();
        if (h7.A()) {
            ip.l h10 = h7.h();
            if (h10 instanceof ip.f) {
                uVar = ((ip.f) h10).u0();
                h6 = h();
                if (h6.p0().isEmpty()) {
                    list3 = h6.p0();
                    if (list3 == null) {
                        v0(15);
                        throw null;
                    }
                } else {
                    list3 = Collections.EMPTY_LIST;
                    if (list3 == null) {
                        v0(16);
                        throw null;
                    }
                }
                G0(null, uVar, list3, list2, list, null, ip.z.f12180e, pVar);
            }
        }
        uVar = null;
        h6 = h();
        if (h6.p0().isEmpty()) {
        }
        G0(null, uVar, list3, list2, list, null, ip.z.f12180e, pVar);
    }

    @Override // lp.t, ip.v, ip.q0
    /* renamed from: R0, reason: merged with bridge method [inline-methods] */
    public final h c(w0 w0Var) {
        if (w0Var != null) {
            return (h) super.c(w0Var);
        }
        v0(20);
        throw null;
    }

    @Override // lp.t, ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return nVar.n(this, obj);
    }

    @Override // lp.t, ip.d
    public final void g0(Collection collection) {
        if (collection != null) {
            return;
        }
        v0(22);
        throw null;
    }

    @Override // lp.t, ip.d, ip.b
    public final Collection i() {
        Set set = Collections.EMPTY_SET;
        if (set != null) {
            return set;
        }
        v0(21);
        throw null;
    }

    @Override // ip.k
    public final boolean r() {
        return this.f14144b0;
    }

    @Override // ip.k
    public final ip.f s() {
        ip.f h6 = h();
        if (h6 != null) {
            return h6;
        }
        v0(18);
        throw null;
    }
}
