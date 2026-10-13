package lp;

import com.facebook.react.devsupport.StackTraceHelper;
import ip.v0;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class s0 extends m implements v0 {

    /* renamed from: x, reason: collision with root package name */
    public yq.y f14185x;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s0(ip.l lVar, jp.h hVar, hq.e eVar, yq.y yVar, ip.o0 o0Var) {
        super(lVar, hVar, eVar, o0Var);
        if (lVar == null) {
            v0(0);
            throw null;
        }
        if (hVar == null) {
            v0(1);
            throw null;
        }
        if (eVar == null) {
            v0(2);
            throw null;
        }
        if (o0Var == null) {
            v0(3);
            throw null;
        }
        this.f14185x = yVar;
    }

    public static /* synthetic */ void v0(int i5) {
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
                i6 = 2;
                break;
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "annotations";
                break;
            case 2:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 3:
                objArr[0] = "source";
                break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/VariableDescriptorImpl";
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        switch (i5) {
            case 4:
                objArr[1] = "getType";
                break;
            case 5:
                objArr[1] = "getOriginal";
                break;
            case 6:
                objArr[1] = "getValueParameters";
                break;
            case 7:
                objArr[1] = "getOverriddenDescriptors";
                break;
            case 8:
                objArr[1] = "getTypeParameters";
                break;
            case 9:
                objArr[1] = "getContextReceiverParameters";
                break;
            case 10:
                objArr[1] = "getReturnType";
                break;
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/VariableDescriptorImpl";
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
                throw new IllegalStateException(format);
            default:
                throw new IllegalArgumentException(format);
        }
    }

    @Override // ip.b
    public final List P() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        v0(6);
        throw null;
    }

    public u T() {
        return null;
    }

    public u W() {
        return null;
    }

    public yq.y getReturnType() {
        yq.y type = getType();
        if (type != null) {
            return type;
        }
        v0(10);
        throw null;
    }

    @Override // bq.b, sq.d
    public final yq.y getType() {
        yq.y yVar = this.f14185x;
        if (yVar != null) {
            return yVar;
        }
        v0(4);
        throw null;
    }

    public List getTypeParameters() {
        List list = Collections.EMPTY_LIST;
        if (list != null) {
            return list;
        }
        v0(8);
        throw null;
    }

    @Override // ip.b
    public boolean w() {
        return false;
    }
}
