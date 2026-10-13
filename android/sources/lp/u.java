package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Set;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.w0;

/* loaded from: classes3.dex */
public final class u extends l implements ip.k0 {

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f14188v = 0;

    /* renamed from: w, reason: collision with root package name */
    public final ip.l f14189w;

    /* renamed from: x, reason: collision with root package name */
    public final sq.d f14190x;

    public u(ip.f fVar) {
        super(jp.g.a, hq.g.f10214d);
        this.f14189w = fVar;
        this.f14190x = new sq.c(fVar);
    }

    public static /* synthetic */ void A0(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                str = "@NotNull method %s.%s must not return null";
                break;
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                i6 = 2;
                break;
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 2:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
                objArr[0] = "substitutor";
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractReceiverParameterDescriptor";
                break;
            default:
                objArr[0] = "annotations";
                break;
        }
        switch (i5) {
            case 4:
                objArr[1] = "getContextReceiverParameters";
                break;
            case 5:
                objArr[1] = "getTypeParameters";
                break;
            case 6:
                objArr[1] = "getType";
                break;
            case 7:
                objArr[1] = "getValueParameters";
                break;
            case 8:
                objArr[1] = "getOverriddenDescriptors";
                break;
            case 9:
                objArr[1] = "getVisibility";
                break;
            case 10:
                objArr[1] = "getOriginal";
                break;
            case 11:
                objArr[1] = "getSource";
                break;
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/AbstractReceiverParameterDescriptor";
                break;
        }
        switch (i5) {
            case 3:
                objArr[2] = "substitute";
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                throw new IllegalStateException(format);
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public static /* synthetic */ void v0(int i5) {
        String str = (i5 == 1 || i5 == 2) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 1 || i5 == 2) ? 2 : 3];
        if (i5 == 1 || i5 == 2) {
            objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/LazyClassReceiverParameterDescriptor";
        } else if (i5 != 3) {
            objArr[0] = "descriptor";
        } else {
            objArr[0] = "newOwner";
        }
        if (i5 == 1) {
            objArr[1] = "getValue";
        } else if (i5 != 2) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/LazyClassReceiverParameterDescriptor";
        } else {
            objArr[1] = "getContainingDeclaration";
        }
        if (i5 != 1 && i5 != 2) {
            if (i5 != 3) {
                objArr[2] = "<init>";
            } else {
                objArr[2] = "copy";
            }
        }
        String format = String.format(str, objArr);
        if (i5 != 1 && i5 != 2) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static /* synthetic */ void w0(int i5) {
        String str = (i5 == 7 || i5 == 8) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 7 || i5 == 8) ? 2 : 3];
        switch (i5) {
            case 1:
            case 4:
                objArr[0] = "value";
                break;
            case 2:
            case 5:
                objArr[0] = "annotations";
                break;
            case 3:
            default:
                objArr[0] = "containingDeclaration";
                break;
            case 6:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 7:
            case 8:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ReceiverParameterDescriptorImpl";
                break;
            case 9:
                objArr[0] = "newOwner";
                break;
            case 10:
                objArr[0] = "outType";
                break;
        }
        if (i5 == 7) {
            objArr[1] = "getValue";
        } else if (i5 != 8) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/ReceiverParameterDescriptorImpl";
        } else {
            objArr[1] = "getContainingDeclaration";
        }
        switch (i5) {
            case 7:
            case 8:
                break;
            case 9:
                objArr[2] = "copy";
                break;
            case 10:
                objArr[2] = "setOutType";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 7 && i5 != 8) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public final sq.d B0() {
        switch (this.f14188v) {
            case 0:
                sq.c cVar = (sq.c) this.f14190x;
                if (cVar != null) {
                    return cVar;
                }
                v0(1);
                throw null;
            default:
                bq.b bVar = (bq.b) this.f14190x;
                if (bVar != null) {
                    return bVar;
                }
                w0(7);
                throw null;
        }
    }

    @Override // ip.q0
    /* renamed from: C0, reason: merged with bridge method [inline-methods] */
    public final u c(w0 w0Var) {
        if (w0Var == null) {
            A0(3);
            throw null;
        }
        if (!w0Var.a.f()) {
            yq.y j = h() instanceof ip.f ? w0Var.j(getType(), c1.f21015w) : w0Var.j(getType(), c1.f21013i);
            if (j == null) {
                return null;
            }
            if (j != getType()) {
                return new u(h(), new sq.e(j), getAnnotations());
            }
        }
        return this;
    }

    @Override // ip.b
    public final List P() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        A0(7);
        throw null;
    }

    @Override // ip.b
    public final u T() {
        return null;
    }

    @Override // ip.b
    public final u W() {
        return null;
    }

    @Override // lp.l, ip.l
    public final ip.b a() {
        return this;
    }

    @Override // ip.m
    public final ip.o0 d() {
        return ip.o0.f12151g;
    }

    @Override // ip.l
    public final Object e0(ip.n nVar, Object obj) {
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        builder.append(getName());
        return Unit.a;
    }

    @Override // ip.b
    public final yq.y getReturnType() {
        return getType();
    }

    @Override // bq.b, sq.d
    public final yq.y getType() {
        yq.y type = B0().getType();
        if (type != null) {
            return type;
        }
        A0(6);
        throw null;
    }

    @Override // ip.b
    public final List getTypeParameters() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        A0(5);
        throw null;
    }

    @Override // ip.o, ip.y
    public final ip.p getVisibility() {
        ip.p pVar = ip.q.f12160f;
        if (pVar != null) {
            return pVar;
        }
        A0(9);
        throw null;
    }

    @Override // ip.l
    public final ip.l h() {
        switch (this.f14188v) {
            case 0:
                ip.f fVar = (ip.f) this.f14189w;
                if (fVar != null) {
                    return fVar;
                }
                v0(2);
                throw null;
            default:
                ip.l lVar = this.f14189w;
                if (lVar != null) {
                    return lVar;
                }
                w0(8);
                throw null;
        }
    }

    @Override // ip.b
    public final Collection i() {
        Set set = Collections.EMPTY_SET;
        if (set != null) {
            return set;
        }
        A0(8);
        throw null;
    }

    @Override // lp.l, bq.b
    public String toString() {
        switch (this.f14188v) {
            case 0:
                return "class " + ((ip.f) this.f14189w).getName() + "::this";
            default:
                return super.toString();
        }
    }

    @Override // ip.b
    public final boolean w() {
        return false;
    }

    @Override // lp.l, ip.l
    public final ip.l a() {
        return this;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public u(ip.l lVar, bq.b bVar, jp.h hVar) {
        this(lVar, bVar, hVar, hq.g.f10214d);
        if (lVar == null) {
            w0(0);
            throw null;
        }
        if (hVar != null) {
        } else {
            w0(2);
            throw null;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public u(ip.l lVar, bq.b bVar, jp.h hVar, hq.e eVar) {
        super(hVar, eVar);
        if (lVar == null) {
            w0(3);
            throw null;
        }
        if (hVar == null) {
            w0(5);
            throw null;
        }
        if (eVar != null) {
            this.f14189w = lVar;
            this.f14190x = bVar;
            return;
        }
        w0(6);
        throw null;
    }
}
