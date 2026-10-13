package lp;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.functions.Function0;
import yq.u0;
import yq.w0;

/* loaded from: classes3.dex */
public class i0 extends s0 implements ip.m0 {
    public xq.h E;
    public Function0 F;
    public final ip.z G;
    public ip.p H;
    public Collection I;
    public final ip.m0 J;
    public final ip.c K;
    public final boolean L;
    public final boolean M;
    public final boolean N;
    public final boolean O;
    public final boolean P;
    public List Q;
    public u R;
    public u S;
    public ArrayList T;
    public j0 U;
    public k0 V;
    public r W;
    public r X;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f14155y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i0(ip.l lVar, ip.m0 m0Var, jp.h hVar, ip.z zVar, ip.p pVar, boolean z5, hq.e eVar, ip.c cVar, ip.o0 o0Var, boolean z6, boolean z7, boolean z8, boolean z10, boolean z11) {
        super(lVar, hVar, eVar, null, o0Var);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (zVar == null) {
            v0(2);
            throw null;
        }
        if (pVar == null) {
            v0(3);
            throw null;
        }
        if (eVar == null) {
            v0(4);
            throw null;
        }
        if (cVar == null) {
            v0(5);
            throw null;
        }
        if (o0Var == null) {
            v0(6);
            throw null;
        }
        this.f14155y = z5;
        this.I = null;
        this.Q = Collections.EMPTY_LIST;
        this.G = zVar;
        this.H = pVar;
        this.J = m0Var == null ? this : m0Var;
        this.K = cVar;
        this.L = z6;
        this.M = z7;
        this.N = z8;
        this.O = z10;
        this.P = z11;
    }

    public static i0 C0(ip.l lVar, ip.z zVar, ip.p pVar, boolean z5, hq.e eVar, ip.c cVar, ip.o0 o0Var) {
        if (lVar == null) {
            v0(7);
            throw null;
        }
        if (pVar == null) {
            v0(10);
            throw null;
        }
        if (eVar == null) {
            v0(11);
            throw null;
        }
        if (o0Var != null) {
            return new i0(lVar, null, jp.g.a, zVar, pVar, z5, eVar, cVar, o0Var, false, false, false, false, false);
        }
        v0(13);
        throw null;
    }

    public static ip.v E0(w0 w0Var, ip.l0 l0Var) {
        if (l0Var == null) {
            v0(31);
            throw null;
        }
        ip.v vVar = ((g0) l0Var).J;
        if (vVar != null) {
            return vVar.c(w0Var);
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x002a  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00e7  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00ec  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x00f1  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00f6  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x0100  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x010a  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x010f  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0114  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x011e A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0129  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00e0  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x003b  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0041  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0050  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0055  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x005a  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x005f  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0064  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0069  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x006c  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0076  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x007b  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0080  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x008f  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0094  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0099  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void v0(int i5) {
        String str;
        int i6;
        if (i5 != 28 && i5 != 38 && i5 != 39 && i5 != 41 && i5 != 42) {
            switch (i5) {
                case 21:
                case 22:
                case 23:
                case 24:
                case 25:
                case 26:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 28 && i5 != 38 && i5 != 39 && i5 != 41 && i5 != 42) {
                switch (i5) {
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 8:
                        objArr[0] = "annotations";
                        break;
                    case 2:
                    case 9:
                        objArr[0] = "modality";
                        break;
                    case 3:
                    case 10:
                    case 20:
                        objArr[0] = "visibility";
                        break;
                    case 4:
                    case 11:
                        objArr[0] = StackTraceHelper.NAME_KEY;
                        break;
                    case 5:
                    case 12:
                    case 35:
                        objArr[0] = "kind";
                        break;
                    case 6:
                    case 13:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        objArr[0] = "source";
                        break;
                    case 7:
                    default:
                        objArr[0] = "containingDeclaration";
                        break;
                    case 14:
                        objArr[0] = "inType";
                        break;
                    case 15:
                    case 17:
                        objArr[0] = "outType";
                        break;
                    case 16:
                    case 18:
                        objArr[0] = "typeParameters";
                        break;
                    case 19:
                        objArr[0] = "contextReceiverParameters";
                        break;
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 28:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    case 41:
                    case 42:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyDescriptorImpl";
                        break;
                    case 27:
                        objArr[0] = "originalSubstitutor";
                        break;
                    case 29:
                        objArr[0] = "copyConfiguration";
                        break;
                    case 30:
                        objArr[0] = "substitutor";
                        break;
                    case 31:
                        objArr[0] = "accessorDescriptor";
                        break;
                    case 32:
                        objArr[0] = "newOwner";
                        break;
                    case 33:
                        objArr[0] = "newModality";
                        break;
                    case 34:
                        objArr[0] = "newVisibility";
                        break;
                    case 36:
                        objArr[0] = "newName";
                        break;
                    case 40:
                        objArr[0] = "overriddenDescriptors";
                        break;
                }
                if (i5 != 28) {
                    objArr[1] = "getSourceToUseForCopy";
                } else if (i5 == 38) {
                    objArr[1] = "getOriginal";
                } else if (i5 == 39) {
                    objArr[1] = "getKind";
                } else if (i5 == 41) {
                    objArr[1] = "getOverriddenDescriptors";
                } else if (i5 != 42) {
                    switch (i5) {
                        case 21:
                            objArr[1] = "getTypeParameters";
                            break;
                        case 22:
                            objArr[1] = "getContextReceiverParameters";
                            break;
                        case 23:
                            objArr[1] = "getReturnType";
                            break;
                        case 24:
                            objArr[1] = "getModality";
                            break;
                        case 25:
                            objArr[1] = "getVisibility";
                            break;
                        case 26:
                            objArr[1] = "getAccessors";
                            break;
                        default:
                            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/PropertyDescriptorImpl";
                            break;
                    }
                } else {
                    objArr[1] = "copy";
                }
                switch (i5) {
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                        objArr[2] = "create";
                        break;
                    case 14:
                        objArr[2] = "setInType";
                        break;
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                        objArr[2] = "setType";
                        break;
                    case 20:
                        objArr[2] = "setVisibility";
                        break;
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 28:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    case 41:
                    case 42:
                        break;
                    case 27:
                        objArr[2] = "substitute";
                        break;
                    case 29:
                        objArr[2] = "doSubstitute";
                        break;
                    case 30:
                    case 31:
                        objArr[2] = "getSubstitutedInitialSignatureDescriptor";
                        break;
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        objArr[2] = "createSubstitutedCopy";
                        break;
                    case 40:
                        objArr[2] = "setOverriddenDescriptors";
                        break;
                    default:
                        objArr[2] = "<init>";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 28 && i5 != 38 && i5 != 39 && i5 != 41 && i5 != 42) {
                    switch (i5) {
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
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
            if (i5 != 28) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 28) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 28) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 28) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 28) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 28) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 28) {
        }
        throw new IllegalStateException(format222);
    }

    @Override // ip.d
    /* renamed from: B0, reason: merged with bridge method [inline-methods] */
    public final i0 L(ip.l lVar, ip.z zVar, ip.p pVar) {
        h0 h0Var = new h0(this);
        if (lVar == null) {
            h0.a(0);
            throw null;
        }
        h0Var.a = lVar;
        h0Var.f14147d = null;
        h0Var.f14145b = zVar;
        if (pVar == null) {
            h0.a(8);
            throw null;
        }
        h0Var.f14146c = pVar;
        h0Var.f14148e = ip.c.f12124e;
        h0Var.f14150g = false;
        i0 b10 = h0Var.b();
        if (b10 != null) {
            return b10;
        }
        v0(42);
        throw null;
    }

    public i0 D0(ip.l lVar, ip.z zVar, ip.p pVar, ip.m0 m0Var, ip.c cVar, hq.e eVar) {
        if (lVar == null) {
            v0(32);
            throw null;
        }
        if (zVar == null) {
            v0(33);
            throw null;
        }
        if (pVar == null) {
            v0(34);
            throw null;
        }
        if (cVar == null) {
            v0(35);
            throw null;
        }
        if (eVar == null) {
            v0(36);
            throw null;
        }
        return new i0(lVar, m0Var, getAnnotations(), zVar, pVar, this.f14155y, eVar, cVar, ip.o0.f12151g, this.L, isConst(), this.N, isExternal(), this.P);
    }

    @Override // ip.m0
    public final boolean E() {
        return this.P;
    }

    public final void F0(j0 j0Var, k0 k0Var, r rVar, r rVar2) {
        this.U = j0Var;
        this.V = k0Var;
        this.W = rVar;
        this.X = rVar2;
    }

    public final void G0(xq.h hVar, Function0 function0) {
        if (function0 == null) {
            throw new IllegalArgumentException(String.format("Argument for @NotNull parameter '%s' of %s.%s must not be null", "compileTimeInitializerFactory", "kotlin/reflect/jvm/internal/impl/descriptors/impl/VariableDescriptorWithInitializerImpl", "setCompileTimeInitializer"));
        }
        this.F = function0;
        if (hVar == null) {
            hVar = (xq.h) function0.invoke();
        }
        this.E = hVar;
    }

    public final void I0(yq.y yVar, List list, u uVar, u uVar2, List list2) {
        if (yVar == null) {
            v0(17);
            throw null;
        }
        if (list == null) {
            v0(18);
            throw null;
        }
        if (list2 == null) {
            v0(19);
            throw null;
        }
        this.f14185x = yVar;
        this.T = new ArrayList(list);
        this.S = uVar2;
        this.R = uVar;
        this.Q = list2;
    }

    @Override // ip.b
    public Object K(ip.a aVar) {
        throw null;
    }

    @Override // ip.v0
    public final mq.g M() {
        xq.h hVar = this.E;
        if (hVar != null) {
            return (mq.g) hVar.invoke();
        }
        return null;
    }

    @Override // lp.s0, ip.b
    public final u T() {
        return this.R;
    }

    @Override // ip.v0
    public final boolean V() {
        return this.f14155y;
    }

    @Override // lp.s0, ip.b
    public final u W() {
        return this.S;
    }

    @Override // ip.m0
    public final r X() {
        return this.X;
    }

    @Override // ip.m0
    public final r Z() {
        return this.W;
    }

    @Override // ip.b
    public final List a0() {
        List list = this.Q;
        if (list != null) {
            return list;
        }
        v0(22);
        throw null;
    }

    @Override // ip.d
    public final ip.c b() {
        ip.c cVar = this.K;
        if (cVar != null) {
            return cVar;
        }
        v0(39);
        throw null;
    }

    @Override // ip.v0
    public final boolean b0() {
        return this.L;
    }

    @Override // ip.y
    public final ip.z e() {
        ip.z zVar = this.G;
        if (zVar != null) {
            return zVar;
        }
        v0(24);
        throw null;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        return nVar.I(this, obj);
    }

    @Override // ip.d
    public final void g0(Collection collection) {
        if (collection != null) {
            this.I = collection;
        } else {
            v0(40);
            throw null;
        }
    }

    @Override // ip.m0
    public final j0 getGetter() {
        return this.U;
    }

    @Override // lp.s0, ip.b
    public final yq.y getReturnType() {
        yq.y type = getType();
        if (type != null) {
            return type;
        }
        v0(23);
        throw null;
    }

    @Override // ip.m0
    public final k0 getSetter() {
        return this.V;
    }

    @Override // lp.s0, ip.b
    public final List getTypeParameters() {
        ArrayList arrayList = this.T;
        if (arrayList != null) {
            return arrayList;
        }
        throw new IllegalStateException("typeParameters == null for " + this);
    }

    @Override // ip.o, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = this.H;
        if (pVar != null) {
            return pVar;
        }
        v0(25);
        throw null;
    }

    @Override // ip.b
    public final Collection i() {
        Collection collection = this.I;
        if (collection == null) {
            collection = Collections.EMPTY_LIST;
        }
        if (collection != null) {
            return collection;
        }
        v0(41);
        throw null;
    }

    @Override // ip.v0
    public boolean isConst() {
        return this.M;
    }

    @Override // ip.y
    public boolean isExternal() {
        return this.O;
    }

    @Override // ip.m0
    public final ArrayList m() {
        ArrayList arrayList = new ArrayList(2);
        j0 j0Var = this.U;
        if (j0Var != null) {
            arrayList.add(j0Var);
        }
        k0 k0Var = this.V;
        if (k0Var != null) {
            arrayList.add(k0Var);
        }
        return arrayList;
    }

    @Override // ip.y
    public final boolean o0() {
        return false;
    }

    @Override // ip.y
    public final boolean z() {
        return this.N;
    }

    @Override // ip.q0
    public final ip.m0 c(w0 w0Var) {
        if (w0Var == null) {
            v0(27);
            throw null;
        }
        if (w0Var.a.f()) {
            return this;
        }
        h0 h0Var = new h0(this);
        u0 g6 = w0Var.g();
        if (g6 == null) {
            h0.a(15);
            throw null;
        }
        h0Var.f14149f = g6;
        h0Var.f14147d = a();
        return h0Var.b();
    }

    @Override // lp.m, lp.l, ip.l
    public final ip.m0 a() {
        ip.m0 m0Var = this.J;
        ip.m0 a = m0Var == this ? this : m0Var.a();
        if (a != null) {
            return a;
        }
        v0(38);
        throw null;
    }

    public void H0(yq.y yVar) {
    }
}
