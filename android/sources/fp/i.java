package fp;

import com.discord.chat.presentation.message.view.MediaImageViewKt;
import com.discord.media.engine.MediaEngine;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.swmansion.reanimated.BuildConfig;
import ip.f0;
import ip.h0;
import ip.m0;
import ip.v;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;
import lp.a0;
import lp.c0;
import lp.j0;
import lp.k0;
import nr.y0;
import yq.b1;
import yq.c1;
import yq.p0;
import yq.s0;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class i {

    /* renamed from: e, reason: collision with root package name */
    public static final hq.e f8859e = hq.e.g("<built-ins module>");
    public a0 a;

    /* renamed from: b, reason: collision with root package name */
    public final xq.i f8860b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.e f8861c;

    /* renamed from: d, reason: collision with root package name */
    public final xq.l f8862d;

    public i(xq.l lVar) {
        this.f8862d = lVar;
        lVar.b(new f(this, 0));
        this.f8860b = new xq.i(lVar, new f(this, 1));
        this.f8861c = lVar.c(new g(this, 0));
    }

    public static boolean A(ip.l lVar) {
        if (lVar != null) {
            return kq.e.i(lVar, vq.c.class, false) != null;
        }
        a(9);
        throw null;
    }

    public static boolean B(y yVar, hq.d dVar) {
        if (yVar == null) {
            a(97);
            throw null;
        }
        if (dVar != null) {
            return I(yVar.r0(), dVar);
        }
        a(98);
        throw null;
    }

    public static boolean C(y yVar, hq.d dVar) {
        if (dVar != null) {
            return B(yVar, dVar) && !yVar.t0();
        }
        a(135);
        throw null;
    }

    public static boolean D(v vVar) {
        if (vVar.a().getAnnotations().r(o.f8893m)) {
            return true;
        }
        if (!(vVar instanceof m0)) {
            return false;
        }
        m0 m0Var = (m0) vVar;
        boolean V = m0Var.V();
        j0 getter = m0Var.getGetter();
        k0 setter = m0Var.getSetter();
        if (getter == null || !D(getter)) {
            return false;
        }
        if (V) {
            return setter != null && D(setter);
        }
        return true;
    }

    public static boolean E(y yVar, hq.d dVar) {
        if (yVar == null) {
            a(105);
            throw null;
        }
        if (dVar != null) {
            return !yVar.t0() && B(yVar, dVar);
        }
        a(106);
        throw null;
    }

    public static boolean F(y yVar) {
        if (yVar == null) {
            a(136);
            throw null;
        }
        if (yVar != null) {
            return B(yVar, o.f8878b) && !z0.e(yVar);
        }
        a(138);
        throw null;
    }

    public static boolean G(y yVar) {
        if (yVar == null) {
            a(94);
            throw null;
        }
        if (yVar.t0()) {
            return false;
        }
        ip.i a = yVar.r0().a();
        return (a instanceof ip.f) && u((ip.f) a) != null;
    }

    public static boolean H(y yVar) {
        return E(yVar, o.f8886f);
    }

    public static boolean I(p0 p0Var, hq.d dVar) {
        if (p0Var == null) {
            a(101);
            throw null;
        }
        if (dVar != null) {
            ip.i a = p0Var.a();
            return (a instanceof ip.f) && b((ip.f) a, dVar);
        }
        a(102);
        throw null;
    }

    public static boolean J(ip.i iVar) {
        if (iVar == null) {
            a(10);
            throw null;
        }
        for (ip.i iVar2 = iVar; iVar2 != null; iVar2 = iVar2.h()) {
            if (iVar2 instanceof f0) {
                return ((c0) ((f0) iVar2)).f14132x.c(p.k);
            }
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x036f  */
    /* JADX WARN: Removed duplicated region for block: B:101:0x0375  */
    /* JADX WARN: Removed duplicated region for block: B:102:0x037b  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0381  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x0387  */
    /* JADX WARN: Removed duplicated region for block: B:105:0x038d  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x0393  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x0399  */
    /* JADX WARN: Removed duplicated region for block: B:108:0x039f  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x03a5  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x03ab  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x03b0  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x03b5  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x03b8  */
    /* JADX WARN: Removed duplicated region for block: B:114:0x03bb  */
    /* JADX WARN: Removed duplicated region for block: B:115:0x03c0  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x03c5  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x03ca  */
    /* JADX WARN: Removed duplicated region for block: B:118:0x03cd  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x03d2  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x03d7  */
    /* JADX WARN: Removed duplicated region for block: B:121:0x03da  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x03dd  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x03e0  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x03e5  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x03ea  */
    /* JADX WARN: Removed duplicated region for block: B:126:0x03ed  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x03f0  */
    /* JADX WARN: Removed duplicated region for block: B:128:0x03f5  */
    /* JADX WARN: Removed duplicated region for block: B:129:0x03fa  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x03ff  */
    /* JADX WARN: Removed duplicated region for block: B:133:0x0409 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:142:0x041c  */
    /* JADX WARN: Removed duplicated region for block: B:211:0x023c  */
    /* JADX WARN: Removed duplicated region for block: B:212:0x0066  */
    /* JADX WARN: Removed duplicated region for block: B:213:0x006b  */
    /* JADX WARN: Removed duplicated region for block: B:214:0x0070  */
    /* JADX WARN: Removed duplicated region for block: B:215:0x0075  */
    /* JADX WARN: Removed duplicated region for block: B:216:0x007a  */
    /* JADX WARN: Removed duplicated region for block: B:217:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:218:0x0084  */
    /* JADX WARN: Removed duplicated region for block: B:219:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:220:0x008e  */
    /* JADX WARN: Removed duplicated region for block: B:221:0x0093  */
    /* JADX WARN: Removed duplicated region for block: B:222:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:223:0x009d  */
    /* JADX WARN: Removed duplicated region for block: B:224:0x00a2  */
    /* JADX WARN: Removed duplicated region for block: B:225:0x00a7  */
    /* JADX WARN: Removed duplicated region for block: B:226:0x00ac  */
    /* JADX WARN: Removed duplicated region for block: B:227:0x00b1  */
    /* JADX WARN: Removed duplicated region for block: B:228:0x00b4  */
    /* JADX WARN: Removed duplicated region for block: B:229:0x00b9  */
    /* JADX WARN: Removed duplicated region for block: B:230:0x0058 A[FALL_THROUGH] */
    /* JADX WARN: Removed duplicated region for block: B:231:0x0035 A[FALL_THROUGH] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x004d  */
    /* JADX WARN: Removed duplicated region for block: B:33:0x0061  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0243  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0249  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x024f  */
    /* JADX WARN: Removed duplicated region for block: B:53:0x0255  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x025b  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0261  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0267  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x026d  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0273  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0279  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x027f  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0285  */
    /* JADX WARN: Removed duplicated region for block: B:62:0x028b  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0291  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0297  */
    /* JADX WARN: Removed duplicated region for block: B:65:0x029d  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x02a3  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x02a9  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x02af  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x02b5  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x02bb  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x02c1  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x02c7  */
    /* JADX WARN: Removed duplicated region for block: B:73:0x02cd  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x02d3  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x02d9  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x02df  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02e5  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x02eb  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x02f1  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x02f7  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x02fd  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0303  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0309  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x030f  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0315  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x031b  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x0321  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x0327  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x032d  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0333  */
    /* JADX WARN: Removed duplicated region for block: B:91:0x0339  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x033f  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0345  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x034b  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0351  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x0357  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x035d  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x0363  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0369  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static /* synthetic */ void a(int i5) {
        String str;
        int i6;
        if (i5 != 11 && i5 != 13 && i5 != 15 && i5 != 69 && i5 != 74 && i5 != 81 && i5 != 84 && i5 != 86 && i5 != 87) {
            switch (i5) {
                default:
                    switch (i5) {
                        default:
                            switch (i5) {
                                default:
                                    switch (i5) {
                                        case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                        case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                        case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                        case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                        case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                        case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                        case 61:
                                        case 62:
                                        case ys.l.a /* 63 */:
                                        case 64:
                                        case 65:
                                        case 66:
                                        case 67:
                                            break;
                                        default:
                                            str = "Argument for @NotNull parameter '%s' of %s.%s must not be null";
                                            break;
                                    }
                                case 48:
                                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                case 50:
                                case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                    str = "@NotNull method %s.%s must not return null";
                                    break;
                            }
                        case 18:
                        case 19:
                        case 20:
                        case 21:
                        case 22:
                        case 23:
                        case 24:
                        case 25:
                        case 26:
                        case 27:
                        case 28:
                        case 29:
                        case 30:
                        case 31:
                        case 32:
                        case 33:
                        case 34:
                        case 35:
                        case 36:
                        case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        case 40:
                        case 41:
                        case 42:
                        case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                        case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        case 46:
                            break;
                    }
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                    break;
            }
            if (i5 != 11 && i5 != 13 && i5 != 15 && i5 != 69 && i5 != 74 && i5 != 81 && i5 != 84 && i5 != 86 && i5 != 87) {
                switch (i5) {
                    default:
                        switch (i5) {
                            default:
                                switch (i5) {
                                    default:
                                        switch (i5) {
                                            case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                            case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                            case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                            case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                            case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                            case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                            case 61:
                                            case 62:
                                            case ys.l.a /* 63 */:
                                            case 64:
                                            case 65:
                                            case 66:
                                            case 67:
                                                break;
                                            default:
                                                i6 = 3;
                                                break;
                                        }
                                    case 48:
                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                    case 50:
                                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                        i6 = 2;
                                        break;
                                }
                            case 18:
                            case 19:
                            case 20:
                            case 21:
                            case 22:
                            case 23:
                            case 24:
                            case 25:
                            case 26:
                            case 27:
                            case 28:
                            case 29:
                            case 30:
                            case 31:
                            case 32:
                            case 33:
                            case 34:
                            case 35:
                            case 36:
                            case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                            case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                            case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                            case 40:
                            case 41:
                            case 42:
                            case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                            case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                            case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                            case 46:
                                break;
                        }
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                        break;
                }
                Object[] objArr = new Object[i6];
                switch (i5) {
                    case 1:
                    case 72:
                        objArr[0] = "module";
                        break;
                    case 2:
                        objArr[0] = "computation";
                        break;
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                    case 13:
                    case 15:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    case 40:
                    case 41:
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                    case 48:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    case 50:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    case 61:
                    case 62:
                    case ys.l.a /* 63 */:
                    case 64:
                    case 65:
                    case 66:
                    case 67:
                    case 69:
                    case 74:
                    case 81:
                    case 84:
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                    case 87:
                        objArr[0] = "kotlin/reflect/jvm/internal/impl/builtins/KotlinBuiltIns";
                        break;
                    case 9:
                    case 10:
                    case 76:
                    case 77:
                    case 89:
                    case 96:
                    case 103:
                    case 107:
                    case 108:
                    case 143:
                    case MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH /* 146 */:
                    case 147:
                    case 149:
                    case 157:
                    case 158:
                    case 159:
                        objArr[0] = "descriptor";
                        break;
                    case 12:
                    case 98:
                    case 100:
                    case 102:
                    case 104:
                    case 106:
                    case 135:
                        objArr[0] = "fqName";
                        break;
                    case 14:
                        objArr[0] = "simpleName";
                        break;
                    case 16:
                    case 17:
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                    case 88:
                    case 90:
                    case 91:
                    case 92:
                    case 93:
                    case 94:
                    case 95:
                    case 97:
                    case 99:
                    case 105:
                    case 109:
                    case 110:
                    case 111:
                    case 113:
                    case MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION /* 114 */:
                    case 115:
                    case 116:
                    case 117:
                    case 118:
                    case 119:
                    case 120:
                    case 121:
                    case 122:
                    case 123:
                    case 124:
                    case 125:
                    case 126:
                    case 127:
                    case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                    case 129:
                    case 130:
                    case 131:
                    case 132:
                    case 133:
                    case 134:
                    case 136:
                    case 137:
                    case 138:
                    case 139:
                    case 140:
                    case 141:
                    case 142:
                    case 144:
                    case 145:
                    case 148:
                    case 150:
                    case 151:
                    case 152:
                    case 153:
                    case 154:
                    case 155:
                    case 156:
                    case 161:
                        objArr[0] = "type";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        objArr[0] = "classSimpleName";
                        break;
                    case 68:
                    case 70:
                        objArr[0] = "arrayType";
                        break;
                    case 71:
                        objArr[0] = "notNullArrayType";
                        break;
                    case 73:
                        objArr[0] = "primitiveType";
                        break;
                    case 75:
                        objArr[0] = "kotlinType";
                        break;
                    case 78:
                    case 82:
                        objArr[0] = "projectionType";
                        break;
                    case 79:
                    case 83:
                    case 85:
                        objArr[0] = "argument";
                        break;
                    case 80:
                        objArr[0] = "annotations";
                        break;
                    case 101:
                        objArr[0] = "typeConstructor";
                        break;
                    case 112:
                        objArr[0] = "classDescriptor";
                        break;
                    case 160:
                        objArr[0] = "declarationDescriptor";
                        break;
                    default:
                        objArr[0] = "storageManager";
                        break;
                }
                if (i5 != 11) {
                    objArr[1] = "getBuiltInsPackageScope";
                } else if (i5 == 13) {
                    objArr[1] = "getBuiltInClassByFqName";
                } else if (i5 == 15) {
                    objArr[1] = "getBuiltInClassByName";
                } else if (i5 == 69) {
                    objArr[1] = "getArrayElementType";
                } else if (i5 == 74) {
                    objArr[1] = "getPrimitiveArrayKotlinType";
                } else if (i5 == 81 || i5 == 84) {
                    objArr[1] = "getArrayType";
                } else if (i5 == 86) {
                    objArr[1] = "getEnumType";
                } else if (i5 != 87) {
                    switch (i5) {
                        case 3:
                            objArr[1] = "getAdditionalClassPartsProvider";
                            break;
                        case 4:
                            objArr[1] = "getPlatformDependentDeclarationFilter";
                            break;
                        case 5:
                            objArr[1] = "getClassDescriptorFactories";
                            break;
                        case 6:
                            objArr[1] = "getStorageManager";
                            break;
                        case 7:
                            objArr[1] = "getBuiltInsModule";
                            break;
                        case 8:
                            objArr[1] = "getBuiltInPackagesImportedByDefault";
                            break;
                        default:
                            switch (i5) {
                                case 18:
                                    objArr[1] = "getSuspendFunction";
                                    break;
                                case 19:
                                    objArr[1] = "getKFunction";
                                    break;
                                case 20:
                                    objArr[1] = "getKSuspendFunction";
                                    break;
                                case 21:
                                    objArr[1] = "getKClass";
                                    break;
                                case 22:
                                    objArr[1] = "getKType";
                                    break;
                                case 23:
                                    objArr[1] = "getKCallable";
                                    break;
                                case 24:
                                    objArr[1] = "getKProperty";
                                    break;
                                case 25:
                                    objArr[1] = "getKProperty0";
                                    break;
                                case 26:
                                    objArr[1] = "getKProperty1";
                                    break;
                                case 27:
                                    objArr[1] = "getKProperty2";
                                    break;
                                case 28:
                                    objArr[1] = "getKMutableProperty0";
                                    break;
                                case 29:
                                    objArr[1] = "getKMutableProperty1";
                                    break;
                                case 30:
                                    objArr[1] = "getKMutableProperty2";
                                    break;
                                case 31:
                                    objArr[1] = "getIterator";
                                    break;
                                case 32:
                                    objArr[1] = "getIterable";
                                    break;
                                case 33:
                                    objArr[1] = "getMutableIterable";
                                    break;
                                case 34:
                                    objArr[1] = "getMutableIterator";
                                    break;
                                case 35:
                                    objArr[1] = "getCollection";
                                    break;
                                case 36:
                                    objArr[1] = "getMutableCollection";
                                    break;
                                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                    objArr[1] = "getList";
                                    break;
                                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                    objArr[1] = "getMutableList";
                                    break;
                                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                    objArr[1] = "getSet";
                                    break;
                                case 40:
                                    objArr[1] = "getMutableSet";
                                    break;
                                case 41:
                                    objArr[1] = "getMap";
                                    break;
                                case 42:
                                    objArr[1] = "getMutableMap";
                                    break;
                                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                                    objArr[1] = "getMapEntry";
                                    break;
                                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                    objArr[1] = "getMutableMapEntry";
                                    break;
                                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                    objArr[1] = "getListIterator";
                                    break;
                                case 46:
                                    objArr[1] = "getMutableListIterator";
                                    break;
                                default:
                                    switch (i5) {
                                        case 48:
                                            objArr[1] = "getBuiltInTypeByClassName";
                                            break;
                                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                            objArr[1] = "getNothingType";
                                            break;
                                        case 50:
                                            objArr[1] = "getNullableNothingType";
                                            break;
                                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                            objArr[1] = "getAnyType";
                                            break;
                                        case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                            objArr[1] = "getNullableAnyType";
                                            break;
                                        case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                            objArr[1] = "getDefaultBound";
                                            break;
                                        default:
                                            switch (i5) {
                                                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                                    objArr[1] = "getPrimitiveKotlinType";
                                                    break;
                                                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                                    objArr[1] = "getNumberType";
                                                    break;
                                                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                                    objArr[1] = "getByteType";
                                                    break;
                                                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                                    objArr[1] = "getShortType";
                                                    break;
                                                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                                    objArr[1] = "getIntType";
                                                    break;
                                                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                                    objArr[1] = "getLongType";
                                                    break;
                                                case 61:
                                                    objArr[1] = "getFloatType";
                                                    break;
                                                case 62:
                                                    objArr[1] = "getDoubleType";
                                                    break;
                                                case ys.l.a /* 63 */:
                                                    objArr[1] = "getCharType";
                                                    break;
                                                case 64:
                                                    objArr[1] = "getBooleanType";
                                                    break;
                                                case 65:
                                                    objArr[1] = "getUnitType";
                                                    break;
                                                case 66:
                                                    objArr[1] = "getStringType";
                                                    break;
                                                case 67:
                                                    objArr[1] = "getIterableType";
                                                    break;
                                                default:
                                                    objArr[1] = "kotlin/reflect/jvm/internal/impl/builtins/KotlinBuiltIns";
                                                    break;
                                            }
                                    }
                            }
                    }
                } else {
                    objArr[1] = "getAnnotationType";
                }
                switch (i5) {
                    case 1:
                        objArr[2] = "setBuiltInsModule";
                        break;
                    case 2:
                        objArr[2] = "setPostponedBuiltinsModuleComputation";
                        break;
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 11:
                    case 13:
                    case 15:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                    case 40:
                    case 41:
                    case 42:
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                    case 46:
                    case 48:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                    case 50:
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                    case 61:
                    case 62:
                    case ys.l.a /* 63 */:
                    case 64:
                    case 65:
                    case 66:
                    case 67:
                    case 69:
                    case 74:
                    case 81:
                    case 84:
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                    case 87:
                        break;
                    case 9:
                        objArr[2] = "isBuiltIn";
                        break;
                    case 10:
                        objArr[2] = "isUnderKotlinPackage";
                        break;
                    case 12:
                        objArr[2] = "getBuiltInClassByFqName";
                        break;
                    case 14:
                        objArr[2] = "getBuiltInClassByName";
                        break;
                    case 16:
                        objArr[2] = "getPrimitiveClassDescriptor";
                        break;
                    case 17:
                        objArr[2] = "getPrimitiveArrayClassDescriptor";
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        objArr[2] = "getBuiltInTypeByClassName";
                        break;
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        objArr[2] = "getPrimitiveKotlinType";
                        break;
                    case 68:
                        objArr[2] = "getArrayElementType";
                        break;
                    case 70:
                        objArr[2] = "getArrayElementTypeOrNull";
                        break;
                    case 71:
                    case 72:
                        objArr[2] = "getElementTypeForUnsignedArray";
                        break;
                    case 73:
                        objArr[2] = "getPrimitiveArrayKotlinType";
                        break;
                    case 75:
                        objArr[2] = "getPrimitiveArrayKotlinTypeByPrimitiveKotlinType";
                        break;
                    case 76:
                    case 93:
                        objArr[2] = "getPrimitiveType";
                        break;
                    case 77:
                        objArr[2] = "getPrimitiveArrayType";
                        break;
                    case 78:
                    case 79:
                    case 80:
                    case 82:
                    case 83:
                        objArr[2] = "getArrayType";
                        break;
                    case 85:
                        objArr[2] = "getEnumType";
                        break;
                    case 88:
                        objArr[2] = "isArray";
                        break;
                    case 89:
                    case 90:
                        objArr[2] = "isArrayOrPrimitiveArray";
                        break;
                    case 91:
                        objArr[2] = "isPrimitiveArray";
                        break;
                    case 92:
                        objArr[2] = "getPrimitiveArrayElementType";
                        break;
                    case 94:
                        objArr[2] = "isPrimitiveType";
                        break;
                    case 95:
                        objArr[2] = "isPrimitiveTypeOrNullablePrimitiveType";
                        break;
                    case 96:
                        objArr[2] = "isPrimitiveClass";
                        break;
                    case 97:
                    case 98:
                    case 99:
                    case 100:
                        objArr[2] = "isConstructedFromGivenClass";
                        break;
                    case 101:
                    case 102:
                        objArr[2] = "isTypeConstructorForGivenClass";
                        break;
                    case 103:
                    case 104:
                        objArr[2] = "classFqNameEquals";
                        break;
                    case 105:
                    case 106:
                        objArr[2] = "isNotNullConstructedFromGivenClass";
                        break;
                    case 107:
                        objArr[2] = "isSpecialClassWithNoSupertypes";
                        break;
                    case 108:
                    case 109:
                        objArr[2] = "isAny";
                        break;
                    case 110:
                    case 112:
                        objArr[2] = "isBoolean";
                        break;
                    case 111:
                        objArr[2] = "isBooleanOrNullableBoolean";
                        break;
                    case 113:
                        objArr[2] = "isNumber";
                        break;
                    case MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION /* 114 */:
                        objArr[2] = "isChar";
                        break;
                    case 115:
                        objArr[2] = "isCharOrNullableChar";
                        break;
                    case 116:
                        objArr[2] = "isInt";
                        break;
                    case 117:
                        objArr[2] = "isByte";
                        break;
                    case 118:
                        objArr[2] = "isLong";
                        break;
                    case 119:
                        objArr[2] = "isLongOrNullableLong";
                        break;
                    case 120:
                        objArr[2] = "isShort";
                        break;
                    case 121:
                        objArr[2] = "isFloat";
                        break;
                    case 122:
                        objArr[2] = "isFloatOrNullableFloat";
                        break;
                    case 123:
                        objArr[2] = "isDouble";
                        break;
                    case 124:
                        objArr[2] = "isUByte";
                        break;
                    case 125:
                        objArr[2] = "isUShort";
                        break;
                    case 126:
                        objArr[2] = "isUInt";
                        break;
                    case 127:
                        objArr[2] = "isULong";
                        break;
                    case IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT /* 128 */:
                        objArr[2] = "isUByteArray";
                        break;
                    case 129:
                        objArr[2] = "isUShortArray";
                        break;
                    case 130:
                        objArr[2] = "isUIntArray";
                        break;
                    case 131:
                        objArr[2] = "isULongArray";
                        break;
                    case 132:
                        objArr[2] = "isUnsignedArrayType";
                        break;
                    case 133:
                        objArr[2] = "isDoubleOrNullableDouble";
                        break;
                    case 134:
                    case 135:
                        objArr[2] = "isConstructedFromGivenClassAndNotNullable";
                        break;
                    case 136:
                        objArr[2] = "isNothing";
                        break;
                    case 137:
                        objArr[2] = "isNullableNothing";
                        break;
                    case 138:
                        objArr[2] = "isNothingOrNullableNothing";
                        break;
                    case 139:
                        objArr[2] = "isAnyOrNullableAny";
                        break;
                    case 140:
                        objArr[2] = "isNullableAny";
                        break;
                    case 141:
                        objArr[2] = "isDefaultBound";
                        break;
                    case 142:
                        objArr[2] = "isUnit";
                        break;
                    case 143:
                        objArr[2] = "mayReturnNonUnitValue";
                        break;
                    case 144:
                        objArr[2] = "isUnitOrNullableUnit";
                        break;
                    case 145:
                        objArr[2] = "isBooleanOrSubtype";
                        break;
                    case MediaImageViewKt.OBSCURED_IMAGE_MIN_WIDTH /* 146 */:
                        objArr[2] = "isMemberOfAny";
                        break;
                    case 147:
                    case 148:
                        objArr[2] = "isEnum";
                        break;
                    case 149:
                    case 150:
                        objArr[2] = "isComparable";
                        break;
                    case 151:
                        objArr[2] = "isCollectionOrNullableCollection";
                        break;
                    case 152:
                        objArr[2] = "isListOrNullableList";
                        break;
                    case 153:
                        objArr[2] = "isSetOrNullableSet";
                        break;
                    case 154:
                        objArr[2] = "isMapOrNullableMap";
                        break;
                    case 155:
                        objArr[2] = "isIterableOrNullableIterable";
                        break;
                    case 156:
                        objArr[2] = "isThrowableOrNullableThrowable";
                        break;
                    case 157:
                        objArr[2] = "isThrowable";
                        break;
                    case 158:
                        objArr[2] = "isKClass";
                        break;
                    case 159:
                        objArr[2] = "isNonPrimitiveArray";
                        break;
                    case 160:
                        objArr[2] = "isDeprecated";
                        break;
                    case 161:
                        objArr[2] = "isNotNullOrNullableFunctionSupertype";
                        break;
                    default:
                        objArr[2] = "<init>";
                        break;
                }
                String format = String.format(str, objArr);
                if (i5 != 11 && i5 != 13 && i5 != 15 && i5 != 69 && i5 != 74 && i5 != 81 && i5 != 84 && i5 != 86 && i5 != 87) {
                    switch (i5) {
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                            break;
                        default:
                            switch (i5) {
                                case 18:
                                case 19:
                                case 20:
                                case 21:
                                case 22:
                                case 23:
                                case 24:
                                case 25:
                                case 26:
                                case 27:
                                case 28:
                                case 29:
                                case 30:
                                case 31:
                                case 32:
                                case 33:
                                case 34:
                                case 35:
                                case 36:
                                case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                                case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                                case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                                case 40:
                                case 41:
                                case 42:
                                case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                                case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                case 46:
                                    break;
                                default:
                                    switch (i5) {
                                        case 48:
                                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                                        case 50:
                                        case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                                        case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                                        case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                                            break;
                                        default:
                                            switch (i5) {
                                                case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                                                case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                                                case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                                                case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                                                case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                                                case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                                                case 61:
                                                case 62:
                                                case ys.l.a /* 63 */:
                                                case 64:
                                                case 65:
                                                case 66:
                                                case 67:
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
            if (i5 != 11) {
            }
            switch (i5) {
            }
            String format2 = String.format(str, objArr2);
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
            Object[] objArr22 = new Object[i6];
            switch (i5) {
            }
            if (i5 != 11) {
            }
            switch (i5) {
            }
            String format22 = String.format(str, objArr22);
            if (i5 != 11) {
            }
            throw new IllegalStateException(format22);
        }
        i6 = 2;
        Object[] objArr222 = new Object[i6];
        switch (i5) {
        }
        if (i5 != 11) {
        }
        switch (i5) {
        }
        String format222 = String.format(str, objArr222);
        if (i5 != 11) {
        }
        throw new IllegalStateException(format222);
    }

    public static boolean b(ip.f fVar, hq.d dVar) {
        if (fVar == null) {
            a(103);
            throw null;
        }
        if (dVar != null) {
            return fVar.getName().equals(dVar.f()) && dVar.equals(kq.e.g(fVar));
        }
        a(104);
        throw null;
    }

    public static k s(ip.i iVar) {
        if (iVar == null) {
            a(77);
            throw null;
        }
        if (o.f8885e0.contains(iVar.getName())) {
            return (k) o.f8889g0.get(kq.e.g(iVar));
        }
        return null;
    }

    public static k u(ip.f fVar) {
        if (fVar == null) {
            a(76);
            throw null;
        }
        if (o.f8883d0.contains(fVar.getName())) {
            return (k) o.f8887f0.get(kq.e.g(fVar));
        }
        return null;
    }

    public static boolean y(y yVar) {
        if (yVar != null) {
            return B(yVar, o.a);
        }
        a(139);
        throw null;
    }

    public static boolean z(y yVar) {
        if (yVar != null) {
            return B(yVar, o.f8888g);
        }
        a(88);
        throw null;
    }

    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.Object, kotlin.Lazy] */
    public final void c() {
        hq.e moduleName = f8859e;
        Intrinsics.checkNotNullParameter(moduleName, "moduleName");
        xq.l storageManager = this.f8862d;
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(this, "builtIns");
        a0 a0Var = new a0(moduleName, storageManager, this, 48);
        this.a = a0Var;
        c.a.getClass();
        c cVar = (c) b.f8851b.getValue();
        a0 module = this.a;
        Iterable classDescriptorFactories = m();
        kp.d platformDependentDeclarationFilter = q();
        kp.b additionalClassPartsProvider = d();
        vq.b bVar = (vq.b) cVar;
        bVar.getClass();
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "builtInsModule");
        Intrinsics.checkNotNullParameter(classDescriptorFactories, "classDescriptorFactories");
        Intrinsics.checkNotNullParameter(platformDependentDeclarationFilter, "platformDependentDeclarationFilter");
        Intrinsics.checkNotNullParameter(additionalClassPartsProvider, "additionalClassPartsProvider");
        Set<hq.c> packageFqNames = p.f8921r;
        y0 loadResource = new y0(1, bVar.f19542b, vq.d.class, "loadResource", "loadResource(Ljava/lang/String;)Ljava/io/InputStream;", 0, 3);
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(packageFqNames, "packageFqNames");
        Intrinsics.checkNotNullParameter(classDescriptorFactories, "classDescriptorFactories");
        Intrinsics.checkNotNullParameter(platformDependentDeclarationFilter, "platformDependentDeclarationFilter");
        Intrinsics.checkNotNullParameter(additionalClassPartsProvider, "additionalClassPartsProvider");
        Intrinsics.checkNotNullParameter(loadResource, "loadResource");
        ArrayList arrayList = new ArrayList();
        for (hq.c cVar2 : packageFqNames) {
            vq.a.f19541m.getClass();
            InputStream inputStream = (InputStream) loadResource.invoke(vq.a.a(cVar2));
            vq.c n6 = inputStream != null ? com.facebook.imagepipeline.nativecode.c.n(cVar2, storageManager, module, inputStream) : null;
            if (n6 != null) {
                arrayList.add(n6);
            }
        }
        h0 providerForModuleContent = new h0(arrayList);
        e4.i iVar = new e4.i(storageManager, module);
        qa.t tVar = new qa.t(providerForModuleContent);
        vq.a aVar = vq.a.f19541m;
        io.sentry.internal.debugmeta.c cVar3 = new io.sentry.internal.debugmeta.c(module, iVar, aVar);
        uq.k DO_NOTHING = uq.m.a;
        Intrinsics.checkNotNullExpressionValue(DO_NOTHING, "DO_NOTHING");
        uq.j jVar = new uq.j(storageManager, module, tVar, cVar3, providerForModuleContent, classDescriptorFactories, iVar, additionalClassPartsProvider, platformDependentDeclarationFilter, aVar.a, null, new lh.f(storageManager, kotlin.collections.m0.f13512d), 851968);
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            ((vq.c) it.next()).C0(jVar);
        }
        Intrinsics.checkNotNullParameter(providerForModuleContent, "providerForModuleContent");
        a0Var.F = providerForModuleContent;
        a0 a0Var2 = this.a;
        a0Var2.B0(a0Var2);
    }

    public kp.b d() {
        return kp.a.f13612b;
    }

    public final yq.c0 e() {
        yq.c0 k = k("Any").k();
        if (k != null) {
            return k;
        }
        a(51);
        throw null;
    }

    public final y f(y yVar) {
        if (yVar == null) {
            a(68);
            throw null;
        }
        y g6 = g(yVar);
        if (g6 != null) {
            return g6;
        }
        throw new IllegalStateException("not array: " + yVar);
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x0095 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final y g(y yVar) {
        hq.b arrayClassId;
        ip.f j;
        yq.c0 k;
        if (yVar == null) {
            a(70);
            throw null;
        }
        if (!z(yVar)) {
            b1 g6 = z0.g(yVar, false);
            y yVar2 = (y) ((h) this.f8860b.invoke()).f8858b.get(g6);
            if (yVar2 != null) {
                return yVar2;
            }
            int i5 = kq.e.a;
            ip.i a = g6.r0().a();
            ip.a0 e9 = a == null ? null : kq.e.e(a);
            if (e9 != null) {
                ip.i a10 = g6.r0().a();
                if (a10 != null) {
                    Set set = t.a;
                    hq.e name = a10.getName();
                    Intrinsics.checkNotNullParameter(name, "name");
                    if (t.f8934d.contains(name) && (arrayClassId = oq.e.f(a10)) != null) {
                        Intrinsics.checkNotNullParameter(arrayClassId, "arrayClassId");
                        hq.b bVar = (hq.b) t.f8932b.get(arrayClassId);
                        if (bVar != null && (j = nf.e.j(e9, bVar)) != null) {
                            k = j.k();
                            if (k == null) {
                                return k;
                            }
                        }
                    }
                }
                k = null;
                if (k == null) {
                }
            }
        } else if (yVar.l0().size() == 1) {
            return ((s0) yVar.l0().get(0)).b();
        }
        return null;
    }

    public final yq.c0 h(b1 b1Var) {
        c1 c1Var = c1.f21013i;
        if (b1Var != null) {
            return i(c1Var, b1Var, jp.g.a);
        }
        a(83);
        throw null;
    }

    public final yq.c0 i(c1 c1Var, y yVar, jp.h hVar) {
        if (yVar == null) {
            a(79);
            throw null;
        }
        yq.c0 s2 = yq.c.s(yq.c.C(hVar), k("Array"), Collections.singletonList(new yq.h0(yVar, c1Var)));
        if (s2 != null) {
            return s2;
        }
        a(81);
        throw null;
    }

    public final ip.f j(hq.c cVar) {
        if (cVar == null) {
            a(12);
            throw null;
        }
        a0 l6 = l();
        qp.c cVar2 = qp.c.f16937d;
        ip.f v5 = ks.n.v(l6, cVar);
        if (v5 != null) {
            return v5;
        }
        a(13);
        throw null;
    }

    public final ip.f k(String str) {
        if (str != null) {
            return (ip.f) this.f8861c.invoke(hq.e.e(str));
        }
        a(14);
        throw null;
    }

    public final a0 l() {
        this.a.getClass();
        a0 a0Var = this.a;
        if (a0Var != null) {
            return a0Var;
        }
        a(7);
        throw null;
    }

    public Iterable m() {
        List singletonList = Collections.singletonList(new gp.a(this.f8862d, l()));
        if (singletonList != null) {
            return singletonList;
        }
        a(5);
        throw null;
    }

    public final yq.c0 n() {
        yq.c0 p3 = p();
        if (p3 != null) {
            return p3;
        }
        a(53);
        throw null;
    }

    public final yq.c0 o() {
        yq.c0 k = k("Nothing").k();
        if (k != null) {
            return k;
        }
        a(49);
        throw null;
    }

    public final yq.c0 p() {
        yq.c0 x02 = e().x0(true);
        if (x02 != null) {
            return x02;
        }
        a(52);
        throw null;
    }

    public kp.d q() {
        return kp.a.f13614d;
    }

    public final yq.c0 r(k kVar) {
        if (kVar == null) {
            a(73);
            throw null;
        }
        yq.c0 c0Var = (yq.c0) ((h) this.f8860b.invoke()).a.get(kVar);
        if (c0Var != null) {
            return c0Var;
        }
        a(74);
        throw null;
    }

    public final yq.c0 t(k kVar) {
        if (kVar == null) {
            a(54);
            throw null;
        }
        yq.c0 k = k(kVar.f8868d.b()).k();
        if (k != null) {
            return k;
        }
        a(55);
        throw null;
    }

    public final yq.c0 v() {
        yq.c0 k = k("String").k();
        if (k != null) {
            return k;
        }
        a(66);
        throw null;
    }

    public final ip.f w(int i5) {
        return j(p.f8911f.a(hq.e.e(gp.j.f9431c.f9432b + i5)));
    }

    public final yq.c0 x() {
        yq.c0 k = k("Unit").k();
        if (k != null) {
            return k;
        }
        a(65);
        throw null;
    }
}
