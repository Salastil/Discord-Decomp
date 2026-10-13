package lp;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.LinkedHashMap;
import java.util.List;
import yq.u0;

/* loaded from: classes3.dex */
public final class s implements ip.u {
    public final List E;
    public u F;
    public u G;
    public yq.y H;
    public hq.e I;
    public boolean J;
    public boolean K;
    public boolean L;
    public boolean M;
    public boolean N;
    public List O;
    public jp.h P;
    public boolean Q;
    public final LinkedHashMap R;
    public Boolean S;
    public boolean T;
    public final /* synthetic */ t U;

    /* renamed from: d, reason: collision with root package name */
    public u0 f14178d;

    /* renamed from: e, reason: collision with root package name */
    public ip.l f14179e;

    /* renamed from: i, reason: collision with root package name */
    public ip.z f14180i;

    /* renamed from: v, reason: collision with root package name */
    public ip.p f14181v;

    /* renamed from: w, reason: collision with root package name */
    public ip.v f14182w;

    /* renamed from: x, reason: collision with root package name */
    public ip.c f14183x;

    /* renamed from: y, reason: collision with root package name */
    public List f14184y;

    public s(t tVar, u0 u0Var, ip.l lVar, ip.z zVar, ip.p pVar, ip.c cVar, List list, List list2, u uVar, yq.y yVar) {
        if (u0Var == null) {
            a(0);
            throw null;
        }
        if (lVar == null) {
            a(1);
            throw null;
        }
        if (zVar == null) {
            a(2);
            throw null;
        }
        if (pVar == null) {
            a(3);
            throw null;
        }
        if (cVar == null) {
            a(4);
            throw null;
        }
        if (list == null) {
            a(5);
            throw null;
        }
        if (list2 == null) {
            a(6);
            throw null;
        }
        if (yVar == null) {
            a(7);
            throw null;
        }
        this.U = tVar;
        this.f14182w = null;
        this.G = tVar.H;
        this.J = true;
        this.K = false;
        this.L = false;
        this.M = false;
        this.N = tVar.Q;
        this.O = null;
        this.P = null;
        this.Q = tVar.R;
        this.R = new LinkedHashMap();
        this.S = null;
        this.T = false;
        this.f14178d = u0Var;
        this.f14179e = lVar;
        this.f14180i = zVar;
        this.f14181v = pVar;
        this.f14183x = cVar;
        this.f14184y = list;
        this.E = list2;
        this.F = uVar;
        this.H = yVar;
        this.I = null;
    }

    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 9:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 36:
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case 40:
            case 41:
            case 42:
                str = "@NotNull method %s.%s must not return null";
                break;
            case 10:
            case 12:
            case 14:
            case 17:
            case 19:
            case 21:
            case 23:
            case 25:
            case 35:
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 9:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 36:
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case 40:
            case 41:
            case 42:
                i6 = 2;
                break;
            case 10:
            case 12:
            case 14:
            case 17:
            case 19:
            case 21:
            case 23:
            case 25:
            case 35:
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
                objArr[0] = "newOwner";
                break;
            case 2:
                objArr[0] = "newModality";
                break;
            case 3:
                objArr[0] = "newVisibility";
                break;
            case 4:
            case 14:
                objArr[0] = "kind";
                break;
            case 5:
                objArr[0] = "newValueParameterDescriptors";
                break;
            case 6:
                objArr[0] = "newContextReceiverParameters";
                break;
            case 7:
                objArr[0] = "newReturnType";
                break;
            case 8:
                objArr[0] = "owner";
                break;
            case 9:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 36:
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case 40:
            case 41:
            case 42:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/FunctionDescriptorImpl$CopyConfiguration";
                break;
            case 10:
                objArr[0] = "modality";
                break;
            case 12:
                objArr[0] = "visibility";
                break;
            case 17:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 19:
            case 21:
                objArr[0] = "parameters";
                break;
            case 23:
                objArr[0] = "type";
                break;
            case 25:
                objArr[0] = "contextReceiverParameters";
                break;
            case 35:
                objArr[0] = "additionalAnnotations";
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
            default:
                objArr[0] = "substitution";
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                objArr[0] = "userDataKey";
                break;
        }
        switch (i5) {
            case 9:
                objArr[1] = "setOwner";
                break;
            case 10:
            case 12:
            case 14:
            case 17:
            case 19:
            case 21:
            case 23:
            case 25:
            case 35:
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/descriptors/impl/FunctionDescriptorImpl$CopyConfiguration";
                break;
            case 11:
                objArr[1] = "setModality";
                break;
            case 13:
                objArr[1] = "setVisibility";
                break;
            case 15:
                objArr[1] = "setKind";
                break;
            case 16:
                objArr[1] = "setCopyOverrides";
                break;
            case 18:
                objArr[1] = "setName";
                break;
            case 20:
                objArr[1] = "setValueParameters";
                break;
            case 22:
                objArr[1] = "setTypeParameters";
                break;
            case 24:
                objArr[1] = "setReturnType";
                break;
            case 26:
                objArr[1] = "setContextReceiverParameters";
                break;
            case 27:
                objArr[1] = "setExtensionReceiverParameter";
                break;
            case 28:
                objArr[1] = "setDispatchReceiverParameter";
                break;
            case 29:
                objArr[1] = "setOriginal";
                break;
            case 30:
                objArr[1] = "setSignatureChange";
                break;
            case 31:
                objArr[1] = "setPreserveSourceElement";
                break;
            case 32:
                objArr[1] = "setDropOriginalInContainingParts";
                break;
            case 33:
                objArr[1] = "setHiddenToOvercomeSignatureClash";
                break;
            case 34:
                objArr[1] = "setHiddenForResolutionEverywhereBesideSupercalls";
                break;
            case 36:
                objArr[1] = "setAdditionalAnnotations";
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                objArr[1] = "setSubstitution";
                break;
            case 40:
                objArr[1] = "putUserData";
                break;
            case 41:
                objArr[1] = "getSubstitution";
                break;
            case 42:
                objArr[1] = "setJustForTypeSubstitution";
                break;
        }
        switch (i5) {
            case 8:
                objArr[2] = "setOwner";
                break;
            case 9:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 36:
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case 40:
            case 41:
            case 42:
                break;
            case 10:
                objArr[2] = "setModality";
                break;
            case 12:
                objArr[2] = "setVisibility";
                break;
            case 14:
                objArr[2] = "setKind";
                break;
            case 17:
                objArr[2] = "setName";
                break;
            case 19:
                objArr[2] = "setValueParameters";
                break;
            case 21:
                objArr[2] = "setTypeParameters";
                break;
            case 23:
                objArr[2] = "setReturnType";
                break;
            case 25:
                objArr[2] = "setContextReceiverParameters";
                break;
            case 35:
                objArr[2] = "setAdditionalAnnotations";
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                objArr[2] = "setSubstitution";
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                objArr[2] = "putUserData";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 9:
            case 11:
            case 13:
            case 15:
            case 16:
            case 18:
            case 20:
            case 22:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 36:
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case 40:
            case 41:
            case 42:
                throw new IllegalStateException(format);
            case 10:
            case 12:
            case 14:
            case 17:
            case 19:
            case 21:
            case 23:
            case 25:
            case 35:
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
            default:
                throw new IllegalArgumentException(format);
        }
    }

    @Override // ip.u
    public final ip.u A(ip.c cVar) {
        if (cVar != null) {
            this.f14183x = cVar;
            return this;
        }
        a(14);
        throw null;
    }

    @Override // ip.u
    public final ip.u D(ip.p pVar) {
        if (pVar != null) {
            this.f14181v = pVar;
            return this;
        }
        a(12);
        throw null;
    }

    @Override // ip.u
    public final ip.u F() {
        this.N = true;
        return this;
    }

    @Override // ip.u
    public final ip.u H(u uVar) {
        this.G = uVar;
        return this;
    }

    @Override // ip.u
    public final ip.u K(ip.l lVar) {
        if (lVar != null) {
            this.f14179e = lVar;
            return this;
        }
        a(8);
        throw null;
    }

    @Override // ip.u
    public final ip.u L() {
        this.K = true;
        return this;
    }

    @Override // ip.u
    public final ip.v build() {
        return this.U.E0(this);
    }

    @Override // ip.u
    public final ip.u c(kotlin.collections.m0 m0Var) {
        if (m0Var != null) {
            this.O = m0Var;
            return this;
        }
        a(21);
        throw null;
    }

    @Override // ip.u
    public final ip.u d(List list) {
        if (list != null) {
            this.f14184y = list;
            return this;
        }
        a(19);
        throw null;
    }

    @Override // ip.u
    public final ip.u f(hq.e eVar) {
        if (eVar != null) {
            this.I = eVar;
            return this;
        }
        a(17);
        throw null;
    }

    @Override // ip.u
    public final ip.u i() {
        this.L = true;
        return this;
    }

    @Override // ip.u
    public final ip.u o(yq.y yVar) {
        if (yVar != null) {
            this.H = yVar;
            return this;
        }
        a(23);
        throw null;
    }

    @Override // ip.u
    public final ip.u p(ip.z zVar) {
        if (zVar != null) {
            this.f14180i = zVar;
            return this;
        }
        a(10);
        throw null;
    }

    @Override // ip.u
    public final ip.u r() {
        this.R.put(tp.e.f18689e0, Boolean.TRUE);
        return this;
    }

    @Override // ip.u
    public final ip.u s() {
        this.Q = true;
        return this;
    }

    @Override // ip.u
    public final ip.u u(jp.h hVar) {
        if (hVar != null) {
            this.P = hVar;
            return this;
        }
        a(35);
        throw null;
    }

    @Override // ip.u
    public final ip.u y() {
        this.J = false;
        return this;
    }
}
