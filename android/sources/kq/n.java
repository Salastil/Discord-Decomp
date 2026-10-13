package kq;

import a5.k0;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import com.swmansion.reanimated.BuildConfig;
import ip.a0;
import ip.l0;
import ip.m0;
import ip.s0;
import ip.v;
import ip.z;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;
import java.util.ServiceLoader;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.g0;
import lp.i0;
import lp.r0;
import lp.t;
import lp.u;
import yq.b1;
import yq.o0;
import yq.y;

/* loaded from: classes3.dex */
public final class n {

    /* renamed from: b, reason: collision with root package name */
    public static final List f13632b = CollectionsKt.i0(ServiceLoader.load(f.class, f.class.getClassLoader()));

    /* renamed from: c, reason: collision with root package name */
    public static final n f13633c;

    /* renamed from: d, reason: collision with root package name */
    public static final c f13634d;
    public final zq.c a;

    static {
        c cVar = new c();
        f13634d = cVar;
        f13633c = new n(cVar);
    }

    public n(zq.c cVar) {
        if (cVar != null) {
            this.a = cVar;
        } else {
            a(5);
            throw null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:112:0x0067  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x006d  */
    /* JADX WARN: Removed duplicated region for block: B:114:0x0073  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x0079  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0085  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x008b  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x0097  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x00a9  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x00af  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x00b5  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x00bb  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x00c1  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x00c7  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x00cd  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x00d9  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x00df  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x00e5  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x00eb  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x00f1  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x00f7  */
    /* JADX WARN: Removed duplicated region for block: B:137:0x00fd  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x0102  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x0107  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x010c  */
    /* JADX WARN: Removed duplicated region for block: B:141:0x0111  */
    /* JADX WARN: Removed duplicated region for block: B:142:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:143:0x011b  */
    /* JADX WARN: Removed duplicated region for block: B:144:0x0120  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x0125  */
    /* JADX WARN: Removed duplicated region for block: B:146:0x012a  */
    /* JADX WARN: Removed duplicated region for block: B:147:0x012f  */
    /* JADX WARN: Removed duplicated region for block: B:148:0x0134  */
    /* JADX WARN: Removed duplicated region for block: B:149:0x0139  */
    /* JADX WARN: Removed duplicated region for block: B:150:0x013c  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0141  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x0146  */
    /* JADX WARN: Removed duplicated region for block: B:153:0x014b  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x0150  */
    /* JADX WARN: Removed duplicated region for block: B:155:0x0155  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x0058 A[FALL_THROUGH] */
    /* JADX WARN: Removed duplicated region for block: B:157:0x0035 A[FALL_THROUGH] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0171 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:50:0x01b0  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x01b6  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x01bc  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x01c2  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01c8  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x01cc  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x01d0  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x01d4  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x01d8  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x01de  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x01e2  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x01e8  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x01ee  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x01f4  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x01f9  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x01fe  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0203  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0208  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x020d  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0212  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x0217  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x021c  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x021f  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x0224  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x0227  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x022a  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x022f  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0232  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x0237  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x023a  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x023f  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x0244  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0249  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0253 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:94:0x0266  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        Object[] objArr;
        if (i5 != 11 && i5 != 12 && i5 != 16 && i5 != 21 && i5 != 93 && i5 != 96 && i5 != 101 && i5 != 42 && i5 != 43) {
            switch (i5) {
                default:
                    switch (i5) {
                        default:
                            switch (i5) {
                                default:
                                    switch (i5) {
                                        case 88:
                                        case 89:
                                        case 90:
                                            break;
                                        default:
                                            str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                                            break;
                                    }
                                case 78:
                                case 79:
                                case 80:
                                case 81:
                                case 82:
                                    str = "@NotNull method %s.%s must not return null";
                                    break;
                            }
                        case 30:
                        case 31:
                        case 32:
                        case 33:
                        case 34:
                        case 35:
                        case 36:
                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                            break;
                    }
                case 24:
                case 25:
                case 26:
                case 27:
                    break;
            }
            if (i5 != 11 && i5 != 12 && i5 != 16 && i5 != 21 && i5 != 93 && i5 != 96 && i5 != 101 && i5 != 42 && i5 != 43) {
                switch (i5) {
                    default:
                        switch (i5) {
                            default:
                                switch (i5) {
                                    default:
                                        switch (i5) {
                                            case 88:
                                            case 89:
                                            case 90:
                                                break;
                                            default:
                                                i6 = 3;
                                                break;
                                        }
                                    case 78:
                                    case 79:
                                    case 80:
                                    case 81:
                                    case 82:
                                        i6 = 2;
                                        break;
                                }
                            case 30:
                            case 31:
                            case 32:
                            case 33:
                            case 34:
                            case 35:
                            case 36:
                            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                break;
                        }
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                        break;
                }
                objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 7:
                        objArr[0] = "kotlinTypePreparator";
                        break;
                    case 2:
                        objArr[0] = "customSubtype";
                        break;
                    case 3:
                    case 6:
                    default:
                        objArr[0] = "kotlinTypeRefiner";
                        break;
                    case 4:
                        objArr[0] = "equalityAxioms";
                        break;
                    case 5:
                        objArr[0] = "axioms";
                        break;
                    case 8:
                    case 9:
                        objArr[0] = "candidateSet";
                        break;
                    case 10:
                        objArr[0] = "transformFirst";
                        break;
                    case 11:
                    case 12:
                    case 16:
                    case 21:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case 78:
                    case 79:
                    case 80:
                    case 81:
                    case 82:
                    case 88:
                    case 89:
                    case 90:
                    case 93:
                    case 96:
                    case 101:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/OverridingUtil";
                        break;
                    case 13:
                        objArr[0] = "f";
                        break;
                    case 14:
                        objArr[0] = "g";
                        break;
                    case 15:
                    case 17:
                        objArr[0] = "descriptor";
                        break;
                    case 18:
                        objArr[0] = "result";
                        break;
                    case 19:
                    case 22:
                    case 28:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        objArr[0] = "superDescriptor";
                        break;
                    case 20:
                    case 23:
                    case 29:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[0] = "subDescriptor";
                        break;
                    case 40:
                        objArr[0] = "firstParameters";
                        break;
                    case 41:
                        objArr[0] = "secondParameters";
                        break;
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        objArr[0] = "typeInSuper";
                        break;
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        objArr[0] = "typeInSub";
                        break;
                    case 46:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    case 75:
                        objArr[0] = "typeCheckerState";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        objArr[0] = "superTypeParameter";
                        break;
                    case 48:
                        objArr[0] = "subTypeParameter";
                        break;
                    case 50:
                        objArr[0] = StackTraceHelper.NAME_KEY;
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        objArr[0] = "membersFromSupertypes";
                        break;
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                        objArr[0] = "membersFromCurrent";
                        break;
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    case 62:
                    case 84:
                    case 87:
                    case 94:
                        objArr[0] = "current";
                        break;
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    case 64:
                    case 85:
                    case 104:
                        objArr[0] = "strategy";
                        break;
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        objArr[0] = "overriding";
                        break;
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        objArr[0] = "fromSuper";
                        break;
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                        objArr[0] = "fromCurrent";
                        break;
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                        objArr[0] = "descriptorsFromSuper";
                        break;
                    case 61:
                    case ys.l.a /* 63 */:
                        objArr[0] = "notOverridden";
                        break;
                    case 65:
                    case 67:
                    case 71:
                        objArr[0] = "a";
                        break;
                    case 66:
                    case 68:
                    case 73:
                        objArr[0] = "b";
                        break;
                    case 69:
                        objArr[0] = "candidate";
                        break;
                    case 70:
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                    case 91:
                    case 107:
                        objArr[0] = "descriptors";
                        break;
                    case 72:
                        objArr[0] = "aReturnType";
                        break;
                    case 74:
                        objArr[0] = "bReturnType";
                        break;
                    case 76:
                    case 83:
                        objArr[0] = "overridables";
                        break;
                    case 77:
                    case 99:
                        objArr[0] = "descriptorByHandle";
                        break;
                    case 92:
                        objArr[0] = "classModality";
                        break;
                    case 95:
                        objArr[0] = "toFilter";
                        break;
                    case 97:
                    case 102:
                        objArr[0] = "overrider";
                        break;
                    case 98:
                    case 103:
                        objArr[0] = "extractFrom";
                        break;
                    case 100:
                        objArr[0] = "onConflict";
                        break;
                    case 105:
                    case 106:
                        objArr[0] = "memberDescriptor";
                        break;
                }
                if (i5 != 11 || i5 == 12) {
                    objArr[1] = "filterOverrides";
                } else if (i5 != 16) {
                    if (i5 != 21) {
                        if (i5 == 93) {
                            objArr[1] = "getMinimalModality";
                        } else if (i5 == 96) {
                            objArr[1] = "filterVisibleFakeOverrides";
                        } else if (i5 == 101) {
                            objArr[1] = "extractMembersOverridableInBothWays";
                        } else if (i5 != 42 && i5 != 43) {
                            switch (i5) {
                                case 24:
                                case 25:
                                case 26:
                                case 27:
                                    break;
                                default:
                                    switch (i5) {
                                        case 30:
                                        case 31:
                                        case 32:
                                        case 33:
                                        case 34:
                                        case 35:
                                        case 36:
                                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                            objArr[1] = "isOverridableByWithoutExternalConditions";
                                            break;
                                        default:
                                            switch (i5) {
                                                case 78:
                                                case 79:
                                                case 80:
                                                case 81:
                                                case 82:
                                                    objArr[1] = "selectMostSpecificMember";
                                                    break;
                                                default:
                                                    switch (i5) {
                                                        case 88:
                                                        case 89:
                                                        case 90:
                                                            objArr[1] = "determineModalityForFakeOverride";
                                                            break;
                                                        default:
                                                            objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/OverridingUtil";
                                                            break;
                                                    }
                                            }
                                    }
                            }
                        } else {
                            objArr[1] = "createTypeCheckerState";
                        }
                    }
                    objArr[1] = "isOverridableBy";
                } else {
                    objArr[1] = "getOverriddenDeclarations";
                }
                switch (i5) {
                    case 1:
                    case 2:
                        objArr[2] = "createWithTypePreparatorAndCustomSubtype";
                        break;
                    case 3:
                    case 4:
                        objArr[2] = "create";
                        break;
                    case 5:
                    case 6:
                    case 7:
                        objArr[2] = "<init>";
                        break;
                    case 8:
                        objArr[2] = "filterOutOverridden";
                        break;
                    case 9:
                    case 10:
                        objArr[2] = "filterOverrides";
                        break;
                    case 11:
                    case 12:
                    case 16:
                    case 21:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case 78:
                    case 79:
                    case 80:
                    case 81:
                    case 82:
                    case 88:
                    case 89:
                    case 90:
                    case 93:
                    case 96:
                    case 101:
                        break;
                    case 13:
                    case 14:
                        objArr[2] = "overrides";
                        break;
                    case 15:
                        objArr[2] = "getOverriddenDeclarations";
                        break;
                    case 17:
                    case 18:
                        objArr[2] = "collectOverriddenDeclarations";
                        break;
                    case 19:
                    case 20:
                    case 22:
                    case 23:
                        objArr[2] = "isOverridableBy";
                        break;
                    case 28:
                    case 29:
                        objArr[2] = "isOverridableByWithoutExternalConditions";
                        break;
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        objArr[2] = "getBasicOverridabilityProblem";
                        break;
                    case 40:
                    case 41:
                        objArr[2] = "createTypeCheckerState";
                        break;
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                        objArr[2] = "areTypesEquivalent";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                    case 48:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                        objArr[2] = "areTypeParametersEquivalent";
                        break;
                    case 50:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        objArr[2] = "generateOverridesInFunctionGroup";
                        break;
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        objArr[2] = "isVisibleForOverride";
                        break;
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                        objArr[2] = "extractAndBindOverridesForMember";
                        break;
                    case 61:
                        objArr[2] = "allHasSameContainingDeclaration";
                        break;
                    case 62:
                    case ys.l.a /* 63 */:
                    case 64:
                        objArr[2] = "createAndBindFakeOverrides";
                        break;
                    case 65:
                    case 66:
                        objArr[2] = "isMoreSpecific";
                        break;
                    case 67:
                    case 68:
                        objArr[2] = "isVisibilityMoreSpecific";
                        break;
                    case 69:
                    case 70:
                        objArr[2] = "isMoreSpecificThenAllOf";
                        break;
                    case 71:
                    case 72:
                    case 73:
                    case 74:
                    case 75:
                        objArr[2] = "isReturnTypeMoreSpecific";
                        break;
                    case 76:
                    case 77:
                        objArr[2] = "selectMostSpecificMember";
                        break;
                    case 83:
                    case 84:
                    case 85:
                        objArr[2] = "createAndBindFakeOverride";
                        break;
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                    case 87:
                        objArr[2] = "determineModalityForFakeOverride";
                        break;
                    case 91:
                    case 92:
                        objArr[2] = "getMinimalModality";
                        break;
                    case 94:
                    case 95:
                        objArr[2] = "filterVisibleFakeOverrides";
                        break;
                    case 97:
                    case 98:
                    case 99:
                    case 100:
                    case 102:
                    case 103:
                    case 104:
                        objArr[2] = "extractMembersOverridableInBothWays";
                        break;
                    case 105:
                        objArr[2] = "resolveUnknownVisibilityForMember";
                        break;
                    case 106:
                        objArr[2] = "computeVisibilityToInherit";
                        break;
                    case 107:
                        objArr[2] = "findMaxVisibility";
                        break;
                    default:
                        objArr[2] = "createWithTypeRefiner";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 11 && i5 != 12 && i5 != 16 && i5 != 21 && i5 != 93 && i5 != 96 && i5 != 101 && i5 != 42 && i5 != 43) {
                    switch (i5) {
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                            break;
                        default:
                            switch (i5) {
                                case 30:
                                case 31:
                                case 32:
                                case 33:
                                case 34:
                                case 35:
                                case 36:
                                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                    break;
                                default:
                                    switch (i5) {
                                        case 78:
                                        case 79:
                                        case 80:
                                        case 81:
                                        case 82:
                                            break;
                                        default:
                                            switch (i5) {
                                                case 88:
                                                case 89:
                                                case 90:
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
            objArr = new Object[i6];
            switch (i5) {
            }
            if (i5 != 11) {
            }
            objArr[1] = "filterOverrides";
            switch (i5) {
            }
            String format2 = String.format(str, objArr);
            if (i5 != 11) {
                switch (i5) {
                }
            }
            throw new IllegalStateException(format2);
        }
        str = "@NotNull method %s.%s must not return null";
        if (i5 != 11) {
            switch (i5) {
            }
            objArr = new Object[i6];
            switch (i5) {
            }
            if (i5 != 11) {
            }
            objArr[1] = "filterOverrides";
            switch (i5) {
            }
            String format22 = String.format(str, objArr);
            if (i5 != 11) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        objArr = new Object[i6];
        switch (i5) {
        }
        if (i5 != 11) {
        }
        objArr[1] = "filterOverrides";
        switch (i5) {
        }
        String format222 = String.format(str, objArr);
        if (i5 != 11) {
        }
        throw new IllegalStateException(format222);
    }

    public static boolean b(y yVar, y yVar2, o0 o0Var) {
        if (yVar == null) {
            a(44);
            throw null;
        }
        if (yVar2 == null) {
            a(45);
            throw null;
        }
        if (yq.c.j(yVar) && yq.c.j(yVar2)) {
            return true;
        }
        return yq.f.g(o0Var, yVar.w0(), yVar2.w0());
    }

    public static void c(ip.d dVar, LinkedHashSet linkedHashSet) {
        if (dVar == null) {
            a(17);
            throw null;
        }
        ip.c b10 = dVar.b();
        b10.getClass();
        if (b10 != ip.c.f12124e) {
            linkedHashSet.add(dVar);
            return;
        }
        if (dVar.i().isEmpty()) {
            throw new IllegalStateException("No overridden descriptors found for (fake override) " + dVar);
        }
        Iterator it = dVar.i().iterator();
        while (it.hasNext()) {
            c((ip.d) it.next(), linkedHashSet);
        }
    }

    public static ArrayList d(ip.b bVar) {
        u W = bVar.W();
        ArrayList arrayList = new ArrayList();
        if (W != null) {
            arrayList.add(W.getType());
        }
        Iterator it = bVar.P().iterator();
        while (it.hasNext()) {
            arrayList.add(((r0) it.next()).getType());
        }
        return arrayList;
    }

    /* JADX WARN: Code restructure failed: missing block: B:32:0x015a, code lost:
    
        if (r2 == false) goto L94;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x015c, code lost:
    
        r1 = ip.q.f12162h;
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x0161, code lost:
    
        r11 = ((ip.d) s(r10, new kq.i(0))).L(r11, r0, r1);
        r12.T(r11, r10);
        r12.f(r11);
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0177, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x015f, code lost:
    
        r1 = ip.q.f12161g;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void e(Collection collection, ip.f fVar, k0 k0Var) {
        z zVar;
        if (collection == null) {
            a(83);
            throw null;
        }
        if (fVar == null) {
            a(84);
            throw null;
        }
        ArrayList H = CollectionsKt.H(collection, new j(fVar));
        boolean isEmpty = H.isEmpty();
        if (!isEmpty) {
            collection = H;
        }
        Iterator it = collection.iterator();
        boolean z5 = false;
        boolean z6 = false;
        boolean z7 = false;
        while (true) {
            if (it.hasNext()) {
                ip.d dVar = (ip.d) it.next();
                int ordinal = dVar.e().ordinal();
                if (ordinal == 0) {
                    zVar = z.f12180e;
                    break;
                }
                if (ordinal == 1) {
                    throw new IllegalStateException("Member cannot have SEALED modality: " + dVar);
                }
                if (ordinal == 2) {
                    z6 = true;
                } else if (ordinal == 3) {
                    z7 = true;
                }
            } else {
                if (fVar.z() && fVar.e() != z.f12183w && fVar.e() != z.f12181i) {
                    z5 = true;
                }
                if (z6 && !z7) {
                    zVar = z.f12182v;
                } else if (z6 || !z7) {
                    HashSet<ip.d> hashSet = new HashSet();
                    for (ip.d dVar2 : collection) {
                        if (dVar2 == null) {
                            a(15);
                            throw null;
                        }
                        LinkedHashSet linkedHashSet = new LinkedHashSet();
                        c(dVar2, linkedHashSet);
                        hashSet.addAll(linkedHashSet);
                    }
                    if (!hashSet.isEmpty()) {
                        a0 j = oq.e.j((ip.l) hashSet.iterator().next());
                        Intrinsics.checkNotNullParameter(j, "<this>");
                        if (j.d0(zq.g.a) != null) {
                            throw new ClassCastException();
                        }
                    }
                    if (hashSet.size() > 1) {
                        LinkedHashSet linkedHashSet2 = new LinkedHashSet();
                        Iterator it2 = hashSet.iterator();
                        while (it2.hasNext()) {
                            Object next = it2.next();
                            Iterator it3 = linkedHashSet2.iterator();
                            while (true) {
                                if (!it3.hasNext()) {
                                    linkedHashSet2.add(next);
                                    break;
                                }
                                ip.b bVar = (ip.b) next;
                                ip.b bVar2 = (ip.b) it3.next();
                                if (!q(bVar, bVar2)) {
                                    if (q(bVar2, bVar)) {
                                        break;
                                    }
                                } else {
                                    it3.remove();
                                }
                            }
                        }
                        hashSet = linkedHashSet2;
                    }
                    z e9 = fVar.e();
                    if (e9 == null) {
                        a(92);
                        throw null;
                    }
                    z zVar2 = z.f12183w;
                    for (ip.d dVar3 : hashSet) {
                        z e10 = (z5 && dVar3.e() == z.f12183w) ? e9 : dVar3.e();
                        if (e10.compareTo(zVar2) < 0) {
                            zVar2 = e10;
                        }
                    }
                    if (zVar2 == null) {
                        a(93);
                        throw null;
                    }
                    zVar = zVar2;
                } else {
                    z e11 = z5 ? fVar.e() : z.f12183w;
                    if (e11 == null) {
                        a(90);
                        throw null;
                    }
                    zVar = e11;
                }
            }
        }
    }

    public static ArrayList g(Object obj, LinkedList linkedList, Function1 function1, Function1 function12) {
        if (obj == null) {
            a(97);
            throw null;
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(obj);
        ip.b bVar = (ip.b) function1.invoke(obj);
        Iterator it = linkedList.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            ip.b bVar2 = (ip.b) function1.invoke(next);
            if (obj == next) {
                it.remove();
            } else {
                l j = j(bVar, bVar2);
                if (j == l.f13626d) {
                    arrayList.add(next);
                    it.remove();
                } else if (j == l.f13628i) {
                    function12.invoke(next);
                    it.remove();
                }
            }
        }
        return arrayList;
    }

    public static m i(ip.b bVar, ip.b bVar2) {
        boolean z5;
        if (bVar == null) {
            a(38);
            throw null;
        }
        if (bVar2 == null) {
            a(39);
            throw null;
        }
        boolean z6 = bVar instanceof v;
        if ((z6 && !(bVar2 instanceof v)) || (((z5 = bVar instanceof m0)) && !(bVar2 instanceof m0))) {
            return m.c("Member kind mismatch");
        }
        if (!z6 && !z5) {
            throw new IllegalArgumentException("This type of CallableDescriptor cannot be checked for overridability: " + bVar);
        }
        if (!bVar.getName().equals(bVar2.getName())) {
            return m.c("Name mismatch");
        }
        m c6 = (bVar.W() == null) != (bVar2.W() == null) ? m.c("Receiver presence mismatch") : bVar.P().size() != bVar2.P().size() ? m.c("Value parameter number mismatch") : null;
        if (c6 != null) {
            return c6;
        }
        return null;
    }

    public static l j(ip.b bVar, ip.b bVar2) {
        n nVar = f13633c;
        l b10 = nVar.l(bVar2, bVar, null).b();
        l b11 = nVar.m(bVar, bVar2, null, false).b();
        l lVar = l.f13626d;
        if (b10 == lVar && b11 == lVar) {
            return lVar;
        }
        l lVar2 = l.f13628i;
        return (b10 == lVar2 || b11 == lVar2) ? lVar2 : l.f13627e;
    }

    public static boolean k(ip.b bVar, ip.b bVar2) {
        if (bVar == null) {
            a(65);
            throw null;
        }
        if (bVar2 == null) {
            a(66);
            throw null;
        }
        y returnType = bVar.getReturnType();
        y returnType2 = bVar2.getReturnType();
        if (!p(bVar, bVar2)) {
            return false;
        }
        o0 f2 = f13633c.f(bVar.getTypeParameters(), bVar2.getTypeParameters());
        if (bVar instanceof v) {
            return o(bVar, returnType, bVar2, returnType2, f2);
        }
        if (!(bVar instanceof m0)) {
            throw new IllegalArgumentException("Unexpected callable: " + bVar.getClass());
        }
        m0 m0Var = (m0) bVar;
        m0 m0Var2 = (m0) bVar2;
        lp.k0 setter = m0Var.getSetter();
        lp.k0 setter2 = m0Var2.getSetter();
        if ((setter == null || setter2 == null) ? true : p(setter, setter2)) {
            return (m0Var.V() && m0Var2.V()) ? yq.f.g(f2, returnType.w0(), returnType2.w0()) : (m0Var.V() || !m0Var2.V()) && o(bVar, returnType, bVar2, returnType2, f2);
        }
        return false;
    }

    public static boolean o(ip.b bVar, y yVar, ip.b bVar2, y yVar2, o0 state) {
        if (bVar == null) {
            a(71);
            throw null;
        }
        if (yVar == null) {
            a(72);
            throw null;
        }
        if (bVar2 == null) {
            a(73);
            throw null;
        }
        if (yVar2 == null) {
            a(74);
            throw null;
        }
        yq.f fVar = yq.f.a;
        b1 subType = yVar.w0();
        b1 superType = yVar2.w0();
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        return yq.f.k(fVar, state, subType, superType);
    }

    public static boolean p(ip.b bVar, ip.b bVar2) {
        if (bVar == null) {
            a(67);
            throw null;
        }
        if (bVar2 != null) {
            Integer b10 = ip.q.b(bVar.getVisibility(), bVar2.getVisibility());
            return b10 == null || b10.intValue() >= 0;
        }
        a(68);
        throw null;
    }

    public static boolean q(ip.b bVar, ip.b bVar2) {
        if (bVar == null) {
            a(13);
            throw null;
        }
        if (bVar2 == null) {
            a(14);
            throw null;
        }
        boolean equals = bVar.equals(bVar2);
        c cVar = c.a;
        if (!equals && cVar.c(bVar.a(), bVar2.a(), false)) {
            return true;
        }
        ip.b a = bVar2.a();
        int i5 = e.a;
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        e.b(bVar.a(), linkedHashSet);
        Iterator it = linkedHashSet.iterator();
        while (it.hasNext()) {
            if (cVar.c(a, (ip.b) it.next(), false)) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00d6  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0102  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x00d1  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void r(ip.d dVar, Function1 function1) {
        ip.p pVar;
        ip.p pVar2;
        ip.p pVar3;
        if (dVar == null) {
            a(105);
            throw null;
        }
        for (ip.d dVar2 : dVar.i()) {
            if (dVar2.getVisibility() == ip.q.f12161g) {
                r(dVar2, function1);
            }
        }
        if (dVar.getVisibility() != ip.q.f12161g) {
            return;
        }
        Collection<ip.d> i5 = dVar.i();
        if (i5 == null) {
            a(107);
            throw null;
        }
        if (!i5.isEmpty()) {
            Iterator it = i5.iterator();
            loop3: while (true) {
                pVar = null;
                while (it.hasNext()) {
                    ip.p visibility = ((ip.d) it.next()).getVisibility();
                    if (pVar != null) {
                        Integer b10 = ip.q.b(visibility, pVar);
                        if (b10 == null) {
                            break;
                        } else if (b10.intValue() > 0) {
                        }
                    }
                    pVar = visibility;
                }
            }
            if (pVar != null) {
                Iterator it2 = i5.iterator();
                while (it2.hasNext()) {
                    Integer b11 = ip.q.b(pVar, ((ip.d) it2.next()).getVisibility());
                    if (b11 != null && b11.intValue() >= 0) {
                    }
                }
                pVar2 = pVar;
            }
            pVar2 = null;
            break;
        }
        pVar2 = ip.q.j;
        if (pVar2 != null) {
            if (dVar.b() == ip.c.f12124e) {
                for (ip.d dVar3 : i5) {
                    if (dVar3.e() == z.f12183w || dVar3.getVisibility().equals(pVar2)) {
                    }
                }
            } else {
                pVar2 = ip.q.f(pVar2.a.u());
                Intrinsics.checkNotNullExpressionValue(pVar2, "toDescriptorVisibility(...)");
            }
            if (pVar2 != null) {
                if (function1 != null) {
                    function1.invoke(dVar);
                }
                pVar3 = ip.q.f12159e;
            } else {
                pVar3 = pVar2;
            }
            if (!(dVar instanceof i0)) {
                i0 i0Var = (i0) dVar;
                if (pVar3 == null) {
                    i0.v0(20);
                    throw null;
                }
                i0Var.H = pVar3;
                Iterator it3 = ((m0) dVar).m().iterator();
                while (it3.hasNext()) {
                    r((l0) it3.next(), pVar2 == null ? null : function1);
                }
                return;
            }
            if (dVar instanceof t) {
                t tVar = (t) dVar;
                if (pVar3 != null) {
                    tVar.J = pVar3;
                    return;
                } else {
                    t.v0(10);
                    throw null;
                }
            }
            g0 g0Var = (g0) dVar;
            g0Var.I = pVar3;
            if (pVar3 != g0Var.B0().getVisibility()) {
                g0Var.f14142x = false;
                return;
            }
            return;
        }
        pVar2 = null;
        if (pVar2 != null) {
        }
        if (!(dVar instanceof i0)) {
        }
    }

    public static Object s(Collection collection, Function1 transform) {
        Object obj;
        if (collection.size() == 1) {
            Object J = CollectionsKt.J(collection);
            if (J != null) {
                return J;
            }
            a(78);
            throw null;
        }
        ArrayList arrayList = new ArrayList(2);
        Intrinsics.checkNotNullParameter(collection, "<this>");
        Intrinsics.checkNotNullParameter(transform, "transform");
        ArrayList arrayList2 = new ArrayList(d0.l(collection, 10));
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            arrayList2.add(transform.invoke(it.next()));
        }
        Object J2 = CollectionsKt.J(collection);
        ip.b bVar = (ip.b) transform.invoke(J2);
        for (Object obj2 : collection) {
            ip.b bVar2 = (ip.b) transform.invoke(obj2);
            if (bVar2 == null) {
                a(69);
                throw null;
            }
            Iterator it2 = arrayList2.iterator();
            while (true) {
                if (!it2.hasNext()) {
                    arrayList.add(obj2);
                    break;
                }
                if (!k(bVar2, (ip.b) it2.next())) {
                    break;
                }
            }
            if (k(bVar2, bVar) && !k(bVar, bVar2)) {
                J2 = obj2;
            }
        }
        if (arrayList.isEmpty()) {
            if (J2 != null) {
                return J2;
            }
            a(79);
            throw null;
        }
        if (arrayList.size() == 1) {
            Object J3 = CollectionsKt.J(arrayList);
            if (J3 != null) {
                return J3;
            }
            a(80);
            throw null;
        }
        Iterator it3 = arrayList.iterator();
        while (true) {
            if (!it3.hasNext()) {
                obj = null;
                break;
            }
            obj = it3.next();
            if (!yq.c.k(((ip.b) transform.invoke(obj)).getReturnType())) {
                break;
            }
        }
        if (obj != null) {
            return obj;
        }
        Object J4 = CollectionsKt.J(arrayList);
        if (J4 != null) {
            return J4;
        }
        a(82);
        throw null;
    }

    public final o0 f(List list, List list2) {
        if (list == null) {
            a(40);
            throw null;
        }
        if (list2 == null) {
            a(41);
            throw null;
        }
        boolean isEmpty = list.isEmpty();
        zq.c cVar = this.a;
        if (isEmpty) {
            return new e4.c((HashMap) null, cVar).X0();
        }
        HashMap hashMap = new HashMap();
        for (int i5 = 0; i5 < list.size(); i5++) {
            hashMap.put(((s0) list.get(i5)).n(), ((s0) list2.get(i5)).n());
        }
        return new e4.c(hashMap, cVar).X0();
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0086 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0070 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h(hq.e eVar, Collection collection, Collection collection2, ip.f fVar, k0 k0Var) {
        Integer b10;
        boolean z5;
        int ordinal;
        if (eVar == null) {
            a(50);
            throw null;
        }
        if (collection == null) {
            a(51);
            throw null;
        }
        if (collection2 == null) {
            a(52);
            throw null;
        }
        if (fVar == null) {
            a(53);
            throw null;
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet(collection);
        Iterator it = collection2.iterator();
        while (true) {
            int i5 = 0;
            if (!it.hasNext()) {
                if (linkedHashSet.size() >= 2) {
                    aq.a predicate = new aq.a(3, ((ip.d) linkedHashSet.iterator().next()).h());
                    Intrinsics.checkNotNullParameter(linkedHashSet, "<this>");
                    Intrinsics.checkNotNullParameter(predicate, "predicate");
                    if (!linkedHashSet.isEmpty()) {
                        Iterator it2 = linkedHashSet.iterator();
                        while (it2.hasNext()) {
                            if (!((Boolean) predicate.invoke(it2.next())).booleanValue()) {
                                LinkedList<ip.d> descriptors = new LinkedList(linkedHashSet);
                                while (!descriptors.isEmpty()) {
                                    Intrinsics.checkNotNullParameter(descriptors, "descriptors");
                                    descriptors.isEmpty();
                                    ip.d dVar = null;
                                    for (ip.d dVar2 : descriptors) {
                                        if (dVar == null || ((b10 = ip.q.b(dVar.getVisibility(), dVar2.getVisibility())) != null && b10.intValue() < 0)) {
                                            dVar = dVar2;
                                        }
                                    }
                                    Intrinsics.checkNotNull(dVar);
                                    if (dVar == null) {
                                        a(102);
                                        throw null;
                                    }
                                    e(g(dVar, descriptors, new i(1), new k(i5, k0Var, dVar)), fVar, k0Var);
                                }
                                return;
                            }
                        }
                    }
                }
                Iterator it3 = linkedHashSet.iterator();
                while (it3.hasNext()) {
                    e(Collections.singleton((ip.d) it3.next()), fVar, k0Var);
                }
                return;
            }
            ip.d fromCurrent = (ip.d) it.next();
            if (fromCurrent == null) {
                a(57);
                throw null;
            }
            ArrayList arrayList = new ArrayList(collection.size());
            int i6 = ir.k.f12269i;
            ir.k f2 = ir.n.f();
            Iterator it4 = collection.iterator();
            while (it4.hasNext()) {
                ip.d fromSuper = (ip.d) it4.next();
                l b11 = l(fromSuper, fromCurrent, fVar).b();
                if (!ip.q.e(fromSuper.getVisibility()) && ip.q.c(ip.q.f12164l, fromSuper, fromCurrent) == null) {
                    z5 = true;
                    ordinal = b11.ordinal();
                    if (ordinal != 0) {
                        if (z5) {
                            f2.add(fromSuper);
                        }
                        arrayList.add(fromSuper);
                    } else if (ordinal == 2) {
                        if (z5) {
                            Intrinsics.checkNotNullParameter(fromSuper, "fromSuper");
                            Intrinsics.checkNotNullParameter(fromCurrent, "fromCurrent");
                            k0Var.o(fromSuper, fromCurrent);
                        }
                        arrayList.add(fromSuper);
                    }
                }
                z5 = false;
                ordinal = b11.ordinal();
                if (ordinal != 0) {
                }
            }
            k0Var.T(fromCurrent, f2);
            linkedHashSet.removeAll(arrayList);
        }
    }

    public final m l(ip.b bVar, ip.b bVar2, ip.f fVar) {
        if (bVar == null) {
            a(19);
            throw null;
        }
        if (bVar2 != null) {
            return m(bVar, bVar2, fVar, false);
        }
        a(20);
        throw null;
    }

    public final m m(ip.b bVar, ip.b bVar2, ip.f fVar, boolean z5) {
        if (bVar == null) {
            a(22);
            throw null;
        }
        if (bVar2 == null) {
            a(23);
            throw null;
        }
        m n6 = n(bVar, bVar2, z5);
        boolean z6 = n6.b() == l.f13626d;
        List<f> list = f13632b;
        for (f fVar2 : list) {
            if (fVar2.b() != 1 && (!z6 || fVar2.b() != 2)) {
                int b10 = f0.e.b(fVar2.a(bVar, bVar2, fVar));
                if (b10 == 0) {
                    z6 = true;
                } else if (b10 == 1) {
                    return m.c("External condition");
                }
            }
        }
        if (!z6) {
            return n6;
        }
        for (f fVar3 : list) {
            if (fVar3.b() == 1) {
                int b11 = f0.e.b(fVar3.a(bVar, bVar2, fVar));
                if (b11 == 0) {
                    throw new IllegalStateException("Contract violation in " + fVar3.getClass().getName() + " condition. It's not supposed to end with success");
                }
                if (b11 == 1) {
                    return m.c("External condition");
                }
            }
        }
        m mVar = m.f13630c;
        if (mVar != null) {
            return mVar;
        }
        m.a(0);
        throw null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:38:0x00b5, code lost:
    
        r15.remove();
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final m n(ip.b bVar, ip.b bVar2, boolean z5) {
        if (bVar == null) {
            a(28);
            throw null;
        }
        if (bVar2 == null) {
            a(29);
            throw null;
        }
        m i5 = i(bVar, bVar2);
        if (i5 != null) {
            return i5;
        }
        ArrayList d6 = d(bVar);
        ArrayList d7 = d(bVar2);
        List typeParameters = bVar.getTypeParameters();
        List typeParameters2 = bVar2.getTypeParameters();
        int size = typeParameters.size();
        int size2 = typeParameters2.size();
        l lVar = l.f13628i;
        if (size != size2) {
            for (int i6 = 0; i6 < d6.size(); i6++) {
                if (!zq.d.a.a((y) d6.get(i6), (y) d7.get(i6))) {
                    return m.c("Type parameter number mismatch");
                }
            }
            return new m(lVar, "Type parameter number mismatch");
        }
        o0 state = f(typeParameters, typeParameters2);
        for (int i10 = 0; i10 < typeParameters.size(); i10++) {
            s0 s0Var = (s0) typeParameters.get(i10);
            s0 s0Var2 = (s0) typeParameters2.get(i10);
            if (s0Var == null) {
                a(47);
                throw null;
            }
            if (s0Var2 == null) {
                a(48);
                throw null;
            }
            List<y> upperBounds = s0Var.getUpperBounds();
            ArrayList arrayList = new ArrayList(s0Var2.getUpperBounds());
            if (upperBounds.size() == arrayList.size()) {
                for (y yVar : upperBounds) {
                    ListIterator listIterator = arrayList.listIterator();
                    while (listIterator.hasNext()) {
                        if (b(yVar, (y) listIterator.next(), state)) {
                            break;
                        }
                    }
                }
            }
            return m.c("Type parameter bounds mismatch");
        }
        for (int i11 = 0; i11 < d6.size(); i11++) {
            if (!b((y) d6.get(i11), (y) d7.get(i11), state)) {
                return m.c("Value parameter type mismatch");
            }
        }
        if ((bVar instanceof v) && (bVar2 instanceof v) && ((v) bVar).isSuspend() != ((v) bVar2).isSuspend()) {
            return new m(lVar, "Incompatible suspendability");
        }
        if (z5) {
            y returnType = bVar.getReturnType();
            y returnType2 = bVar2.getReturnType();
            if (returnType != null && returnType2 != null && (!yq.c.j(returnType2) || !yq.c.j(returnType))) {
                yq.f fVar = yq.f.a;
                b1 subType = returnType2.w0();
                b1 superType = returnType.w0();
                Intrinsics.checkNotNullParameter(state, "state");
                Intrinsics.checkNotNullParameter(subType, "subType");
                Intrinsics.checkNotNullParameter(superType, "superType");
                if (!yq.f.k(fVar, state, subType, superType)) {
                    return new m(lVar, "Return type mismatch");
                }
            }
        }
        m mVar = m.f13630c;
        if (mVar != null) {
            return mVar;
        }
        m.a(0);
        throw null;
    }
}
