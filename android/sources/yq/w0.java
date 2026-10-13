package yq;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w0 {

    /* renamed from: b, reason: collision with root package name */
    public static final w0 f21077b = e(u0.a);
    public final u0 a;

    public w0(u0 u0Var) {
        if (u0Var != null) {
            this.a = u0Var;
        } else {
            a(7);
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0030  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0044  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x00cf  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00d4  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00da  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00dd  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00e0  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00e5  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x00ed  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00f2  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00fc A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0107  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x004e  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0058  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x0062  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0080  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x003b A[FALL_THROUGH] */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0021 A[FALL_THROUGH] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        if (i5 != 1 && i5 != 2 && i5 != 8 && i5 != 34 && i5 != 37) {
            switch (i5) {
                default:
                    switch (i5) {
                        default:
                            switch (i5) {
                                default:
                                    switch (i5) {
                                        case 40:
                                        case 41:
                                        case 42:
                                            break;
                                        default:
                                            str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                                            break;
                                    }
                                case 29:
                                case 30:
                                case 31:
                                case 32:
                                    str = "@NotNull method %s.%s must not return null";
                                    break;
                            }
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                            break;
                    }
                case 11:
                case 12:
                case 13:
                    break;
            }
            if (i5 != 1 && i5 != 2 && i5 != 8 && i5 != 34 && i5 != 37) {
                switch (i5) {
                    default:
                        switch (i5) {
                            default:
                                switch (i5) {
                                    default:
                                        switch (i5) {
                                            case 40:
                                            case 41:
                                            case 42:
                                                break;
                                            default:
                                                i6 = 3;
                                                break;
                                        }
                                    case 29:
                                    case 30:
                                    case 31:
                                    case 32:
                                        i6 = 2;
                                        break;
                                }
                            case 19:
                            case 20:
                            case 21:
                            case 22:
                            case 23:
                            case 24:
                            case 25:
                                break;
                        }
                    case 11:
                    case 12:
                    case 13:
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 2:
                    case 8:
                    case 11:
                    case 12:
                    case 13:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 34:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case 40:
                    case 41:
                    case 42:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/types/TypeSubstitutor";
                        break;
                    case 3:
                        objArr[0] = "first";
                        break;
                    case 4:
                        objArr[0] = "second";
                        break;
                    case 5:
                        objArr[0] = "substitutionContext";
                        break;
                    case 6:
                        objArr[0] = "context";
                        break;
                    case 7:
                    default:
                        objArr[0] = "substitution";
                        break;
                    case 9:
                    case 14:
                        objArr[0] = "type";
                        break;
                    case 10:
                    case 15:
                        objArr[0] = "howThisTypeIsUsed";
                        break;
                    case 16:
                    case 17:
                    case 36:
                        objArr[0] = "typeProjection";
                        break;
                    case 18:
                    case 28:
                        objArr[0] = "originalProjection";
                        break;
                    case 26:
                        objArr[0] = "originalType";
                        break;
                    case 27:
                        objArr[0] = "substituted";
                        break;
                    case 33:
                        objArr[0] = "annotations";
                        break;
                    case 35:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        objArr[0] = "typeParameterVariance";
                        break;
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[0] = "projectionKind";
                        break;
                }
                if (i5 != 1) {
                    objArr[1] = "replaceWithNonApproximatingSubstitution";
                } else if (i5 == 2) {
                    objArr[1] = "replaceWithContravariantApproximatingSubstitution";
                } else if (i5 == 8) {
                    objArr[1] = "getSubstitution";
                } else if (i5 != 34) {
                    if (i5 != 37) {
                        switch (i5) {
                            case 11:
                            case 12:
                            case 13:
                                objArr[1] = "safeSubstitute";
                                break;
                            default:
                                switch (i5) {
                                    case 19:
                                    case 20:
                                    case 21:
                                    case 22:
                                    case 23:
                                    case 24:
                                    case 25:
                                        objArr[1] = "unsafeSubstitute";
                                        break;
                                    default:
                                        switch (i5) {
                                            case 29:
                                            case 30:
                                            case 31:
                                            case 32:
                                                objArr[1] = "projectedTypeForConflictedTypeWithUnsafeVariance";
                                                break;
                                            default:
                                                switch (i5) {
                                                    case 40:
                                                    case 41:
                                                    case 42:
                                                        break;
                                                    default:
                                                        objArr[1] = "kotlin/reflect/jvm/internal/impl/types/TypeSubstitutor";
                                                        break;
                                                }
                                        }
                                }
                        }
                    }
                    objArr[1] = "combine";
                } else {
                    objArr[1] = "filterOutUnsafeVariance";
                }
                switch (i5) {
                    case 1:
                    case 2:
                    case 8:
                    case 11:
                    case 12:
                    case 13:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 34:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case 40:
                    case 41:
                    case 42:
                        break;
                    case 3:
                    case 4:
                        objArr[2] = "createChainedSubstitutor";
                        break;
                    case 5:
                    case 6:
                    default:
                        objArr[2] = "create";
                        break;
                    case 7:
                        objArr[2] = "<init>";
                        break;
                    case 9:
                    case 10:
                        objArr[2] = "safeSubstitute";
                        break;
                    case 14:
                    case 15:
                    case 16:
                        objArr[2] = "substitute";
                        break;
                    case 17:
                        objArr[2] = "substituteWithoutApproximation";
                        break;
                    case 18:
                        objArr[2] = "unsafeSubstitute";
                        break;
                    case 26:
                    case 27:
                    case 28:
                        objArr[2] = "projectedTypeForConflictedTypeWithUnsafeVariance";
                        break;
                    case 33:
                        objArr[2] = "filterOutUnsafeVariance";
                        break;
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[2] = "combine";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 1 && i5 != 2 && i5 != 8 && i5 != 34 && i5 != 37) {
                    switch (i5) {
                        case 11:
                        case 12:
                        case 13:
                            break;
                        default:
                            switch (i5) {
                                case 19:
                                case 20:
                                case 21:
                                case 22:
                                case 23:
                                case 24:
                                case 25:
                                    break;
                                default:
                                    switch (i5) {
                                        case 29:
                                        case 30:
                                        case 31:
                                        case 32:
                                            break;
                                        default:
                                            switch (i5) {
                                                case 40:
                                                case 41:
                                                case 42:
                                                    break;
                                                default:
                                                    throw new IllegalArgumentException(format);
                                            }
                                    }
                            }
                    }
                }
                throw new IllegalStateException(format);
            }
            i6 = 2;
            Object[] objArr2 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 1) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 1) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 1) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 1) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 1) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 1) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 1) {
        }
        throw new IllegalStateException(format222);
    }

    public static c1 b(c1 c1Var, c1 c1Var2) {
        if (c1Var == null) {
            a(38);
            throw null;
        }
        if (c1Var2 == null) {
            a(39);
            throw null;
        }
        c1 c1Var3 = c1.f21013i;
        if (c1Var == c1Var3) {
            if (c1Var2 != null) {
                return c1Var2;
            }
            a(40);
            throw null;
        }
        if (c1Var2 == c1Var3) {
            if (c1Var != null) {
                return c1Var;
            }
            a(41);
            throw null;
        }
        if (c1Var == c1Var2) {
            if (c1Var2 != null) {
                return c1Var2;
            }
            a(42);
            throw null;
        }
        throw new AssertionError("Variance conflict: type parameter variance '" + c1Var + "' and projection kind '" + c1Var2 + "' cannot be combined");
    }

    public static int c(c1 c1Var, c1 c1Var2) {
        c1 c1Var3 = c1.f21014v;
        if (c1Var == c1Var3 && c1Var2 == c1.f21015w) {
            return 3;
        }
        return (c1Var == c1.f21015w && c1Var2 == c1Var3) ? 2 : 1;
    }

    public static w0 d(y yVar) {
        if (yVar == null) {
            a(6);
            throw null;
        }
        return e(q0.f21064b.f(yVar.r0(), yVar.l0()));
    }

    public static w0 e(u0 u0Var) {
        if (u0Var != null) {
            return new w0(u0Var);
        }
        a(0);
        throw null;
    }

    public static w0 f(u0 first, u0 second) {
        if (first == null) {
            a(3);
            throw null;
        }
        if (second == null) {
            a(4);
            throw null;
        }
        Intrinsics.checkNotNullParameter(first, "first");
        Intrinsics.checkNotNullParameter(second, "second");
        if (first.f()) {
            first = second;
        } else if (!second.f()) {
            first = new r(first, second);
        }
        return e(first);
    }

    public static String i(Object obj) {
        try {
            return obj.toString();
        } catch (Throwable th2) {
            if (ir.n.j(th2)) {
                throw th2;
            }
            return "[Exception while computing toString(): " + th2 + "]";
        }
    }

    public final u0 g() {
        u0 u0Var = this.a;
        if (u0Var != null) {
            return u0Var;
        }
        a(8);
        throw null;
    }

    public final y h(y yVar, c1 c1Var) {
        if (yVar == null) {
            a(9);
            throw null;
        }
        if (this.a.f()) {
            return yVar;
        }
        try {
            y b10 = k(new h0(yVar, c1Var), null, 0).b();
            if (b10 != null) {
                return b10;
            }
            a(12);
            throw null;
        } catch (v0 e9) {
            return ar.l.c(ar.k.H, e9.getMessage());
        }
    }

    public final y j(y yVar, c1 c1Var) {
        if (yVar == null) {
            a(14);
            throw null;
        }
        if (c1Var == null) {
            a(15);
            throw null;
        }
        s0 h0Var = new h0(g().g(yVar, c1Var), c1Var);
        u0 u0Var = this.a;
        if (!u0Var.f()) {
            try {
                h0Var = k(h0Var, null, 0);
            } catch (v0 unused) {
                h0Var = null;
            }
        }
        if (u0Var.a() || u0Var.b()) {
            boolean b10 = u0Var.b();
            if (h0Var != null) {
                if (!h0Var.c()) {
                    y b11 = h0Var.b();
                    Intrinsics.checkNotNullExpressionValue(b11, "getType(...)");
                    if (z0.c(b11, er.b.f8221d, null)) {
                        c1 a = h0Var.a();
                        Intrinsics.checkNotNullExpressionValue(a, "getProjectionKind(...)");
                        if (a == c1.f21015w) {
                            h0Var = new h0((y) a5.k0.g(b11).f8220b, a);
                        } else if (b10) {
                            h0Var = new h0((y) a5.k0.g(b11).a, a);
                        } else {
                            w0 e9 = e(new er.c());
                            Intrinsics.checkNotNullExpressionValue(e9, "create(...)");
                            if (!e9.a.f()) {
                                try {
                                    h0Var = e9.k(h0Var, null, 0);
                                } catch (v0 unused2) {
                                }
                            }
                        }
                    }
                }
            }
            h0Var = null;
        }
        if (h0Var == null) {
            return null;
        }
        return h0Var.b();
    }

    /* JADX WARN: Code restructure failed: missing block: B:114:0x02a7, code lost:
    
        if (r0 != 2) goto L138;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final s0 k(s0 s0Var, ip.s0 s0Var2, int i5) {
        char c6;
        w0 w0Var;
        w0 w0Var2 = this;
        y yVar = null;
        if (s0Var == null) {
            a(18);
            throw null;
        }
        u0 u0Var = w0Var2.a;
        if (i5 > 100) {
            throw new IllegalStateException("Recursion too deep. Most likely infinite loop while substituting " + i(s0Var) + "; substitution: " + i(u0Var));
        }
        if (!s0Var.c()) {
            y b10 = s0Var.b();
            if (b10 instanceof a1) {
                a1 a1Var = (a1) b10;
                b1 O = a1Var.O();
                y j = a1Var.j();
                s0 k = w0Var2.k(new h0(O, s0Var.a()), s0Var2, i5 + 1);
                return k.c() ? k : new h0(c.G(k.b().w0(), w0Var2.j(j, s0Var.a())), k.a());
            }
            Intrinsics.checkNotNullParameter(b10, "<this>");
            b10.w0();
            if (!(b10.w0() instanceof wp.h)) {
                s0 e9 = u0Var.e(b10);
                if (e9 == null) {
                    e9 = null;
                } else if (b10.getAnnotations().r(fp.o.f8905y)) {
                    p0 r02 = e9.b().r0();
                    if (r02 instanceof zq.j) {
                        s0 s0Var3 = ((zq.j) r02).a;
                        c1 a = s0Var3.a();
                        if (c(s0Var.a(), a) == 3) {
                            e9 = new h0(s0Var3.b());
                        } else if (s0Var2 != null && c(s0Var2.getVariance(), a) == 3) {
                            e9 = new h0(s0Var3.b());
                        }
                    }
                }
                c1 a10 = s0Var.a();
                int i6 = 0;
                if (e9 == null && c.k(b10)) {
                    Intrinsics.checkNotNullParameter(b10, "<this>");
                    jp.a w02 = b10.w0();
                    m mVar = w02 instanceof m ? (m) w02 : null;
                    if (!(mVar != null ? mVar.C() : false)) {
                        Intrinsics.checkNotNullParameter(b10, "<this>");
                        b1 w03 = b10.w0();
                        Intrinsics.checkNotNull(w03, "null cannot be cast to non-null type org.jetbrains.kotlin.types.FlexibleType");
                        s sVar = (s) w03;
                        c0 c0Var = sVar.f21068e;
                        c0 c0Var2 = sVar.f21069i;
                        int i10 = i5 + 1;
                        s0 k5 = w0Var2.k(new h0(c0Var, a10), s0Var2, i10);
                        s0 k7 = w0Var2.k(new h0(c0Var2, a10), s0Var2, i10);
                        c1 a11 = k5.a();
                        if (k5.b() != sVar.f21068e || k7.b() != c0Var2) {
                            return new h0(c.e(c.b(k5.b()), c.b(k7.b())), a11);
                        }
                    }
                }
                if (!fp.i.F(b10) && !c.j(b10)) {
                    int i11 = 2;
                    if (e9 != null) {
                        int c8 = c(a10, e9.a());
                        Intrinsics.checkNotNullParameter(b10, "<this>");
                        if (!(b10.r0() instanceof lq.b)) {
                            int b11 = f0.e.b(c8);
                            if (b11 == 1) {
                                return new h0(b10.r0().g().p(), c1.f21015w);
                            }
                            if (b11 == 2) {
                                throw new v0("Out-projection in in-position");
                            }
                        }
                        Intrinsics.checkNotNullParameter(b10, "<this>");
                        jp.a w04 = b10.w0();
                        m mVar2 = w04 instanceof m ? (m) w04 : null;
                        if (mVar2 == null || !mVar2.C()) {
                            mVar2 = null;
                        }
                        if (e9.c()) {
                            return e9;
                        }
                        y p3 = mVar2 != null ? mVar2.p(e9.b()) : z0.h(e9.b(), b10.t0());
                        if (!b10.getAnnotations().isEmpty()) {
                            jp.h d6 = u0Var.d(b10.getAnnotations());
                            if (d6 == null) {
                                a(33);
                                throw null;
                            }
                            if (d6.r(fp.o.f8905y)) {
                                d6 = new jp.l(d6, new w(i11));
                            }
                            p3 = com.facebook.imagepipeline.nativecode.c.T(p3, new jp.i(new jp.h[]{p3.getAnnotations(), d6}));
                        }
                        if (c8 == 1) {
                            a10 = b(a10, e9.a());
                        }
                        return new h0(p3, a10);
                    }
                    y b12 = s0Var.b();
                    c1 a12 = s0Var.a();
                    if (!(b12.r0().a() instanceof ip.s0)) {
                        Intrinsics.checkNotNullParameter(b12, "<this>");
                        Intrinsics.checkNotNullParameter(b12, "<this>");
                        b1 w05 = b12.w0();
                        a aVar = w05 instanceof a ? (a) w05 : null;
                        c0 c0Var3 = aVar != null ? aVar.f21008i : null;
                        if (c0Var3 != null) {
                            if ((u0Var instanceof v) && u0Var.b()) {
                                v vVar = (v) u0Var;
                                w0Var = new w0(new v(vVar.f21072b, vVar.f21073c, false));
                            } else {
                                w0Var = w0Var2;
                            }
                            yVar = w0Var.j(c0Var3, c1.f21013i);
                        }
                        List parameters = b12.r0().getParameters();
                        List newArguments = b12.l0();
                        ArrayList arrayList = new ArrayList(parameters.size());
                        boolean z5 = false;
                        while (i6 < parameters.size()) {
                            ip.s0 s0Var4 = (ip.s0) parameters.get(i6);
                            s0 s0Var5 = (s0) newArguments.get(i6);
                            s0 k10 = w0Var2.k(s0Var5, s0Var4, i5 + 1);
                            int b13 = f0.e.b(c(s0Var4.getVariance(), k10.a()));
                            if (b13 != 0) {
                                if (b13 != 1) {
                                    c6 = 2;
                                } else {
                                    c6 = 2;
                                }
                                k10 = z0.j(s0Var4);
                            } else {
                                c6 = 2;
                                c1 variance = s0Var4.getVariance();
                                c1 c1Var = c1.f21013i;
                                if (variance != c1Var && !k10.c()) {
                                    k10 = new h0(k10.b(), c1Var);
                                }
                            }
                            if (k10 != s0Var5) {
                                z5 = true;
                            }
                            arrayList.add(k10);
                            i6++;
                            w0Var2 = this;
                        }
                        if (z5) {
                            newArguments = arrayList;
                        }
                        jp.h newAnnotations = u0Var.d(b12.getAnnotations());
                        Intrinsics.checkNotNullParameter(b12, "<this>");
                        Intrinsics.checkNotNullParameter(newArguments, "newArguments");
                        Intrinsics.checkNotNullParameter(newAnnotations, "newAnnotations");
                        y p5 = c.p(b12, newArguments, newAnnotations, 4);
                        if ((p5 instanceof c0) && (yVar instanceof c0)) {
                            p5 = c.F((c0) p5, (c0) yVar);
                        }
                        return new h0(p5, a12);
                    }
                }
            }
        }
        return s0Var;
    }
}
