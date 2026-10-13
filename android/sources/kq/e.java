package kq;

import com.discord.jank_stats.JankRecordStore;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import com.swmansion.reanimated.BuildConfig;
import ip.a0;
import ip.f0;
import ip.j0;
import ip.z;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import lp.c0;
import lp.k0;
import lp.w;
import yq.p0;
import yq.y;

/* loaded from: classes3.dex */
public abstract class e {
    public static final /* synthetic */ int a = 0;

    static {
        new hq.c("kotlin.jvm.JvmName");
    }

    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        switch (i5) {
            case 4:
            case 7:
            case 9:
            case 10:
            case 12:
            case 22:
            case 40:
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
            case 61:
            case 62:
            case 64:
            case 71:
            case 75:
            case 82:
            case 83:
            case 85:
            case 88:
            case 93:
            case 95:
                str = "@NotNull method %s.%s must not return null";
                break;
            default:
                str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                break;
        }
        switch (i5) {
            case 4:
            case 7:
            case 9:
            case 10:
            case 12:
            case 22:
            case 40:
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
            case 61:
            case 62:
            case 64:
            case 71:
            case 75:
            case 82:
            case 83:
            case 85:
            case 88:
            case 93:
            case 95:
                i6 = 2;
                break;
            default:
                i6 = 3;
                break;
        }
        Object[] objArr = new Object[i6];
        switch (i5) {
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
            case 8:
            case 11:
            case 13:
            case 14:
            case 15:
            case 21:
            case 23:
            case 24:
            case 34:
            case 35:
            case 36:
            case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
            case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
            case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
            case ys.l.a /* 63 */:
            case 81:
            case 94:
                objArr[0] = "descriptor";
                break;
            case 4:
            case 7:
            case 9:
            case 10:
            case 12:
            case 22:
            case 40:
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
            case 61:
            case 62:
            case 64:
            case 71:
            case 75:
            case 82:
            case 83:
            case 85:
            case 88:
            case 93:
            case 95:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/DescriptorUtils";
                break;
            case 16:
                objArr[0] = "first";
                break;
            case 17:
                objArr[0] = "second";
                break;
            case 18:
            case 19:
                objArr[0] = "aClass";
                break;
            case 20:
                objArr[0] = "kotlinType";
                break;
            case 25:
                objArr[0] = "declarationDescriptor";
                break;
            case 26:
            case 28:
                objArr[0] = "subClass";
                break;
            case 27:
            case 29:
            case 33:
                objArr[0] = "superClass";
                break;
            case 30:
            case 32:
            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
            case 66:
                objArr[0] = "type";
                break;
            case 31:
                objArr[0] = JankRecordStore.SCREEN_OTHER;
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                objArr[0] = "classKind";
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
            case 41:
            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
            case 48:
            case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
            case 67:
            case 68:
            case 69:
            case 76:
            case 77:
                objArr[0] = "classDescriptor";
                break;
            case 46:
                objArr[0] = "typeConstructor";
                break;
            case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                objArr[0] = "innerClassName";
                break;
            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                objArr[0] = "location";
                break;
            case 65:
                objArr[0] = "variable";
                break;
            case 70:
                objArr[0] = "f";
                break;
            case 72:
                objArr[0] = "current";
                break;
            case 73:
                objArr[0] = "result";
                break;
            case 74:
                objArr[0] = "memberDescriptor";
                break;
            case 78:
            case 79:
            case 80:
                objArr[0] = "annotated";
                break;
            case 84:
            case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
            case 89:
            case 91:
                objArr[0] = "scope";
                break;
            case 87:
            case 90:
            case 92:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            default:
                objArr[0] = "containingDeclaration";
                break;
        }
        switch (i5) {
            case 4:
                objArr[1] = "getFqNameSafe";
                break;
            case 7:
                objArr[1] = "getFqNameUnsafe";
                break;
            case 9:
            case 10:
                objArr[1] = "getFqNameFromTopLevelClass";
                break;
            case 12:
                objArr[1] = "getClassIdForNonLocalClass";
                break;
            case 22:
                objArr[1] = "getContainingModule";
                break;
            case 40:
                objArr[1] = "getSuperclassDescriptors";
                break;
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                objArr[1] = "getSuperClassType";
                break;
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                objArr[1] = "getClassDescriptorForTypeConstructor";
                break;
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                objArr[1] = "getDefaultConstructorVisibility";
                break;
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                objArr[1] = "unwrapFakeOverride";
                break;
            case 61:
            case 62:
                objArr[1] = "unwrapSubstitutionOverride";
                break;
            case 64:
                objArr[1] = "unwrapFakeOverrideToAnyDeclaration";
                break;
            case 71:
                objArr[1] = "getAllOverriddenDescriptors";
                break;
            case 75:
                objArr[1] = "getAllOverriddenDeclarations";
                break;
            case 82:
            case 83:
                objArr[1] = "getContainingSourceFile";
                break;
            case 85:
                objArr[1] = "getAllDescriptors";
                break;
            case 88:
                objArr[1] = "getFunctionByName";
                break;
            case 93:
                objArr[1] = "getPropertyByName";
                break;
            case 95:
                objArr[1] = "getDirectMember";
                break;
            default:
                objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/DescriptorUtils";
                break;
        }
        switch (i5) {
            case 1:
                objArr[2] = "isLocal";
                break;
            case 2:
                objArr[2] = "getFqName";
                break;
            case 3:
                objArr[2] = "getFqNameSafe";
                break;
            case 4:
            case 7:
            case 9:
            case 10:
            case 12:
            case 22:
            case 40:
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
            case 61:
            case 62:
            case 64:
            case 71:
            case 75:
            case 82:
            case 83:
            case 85:
            case 88:
            case 93:
            case 95:
                break;
            case 5:
                objArr[2] = "getFqNameSafeIfPossible";
                break;
            case 6:
                objArr[2] = "getFqNameUnsafe";
                break;
            case 8:
                objArr[2] = "getFqNameFromTopLevelClass";
                break;
            case 11:
                objArr[2] = "getClassIdForNonLocalClass";
                break;
            case 13:
                objArr[2] = "isExtension";
                break;
            case 14:
                objArr[2] = "isOverride";
                break;
            case 15:
                objArr[2] = "isStaticDeclaration";
                break;
            case 16:
            case 17:
                objArr[2] = "areInSameModule";
                break;
            case 18:
            case 19:
                objArr[2] = "getParentOfType";
                break;
            case 20:
            case 23:
                objArr[2] = "getContainingModuleOrNull";
                break;
            case 21:
                objArr[2] = "getContainingModule";
                break;
            case 24:
                objArr[2] = "getContainingClass";
                break;
            case 25:
                objArr[2] = "isAncestor";
                break;
            case 26:
            case 27:
                objArr[2] = "isDirectSubclass";
                break;
            case 28:
            case 29:
                objArr[2] = "isSubclass";
                break;
            case 30:
            case 31:
                objArr[2] = "isSameClass";
                break;
            case 32:
            case 33:
                objArr[2] = "isSubtypeOfClass";
                break;
            case 34:
                objArr[2] = "isAnonymousObject";
                break;
            case 35:
                objArr[2] = "isAnonymousFunction";
                break;
            case 36:
                objArr[2] = "isEnumEntry";
                break;
            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                objArr[2] = "isKindOf";
                break;
            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                objArr[2] = "hasAbstractMembers";
                break;
            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                objArr[2] = "getSuperclassDescriptors";
                break;
            case 41:
                objArr[2] = "getSuperClassType";
                break;
            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                objArr[2] = "getSuperClassDescriptor";
                break;
            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                objArr[2] = "getClassDescriptorForType";
                break;
            case 46:
                objArr[2] = "getClassDescriptorForTypeConstructor";
                break;
            case 48:
                objArr[2] = "getDefaultConstructorVisibility";
                break;
            case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
            case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                objArr[2] = "getInnerClassByName";
                break;
            case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                objArr[2] = "isStaticNestedClass";
                break;
            case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                objArr[2] = "unwrapFakeOverride";
                break;
            case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                objArr[2] = "unwrapSubstitutionOverride";
                break;
            case ys.l.a /* 63 */:
                objArr[2] = "unwrapFakeOverrideToAnyDeclaration";
                break;
            case 65:
            case 66:
                objArr[2] = "shouldRecordInitializerForProperty";
                break;
            case 67:
                objArr[2] = "classCanHaveAbstractFakeOverride";
                break;
            case 68:
                objArr[2] = "classCanHaveAbstractDeclaration";
                break;
            case 69:
                objArr[2] = "classCanHaveOpenMembers";
                break;
            case 70:
                objArr[2] = "getAllOverriddenDescriptors";
                break;
            case 72:
            case 73:
                objArr[2] = "collectAllOverriddenDescriptors";
                break;
            case 74:
                objArr[2] = "getAllOverriddenDeclarations";
                break;
            case 76:
                objArr[2] = "isSingletonOrAnonymousObject";
                break;
            case 77:
                objArr[2] = "canHaveDeclaredConstructors";
                break;
            case 78:
                objArr[2] = "getJvmName";
                break;
            case 79:
                objArr[2] = "findJvmNameAnnotation";
                break;
            case 80:
                objArr[2] = "hasJvmNameAnnotation";
                break;
            case 81:
                objArr[2] = "getContainingSourceFile";
                break;
            case 84:
                objArr[2] = "getAllDescriptors";
                break;
            case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
            case 87:
                objArr[2] = "getFunctionByName";
                break;
            case 89:
            case 90:
                objArr[2] = "getFunctionByNameOrNull";
                break;
            case 91:
            case 92:
                objArr[2] = "getPropertyByName";
                break;
            case 94:
                objArr[2] = "getDirectMember";
                break;
            default:
                objArr[2] = "getDispatchReceiverParameterIfNeeded";
                break;
        }
        String format = String.format(str, objArr);
        switch (i5) {
            case 4:
            case 7:
            case 9:
            case 10:
            case 12:
            case 22:
            case 40:
            case 42:
            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
            case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
            case 50:
            case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
            case ChatViewRecyclerTypes.REFERRAL /* 52 */:
            case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
            case 61:
            case 62:
            case 64:
            case 71:
            case 75:
            case 82:
            case 83:
            case 85:
            case 88:
            case 93:
            case 95:
                throw new IllegalStateException(format);
            default:
                throw new IllegalArgumentException(format);
        }
    }

    public static void b(ip.b bVar, LinkedHashSet linkedHashSet) {
        if (bVar == null) {
            a(72);
            throw null;
        }
        if (linkedHashSet.contains(bVar)) {
            return;
        }
        Iterator it = bVar.a().i().iterator();
        while (it.hasNext()) {
            ip.b a10 = ((ip.b) it.next()).a();
            b(a10, linkedHashSet);
            linkedHashSet.add(a10);
        }
    }

    public static ip.f c(y yVar) {
        if (yVar == null) {
            a(45);
            throw null;
        }
        p0 r02 = yVar.r0();
        if (r02 == null) {
            a(46);
            throw null;
        }
        ip.f fVar = (ip.f) r02.a();
        if (fVar != null) {
            return fVar;
        }
        a(47);
        throw null;
    }

    public static a0 d(ip.l lVar) {
        if (lVar == null) {
            a(21);
            throw null;
        }
        a0 e9 = e(lVar);
        if (e9 != null) {
            return e9;
        }
        a(22);
        throw null;
    }

    public static a0 e(ip.l lVar) {
        if (lVar == null) {
            a(23);
            throw null;
        }
        while (lVar != null) {
            if (lVar instanceof a0) {
                return (a0) lVar;
            }
            if (lVar instanceof j0) {
                return ((w) ((j0) lVar)).f14193v;
            }
            lVar = lVar.h();
        }
        return null;
    }

    public static ip.p0 f(ip.l lVar) {
        ip.p0 p0Var = ip.p0.f12153e;
        if (lVar == null) {
            a(81);
            throw null;
        }
        if (lVar instanceof k0) {
            lVar = ((k0) lVar).B0();
        }
        if (lVar instanceof ip.m) {
            ((ip.m) lVar).d().c();
        }
        return p0Var;
    }

    public static hq.d g(ip.l lVar) {
        if (lVar != null) {
            hq.c h6 = h(lVar);
            return h6 != null ? h6.a : g(lVar.h()).a(lVar.getName());
        }
        a(2);
        throw null;
    }

    public static hq.c h(ip.l lVar) {
        if (lVar == null) {
            a(5);
            throw null;
        }
        if ((lVar instanceof a0) || ar.l.f(lVar)) {
            return hq.c.f10203c;
        }
        if (lVar instanceof j0) {
            return ((w) ((j0) lVar)).f14194w;
        }
        if (lVar instanceof f0) {
            return ((c0) ((f0) lVar)).f14132x;
        }
        return null;
    }

    public static ip.l i(ip.l lVar, Class cls, boolean z5) {
        if (lVar == null) {
            return null;
        }
        if (z5) {
            lVar = lVar.h();
        }
        while (lVar != null) {
            if (cls.isInstance(lVar)) {
                return lVar;
            }
            lVar = lVar.h();
        }
        return null;
    }

    public static ip.f j(ip.f fVar) {
        if (fVar == null) {
            a(44);
            throw null;
        }
        Iterator it = fVar.n().b().iterator();
        while (it.hasNext()) {
            ip.f c6 = c((y) it.next());
            if (c6.b() != ip.g.f12139e) {
                return c6;
            }
        }
        return null;
    }

    public static boolean k(ip.l lVar) {
        return n(lVar, ip.g.f12138d) && lVar.getName().equals(hq.g.a);
    }

    public static boolean l(ip.l lVar) {
        return n(lVar, ip.g.f12143x) && ((ip.f) lVar).o();
    }

    public static boolean m(ip.l lVar) {
        if (lVar != null) {
            return n(lVar, ip.g.f12141v);
        }
        a(36);
        throw null;
    }

    public static boolean n(ip.l lVar, ip.g gVar) {
        return (lVar instanceof ip.f) && ((ip.f) lVar).b() == gVar;
    }

    public static boolean o(ip.l lVar) {
        if (lVar == null) {
            a(1);
            throw null;
        }
        while (lVar != null) {
            if (k(lVar) || ((lVar instanceof ip.o) && ((ip.o) lVar).getVisibility() == ip.q.f12160f)) {
                return true;
            }
            lVar = lVar.h();
        }
        return false;
    }

    public static boolean p(y yVar, ip.l lVar) {
        if (yVar == null) {
            a(30);
            throw null;
        }
        if (lVar == null) {
            a(31);
            throw null;
        }
        ip.i a10 = yVar.r0().a();
        if (a10 == null) {
            return false;
        }
        ip.l a11 = a10.a();
        return (a11 instanceof ip.i) && (lVar instanceof ip.i) && ((ip.i) lVar).n().equals(((ip.i) a11).n());
    }

    public static boolean q(ip.l lVar) {
        return (n(lVar, ip.g.f12138d) || n(lVar, ip.g.f12139e)) && ((ip.f) lVar).e() == z.f12181i;
    }

    public static boolean r(y yVar, ip.l lVar) {
        if (yVar == null) {
            a(32);
            throw null;
        }
        if (lVar == null) {
            a(33);
            throw null;
        }
        if (p(yVar, lVar)) {
            return true;
        }
        Iterator it = yVar.r0().b().iterator();
        while (it.hasNext()) {
            if (r((y) it.next(), lVar)) {
                return true;
            }
        }
        return false;
    }

    public static boolean s(ip.l lVar) {
        return lVar != null && (lVar.h() instanceof f0);
    }

    public static ip.d t(ip.d dVar) {
        if (dVar == null) {
            a(58);
            throw null;
        }
        while (dVar.b() == ip.c.f12124e) {
            Collection i5 = dVar.i();
            if (i5.isEmpty()) {
                throw new IllegalStateException("Fake override should have at least one overridden descriptor: " + dVar);
            }
            dVar = (ip.d) i5.iterator().next();
        }
        return dVar;
    }
}
