package yq;

import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class z0 {
    public static final ar.i a = ar.l.c(ar.k.I, new String[0]);

    /* renamed from: b, reason: collision with root package name */
    public static final ar.i f21088b = ar.l.c(ar.k.F, new String[0]);

    /* renamed from: c, reason: collision with root package name */
    public static final y0 f21089c = new y0("NO_EXPECTED_TYPE");

    /* renamed from: d, reason: collision with root package name */
    public static final y0 f21090d = new y0("UNIT_EXPECTED_TYPE");

    /* JADX WARN: Removed duplicated region for block: B:107:0x0123  */
    /* JADX WARN: Removed duplicated region for block: B:108:0x0065  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x0071  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x0077  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x007d  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x0082  */
    /* JADX WARN: Removed duplicated region for block: B:114:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x008c  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0096  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x009b  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x00a0  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x00aa  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x00b9  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x00be  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x00c3  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x00c8  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x00d7  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0053  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x005f  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00ef  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0128  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x012e  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0134  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x013a  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0140  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0146  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x014a  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0150  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0154  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x015a  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x015f  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0164  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x0169  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x016e  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0171  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x0176  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x017b  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0180  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0185  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x018a  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x018d  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0192  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0197  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x019a  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x019d  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x01a0  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x01a5  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x01a8  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x01ab  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x01b0  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x01ba A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:94:0x01d3  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        if (i5 != 4 && i5 != 9 && i5 != 11 && i5 != 15 && i5 != 17 && i5 != 19 && i5 != 26 && i5 != 35 && i5 != 48 && i5 != 53 && i5 != 6 && i5 != 7) {
            switch (i5) {
                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    break;
                default:
                    str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                    break;
            }
            if (i5 != 4 && i5 != 9 && i5 != 11 && i5 != 15 && i5 != 17 && i5 != 19 && i5 != 26 && i5 != 35 && i5 != 48 && i5 != 53 && i5 != 6 && i5 != 7) {
                switch (i5) {
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        break;
                    default:
                        i6 = 3;
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 4:
                    case 6:
                    case 7:
                    case 9:
                    case 11:
                    case 15:
                    case 17:
                    case 19:
                    case 26:
                    case 35:
                    case 48:
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/types/TypeUtils";
                        break;
                    case 5:
                    case 8:
                    case 10:
                    case 18:
                    case 23:
                    case 25:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case 40:
                    default:
                        objArr[0] = "type";
                        break;
                    case 12:
                        objArr[0] = "typeConstructor";
                        break;
                    case 13:
                        objArr[0] = "unsubstitutedMemberScope";
                        break;
                    case 14:
                        objArr[0] = "refinedTypeFactory";
                        break;
                    case 16:
                        objArr[0] = "parameters";
                        break;
                    case 20:
                        objArr[0] = "subType";
                        break;
                    case 21:
                        objArr[0] = "superType";
                        break;
                    case 22:
                        objArr[0] = "substitutor";
                        break;
                    case 24:
                        objArr[0] = "result";
                        break;
                    case 31:
                    case 33:
                        objArr[0] = "clazz";
                        break;
                    case 32:
                        objArr[0] = "typeArguments";
                        break;
                    case 34:
                        objArr[0] = "projections";
                        break;
                    case 36:
                        objArr[0] = "a";
                        break;
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        objArr[0] = "b";
                        break;
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[0] = "typeParameters";
                        break;
                    case 41:
                        objArr[0] = "typeParameterConstructors";
                        break;
                    case 42:
                        objArr[0] = "specialType";
                        break;
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        objArr[0] = "isSpecialType";
                        break;
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                        objArr[0] = "parameterDescriptor";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        objArr[0] = "numberValueTypeConstructor";
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    case 50:
                        objArr[0] = "supertypes";
                        break;
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        objArr[0] = "expectedType";
                        break;
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        objArr[0] = "literalTypeConstructor";
                        break;
                }
                if (i5 == 4) {
                    if (i5 != 9) {
                        if (i5 == 11 || i5 == 15) {
                            objArr[1] = "makeUnsubstitutedType";
                        } else if (i5 == 17) {
                            objArr[1] = "getDefaultTypeProjections";
                        } else if (i5 == 19) {
                            objArr[1] = "getImmediateSupertypes";
                        } else if (i5 == 26) {
                            objArr[1] = "getAllSupertypes";
                        } else if (i5 == 35) {
                            objArr[1] = "substituteProjectionsForParameters";
                        } else if (i5 != 48) {
                            if (i5 != 53) {
                                if (i5 != 6 && i5 != 7) {
                                    switch (i5) {
                                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                            break;
                                        default:
                                            objArr[1] = "kotlin/reflect/jvm/internal/impl/types/TypeUtils";
                                            break;
                                    }
                                }
                            }
                            objArr[1] = "getPrimitiveNumberType";
                        } else {
                            objArr[1] = "getDefaultPrimitiveNumberType";
                        }
                    }
                    objArr[1] = "makeNullableIfNeeded";
                } else {
                    objArr[1] = "makeNullableAsSpecified";
                }
                switch (i5) {
                    case 1:
                        objArr[2] = "makeNullable";
                        break;
                    case 2:
                        objArr[2] = "makeNotNullable";
                        break;
                    case 3:
                        objArr[2] = "makeNullableAsSpecified";
                        break;
                    case 4:
                    case 6:
                    case 7:
                    case 9:
                    case 11:
                    case 15:
                    case 17:
                    case 19:
                    case 26:
                    case 35:
                    case 48:
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        break;
                    case 5:
                    case 8:
                        objArr[2] = "makeNullableIfNeeded";
                        break;
                    case 10:
                        objArr[2] = "canHaveSubtypes";
                        break;
                    case 12:
                    case 13:
                    case 14:
                        objArr[2] = "makeUnsubstitutedType";
                        break;
                    case 16:
                        objArr[2] = "getDefaultTypeProjections";
                        break;
                    case 18:
                        objArr[2] = "getImmediateSupertypes";
                        break;
                    case 20:
                    case 21:
                    case 22:
                        objArr[2] = "createSubstitutedSupertype";
                        break;
                    case 23:
                    case 24:
                        objArr[2] = "collectAllSupertypes";
                        break;
                    case 25:
                        objArr[2] = "getAllSupertypes";
                        break;
                    case 27:
                        objArr[2] = "isNullableType";
                        break;
                    case 28:
                        objArr[2] = "acceptsNullable";
                        break;
                    case 29:
                        objArr[2] = "hasNullableSuperType";
                        break;
                    case 30:
                        objArr[2] = "getClassDescriptor";
                        break;
                    case 31:
                    case 32:
                        objArr[2] = "substituteParameters";
                        break;
                    case 33:
                    case 34:
                        objArr[2] = "substituteProjectionsForParameters";
                        break;
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        objArr[2] = "equalTypes";
                        break;
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[2] = "dependsOnTypeParameters";
                        break;
                    case 40:
                    case 41:
                        objArr[2] = "dependsOnTypeConstructors";
                        break;
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        objArr[2] = "contains";
                        break;
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                        objArr[2] = "makeStarProjection";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                        objArr[2] = "getDefaultPrimitiveNumberType";
                        break;
                    case 50:
                        objArr[2] = "findByFqName";
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        objArr[2] = "getPrimitiveNumberType";
                        break;
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                        objArr[2] = "isTypeParameter";
                        break;
                    case 61:
                        objArr[2] = "isReifiedTypeParameter";
                        break;
                    case 62:
                        objArr[2] = "isNonReifiedTypeParameter";
                        break;
                    case ys.l.a /* 63 */:
                        objArr[2] = "getTypeParameterDescriptorOrNull";
                        break;
                    default:
                        objArr[2] = "noExpectedType";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 4 && i5 != 9 && i5 != 11 && i5 != 15 && i5 != 17 && i5 != 19 && i5 != 26 && i5 != 35 && i5 != 48 && i5 != 53 && i5 != 6 && i5 != 7) {
                    switch (i5) {
                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
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
            if (i5 == 4) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
            if (i5 != 4) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 4) {
            switch (i5) {
            }
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 == 4) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 4) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 == 4) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 4) {
        }
        throw new IllegalStateException(format222);
    }

    public static boolean b(y yVar) {
        if (yVar == null) {
            a(28);
            throw null;
        }
        if (yVar.t0()) {
            return true;
        }
        if (!c.k(yVar)) {
            return false;
        }
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b1 w02 = yVar.w0();
        Intrinsics.checkNotNull(w02, "null cannot be cast to non-null type org.jetbrains.kotlin.types.FlexibleType");
        return b(((s) w02).f21069i);
    }

    public static boolean c(y yVar, Function1 function1, ir.k kVar) {
        if (yVar == null) {
            return false;
        }
        b1 w02 = yVar.w0();
        if (l(yVar)) {
            return ((Boolean) function1.invoke(w02)).booleanValue();
        }
        if (kVar != null && kVar.contains(yVar)) {
            return false;
        }
        if (((Boolean) function1.invoke(w02)).booleanValue()) {
            return true;
        }
        if (kVar == null) {
            int i5 = ir.k.f12269i;
            kVar = ir.n.f();
        }
        kVar.add(yVar);
        s sVar = w02 instanceof s ? (s) w02 : null;
        if (sVar != null && (c(sVar.f21068e, function1, kVar) || c(sVar.f21069i, function1, kVar))) {
            return true;
        }
        if ((w02 instanceof o) && c(((o) w02).f21054e, function1, kVar)) {
            return true;
        }
        p0 r02 = yVar.r0();
        if (r02 instanceof x) {
            Iterator it = ((x) r02).f21078b.iterator();
            while (it.hasNext()) {
                if (c((y) it.next(), function1, kVar)) {
                    return true;
                }
            }
            return false;
        }
        for (s0 s0Var : yVar.l0()) {
            if (!s0Var.c() && c(s0Var.b(), function1, kVar)) {
                return true;
            }
        }
        return false;
    }

    public static List d(List list) {
        if (list == null) {
            a(16);
            throw null;
        }
        ArrayList arrayList = new ArrayList(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(new h0(((ip.s0) it.next()).k()));
        }
        List i02 = CollectionsKt.i0(arrayList);
        if (i02 != null) {
            return i02;
        }
        a(17);
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x0028, code lost:
    
        if (e(((yq.s) r1).f21069i) != false) goto L47;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean e(y yVar) {
        if (yVar == null) {
            a(27);
            throw null;
        }
        if (!yVar.t0()) {
            if (c.k(yVar)) {
                Intrinsics.checkNotNullParameter(yVar, "<this>");
                b1 w02 = yVar.w0();
                Intrinsics.checkNotNull(w02, "null cannot be cast to non-null type org.jetbrains.kotlin.types.FlexibleType");
            }
            Intrinsics.checkNotNullParameter(yVar, "<this>");
            if (!(yVar.w0() instanceof o)) {
                if (f(yVar)) {
                    if (!(yVar.r0().a() instanceof ip.f)) {
                        w0 d6 = w0.d(yVar);
                        Collection<y> b10 = yVar.r0().b();
                        ArrayList arrayList = new ArrayList(b10.size());
                        for (y yVar2 : b10) {
                            if (yVar2 == null) {
                                a(21);
                                throw null;
                            }
                            y j = d6.j(yVar2, c1.f21013i);
                            y h6 = j != null ? h(j, yVar.t0()) : null;
                            if (h6 != null) {
                                arrayList.add(h6);
                            }
                        }
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            if (e((y) it.next())) {
                                return true;
                            }
                        }
                    }
                    return false;
                }
                p0 r02 = yVar.r0();
                if (r02 instanceof x) {
                    Iterator it2 = ((x) r02).f21078b.iterator();
                    while (it2.hasNext()) {
                        if (e((y) it2.next())) {
                        }
                    }
                }
            }
            return false;
        }
        return true;
    }

    public static boolean f(y yVar) {
        if (yVar == null) {
            a(60);
            throw null;
        }
        if ((yVar.r0().a() instanceof ip.s0 ? (ip.s0) yVar.r0().a() : null) != null) {
            return true;
        }
        yVar.r0();
        return false;
    }

    public static b1 g(y yVar, boolean z5) {
        if (yVar == null) {
            a(3);
            throw null;
        }
        b1 x02 = yVar.w0().x0(z5);
        if (x02 != null) {
            return x02;
        }
        a(4);
        throw null;
    }

    public static y h(y yVar, boolean z5) {
        if (yVar != null) {
            return z5 ? g(yVar, true) : yVar;
        }
        a(8);
        throw null;
    }

    public static c0 i(c0 c0Var, boolean z5) {
        if (c0Var == null) {
            a(5);
            throw null;
        }
        if (!z5) {
            return c0Var;
        }
        c0 x02 = c0Var.x0(true);
        if (x02 != null) {
            return x02;
        }
        a(6);
        throw null;
    }

    public static h0 j(ip.s0 s0Var) {
        if (s0Var != null) {
            return new h0(s0Var);
        }
        a(45);
        throw null;
    }

    public static s0 k(ip.s0 s0Var, wp.a aVar) {
        if (s0Var != null) {
            return aVar.a == x0.f21080d ? new h0(c.x(s0Var)) : new h0(s0Var);
        }
        a(46);
        throw null;
    }

    public static boolean l(y yVar) {
        if (yVar != null) {
            return yVar == f21089c || yVar == f21090d;
        }
        a(0);
        throw null;
    }
}
