package androidx.constraintlayout.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.content.res.XmlResourceParser;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.SparseIntArray;
import android.util.Xml;
import android.view.View;
import android.view.ViewGroup;
import androidx.constraintlayout.widget.ConstraintLayout;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import com.swmansion.reanimated.BuildConfig;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import org.xmlpull.v1.XmlPullParserException;

/* loaded from: classes.dex */
public final class ConstraintSet {

    /* renamed from: d, reason: collision with root package name */
    public static final int[] f1315d = {0, 4, 8};

    /* renamed from: e, reason: collision with root package name */
    public static final SparseIntArray f1316e;

    /* renamed from: f, reason: collision with root package name */
    public static final SparseIntArray f1317f;
    public final HashMap a = new HashMap();

    /* renamed from: b, reason: collision with root package name */
    public final boolean f1318b = true;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f1319c = new HashMap();

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        f1316e = sparseIntArray;
        SparseIntArray sparseIntArray2 = new SparseIntArray();
        f1317f = sparseIntArray2;
        sparseIntArray.append(81, 25);
        sparseIntArray.append(82, 26);
        sparseIntArray.append(84, 29);
        sparseIntArray.append(85, 30);
        sparseIntArray.append(91, 36);
        sparseIntArray.append(90, 35);
        sparseIntArray.append(62, 4);
        sparseIntArray.append(61, 3);
        sparseIntArray.append(57, 1);
        sparseIntArray.append(59, 91);
        sparseIntArray.append(58, 92);
        sparseIntArray.append(100, 6);
        sparseIntArray.append(101, 7);
        sparseIntArray.append(69, 17);
        sparseIntArray.append(70, 18);
        sparseIntArray.append(71, 19);
        sparseIntArray.append(0, 27);
        sparseIntArray.append(86, 32);
        sparseIntArray.append(87, 33);
        sparseIntArray.append(68, 10);
        sparseIntArray.append(67, 9);
        sparseIntArray.append(105, 13);
        sparseIntArray.append(108, 16);
        sparseIntArray.append(106, 14);
        sparseIntArray.append(103, 11);
        sparseIntArray.append(107, 15);
        sparseIntArray.append(104, 12);
        sparseIntArray.append(94, 40);
        sparseIntArray.append(79, 39);
        sparseIntArray.append(78, 41);
        sparseIntArray.append(93, 42);
        sparseIntArray.append(77, 20);
        sparseIntArray.append(92, 37);
        sparseIntArray.append(66, 5);
        sparseIntArray.append(80, 87);
        sparseIntArray.append(89, 87);
        sparseIntArray.append(83, 87);
        sparseIntArray.append(60, 87);
        sparseIntArray.append(56, 87);
        sparseIntArray.append(5, 24);
        sparseIntArray.append(7, 28);
        sparseIntArray.append(23, 31);
        sparseIntArray.append(24, 8);
        sparseIntArray.append(6, 34);
        sparseIntArray.append(8, 2);
        sparseIntArray.append(3, 23);
        sparseIntArray.append(4, 21);
        sparseIntArray.append(95, 95);
        sparseIntArray.append(72, 96);
        sparseIntArray.append(2, 22);
        sparseIntArray.append(13, 43);
        sparseIntArray.append(26, 44);
        sparseIntArray.append(21, 45);
        sparseIntArray.append(22, 46);
        sparseIntArray.append(20, 60);
        sparseIntArray.append(18, 47);
        sparseIntArray.append(19, 48);
        sparseIntArray.append(14, 49);
        sparseIntArray.append(15, 50);
        sparseIntArray.append(16, 51);
        sparseIntArray.append(17, 52);
        sparseIntArray.append(25, 53);
        sparseIntArray.append(96, 54);
        sparseIntArray.append(73, 55);
        sparseIntArray.append(97, 56);
        sparseIntArray.append(74, 57);
        sparseIntArray.append(98, 58);
        sparseIntArray.append(75, 59);
        sparseIntArray.append(63, 61);
        sparseIntArray.append(65, 62);
        sparseIntArray.append(64, 63);
        sparseIntArray.append(28, 64);
        sparseIntArray.append(120, 65);
        sparseIntArray.append(35, 66);
        sparseIntArray.append(121, 67);
        sparseIntArray.append(112, 79);
        sparseIntArray.append(1, 38);
        sparseIntArray.append(111, 68);
        sparseIntArray.append(99, 69);
        sparseIntArray.append(76, 70);
        sparseIntArray.append(110, 97);
        sparseIntArray.append(32, 71);
        sparseIntArray.append(30, 72);
        sparseIntArray.append(31, 73);
        sparseIntArray.append(33, 74);
        sparseIntArray.append(29, 75);
        sparseIntArray.append(113, 76);
        sparseIntArray.append(88, 77);
        sparseIntArray.append(122, 78);
        sparseIntArray.append(55, 80);
        sparseIntArray.append(54, 81);
        sparseIntArray.append(115, 82);
        sparseIntArray.append(119, 83);
        sparseIntArray.append(118, 84);
        sparseIntArray.append(117, 85);
        sparseIntArray.append(116, 86);
        sparseIntArray2.append(84, 6);
        sparseIntArray2.append(84, 7);
        sparseIntArray2.append(0, 27);
        sparseIntArray2.append(88, 13);
        sparseIntArray2.append(91, 16);
        sparseIntArray2.append(89, 14);
        sparseIntArray2.append(86, 11);
        sparseIntArray2.append(90, 15);
        sparseIntArray2.append(87, 12);
        sparseIntArray2.append(77, 40);
        sparseIntArray2.append(70, 39);
        sparseIntArray2.append(69, 41);
        sparseIntArray2.append(76, 42);
        sparseIntArray2.append(68, 20);
        sparseIntArray2.append(75, 37);
        sparseIntArray2.append(59, 5);
        sparseIntArray2.append(71, 87);
        sparseIntArray2.append(74, 87);
        sparseIntArray2.append(72, 87);
        sparseIntArray2.append(56, 87);
        sparseIntArray2.append(55, 87);
        sparseIntArray2.append(5, 24);
        sparseIntArray2.append(7, 28);
        sparseIntArray2.append(23, 31);
        sparseIntArray2.append(24, 8);
        sparseIntArray2.append(6, 34);
        sparseIntArray2.append(8, 2);
        sparseIntArray2.append(3, 23);
        sparseIntArray2.append(4, 21);
        sparseIntArray2.append(78, 95);
        sparseIntArray2.append(63, 96);
        sparseIntArray2.append(2, 22);
        sparseIntArray2.append(13, 43);
        sparseIntArray2.append(26, 44);
        sparseIntArray2.append(21, 45);
        sparseIntArray2.append(22, 46);
        sparseIntArray2.append(20, 60);
        sparseIntArray2.append(18, 47);
        sparseIntArray2.append(19, 48);
        sparseIntArray2.append(14, 49);
        sparseIntArray2.append(15, 50);
        sparseIntArray2.append(16, 51);
        sparseIntArray2.append(17, 52);
        sparseIntArray2.append(25, 53);
        sparseIntArray2.append(79, 54);
        sparseIntArray2.append(64, 55);
        sparseIntArray2.append(80, 56);
        sparseIntArray2.append(65, 57);
        sparseIntArray2.append(81, 58);
        sparseIntArray2.append(66, 59);
        sparseIntArray2.append(58, 62);
        sparseIntArray2.append(57, 63);
        sparseIntArray2.append(28, 64);
        sparseIntArray2.append(104, 65);
        sparseIntArray2.append(34, 66);
        sparseIntArray2.append(105, 67);
        sparseIntArray2.append(95, 79);
        sparseIntArray2.append(1, 38);
        sparseIntArray2.append(96, 98);
        sparseIntArray2.append(94, 68);
        sparseIntArray2.append(82, 69);
        sparseIntArray2.append(67, 70);
        sparseIntArray2.append(32, 71);
        sparseIntArray2.append(30, 72);
        sparseIntArray2.append(31, 73);
        sparseIntArray2.append(33, 74);
        sparseIntArray2.append(29, 75);
        sparseIntArray2.append(97, 76);
        sparseIntArray2.append(73, 77);
        sparseIntArray2.append(106, 78);
        sparseIntArray2.append(54, 80);
        sparseIntArray2.append(53, 81);
        sparseIntArray2.append(99, 82);
        sparseIntArray2.append(103, 83);
        sparseIntArray2.append(102, 84);
        sparseIntArray2.append(101, 85);
        sparseIntArray2.append(100, 86);
        sparseIntArray2.append(93, 97);
    }

    public static int[] e(Barrier barrier, String str) {
        int i5;
        Object designInformation;
        String[] split = str.split(",");
        Context context = barrier.getContext();
        int[] iArr = new int[split.length];
        int i6 = 0;
        int i10 = 0;
        while (i6 < split.length) {
            String trim = split[i6].trim();
            try {
                i5 = l.class.getField(trim).getInt(null);
            } catch (Exception unused) {
                i5 = 0;
            }
            if (i5 == 0) {
                i5 = context.getResources().getIdentifier(trim, StackTraceHelper.ID_KEY, context.getPackageName());
            }
            if (i5 == 0 && barrier.isInEditMode() && (barrier.getParent() instanceof ConstraintLayout) && (designInformation = ((ConstraintLayout) barrier.getParent()).getDesignInformation(0, trim)) != null && (designInformation instanceof Integer)) {
                i5 = ((Integer) designInformation).intValue();
            }
            iArr[i10] = i5;
            i6++;
            i10++;
        }
        return i10 != split.length ? Arrays.copyOf(iArr, i10) : iArr;
    }

    public static g f(Context context, AttributeSet attributeSet, boolean z5) {
        int i5;
        int i6;
        g gVar = new g();
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, z5 ? m.f1414c : m.a);
        j jVar = gVar.f1350b;
        k kVar = gVar.f1353e;
        i iVar = gVar.f1351c;
        h hVar = gVar.f1352d;
        int[] iArr = f1315d;
        String[] strArr = q0.a.a;
        SparseIntArray sparseIntArray = f1316e;
        if (z5) {
            f fVar = new f();
            fVar.a = new int[10];
            fVar.f1341b = new int[10];
            fVar.f1342c = 0;
            fVar.f1343d = new int[10];
            fVar.f1344e = new float[10];
            fVar.f1345f = 0;
            fVar.f1346g = new int[5];
            fVar.f1347h = new String[5];
            fVar.f1348i = 0;
            fVar.j = new int[4];
            fVar.k = new boolean[4];
            fVar.f1349l = 0;
            iVar.getClass();
            hVar.getClass();
            kVar.getClass();
            int i10 = 0;
            for (int indexCount = obtainStyledAttributes.getIndexCount(); i10 < indexCount; indexCount = i6) {
                int index = obtainStyledAttributes.getIndex(i10);
                int i11 = i10;
                switch (f1317f.get(index)) {
                    case 2:
                        i6 = indexCount;
                        fVar.b(2, obtainStyledAttributes.getDimensionPixelSize(index, hVar.H));
                        continue;
                    case 3:
                    case 4:
                    case 9:
                    case 10:
                    case 25:
                    case 26:
                    case 29:
                    case 30:
                    case 32:
                    case 33:
                    case 35:
                    case 36:
                    case 61:
                    case 88:
                    case 89:
                    case 90:
                    case 91:
                    case 92:
                    default:
                        StringBuilder sb2 = new StringBuilder("Unknown attribute 0x");
                        i6 = indexCount;
                        sb2.append(Integer.toHexString(index));
                        sb2.append("   ");
                        sb2.append(sparseIntArray.get(index));
                        Log.w("ConstraintSet", sb2.toString());
                        break;
                    case 5:
                        i6 = indexCount;
                        fVar.c(5, obtainStyledAttributes.getString(index));
                        continue;
                    case 6:
                        i6 = indexCount;
                        fVar.b(6, obtainStyledAttributes.getDimensionPixelOffset(index, hVar.B));
                        break;
                    case 7:
                        i6 = indexCount;
                        fVar.b(7, obtainStyledAttributes.getDimensionPixelOffset(index, hVar.C));
                        break;
                    case 8:
                        i6 = indexCount;
                        fVar.b(8, obtainStyledAttributes.getDimensionPixelSize(index, hVar.I));
                        break;
                    case 11:
                        i6 = indexCount;
                        fVar.b(11, obtainStyledAttributes.getDimensionPixelSize(index, hVar.O));
                        break;
                    case 12:
                        i6 = indexCount;
                        fVar.b(12, obtainStyledAttributes.getDimensionPixelSize(index, hVar.P));
                        break;
                    case 13:
                        i6 = indexCount;
                        fVar.b(13, obtainStyledAttributes.getDimensionPixelSize(index, hVar.L));
                        break;
                    case 14:
                        i6 = indexCount;
                        fVar.b(14, obtainStyledAttributes.getDimensionPixelSize(index, hVar.N));
                        break;
                    case 15:
                        i6 = indexCount;
                        fVar.b(15, obtainStyledAttributes.getDimensionPixelSize(index, hVar.Q));
                        break;
                    case 16:
                        i6 = indexCount;
                        fVar.b(16, obtainStyledAttributes.getDimensionPixelSize(index, hVar.M));
                        break;
                    case 17:
                        i6 = indexCount;
                        fVar.b(17, obtainStyledAttributes.getDimensionPixelOffset(index, hVar.f1360d));
                        break;
                    case 18:
                        i6 = indexCount;
                        fVar.b(18, obtainStyledAttributes.getDimensionPixelOffset(index, hVar.f1362e));
                        break;
                    case 19:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.f1364f), 19);
                        break;
                    case 20:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.f1386v), 20);
                        break;
                    case 21:
                        i6 = indexCount;
                        fVar.b(21, obtainStyledAttributes.getLayoutDimension(index, hVar.f1358c));
                        break;
                    case 22:
                        i6 = indexCount;
                        fVar.b(22, iArr[obtainStyledAttributes.getInt(index, jVar.a)]);
                        break;
                    case 23:
                        i6 = indexCount;
                        fVar.b(23, obtainStyledAttributes.getLayoutDimension(index, hVar.f1356b));
                        break;
                    case 24:
                        i6 = indexCount;
                        fVar.b(24, obtainStyledAttributes.getDimensionPixelSize(index, hVar.E));
                        break;
                    case 27:
                        i6 = indexCount;
                        fVar.b(27, obtainStyledAttributes.getInt(index, hVar.D));
                        break;
                    case 28:
                        i6 = indexCount;
                        fVar.b(28, obtainStyledAttributes.getDimensionPixelSize(index, hVar.F));
                        break;
                    case 31:
                        i6 = indexCount;
                        fVar.b(31, obtainStyledAttributes.getDimensionPixelSize(index, hVar.J));
                        break;
                    case 34:
                        i6 = indexCount;
                        fVar.b(34, obtainStyledAttributes.getDimensionPixelSize(index, hVar.G));
                        break;
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.f1387w), 37);
                        break;
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        i6 = indexCount;
                        int resourceId = obtainStyledAttributes.getResourceId(index, gVar.a);
                        gVar.a = resourceId;
                        fVar.b(38, resourceId);
                        break;
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.T), 39);
                        break;
                    case 40:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.S), 40);
                        break;
                    case 41:
                        i6 = indexCount;
                        fVar.b(41, obtainStyledAttributes.getInt(index, hVar.U));
                        break;
                    case 42:
                        i6 = indexCount;
                        fVar.b(42, obtainStyledAttributes.getInt(index, hVar.V));
                        break;
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, jVar.f1400c), 43);
                        break;
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        i6 = indexCount;
                        fVar.d(44, true);
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.f1412m), 44);
                        break;
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, kVar.f1403b), 45);
                        break;
                    case 46:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, kVar.f1404c), 46);
                        break;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, kVar.f1405d), 47);
                        break;
                    case 48:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, kVar.f1406e), 48);
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.f1407f), 49);
                        break;
                    case 50:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.f1408g), 50);
                        break;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.f1410i), 51);
                        break;
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.j), 52);
                        break;
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getDimension(index, kVar.k), 53);
                        break;
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        i6 = indexCount;
                        fVar.b(54, obtainStyledAttributes.getInt(index, hVar.W));
                        break;
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        i6 = indexCount;
                        fVar.b(55, obtainStyledAttributes.getInt(index, hVar.X));
                        break;
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        i6 = indexCount;
                        fVar.b(56, obtainStyledAttributes.getDimensionPixelSize(index, hVar.Y));
                        break;
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                        i6 = indexCount;
                        fVar.b(57, obtainStyledAttributes.getDimensionPixelSize(index, hVar.Z));
                        break;
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                        i6 = indexCount;
                        fVar.b(58, obtainStyledAttributes.getDimensionPixelSize(index, hVar.a0));
                        break;
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        i6 = indexCount;
                        fVar.b(59, obtainStyledAttributes.getDimensionPixelSize(index, hVar.f1357b0));
                        break;
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, kVar.a), 60);
                        break;
                    case 62:
                        i6 = indexCount;
                        fVar.b(62, obtainStyledAttributes.getDimensionPixelSize(index, hVar.f1390z));
                        break;
                    case ys.l.a /* 63 */:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, hVar.A), 63);
                        break;
                    case 64:
                        i6 = indexCount;
                        fVar.b(64, h(obtainStyledAttributes, index, iVar.a));
                        break;
                    case 65:
                        i6 = indexCount;
                        if (obtainStyledAttributes.peekValue(index).type == 3) {
                            fVar.c(65, obtainStyledAttributes.getString(index));
                            break;
                        } else {
                            fVar.c(65, strArr[obtainStyledAttributes.getInteger(index, 0)]);
                            break;
                        }
                    case 66:
                        i6 = indexCount;
                        fVar.b(66, obtainStyledAttributes.getInt(index, 0));
                        break;
                    case 67:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, iVar.f1394e), 67);
                        break;
                    case 68:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, jVar.f1401d), 68);
                        break;
                    case 69:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, 1.0f), 69);
                        break;
                    case 70:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, 1.0f), 70);
                        break;
                    case 71:
                        i6 = indexCount;
                        Log.e("ConstraintSet", "CURRENTLY UNSUPPORTED");
                        break;
                    case 72:
                        i6 = indexCount;
                        fVar.b(72, obtainStyledAttributes.getInt(index, hVar.f1363e0));
                        break;
                    case 73:
                        i6 = indexCount;
                        fVar.b(73, obtainStyledAttributes.getDimensionPixelSize(index, hVar.f1365f0));
                        break;
                    case 74:
                        i6 = indexCount;
                        fVar.c(74, obtainStyledAttributes.getString(index));
                        break;
                    case 75:
                        i6 = indexCount;
                        fVar.d(75, obtainStyledAttributes.getBoolean(index, hVar.f1376m0));
                        break;
                    case 76:
                        i6 = indexCount;
                        fVar.b(76, obtainStyledAttributes.getInt(index, iVar.f1392c));
                        break;
                    case 77:
                        i6 = indexCount;
                        fVar.c(77, obtainStyledAttributes.getString(index));
                        break;
                    case 78:
                        i6 = indexCount;
                        fVar.b(78, obtainStyledAttributes.getInt(index, jVar.f1399b));
                        break;
                    case 79:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, iVar.f1393d), 79);
                        break;
                    case 80:
                        i6 = indexCount;
                        fVar.d(80, obtainStyledAttributes.getBoolean(index, hVar.f1372k0));
                        break;
                    case 81:
                        i6 = indexCount;
                        fVar.d(81, obtainStyledAttributes.getBoolean(index, hVar.f1374l0));
                        break;
                    case 82:
                        i6 = indexCount;
                        fVar.b(82, obtainStyledAttributes.getInteger(index, iVar.f1391b));
                        break;
                    case 83:
                        i6 = indexCount;
                        fVar.b(83, h(obtainStyledAttributes, index, kVar.f1409h));
                        break;
                    case 84:
                        i6 = indexCount;
                        fVar.b(84, obtainStyledAttributes.getInteger(index, iVar.f1396g));
                        break;
                    case 85:
                        i6 = indexCount;
                        fVar.a(obtainStyledAttributes.getFloat(index, iVar.f1395f), 85);
                        break;
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                        i6 = indexCount;
                        int i12 = obtainStyledAttributes.peekValue(index).type;
                        if (i12 == 1) {
                            int resourceId2 = obtainStyledAttributes.getResourceId(index, -1);
                            iVar.f1398i = resourceId2;
                            fVar.b(89, resourceId2);
                            if (iVar.f1398i != -1) {
                                fVar.b(88, -2);
                                break;
                            }
                        } else if (i12 == 3) {
                            String string = obtainStyledAttributes.getString(index);
                            iVar.f1397h = string;
                            fVar.c(90, string);
                            if (iVar.f1397h.indexOf("/") > 0) {
                                int resourceId3 = obtainStyledAttributes.getResourceId(index, -1);
                                iVar.f1398i = resourceId3;
                                fVar.b(89, resourceId3);
                                fVar.b(88, -2);
                                break;
                            } else {
                                fVar.b(88, -1);
                                break;
                            }
                        } else {
                            fVar.b(88, obtainStyledAttributes.getInteger(index, iVar.f1398i));
                            break;
                        }
                        break;
                    case 87:
                        i6 = indexCount;
                        Log.w("ConstraintSet", "unused attribute 0x" + Integer.toHexString(index) + "   " + sparseIntArray.get(index));
                        break;
                    case 93:
                        i6 = indexCount;
                        fVar.b(93, obtainStyledAttributes.getDimensionPixelSize(index, hVar.K));
                        break;
                    case 94:
                        i6 = indexCount;
                        fVar.b(94, obtainStyledAttributes.getDimensionPixelSize(index, hVar.R));
                        break;
                    case 95:
                        i6 = indexCount;
                        i(fVar, obtainStyledAttributes, index, 0);
                        break;
                    case 96:
                        i6 = indexCount;
                        i(fVar, obtainStyledAttributes, index, 1);
                        break;
                    case 97:
                        i6 = indexCount;
                        fVar.b(97, obtainStyledAttributes.getInt(index, hVar.f1378n0));
                        break;
                    case 98:
                        i6 = indexCount;
                        int i13 = t0.a.f18151d;
                        if (obtainStyledAttributes.peekValue(index).type == 3) {
                            obtainStyledAttributes.getString(index);
                            break;
                        } else {
                            gVar.a = obtainStyledAttributes.getResourceId(index, gVar.a);
                            break;
                        }
                }
                i10 = i11 + 1;
            }
        } else {
            int i14 = 0;
            for (int indexCount2 = obtainStyledAttributes.getIndexCount(); i14 < indexCount2; indexCount2 = i5) {
                int index2 = obtainStyledAttributes.getIndex(i14);
                if (index2 != 1 && 23 != index2) {
                    if (24 != index2) {
                        iVar.getClass();
                        hVar.getClass();
                        kVar.getClass();
                    }
                }
                switch (sparseIntArray.get(index2)) {
                    case 1:
                        i5 = indexCount2;
                        hVar.f1379o = h(obtainStyledAttributes, index2, hVar.f1379o);
                        continue;
                    case 2:
                        i5 = indexCount2;
                        hVar.H = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.H);
                        continue;
                    case 3:
                        i5 = indexCount2;
                        hVar.f1377n = h(obtainStyledAttributes, index2, hVar.f1377n);
                        continue;
                    case 4:
                        i5 = indexCount2;
                        hVar.f1375m = h(obtainStyledAttributes, index2, hVar.f1375m);
                        continue;
                    case 5:
                        i5 = indexCount2;
                        hVar.f1388x = obtainStyledAttributes.getString(index2);
                        continue;
                    case 6:
                        i5 = indexCount2;
                        hVar.B = obtainStyledAttributes.getDimensionPixelOffset(index2, hVar.B);
                        continue;
                    case 7:
                        i5 = indexCount2;
                        hVar.C = obtainStyledAttributes.getDimensionPixelOffset(index2, hVar.C);
                        continue;
                    case 8:
                        i5 = indexCount2;
                        hVar.I = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.I);
                        continue;
                    case 9:
                        i5 = indexCount2;
                        hVar.f1385u = h(obtainStyledAttributes, index2, hVar.f1385u);
                        continue;
                    case 10:
                        i5 = indexCount2;
                        hVar.f1384t = h(obtainStyledAttributes, index2, hVar.f1384t);
                        continue;
                    case 11:
                        i5 = indexCount2;
                        hVar.O = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.O);
                        continue;
                    case 12:
                        i5 = indexCount2;
                        hVar.P = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.P);
                        continue;
                    case 13:
                        i5 = indexCount2;
                        hVar.L = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.L);
                        continue;
                    case 14:
                        i5 = indexCount2;
                        hVar.N = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.N);
                        continue;
                    case 15:
                        i5 = indexCount2;
                        hVar.Q = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.Q);
                        continue;
                    case 16:
                        i5 = indexCount2;
                        hVar.M = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.M);
                        continue;
                    case 17:
                        i5 = indexCount2;
                        hVar.f1360d = obtainStyledAttributes.getDimensionPixelOffset(index2, hVar.f1360d);
                        continue;
                    case 18:
                        i5 = indexCount2;
                        hVar.f1362e = obtainStyledAttributes.getDimensionPixelOffset(index2, hVar.f1362e);
                        continue;
                    case 19:
                        i5 = indexCount2;
                        hVar.f1364f = obtainStyledAttributes.getFloat(index2, hVar.f1364f);
                        continue;
                    case 20:
                        i5 = indexCount2;
                        hVar.f1386v = obtainStyledAttributes.getFloat(index2, hVar.f1386v);
                        continue;
                    case 21:
                        i5 = indexCount2;
                        hVar.f1358c = obtainStyledAttributes.getLayoutDimension(index2, hVar.f1358c);
                        continue;
                    case 22:
                        i5 = indexCount2;
                        int i15 = obtainStyledAttributes.getInt(index2, jVar.a);
                        jVar.a = i15;
                        jVar.a = iArr[i15];
                        continue;
                    case 23:
                        i5 = indexCount2;
                        hVar.f1356b = obtainStyledAttributes.getLayoutDimension(index2, hVar.f1356b);
                        continue;
                    case 24:
                        i5 = indexCount2;
                        hVar.E = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.E);
                        continue;
                    case 25:
                        i5 = indexCount2;
                        hVar.f1366g = h(obtainStyledAttributes, index2, hVar.f1366g);
                        continue;
                    case 26:
                        i5 = indexCount2;
                        hVar.f1368h = h(obtainStyledAttributes, index2, hVar.f1368h);
                        continue;
                    case 27:
                        i5 = indexCount2;
                        hVar.D = obtainStyledAttributes.getInt(index2, hVar.D);
                        continue;
                    case 28:
                        i5 = indexCount2;
                        hVar.F = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.F);
                        continue;
                    case 29:
                        i5 = indexCount2;
                        hVar.f1369i = h(obtainStyledAttributes, index2, hVar.f1369i);
                        continue;
                    case 30:
                        i5 = indexCount2;
                        hVar.j = h(obtainStyledAttributes, index2, hVar.j);
                        continue;
                    case 31:
                        i5 = indexCount2;
                        hVar.J = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.J);
                        continue;
                    case 32:
                        i5 = indexCount2;
                        hVar.f1382r = h(obtainStyledAttributes, index2, hVar.f1382r);
                        continue;
                    case 33:
                        i5 = indexCount2;
                        hVar.f1383s = h(obtainStyledAttributes, index2, hVar.f1383s);
                        continue;
                    case 34:
                        i5 = indexCount2;
                        hVar.G = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.G);
                        continue;
                    case 35:
                        i5 = indexCount2;
                        hVar.f1373l = h(obtainStyledAttributes, index2, hVar.f1373l);
                        continue;
                    case 36:
                        i5 = indexCount2;
                        hVar.k = h(obtainStyledAttributes, index2, hVar.k);
                        continue;
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                        i5 = indexCount2;
                        hVar.f1387w = obtainStyledAttributes.getFloat(index2, hVar.f1387w);
                        continue;
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                        i5 = indexCount2;
                        gVar.a = obtainStyledAttributes.getResourceId(index2, gVar.a);
                        continue;
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        i5 = indexCount2;
                        hVar.T = obtainStyledAttributes.getFloat(index2, hVar.T);
                        continue;
                    case 40:
                        i5 = indexCount2;
                        hVar.S = obtainStyledAttributes.getFloat(index2, hVar.S);
                        continue;
                    case 41:
                        i5 = indexCount2;
                        hVar.U = obtainStyledAttributes.getInt(index2, hVar.U);
                        continue;
                    case 42:
                        i5 = indexCount2;
                        hVar.V = obtainStyledAttributes.getInt(index2, hVar.V);
                        continue;
                    case ChatViewRecyclerTypes.FORWARD_HEADER /* 43 */:
                        i5 = indexCount2;
                        jVar.f1400c = obtainStyledAttributes.getFloat(index2, jVar.f1400c);
                        continue;
                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                        i5 = indexCount2;
                        kVar.f1411l = true;
                        kVar.f1412m = obtainStyledAttributes.getDimension(index2, kVar.f1412m);
                        continue;
                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                        i5 = indexCount2;
                        kVar.f1403b = obtainStyledAttributes.getFloat(index2, kVar.f1403b);
                        continue;
                    case 46:
                        i5 = indexCount2;
                        kVar.f1404c = obtainStyledAttributes.getFloat(index2, kVar.f1404c);
                        continue;
                    case ChatViewRecyclerTypes.REACTION_ADD_REACTION /* 47 */:
                        i5 = indexCount2;
                        kVar.f1405d = obtainStyledAttributes.getFloat(index2, kVar.f1405d);
                        continue;
                    case 48:
                        i5 = indexCount2;
                        kVar.f1406e = obtainStyledAttributes.getFloat(index2, kVar.f1406e);
                        continue;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_IMAGE /* 49 */:
                        i5 = indexCount2;
                        kVar.f1407f = obtainStyledAttributes.getDimension(index2, kVar.f1407f);
                        continue;
                    case 50:
                        i5 = indexCount2;
                        kVar.f1408g = obtainStyledAttributes.getDimension(index2, kVar.f1408g);
                        continue;
                    case ChatViewRecyclerTypes.MEDIA_ATTACHMENT_MOSAIC_VISUAL_PLACEHOLDER /* 51 */:
                        i5 = indexCount2;
                        kVar.f1410i = obtainStyledAttributes.getDimension(index2, kVar.f1410i);
                        continue;
                    case ChatViewRecyclerTypes.REFERRAL /* 52 */:
                        i5 = indexCount2;
                        kVar.j = obtainStyledAttributes.getDimension(index2, kVar.j);
                        continue;
                    case ChatViewRecyclerTypes.GUILD_PROFILE_INVITE /* 53 */:
                        i5 = indexCount2;
                        kVar.k = obtainStyledAttributes.getDimension(index2, kVar.k);
                        continue;
                    case ChatViewRecyclerTypes.APP_MESSAGE_EMBED /* 54 */:
                        i5 = indexCount2;
                        hVar.W = obtainStyledAttributes.getInt(index2, hVar.W);
                        continue;
                    case ChatViewRecyclerTypes.ACTIVITY_RICH_PRESENCE_INVITE_EMBED /* 55 */:
                        i5 = indexCount2;
                        hVar.X = obtainStyledAttributes.getInt(index2, hVar.X);
                        continue;
                    case ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED /* 56 */:
                        i5 = indexCount2;
                        hVar.Y = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.Y);
                        continue;
                    case ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE /* 57 */:
                        i5 = indexCount2;
                        hVar.Z = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.Z);
                        continue;
                    case ChatViewRecyclerTypes.REFERRAL_REDESIGN /* 58 */:
                        i5 = indexCount2;
                        hVar.a0 = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.a0);
                        continue;
                    case ChatViewRecyclerTypes.VOICE_CHANNEL_LIST_INVITE /* 59 */:
                        i5 = indexCount2;
                        hVar.f1357b0 = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.f1357b0);
                        continue;
                    case ChatViewRecyclerTypes.GIFT_INTENT /* 60 */:
                        i5 = indexCount2;
                        kVar.a = obtainStyledAttributes.getFloat(index2, kVar.a);
                        continue;
                    case 61:
                        i5 = indexCount2;
                        hVar.f1389y = h(obtainStyledAttributes, index2, hVar.f1389y);
                        continue;
                    case 62:
                        i5 = indexCount2;
                        hVar.f1390z = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.f1390z);
                        continue;
                    case ys.l.a /* 63 */:
                        i5 = indexCount2;
                        hVar.A = obtainStyledAttributes.getFloat(index2, hVar.A);
                        continue;
                    case 64:
                        i5 = indexCount2;
                        iVar.a = h(obtainStyledAttributes, index2, iVar.a);
                        continue;
                    case 65:
                        i5 = indexCount2;
                        if (obtainStyledAttributes.peekValue(index2).type == 3) {
                            obtainStyledAttributes.getString(index2);
                            iVar.getClass();
                            break;
                        } else {
                            String str = strArr[obtainStyledAttributes.getInteger(index2, 0)];
                            iVar.getClass();
                            break;
                        }
                    case 66:
                        i5 = indexCount2;
                        obtainStyledAttributes.getInt(index2, 0);
                        iVar.getClass();
                        continue;
                    case 67:
                        i5 = indexCount2;
                        iVar.f1394e = obtainStyledAttributes.getFloat(index2, iVar.f1394e);
                        break;
                    case 68:
                        i5 = indexCount2;
                        jVar.f1401d = obtainStyledAttributes.getFloat(index2, jVar.f1401d);
                        break;
                    case 69:
                        i5 = indexCount2;
                        hVar.f1359c0 = obtainStyledAttributes.getFloat(index2, 1.0f);
                        break;
                    case 70:
                        i5 = indexCount2;
                        hVar.f1361d0 = obtainStyledAttributes.getFloat(index2, 1.0f);
                        break;
                    case 71:
                        i5 = indexCount2;
                        Log.e("ConstraintSet", "CURRENTLY UNSUPPORTED");
                        break;
                    case 72:
                        i5 = indexCount2;
                        hVar.f1363e0 = obtainStyledAttributes.getInt(index2, hVar.f1363e0);
                        break;
                    case 73:
                        i5 = indexCount2;
                        hVar.f1365f0 = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.f1365f0);
                        break;
                    case 74:
                        i5 = indexCount2;
                        hVar.f1370i0 = obtainStyledAttributes.getString(index2);
                        break;
                    case 75:
                        i5 = indexCount2;
                        hVar.f1376m0 = obtainStyledAttributes.getBoolean(index2, hVar.f1376m0);
                        break;
                    case 76:
                        i5 = indexCount2;
                        iVar.f1392c = obtainStyledAttributes.getInt(index2, iVar.f1392c);
                        break;
                    case 77:
                        i5 = indexCount2;
                        hVar.f1371j0 = obtainStyledAttributes.getString(index2);
                        break;
                    case 78:
                        i5 = indexCount2;
                        jVar.f1399b = obtainStyledAttributes.getInt(index2, jVar.f1399b);
                        break;
                    case 79:
                        i5 = indexCount2;
                        iVar.f1393d = obtainStyledAttributes.getFloat(index2, iVar.f1393d);
                        break;
                    case 80:
                        i5 = indexCount2;
                        hVar.f1372k0 = obtainStyledAttributes.getBoolean(index2, hVar.f1372k0);
                        break;
                    case 81:
                        i5 = indexCount2;
                        hVar.f1374l0 = obtainStyledAttributes.getBoolean(index2, hVar.f1374l0);
                        break;
                    case 82:
                        i5 = indexCount2;
                        iVar.f1391b = obtainStyledAttributes.getInteger(index2, iVar.f1391b);
                        break;
                    case 83:
                        i5 = indexCount2;
                        kVar.f1409h = h(obtainStyledAttributes, index2, kVar.f1409h);
                        break;
                    case 84:
                        i5 = indexCount2;
                        iVar.f1396g = obtainStyledAttributes.getInteger(index2, iVar.f1396g);
                        break;
                    case 85:
                        i5 = indexCount2;
                        iVar.f1395f = obtainStyledAttributes.getFloat(index2, iVar.f1395f);
                        break;
                    case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                        i5 = indexCount2;
                        int i16 = obtainStyledAttributes.peekValue(index2).type;
                        if (i16 == 1) {
                            iVar.f1398i = obtainStyledAttributes.getResourceId(index2, -1);
                            break;
                        } else if (i16 == 3) {
                            String string2 = obtainStyledAttributes.getString(index2);
                            iVar.f1397h = string2;
                            if (string2.indexOf("/") > 0) {
                                iVar.f1398i = obtainStyledAttributes.getResourceId(index2, -1);
                                break;
                            }
                        } else {
                            obtainStyledAttributes.getInteger(index2, iVar.f1398i);
                            break;
                        }
                        break;
                    case 87:
                        i5 = indexCount2;
                        Log.w("ConstraintSet", "unused attribute 0x" + Integer.toHexString(index2) + "   " + sparseIntArray.get(index2));
                        break;
                    case 88:
                    case 89:
                    case 90:
                    default:
                        StringBuilder sb3 = new StringBuilder("Unknown attribute 0x");
                        i5 = indexCount2;
                        sb3.append(Integer.toHexString(index2));
                        sb3.append("   ");
                        sb3.append(sparseIntArray.get(index2));
                        Log.w("ConstraintSet", sb3.toString());
                        break;
                    case 91:
                        i5 = indexCount2;
                        hVar.f1380p = h(obtainStyledAttributes, index2, hVar.f1380p);
                        break;
                    case 92:
                        i5 = indexCount2;
                        hVar.f1381q = h(obtainStyledAttributes, index2, hVar.f1381q);
                        break;
                    case 93:
                        i5 = indexCount2;
                        hVar.K = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.K);
                        break;
                    case 94:
                        i5 = indexCount2;
                        hVar.R = obtainStyledAttributes.getDimensionPixelSize(index2, hVar.R);
                        break;
                    case 95:
                        i5 = indexCount2;
                        i(hVar, obtainStyledAttributes, index2, 0);
                        continue;
                    case 96:
                        i5 = indexCount2;
                        i(hVar, obtainStyledAttributes, index2, 1);
                        break;
                    case 97:
                        i5 = indexCount2;
                        hVar.f1378n0 = obtainStyledAttributes.getInt(index2, hVar.f1378n0);
                        break;
                }
                i14++;
            }
        }
        obtainStyledAttributes.recycle();
        return gVar;
    }

    public static int h(TypedArray typedArray, int i5, int i6) {
        int resourceId = typedArray.getResourceId(i5, i6);
        return resourceId == -1 ? typedArray.getInt(i5, -1) : resourceId;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0036  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x0044  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void i(Object obj, TypedArray typedArray, int i5, int i6) {
        int dimensionPixelSize;
        if (obj == null) {
            return;
        }
        int i10 = typedArray.peekValue(i5).type;
        boolean z5 = true;
        int i11 = 0;
        if (i10 == 3) {
            String string = typedArray.getString(i5);
            if (string == null) {
                return;
            }
            int indexOf = string.indexOf(61);
            int length = string.length();
            if (indexOf <= 0 || indexOf >= length - 1) {
                return;
            }
            String substring = string.substring(0, indexOf);
            String substring2 = string.substring(indexOf + 1);
            if (substring2.length() > 0) {
                String trim = substring.trim();
                String trim2 = substring2.trim();
                if ("ratio".equalsIgnoreCase(trim)) {
                    if (obj instanceof ConstraintLayout.LayoutParams) {
                        ConstraintLayout.LayoutParams layoutParams = (ConstraintLayout.LayoutParams) obj;
                        if (i6 == 0) {
                            ((ViewGroup.MarginLayoutParams) layoutParams).width = 0;
                        } else {
                            ((ViewGroup.MarginLayoutParams) layoutParams).height = 0;
                        }
                        j(layoutParams, trim2);
                        return;
                    }
                    if (obj instanceof h) {
                        ((h) obj).f1388x = trim2;
                        return;
                    } else {
                        if (obj instanceof f) {
                            ((f) obj).c(5, trim2);
                            return;
                        }
                        return;
                    }
                }
                try {
                    if ("weight".equalsIgnoreCase(trim)) {
                        float parseFloat = Float.parseFloat(trim2);
                        if (obj instanceof ConstraintLayout.LayoutParams) {
                            ConstraintLayout.LayoutParams layoutParams2 = (ConstraintLayout.LayoutParams) obj;
                            if (i6 == 0) {
                                ((ViewGroup.MarginLayoutParams) layoutParams2).width = 0;
                                layoutParams2.G = parseFloat;
                                return;
                            } else {
                                ((ViewGroup.MarginLayoutParams) layoutParams2).height = 0;
                                layoutParams2.H = parseFloat;
                                return;
                            }
                        }
                        if (obj instanceof h) {
                            h hVar = (h) obj;
                            if (i6 == 0) {
                                hVar.f1356b = 0;
                                hVar.T = parseFloat;
                                return;
                            } else {
                                hVar.f1358c = 0;
                                hVar.S = parseFloat;
                                return;
                            }
                        }
                        if (obj instanceof f) {
                            f fVar = (f) obj;
                            if (i6 == 0) {
                                fVar.b(23, 0);
                                fVar.a(parseFloat, 39);
                                return;
                            } else {
                                fVar.b(21, 0);
                                fVar.a(parseFloat, 40);
                                return;
                            }
                        }
                        return;
                    }
                    if ("parent".equalsIgnoreCase(trim)) {
                        float max = Math.max(0.0f, Math.min(1.0f, Float.parseFloat(trim2)));
                        if (obj instanceof ConstraintLayout.LayoutParams) {
                            ConstraintLayout.LayoutParams layoutParams3 = (ConstraintLayout.LayoutParams) obj;
                            if (i6 == 0) {
                                ((ViewGroup.MarginLayoutParams) layoutParams3).width = 0;
                                layoutParams3.Q = max;
                                layoutParams3.K = 2;
                                return;
                            } else {
                                ((ViewGroup.MarginLayoutParams) layoutParams3).height = 0;
                                layoutParams3.R = max;
                                layoutParams3.L = 2;
                                return;
                            }
                        }
                        if (obj instanceof h) {
                            h hVar2 = (h) obj;
                            if (i6 == 0) {
                                hVar2.f1356b = 0;
                                hVar2.f1359c0 = max;
                                hVar2.W = 2;
                                return;
                            } else {
                                hVar2.f1358c = 0;
                                hVar2.f1361d0 = max;
                                hVar2.X = 2;
                                return;
                            }
                        }
                        if (obj instanceof f) {
                            f fVar2 = (f) obj;
                            if (i6 == 0) {
                                fVar2.b(23, 0);
                                fVar2.b(54, 2);
                                return;
                            } else {
                                fVar2.b(21, 0);
                                fVar2.b(55, 2);
                                return;
                            }
                        }
                        return;
                    }
                    return;
                } catch (NumberFormatException unused) {
                    return;
                }
            }
            return;
        }
        if (i10 != 5) {
            dimensionPixelSize = typedArray.getInt(i5, 0);
            if (dimensionPixelSize == -4) {
                i11 = -2;
            } else if (dimensionPixelSize == -3 || (dimensionPixelSize != -2 && dimensionPixelSize != -1)) {
                z5 = false;
            }
            if (!(obj instanceof ConstraintLayout.LayoutParams)) {
                ConstraintLayout.LayoutParams layoutParams4 = (ConstraintLayout.LayoutParams) obj;
                if (i6 == 0) {
                    ((ViewGroup.MarginLayoutParams) layoutParams4).width = i11;
                    layoutParams4.V = z5;
                    return;
                } else {
                    ((ViewGroup.MarginLayoutParams) layoutParams4).height = i11;
                    layoutParams4.W = z5;
                    return;
                }
            }
            if (obj instanceof h) {
                h hVar3 = (h) obj;
                if (i6 == 0) {
                    hVar3.f1356b = i11;
                    hVar3.f1372k0 = z5;
                    return;
                } else {
                    hVar3.f1358c = i11;
                    hVar3.f1374l0 = z5;
                    return;
                }
            }
            if (obj instanceof f) {
                f fVar3 = (f) obj;
                if (i6 == 0) {
                    fVar3.b(23, i11);
                    fVar3.d(80, z5);
                    return;
                } else {
                    fVar3.b(21, i11);
                    fVar3.d(81, z5);
                    return;
                }
            }
            return;
        }
        dimensionPixelSize = typedArray.getDimensionPixelSize(i5, 0);
        z5 = false;
        i11 = dimensionPixelSize;
        if (!(obj instanceof ConstraintLayout.LayoutParams)) {
        }
    }

    public static void j(ConstraintLayout.LayoutParams layoutParams, String str) {
        if (str != null) {
            int length = str.length();
            int indexOf = str.indexOf(44);
            int i5 = -1;
            if (indexOf > 0 && indexOf < length - 1) {
                String substring = str.substring(0, indexOf);
                i5 = substring.equalsIgnoreCase("W") ? 0 : substring.equalsIgnoreCase("H") ? 1 : -1;
                r2 = indexOf + 1;
            }
            int indexOf2 = str.indexOf(58);
            try {
                if (indexOf2 < 0 || indexOf2 >= length - 1) {
                    String substring2 = str.substring(r2);
                    if (substring2.length() > 0) {
                        Float.parseFloat(substring2);
                    }
                } else {
                    String substring3 = str.substring(r2, indexOf2);
                    String substring4 = str.substring(indexOf2 + 1);
                    if (substring3.length() > 0 && substring4.length() > 0) {
                        float parseFloat = Float.parseFloat(substring3);
                        float parseFloat2 = Float.parseFloat(substring4);
                        if (parseFloat > 0.0f && parseFloat2 > 0.0f) {
                            if (i5 == 1) {
                                Math.abs(parseFloat2 / parseFloat);
                            } else {
                                Math.abs(parseFloat / parseFloat2);
                            }
                        }
                    }
                }
            } catch (NumberFormatException unused) {
            }
        }
        layoutParams.F = str;
    }

    public static String k(int i5) {
        switch (i5) {
            case 1:
                return ViewProps.LEFT;
            case 2:
                return ViewProps.RIGHT;
            case 3:
                return ViewProps.TOP;
            case 4:
                return ViewProps.BOTTOM;
            case 5:
                return "baseline";
            case 6:
                return ViewProps.START;
            case 7:
                return ViewProps.END;
            default:
                return "undefined";
        }
    }

    public final void a(ConstraintLayout constraintLayout) {
        b(constraintLayout);
        constraintLayout.setConstraintSet(null);
        constraintLayout.requestLayout();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    public final void b(ConstraintLayout constraintLayout) {
        HashSet hashSet;
        int i5;
        HashMap hashMap;
        String str;
        ConstraintSet constraintSet = this;
        int childCount = constraintLayout.getChildCount();
        HashMap hashMap2 = constraintSet.f1319c;
        HashSet hashSet2 = new HashSet(hashMap2.keySet());
        int i6 = 0;
        while (i6 < childCount) {
            View childAt = constraintLayout.getChildAt(i6);
            int id2 = childAt.getId();
            if (!hashMap2.containsKey(Integer.valueOf(id2))) {
                StringBuilder sb2 = new StringBuilder("id unknown ");
                try {
                    str = childAt.getContext().getResources().getResourceEntryName(childAt.getId());
                } catch (Exception unused) {
                    str = "UNKNOWN";
                }
                sb2.append(str);
                Log.w("ConstraintSet", sb2.toString());
            } else {
                if (constraintSet.f1318b && id2 == -1) {
                    throw new RuntimeException("All children of ConstraintLayout must have ids to use ConstraintSet");
                }
                if (id2 != -1) {
                    if (hashMap2.containsKey(Integer.valueOf(id2))) {
                        hashSet2.remove(Integer.valueOf(id2));
                        g gVar = (g) hashMap2.get(Integer.valueOf(id2));
                        if (gVar != null) {
                            j jVar = gVar.f1350b;
                            h hVar = gVar.f1352d;
                            k kVar = gVar.f1353e;
                            if (childAt instanceof Barrier) {
                                hVar.f1367g0 = 1;
                                Barrier barrier = (Barrier) childAt;
                                barrier.setId(id2);
                                barrier.setType(hVar.f1363e0);
                                barrier.setMargin(hVar.f1365f0);
                                barrier.setAllowsGoneWidget(hVar.f1376m0);
                                int[] iArr = hVar.h0;
                                if (iArr != null) {
                                    barrier.setReferencedIds(iArr);
                                } else {
                                    String str2 = hVar.f1370i0;
                                    if (str2 != null) {
                                        int[] e9 = e(barrier, str2);
                                        hVar.h0 = e9;
                                        barrier.setReferencedIds(e9);
                                    }
                                }
                            }
                            ConstraintLayout.LayoutParams layoutParams = (ConstraintLayout.LayoutParams) childAt.getLayoutParams();
                            layoutParams.a();
                            gVar.a(layoutParams);
                            HashMap hashMap3 = gVar.f1354f;
                            Class<?> cls = childAt.getClass();
                            for (String str3 : hashMap3.keySet()) {
                                a aVar = (a) hashMap3.get(str3);
                                HashSet hashSet3 = hashSet2;
                                String k = !aVar.a ? a3.e.k("set", str3) : str3;
                                int i10 = i6;
                                try {
                                    int b10 = f0.e.b(aVar.f1320b);
                                    Class cls2 = Float.TYPE;
                                    Class cls3 = Integer.TYPE;
                                    switch (b10) {
                                        case 0:
                                            hashMap = hashMap3;
                                            cls.getMethod(k, cls3).invoke(childAt, Integer.valueOf(aVar.f1321c));
                                            break;
                                        case 1:
                                            hashMap = hashMap3;
                                            cls.getMethod(k, cls2).invoke(childAt, Float.valueOf(aVar.f1322d));
                                            break;
                                        case 2:
                                            hashMap = hashMap3;
                                            cls.getMethod(k, cls3).invoke(childAt, Integer.valueOf(aVar.f1325g));
                                            break;
                                        case 3:
                                            Method method = cls.getMethod(k, Drawable.class);
                                            hashMap = hashMap3;
                                            try {
                                                ColorDrawable colorDrawable = new ColorDrawable();
                                                colorDrawable.setColor(aVar.f1325g);
                                                method.invoke(childAt, colorDrawable);
                                            } catch (IllegalAccessException e10) {
                                                e = e10;
                                                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m(" Custom Attribute \"", str3, "\" not found on ");
                                                m5.append(cls.getName());
                                                Log.e("TransitionLayout", m5.toString());
                                                e.printStackTrace();
                                                hashSet2 = hashSet3;
                                                i6 = i10;
                                                hashMap3 = hashMap;
                                            } catch (NoSuchMethodException e11) {
                                                e = e11;
                                                Log.e("TransitionLayout", e.getMessage());
                                                Log.e("TransitionLayout", " Custom Attribute \"" + str3 + "\" not found on " + cls.getName());
                                                Log.e("TransitionLayout", cls.getName() + " must have a method " + k);
                                                hashSet2 = hashSet3;
                                                i6 = i10;
                                                hashMap3 = hashMap;
                                            } catch (InvocationTargetException e12) {
                                                e = e12;
                                                StringBuilder m6 = com.discord.chat.bridge.botuikit.a.m(" Custom Attribute \"", str3, "\" not found on ");
                                                m6.append(cls.getName());
                                                Log.e("TransitionLayout", m6.toString());
                                                e.printStackTrace();
                                                hashSet2 = hashSet3;
                                                i6 = i10;
                                                hashMap3 = hashMap;
                                            }
                                        case 4:
                                            cls.getMethod(k, CharSequence.class).invoke(childAt, aVar.f1323e);
                                            hashMap = hashMap3;
                                            break;
                                        case 5:
                                            cls.getMethod(k, Boolean.TYPE).invoke(childAt, Boolean.valueOf(aVar.f1324f));
                                            hashMap = hashMap3;
                                            break;
                                        case 6:
                                            cls.getMethod(k, cls2).invoke(childAt, Float.valueOf(aVar.f1322d));
                                            hashMap = hashMap3;
                                            break;
                                        case 7:
                                            cls.getMethod(k, cls3).invoke(childAt, Integer.valueOf(aVar.f1321c));
                                            hashMap = hashMap3;
                                            break;
                                        default:
                                            hashMap = hashMap3;
                                            break;
                                    }
                                } catch (IllegalAccessException e13) {
                                    e = e13;
                                    hashMap = hashMap3;
                                } catch (NoSuchMethodException e14) {
                                    e = e14;
                                    hashMap = hashMap3;
                                } catch (InvocationTargetException e15) {
                                    e = e15;
                                    hashMap = hashMap3;
                                }
                                hashSet2 = hashSet3;
                                i6 = i10;
                                hashMap3 = hashMap;
                            }
                            hashSet = hashSet2;
                            i5 = i6;
                            childAt.setLayoutParams(layoutParams);
                            if (jVar.f1399b == 0) {
                                childAt.setVisibility(jVar.a);
                            }
                            childAt.setAlpha(jVar.f1400c);
                            childAt.setRotation(kVar.a);
                            childAt.setRotationX(kVar.f1403b);
                            childAt.setRotationY(kVar.f1404c);
                            childAt.setScaleX(kVar.f1405d);
                            childAt.setScaleY(kVar.f1406e);
                            if (kVar.f1409h != -1) {
                                if (((View) childAt.getParent()).findViewById(kVar.f1409h) != null) {
                                    float bottom = (r0.getBottom() + r0.getTop()) / 2.0f;
                                    float right = (r0.getRight() + r0.getLeft()) / 2.0f;
                                    if (childAt.getRight() - childAt.getLeft() > 0 && childAt.getBottom() - childAt.getTop() > 0) {
                                        childAt.setPivotX(right - childAt.getLeft());
                                        childAt.setPivotY(bottom - childAt.getTop());
                                    }
                                }
                            } else {
                                if (!Float.isNaN(kVar.f1407f)) {
                                    childAt.setPivotX(kVar.f1407f);
                                }
                                if (!Float.isNaN(kVar.f1408g)) {
                                    childAt.setPivotY(kVar.f1408g);
                                }
                            }
                            childAt.setTranslationX(kVar.f1410i);
                            childAt.setTranslationY(kVar.j);
                            childAt.setTranslationZ(kVar.k);
                            if (kVar.f1411l) {
                                childAt.setElevation(kVar.f1412m);
                            }
                        }
                    } else {
                        hashSet = hashSet2;
                        i5 = i6;
                        Log.v("ConstraintSet", "WARNING NO CONSTRAINTS for view " + id2);
                    }
                    i6 = i5 + 1;
                    constraintSet = this;
                    hashSet2 = hashSet;
                }
            }
            hashSet = hashSet2;
            i5 = i6;
            i6 = i5 + 1;
            constraintSet = this;
            hashSet2 = hashSet;
        }
        Iterator it = hashSet2.iterator();
        while (it.hasNext()) {
            Integer num = (Integer) it.next();
            g gVar2 = (g) hashMap2.get(num);
            if (gVar2 != null) {
                h hVar2 = gVar2.f1352d;
                if (hVar2.f1367g0 == 1) {
                    Barrier barrier2 = new Barrier(constraintLayout.getContext());
                    barrier2.setId(num.intValue());
                    int[] iArr2 = hVar2.h0;
                    if (iArr2 != null) {
                        barrier2.setReferencedIds(iArr2);
                    } else {
                        String str4 = hVar2.f1370i0;
                        if (str4 != null) {
                            int[] e16 = e(barrier2, str4);
                            hVar2.h0 = e16;
                            barrier2.setReferencedIds(e16);
                        }
                    }
                    barrier2.setType(hVar2.f1363e0);
                    barrier2.setMargin(hVar2.f1365f0);
                    ConstraintLayout.LayoutParams generateDefaultLayoutParams = constraintLayout.generateDefaultLayoutParams();
                    barrier2.k();
                    gVar2.a(generateDefaultLayoutParams);
                    constraintLayout.addView(barrier2, generateDefaultLayoutParams);
                }
                if (hVar2.a) {
                    View guideline = new Guideline(constraintLayout.getContext());
                    guideline.setId(num.intValue());
                    ConstraintLayout.LayoutParams generateDefaultLayoutParams2 = constraintLayout.generateDefaultLayoutParams();
                    gVar2.a(generateDefaultLayoutParams2);
                    constraintLayout.addView(guideline, generateDefaultLayoutParams2);
                }
            }
        }
        for (int i11 = 0; i11 < childCount; i11++) {
            View childAt2 = constraintLayout.getChildAt(i11);
            if (childAt2 instanceof b) {
                ((b) childAt2).f(constraintLayout);
            }
        }
    }

    public final void c(ConstraintLayout constraintLayout) {
        int i5;
        HashMap hashMap;
        HashMap hashMap2;
        ConstraintSet constraintSet = this;
        int childCount = constraintLayout.getChildCount();
        HashMap hashMap3 = constraintSet.f1319c;
        hashMap3.clear();
        int i6 = 0;
        while (i6 < childCount) {
            View childAt = constraintLayout.getChildAt(i6);
            ConstraintLayout.LayoutParams layoutParams = (ConstraintLayout.LayoutParams) childAt.getLayoutParams();
            int id2 = childAt.getId();
            if (constraintSet.f1318b && id2 == -1) {
                throw new RuntimeException("All children of ConstraintLayout must have ids to use ConstraintSet");
            }
            if (!hashMap3.containsKey(Integer.valueOf(id2))) {
                hashMap3.put(Integer.valueOf(id2), new g());
            }
            g gVar = (g) hashMap3.get(Integer.valueOf(id2));
            if (gVar == null) {
                i5 = childCount;
                hashMap = hashMap3;
            } else {
                j jVar = gVar.f1350b;
                h hVar = gVar.f1352d;
                k kVar = gVar.f1353e;
                HashMap hashMap4 = new HashMap();
                Class<?> cls = childAt.getClass();
                HashMap hashMap5 = constraintSet.a;
                for (String str : hashMap5.keySet()) {
                    a aVar = (a) hashMap5.get(str);
                    int i10 = childCount;
                    try {
                        if (str.equals("BackgroundColor")) {
                            hashMap2 = hashMap3;
                            try {
                                hashMap4.put(str, new a(aVar, Integer.valueOf(((ColorDrawable) childAt.getBackground()).getColor())));
                            } catch (IllegalAccessException e9) {
                                e = e9;
                                e.printStackTrace();
                                childCount = i10;
                                hashMap3 = hashMap2;
                            } catch (NoSuchMethodException e10) {
                                e = e10;
                                e.printStackTrace();
                                childCount = i10;
                                hashMap3 = hashMap2;
                            } catch (InvocationTargetException e11) {
                                e = e11;
                                e.printStackTrace();
                                childCount = i10;
                                hashMap3 = hashMap2;
                            }
                        } else {
                            hashMap2 = hashMap3;
                            hashMap4.put(str, new a(aVar, cls.getMethod("getMap" + str, null).invoke(childAt, null)));
                        }
                    } catch (IllegalAccessException e12) {
                        e = e12;
                        hashMap2 = hashMap3;
                    } catch (NoSuchMethodException e13) {
                        e = e13;
                        hashMap2 = hashMap3;
                    } catch (InvocationTargetException e14) {
                        e = e14;
                        hashMap2 = hashMap3;
                    }
                    childCount = i10;
                    hashMap3 = hashMap2;
                }
                i5 = childCount;
                hashMap = hashMap3;
                gVar.f1354f = hashMap4;
                gVar.a = id2;
                hVar.f1366g = layoutParams.f1272d;
                hVar.f1368h = layoutParams.f1274e;
                hVar.f1369i = layoutParams.f1276f;
                hVar.j = layoutParams.f1278g;
                hVar.k = layoutParams.f1280h;
                hVar.f1373l = layoutParams.f1281i;
                hVar.f1375m = layoutParams.j;
                hVar.f1377n = layoutParams.k;
                hVar.f1379o = layoutParams.f1285l;
                hVar.f1380p = layoutParams.f1287m;
                hVar.f1381q = layoutParams.f1289n;
                hVar.f1382r = layoutParams.f1295r;
                hVar.f1383s = layoutParams.f1296s;
                hVar.f1384t = layoutParams.f1297t;
                hVar.f1385u = layoutParams.f1298u;
                hVar.f1386v = layoutParams.D;
                hVar.f1387w = layoutParams.E;
                hVar.f1388x = layoutParams.F;
                hVar.f1389y = layoutParams.f1291o;
                hVar.f1390z = layoutParams.f1293p;
                hVar.A = layoutParams.f1294q;
                hVar.B = layoutParams.S;
                hVar.C = layoutParams.T;
                hVar.D = layoutParams.U;
                hVar.f1364f = layoutParams.f1270c;
                hVar.f1360d = layoutParams.a;
                hVar.f1362e = layoutParams.f1268b;
                hVar.f1356b = ((ViewGroup.MarginLayoutParams) layoutParams).width;
                hVar.f1358c = ((ViewGroup.MarginLayoutParams) layoutParams).height;
                hVar.E = ((ViewGroup.MarginLayoutParams) layoutParams).leftMargin;
                hVar.F = ((ViewGroup.MarginLayoutParams) layoutParams).rightMargin;
                hVar.G = ((ViewGroup.MarginLayoutParams) layoutParams).topMargin;
                hVar.H = ((ViewGroup.MarginLayoutParams) layoutParams).bottomMargin;
                hVar.K = layoutParams.C;
                hVar.S = layoutParams.H;
                hVar.T = layoutParams.G;
                hVar.V = layoutParams.J;
                hVar.U = layoutParams.I;
                hVar.f1372k0 = layoutParams.V;
                hVar.f1374l0 = layoutParams.W;
                hVar.W = layoutParams.K;
                hVar.X = layoutParams.L;
                hVar.Y = layoutParams.O;
                hVar.Z = layoutParams.P;
                hVar.a0 = layoutParams.M;
                hVar.f1357b0 = layoutParams.N;
                hVar.f1359c0 = layoutParams.Q;
                hVar.f1361d0 = layoutParams.R;
                hVar.f1371j0 = layoutParams.X;
                hVar.M = layoutParams.f1300w;
                hVar.O = layoutParams.f1302y;
                hVar.L = layoutParams.f1299v;
                hVar.N = layoutParams.f1301x;
                hVar.Q = layoutParams.f1303z;
                hVar.P = layoutParams.A;
                hVar.R = layoutParams.B;
                hVar.f1378n0 = layoutParams.Y;
                hVar.I = layoutParams.getMarginEnd();
                hVar.J = layoutParams.getMarginStart();
                jVar.a = childAt.getVisibility();
                jVar.f1400c = childAt.getAlpha();
                kVar.a = childAt.getRotation();
                kVar.f1403b = childAt.getRotationX();
                kVar.f1404c = childAt.getRotationY();
                kVar.f1405d = childAt.getScaleX();
                kVar.f1406e = childAt.getScaleY();
                float pivotX = childAt.getPivotX();
                float pivotY = childAt.getPivotY();
                if (pivotX != 0.0d || pivotY != 0.0d) {
                    kVar.f1407f = pivotX;
                    kVar.f1408g = pivotY;
                }
                kVar.f1410i = childAt.getTranslationX();
                kVar.j = childAt.getTranslationY();
                kVar.k = childAt.getTranslationZ();
                if (kVar.f1411l) {
                    kVar.f1412m = childAt.getElevation();
                }
                if (childAt instanceof Barrier) {
                    Barrier barrier = (Barrier) childAt;
                    hVar.f1376m0 = barrier.getAllowsGoneWidget();
                    hVar.h0 = barrier.getReferencedIds();
                    hVar.f1363e0 = barrier.getType();
                    hVar.f1365f0 = barrier.getMargin();
                }
            }
            i6++;
            constraintSet = this;
            childCount = i5;
            hashMap3 = hashMap;
        }
    }

    public final void d(int i5, int i6, int i10) {
        Integer valueOf = Integer.valueOf(i5);
        HashMap hashMap = this.f1319c;
        if (!hashMap.containsKey(valueOf)) {
            hashMap.put(Integer.valueOf(i5), new g());
        }
        g gVar = (g) hashMap.get(Integer.valueOf(i5));
        if (gVar == null) {
            return;
        }
        h hVar = gVar.f1352d;
        switch (i6) {
            case 1:
                if (i10 == 1) {
                    hVar.f1366g = 0;
                    hVar.f1368h = -1;
                } else {
                    if (i10 != 2) {
                        throw new IllegalArgumentException("Left to " + k(i10) + " undefined");
                    }
                    hVar.f1368h = 0;
                    hVar.f1366g = -1;
                }
                hVar.E = 0;
                return;
            case 2:
                if (i10 == 1) {
                    hVar.f1369i = 0;
                    hVar.j = -1;
                } else {
                    if (i10 != 2) {
                        throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                    }
                    hVar.j = 0;
                    hVar.f1369i = -1;
                }
                hVar.F = 0;
                return;
            case 3:
                if (i10 == 3) {
                    hVar.k = 0;
                    hVar.f1373l = -1;
                    hVar.f1379o = -1;
                    hVar.f1380p = -1;
                    hVar.f1381q = -1;
                } else {
                    if (i10 != 4) {
                        throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                    }
                    hVar.f1373l = 0;
                    hVar.k = -1;
                    hVar.f1379o = -1;
                    hVar.f1380p = -1;
                    hVar.f1381q = -1;
                }
                hVar.G = 0;
                return;
            case 4:
                if (i10 == 4) {
                    hVar.f1377n = 0;
                    hVar.f1375m = -1;
                    hVar.f1379o = -1;
                    hVar.f1380p = -1;
                    hVar.f1381q = -1;
                } else {
                    if (i10 != 3) {
                        throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                    }
                    hVar.f1375m = 0;
                    hVar.f1377n = -1;
                    hVar.f1379o = -1;
                    hVar.f1380p = -1;
                    hVar.f1381q = -1;
                }
                hVar.H = 0;
                return;
            case 5:
                if (i10 == 5) {
                    hVar.f1379o = 0;
                    hVar.f1377n = -1;
                    hVar.f1375m = -1;
                    hVar.k = -1;
                    hVar.f1373l = -1;
                    return;
                }
                if (i10 == 3) {
                    hVar.f1380p = 0;
                    hVar.f1377n = -1;
                    hVar.f1375m = -1;
                    hVar.k = -1;
                    hVar.f1373l = -1;
                    return;
                }
                if (i10 != 4) {
                    throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                }
                hVar.f1381q = 0;
                hVar.f1377n = -1;
                hVar.f1375m = -1;
                hVar.k = -1;
                hVar.f1373l = -1;
                return;
            case 6:
                if (i10 == 6) {
                    hVar.f1383s = 0;
                    hVar.f1382r = -1;
                } else {
                    if (i10 != 7) {
                        throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                    }
                    hVar.f1382r = 0;
                    hVar.f1383s = -1;
                }
                hVar.J = 0;
                return;
            case 7:
                if (i10 == 7) {
                    hVar.f1385u = 0;
                    hVar.f1384t = -1;
                } else {
                    if (i10 != 6) {
                        throw new IllegalArgumentException("right to " + k(i10) + " undefined");
                    }
                    hVar.f1384t = 0;
                    hVar.f1385u = -1;
                }
                hVar.I = 0;
                return;
            default:
                throw new IllegalArgumentException(k(i6) + " to " + k(i10) + " unknown");
        }
    }

    public final void g(Context context, int i5) {
        XmlResourceParser xml = context.getResources().getXml(i5);
        try {
            for (int eventType = xml.getEventType(); eventType != 1; eventType = xml.next()) {
                if (eventType == 0) {
                    xml.getName();
                } else if (eventType == 2) {
                    String name = xml.getName();
                    g f2 = f(context, Xml.asAttributeSet(xml), false);
                    if (name.equalsIgnoreCase("Guideline")) {
                        f2.f1352d.a = true;
                    }
                    this.f1319c.put(Integer.valueOf(f2.a), f2);
                }
            }
        } catch (IOException e9) {
            e9.printStackTrace();
        } catch (XmlPullParserException e10) {
            e10.printStackTrace();
        }
    }
}
