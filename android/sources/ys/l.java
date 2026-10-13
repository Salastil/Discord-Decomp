package ys;

import android.graphics.Path;
import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import android.os.SystemClock;
import bs.a1;
import bs.h1;
import ch.u;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.google.android.exoplayer2.metadata.Metadata;
import com.swmansion.reanimated.BuildConfig;
import di.s;
import ge.p;
import ip.q;
import ip.s0;
import java.io.EOFException;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.MappedByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.logging.Level;
import java.util.logging.Logger;
import ke.w;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Encoder;
import rq.o;
import yq.y;

/* loaded from: classes3.dex */
public abstract class l {
    public static final int a = 63;

    public static void A(Parcel parcel, int i5, byte[] bArr) {
        if (bArr == null) {
            return;
        }
        int I = I(i5, parcel);
        parcel.writeByteArray(bArr);
        J(I, parcel);
    }

    public static void B(Parcel parcel, int i5, Integer num) {
        if (num == null) {
            return;
        }
        H(parcel, i5, 4);
        parcel.writeInt(num.intValue());
    }

    public static void C(Parcel parcel, int i5, Parcelable parcelable, int i6) {
        if (parcelable == null) {
            return;
        }
        int I = I(i5, parcel);
        parcelable.writeToParcel(parcel, i6);
        J(I, parcel);
    }

    public static void D(String str, Parcel parcel, int i5) {
        if (str == null) {
            return;
        }
        int I = I(i5, parcel);
        parcel.writeString(str);
        J(I, parcel);
    }

    public static void E(Parcel parcel, int i5, List list) {
        if (list == null) {
            return;
        }
        int I = I(i5, parcel);
        parcel.writeStringList(list);
        J(I, parcel);
    }

    public static void F(Parcel parcel, int i5, Parcelable[] parcelableArr, int i6) {
        if (parcelableArr == null) {
            return;
        }
        int I = I(i5, parcel);
        parcel.writeInt(parcelableArr.length);
        for (Parcelable parcelable : parcelableArr) {
            if (parcelable == null) {
                parcel.writeInt(0);
            } else {
                int dataPosition = parcel.dataPosition();
                parcel.writeInt(1);
                int dataPosition2 = parcel.dataPosition();
                parcelable.writeToParcel(parcel, i6);
                int dataPosition3 = parcel.dataPosition();
                parcel.setDataPosition(dataPosition);
                parcel.writeInt(dataPosition3 - dataPosition2);
                parcel.setDataPosition(dataPosition3);
            }
        }
        J(I, parcel);
    }

    public static void G(Parcel parcel, int i5, List list) {
        if (list == null) {
            return;
        }
        int I = I(i5, parcel);
        int size = list.size();
        parcel.writeInt(size);
        for (int i6 = 0; i6 < size; i6++) {
            Parcelable parcelable = (Parcelable) list.get(i6);
            if (parcelable == null) {
                parcel.writeInt(0);
            } else {
                int dataPosition = parcel.dataPosition();
                parcel.writeInt(1);
                int dataPosition2 = parcel.dataPosition();
                parcelable.writeToParcel(parcel, 0);
                int dataPosition3 = parcel.dataPosition();
                parcel.setDataPosition(dataPosition);
                parcel.writeInt(dataPosition3 - dataPosition2);
                parcel.setDataPosition(dataPosition3);
            }
        }
        J(I, parcel);
    }

    public static void H(Parcel parcel, int i5, int i6) {
        parcel.writeInt(i5 | (i6 << 16));
    }

    public static int I(int i5, Parcel parcel) {
        parcel.writeInt(i5 | (-65536));
        parcel.writeInt(0);
        return parcel.dataPosition();
    }

    public static void J(int i5, Parcel parcel) {
        int dataPosition = parcel.dataPosition();
        parcel.setDataPosition(i5 - 4);
        parcel.writeInt(dataPosition - i5);
        parcel.setDataPosition(dataPosition);
    }

    public static final long a(int i5, int i6) {
        return (i6 & 4294967295L) | (i5 << 32);
    }

    public static final ArrayList b(ArrayList arrayList) {
        ArrayList arrayList2 = new ArrayList();
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            s sVar = (s) it.next();
            Bundle bundle = new Bundle();
            bundle.putInt("event_type", sVar.a);
            bundle.putLong("event_timestamp", sVar.f7602b);
            arrayList2.add(bundle);
        }
        return arrayList2;
    }

    public static final ExecutorService c(boolean z5) {
        ExecutorService newFixedThreadPool = Executors.newFixedThreadPool(Math.max(2, Math.min(Runtime.getRuntime().availableProcessors() - 1, 4)), new v3.c(z5));
        Intrinsics.checkNotNullExpressionValue(newFixedThreadPool, "newFixedThreadPool(\n    …)),\n        factory\n    )");
        return newFixedThreadPool;
    }

    public static final Collection e(Collection collection, Collection collection2) {
        Intrinsics.checkNotNullParameter(collection2, "collection");
        if (collection2.isEmpty()) {
            return collection;
        }
        if (collection == null) {
            return collection2;
        }
        if (collection instanceof LinkedHashSet) {
            ((LinkedHashSet) collection).addAll(collection2);
            return collection;
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet(collection);
        linkedHashSet.addAll(collection2);
        return linkedHashSet;
    }

    public static final boolean f(int i5, int i6) {
        return (i6 == 0 || (i5 & i6) == 0) ? false : true;
    }

    public static float[] g(float[] fArr, int i5) {
        if (i5 < 0) {
            throw new IllegalArgumentException();
        }
        int length = fArr.length;
        if (length < 0) {
            throw new ArrayIndexOutOfBoundsException();
        }
        int min = Math.min(i5, length);
        float[] fArr2 = new float[i5];
        System.arraycopy(fArr, 0, fArr2, 0, min);
        return fArr2;
    }

    public static u h(p pVar) {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        int length = pVar.length();
        int i5 = 0;
        for (int i6 = 0; i6 < length; i6++) {
            if (pVar.a(i6, elapsedRealtime)) {
                i5++;
            }
        }
        return new u(1, 0, length, i5);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x0042  */
    /* JADX WARN: Removed duplicated region for block: B:35:0x0096 A[Catch: NumberFormatException -> 0x00aa, LOOP:3: B:25:0x0068->B:35:0x0096, LOOP_END, TryCatch #0 {NumberFormatException -> 0x00aa, blocks: (B:22:0x0054, B:25:0x0068, B:27:0x006e, B:31:0x007a, B:35:0x0096, B:39:0x009c, B:44:0x00b1, B:56:0x00b4), top: B:21:0x0054 }] */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0095 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x009c A[Catch: NumberFormatException -> 0x00aa, TryCatch #0 {NumberFormatException -> 0x00aa, blocks: (B:22:0x0054, B:25:0x0068, B:27:0x006e, B:31:0x007a, B:35:0x0096, B:39:0x009c, B:44:0x00b1, B:56:0x00b4), top: B:21:0x0054 }] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00ae  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00b1 A[Catch: NumberFormatException -> 0x00aa, TryCatch #0 {NumberFormatException -> 0x00aa, blocks: (B:22:0x0054, B:25:0x0068, B:27:0x006e, B:31:0x007a, B:35:0x0096, B:39:0x009c, B:44:0x00b1, B:56:0x00b4), top: B:21:0x0054 }] */
    /* JADX WARN: Removed duplicated region for block: B:68:0x00d7 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static b1.e[] i(String str) {
        int i5;
        String trim;
        float[] fArr;
        ArrayList arrayList = new ArrayList();
        int i6 = 0;
        int i10 = 0;
        int i11 = 1;
        while (i11 < str.length()) {
            while (i11 < str.length()) {
                char charAt = str.charAt(i11);
                if ((charAt - 'Z') * (charAt - 'A') > 0) {
                    if ((charAt - 'z') * (charAt - 'a') > 0) {
                        continue;
                        i11++;
                    }
                }
                if (charAt != 'e' && charAt != 'E') {
                    trim = str.substring(i10, i11).trim();
                    if (!trim.isEmpty()) {
                        if (trim.charAt(i6) == 'z' || trim.charAt(i6) == 'Z') {
                            fArr = new float[i6];
                        } else {
                            try {
                                float[] fArr2 = new float[trim.length()];
                                int length = trim.length();
                                int i12 = i6;
                                int i13 = 1;
                                while (i13 < length) {
                                    int i14 = i6;
                                    int i15 = i14;
                                    int i16 = i15;
                                    int i17 = i16;
                                    for (int i18 = i13; i18 < trim.length(); i18++) {
                                        char charAt2 = trim.charAt(i18);
                                        if (charAt2 != ' ') {
                                            if (charAt2 != 'E' && charAt2 != 'e') {
                                                switch (charAt2) {
                                                    case ChatViewRecyclerTypes.FORWARD_BREADCRUMB /* 44 */:
                                                        break;
                                                    case ChatViewRecyclerTypes.REACTION_BURST_REACTION /* 45 */:
                                                        if (i18 != i13 && i14 == 0) {
                                                            i14 = 0;
                                                            i16 = 1;
                                                            i17 = 1;
                                                            break;
                                                        }
                                                        i14 = 0;
                                                        break;
                                                    case '.':
                                                        if (i15 == 0) {
                                                            i14 = 0;
                                                            i15 = 1;
                                                            break;
                                                        }
                                                        i14 = 0;
                                                        i16 = 1;
                                                        i17 = 1;
                                                        break;
                                                    default:
                                                        i14 = 0;
                                                        break;
                                                }
                                            } else {
                                                i14 = 1;
                                            }
                                            if (i16 == 0) {
                                                if (i13 < i18) {
                                                    fArr2[i12] = Float.parseFloat(trim.substring(i13, i18));
                                                    i12++;
                                                }
                                                i13 = i17 == 0 ? i18 : i18 + 1;
                                                i6 = 0;
                                            }
                                        }
                                        i14 = 0;
                                        i16 = 1;
                                        if (i16 == 0) {
                                        }
                                    }
                                    if (i13 < i18) {
                                    }
                                    if (i17 == 0) {
                                    }
                                    i6 = 0;
                                }
                                fArr = g(fArr2, i12);
                                i6 = 0;
                            } catch (NumberFormatException e9) {
                                throw new RuntimeException(s4.h.f("error in parsing \"", trim, "\""), e9);
                            }
                        }
                        arrayList.add(new b1.e(trim.charAt(i6), fArr));
                    }
                    i10 = i11;
                    i11++;
                    i6 = 0;
                }
                i11++;
            }
            trim = str.substring(i10, i11).trim();
            if (!trim.isEmpty()) {
            }
            i10 = i11;
            i11++;
            i6 = 0;
        }
        if (i11 - i10 != 1 || i10 >= str.length()) {
            i5 = 0;
        } else {
            i5 = 0;
            arrayList.add(new b1.e(str.charAt(i10), new float[0]));
        }
        return (b1.e[]) arrayList.toArray(new b1.e[i5]);
    }

    public static b1.e[] j(b1.e[] eVarArr) {
        b1.e[] eVarArr2 = new b1.e[eVarArr.length];
        for (int i5 = 0; i5 < eVarArr.length; i5++) {
            eVarArr2[i5] = new b1.e(eVarArr[i5]);
        }
        return eVarArr2;
    }

    public static final DeserializationStrategy k(bs.b bVar, CompositeDecoder decoder, String str) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        DeserializationStrategy a10 = bVar.a(decoder, str);
        if (a10 != null) {
            return a10;
        }
        h1.m(str, bVar.c());
        throw null;
    }

    public static final KSerializer l(bs.b bVar, Encoder encoder, Object value) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        KSerializer b10 = bVar.b(encoder, value);
        if (b10 != null) {
            return b10;
        }
        KClass subClass = Reflection.getOrCreateKotlinClass(value.getClass());
        KClass baseClass = bVar.c();
        Intrinsics.checkNotNullParameter(subClass, "subClass");
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        String simpleName = subClass.getSimpleName();
        if (simpleName == null) {
            simpleName = String.valueOf(subClass);
        }
        h1.m(simpleName, baseClass);
        throw null;
    }

    public static int m(int i5) {
        if (i5 == 1) {
            return 0;
        }
        if (i5 == 2) {
            return 1;
        }
        if (i5 == 4) {
            return 2;
        }
        if (i5 == 8) {
            return 3;
        }
        if (i5 == 16) {
            return 4;
        }
        if (i5 == 32) {
            return 5;
        }
        if (i5 == 64) {
            return 6;
        }
        if (i5 == 128) {
            return 7;
        }
        if (i5 == 256) {
            return 8;
        }
        if (i5 == 512) {
            return 9;
        }
        throw new IllegalArgumentException(k0.d.i(i5, "type needs to be >= FIRST and <= LAST, type="));
    }

    public static String n(String str, Object... objArr) {
        int indexOf;
        String sb2;
        int i5 = 0;
        for (int i6 = 0; i6 < objArr.length; i6++) {
            Object obj = objArr[i6];
            if (obj == null) {
                sb2 = "null";
            } else {
                try {
                    sb2 = obj.toString();
                } catch (Exception e9) {
                    String name = obj.getClass().getName();
                    String hexString = Integer.toHexString(System.identityHashCode(obj));
                    StringBuilder sb3 = new StringBuilder(String.valueOf(hexString).length() + name.length() + 1);
                    sb3.append(name);
                    sb3.append('@');
                    sb3.append(hexString);
                    String sb4 = sb3.toString();
                    Logger logger = Logger.getLogger("com.google.common.base.Strings");
                    Level level = Level.WARNING;
                    String valueOf = String.valueOf(sb4);
                    logger.log(level, valueOf.length() != 0 ? "Exception during lenientFormat for ".concat(valueOf) : new String("Exception during lenientFormat for "), (Throwable) e9);
                    String name2 = e9.getClass().getName();
                    StringBuilder sb5 = new StringBuilder(name2.length() + String.valueOf(sb4).length() + 9);
                    sb5.append("<");
                    sb5.append(sb4);
                    sb5.append(" threw ");
                    sb5.append(name2);
                    sb5.append(">");
                    sb2 = sb5.toString();
                }
            }
            objArr[i6] = sb2;
        }
        StringBuilder sb6 = new StringBuilder((objArr.length * 16) + str.length());
        int i10 = 0;
        while (i5 < objArr.length && (indexOf = str.indexOf("%s", i10)) != -1) {
            sb6.append((CharSequence) str, i10, indexOf);
            sb6.append(objArr[i5]);
            i10 = indexOf + 2;
            i5++;
        }
        sb6.append((CharSequence) str, i10, str.length());
        if (i5 < objArr.length) {
            sb6.append(" [");
            sb6.append(objArr[i5]);
            for (int i11 = i5 + 1; i11 < objArr.length; i11++) {
                sb6.append(", ");
                sb6.append(objArr[i11]);
            }
            sb6.append(']');
        }
        return sb6.toString();
    }

    public static final ir.h o(ArrayList scopes) {
        Intrinsics.checkNotNullParameter(scopes, "scopes");
        ir.h hVar = new ir.h();
        Iterator it = scopes.iterator();
        while (it.hasNext()) {
            Object next = it.next();
            o oVar = (o) next;
            if (oVar != null && oVar != rq.n.f17557b) {
                hVar.add(next);
            }
        }
        return hVar;
    }

    public static final long p(float f2, float f10) {
        return Float.floatToRawIntBits(f10) | (Float.floatToRawIntBits(f2) << 32);
    }

    public static String q(String str, String str2) {
        int length = str.length() - str2.length();
        if (length < 0 || length > 1) {
            throw new IllegalArgumentException("Invalid input received");
        }
        StringBuilder sb2 = new StringBuilder(str2.length() + str.length());
        for (int i5 = 0; i5 < str.length(); i5++) {
            sb2.append(str.charAt(i5));
            if (str2.length() > i5) {
                sb2.append(str2.charAt(i5));
            }
        }
        return sb2.toString();
    }

    public static ConcurrentHashMap r(Map map) {
        if (map == null) {
            return null;
        }
        ConcurrentHashMap concurrentHashMap = new ConcurrentHashMap();
        for (Map.Entry entry : map.entrySet()) {
            if (entry.getKey() != null && entry.getValue() != null) {
                concurrentHashMap.put(entry.getKey(), entry.getValue());
            }
        }
        return concurrentHashMap;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void s(b1.e[] eVarArr, Path path) {
        int i5;
        float[] fArr;
        int i6;
        b1.e eVar;
        int i10;
        char c6;
        float f2;
        float f10;
        b1.e eVar2;
        boolean z5;
        float f11;
        float f12;
        float f13;
        float f14;
        float f15;
        float f16;
        float f17;
        float f18;
        b1.e[] eVarArr2 = eVarArr;
        Path path2 = path;
        float[] fArr2 = new float[6];
        int length = eVarArr2.length;
        int i11 = 0;
        int i12 = 0;
        char c8 = 'm';
        while (i12 < length) {
            b1.e eVar3 = eVarArr2[i12];
            char c10 = eVar3.a;
            float[] fArr3 = eVar3.f2709b;
            float f19 = fArr2[i11];
            float f20 = fArr2[1];
            float f21 = fArr2[2];
            float f22 = fArr2[3];
            float f23 = fArr2[4];
            int i13 = i11;
            float f24 = fArr2[5];
            switch (c10) {
                case 'A':
                case 'a':
                    i5 = 7;
                    break;
                case 'C':
                case 'c':
                    i5 = 6;
                    break;
                case 'H':
                case BuildConfig.REACT_NATIVE_MINOR_VERSION /* 86 */:
                case 'h':
                case 'v':
                    i5 = 1;
                    break;
                case 'Q':
                case 'S':
                case 'q':
                case 's':
                    i5 = 4;
                    break;
                case 'Z':
                case 'z':
                    path2.close();
                    path2.moveTo(f23, f24);
                    f19 = f23;
                    f21 = f19;
                    f20 = f24;
                    f22 = f20;
                default:
                    i5 = 2;
                    break;
            }
            float f25 = f23;
            float f26 = f24;
            float f27 = f19;
            float f28 = f20;
            int i14 = i13;
            while (i14 < fArr3.length) {
                if (c10 == 'A') {
                    fArr = fArr3;
                    i6 = i14;
                    eVar = eVar3;
                    float f29 = f27;
                    float f30 = f28;
                    i10 = i12;
                    c6 = c10;
                    int i15 = i6 + 5;
                    int i16 = i6 + 6;
                    b1.e.a(path, f29, f30, fArr[i15], fArr[i16], fArr[i6], fArr[i6 + 1], fArr[i6 + 2], fArr[i6 + 3] != 0.0f ? 1 : i13, fArr[i6 + 4] != 0.0f ? 1 : i13);
                    f21 = fArr[i15];
                    f2 = fArr[i16];
                    f22 = f2;
                    f10 = f21;
                } else if (c10 == 'C') {
                    fArr = fArr3;
                    i6 = i14;
                    i10 = i12;
                    eVar = eVar3;
                    c6 = c10;
                    int i17 = i6 + 2;
                    int i18 = i6 + 3;
                    int i19 = i6 + 4;
                    int i20 = i6 + 5;
                    path2.cubicTo(fArr[i6], fArr[i6 + 1], fArr[i17], fArr[i18], fArr[i19], fArr[i20]);
                    float f31 = fArr[i19];
                    float f32 = fArr[i20];
                    f21 = fArr[i17];
                    f22 = fArr[i18];
                    f2 = f32;
                    f10 = f31;
                } else if (c10 == 'H') {
                    fArr = fArr3;
                    i6 = i14;
                    eVar = eVar3;
                    c6 = c10;
                    f2 = f28;
                    i10 = i12;
                    path2.lineTo(fArr[i6], f2);
                    f10 = fArr[i6];
                } else if (c10 == 'Q') {
                    fArr = fArr3;
                    i6 = i14;
                    i10 = i12;
                    eVar = eVar3;
                    c6 = c10;
                    int i21 = i6 + 1;
                    int i22 = i6 + 2;
                    int i23 = i6 + 3;
                    path2.quadTo(fArr[i6], fArr[i21], fArr[i22], fArr[i23]);
                    float f33 = fArr[i6];
                    float f34 = fArr[i21];
                    float f35 = fArr[i22];
                    float f36 = fArr[i23];
                    f21 = f33;
                    f22 = f34;
                    f10 = f35;
                    f2 = f36;
                } else if (c10 == 'V') {
                    fArr = fArr3;
                    i6 = i14;
                    i10 = i12;
                    eVar = eVar3;
                    f10 = f27;
                    c6 = c10;
                    path2.lineTo(f10, fArr[i6]);
                    f2 = fArr[i6];
                } else if (c10 != 'a') {
                    if (c10 == 'c') {
                        fArr = fArr3;
                        i6 = i14;
                        int i24 = i6 + 2;
                        int i25 = i6 + 3;
                        int i26 = i6 + 4;
                        int i27 = i6 + 5;
                        path2.rCubicTo(fArr[i6], fArr[i6 + 1], fArr[i24], fArr[i25], fArr[i26], fArr[i27]);
                        float f37 = fArr[i24] + f27;
                        float f38 = fArr[i25] + f28;
                        f27 += fArr[i26];
                        f28 += fArr[i27];
                        f21 = f37;
                        f22 = f38;
                    } else if (c10 != 'h') {
                        if (c10 != 'q') {
                            if (c10 != 'v') {
                                if (c10 == 'L') {
                                    fArr = fArr3;
                                    i6 = i14;
                                    int i28 = i6 + 1;
                                    path2.lineTo(fArr[i6], fArr[i28]);
                                    f10 = fArr[i6];
                                    f2 = fArr[i28];
                                } else if (c10 == 'M') {
                                    fArr = fArr3;
                                    i6 = i14;
                                    f10 = fArr[i6];
                                    f2 = fArr[i6 + 1];
                                    if (i6 > 0) {
                                        path2.lineTo(f10, f2);
                                    } else {
                                        path2.moveTo(f10, f2);
                                        f25 = f10;
                                        f26 = f2;
                                    }
                                } else if (c10 != 'S') {
                                    if (c10 == 'T') {
                                        fArr = fArr3;
                                        i6 = i14;
                                        if (c8 == 'q' || c8 == 't' || c8 == 'Q' || c8 == 'T') {
                                            f27 = (f27 * 2.0f) - f21;
                                            f28 = (f28 * 2.0f) - f22;
                                        }
                                        int i29 = i6 + 1;
                                        path2.quadTo(f27, f28, fArr[i6], fArr[i29]);
                                        f10 = fArr[i6];
                                        f2 = fArr[i29];
                                        eVar = eVar3;
                                        f21 = f27;
                                        f22 = f28;
                                    } else if (c10 == 'l') {
                                        fArr = fArr3;
                                        i6 = i14;
                                        int i30 = i6 + 1;
                                        path2.rLineTo(fArr[i6], fArr[i30]);
                                        f27 += fArr[i6];
                                        f14 = fArr[i30];
                                    } else if (c10 == 'm') {
                                        fArr = fArr3;
                                        i6 = i14;
                                        float f39 = fArr[i6];
                                        f27 += f39;
                                        float f40 = fArr[i6 + 1];
                                        f28 += f40;
                                        if (i6 > 0) {
                                            path2.rLineTo(f39, f40);
                                        } else {
                                            path2.rMoveTo(f39, f40);
                                            eVar = eVar3;
                                            f10 = f27;
                                            f25 = f10;
                                            f2 = f28;
                                            f26 = f2;
                                        }
                                    } else if (c10 != 's') {
                                        if (c10 != 't') {
                                            fArr = fArr3;
                                            i6 = i14;
                                            eVar = eVar3;
                                            f10 = f27;
                                        } else {
                                            if (c8 == 'q' || c8 == 't' || c8 == 'Q' || c8 == 'T') {
                                                f17 = f27 - f21;
                                                f18 = f28 - f22;
                                            } else {
                                                f18 = 0.0f;
                                                f17 = 0.0f;
                                            }
                                            int i31 = i14 + 1;
                                            path2.rQuadTo(f17, f18, fArr3[i14], fArr3[i31]);
                                            float f41 = f17 + f27;
                                            float f42 = f18 + f28;
                                            float f43 = f27 + fArr3[i14];
                                            f28 += fArr3[i31];
                                            f22 = f42;
                                            fArr = fArr3;
                                            i6 = i14;
                                            eVar = eVar3;
                                            f10 = f43;
                                            f21 = f41;
                                        }
                                        f2 = f28;
                                    } else {
                                        if (c8 == 'c' || c8 == 's' || c8 == 'C' || c8 == 'S') {
                                            f15 = f28 - f22;
                                            f16 = f27 - f21;
                                        } else {
                                            f16 = 0.0f;
                                            f15 = 0.0f;
                                        }
                                        int i32 = i14;
                                        int i33 = i32 + 1;
                                        int i34 = i32 + 2;
                                        int i35 = i32 + 3;
                                        fArr = fArr3;
                                        i6 = i32;
                                        path2.rCubicTo(f16, f15, fArr3[i32], fArr3[i33], fArr3[i34], fArr3[i35]);
                                        f11 = fArr[i6] + f27;
                                        f12 = fArr[i33] + f28;
                                        f27 += fArr[i34];
                                        f13 = fArr[i35];
                                    }
                                    i10 = i12;
                                    c6 = c10;
                                } else {
                                    fArr = fArr3;
                                    i6 = i14;
                                    if (c8 == 'c' || c8 == 's' || c8 == 'C' || c8 == 'S') {
                                        f27 = (f27 * 2.0f) - f21;
                                        f28 = (f28 * 2.0f) - f22;
                                    }
                                    float f44 = f27;
                                    float f45 = f28;
                                    int i36 = i6 + 1;
                                    int i37 = i6 + 2;
                                    int i38 = i6 + 3;
                                    path2.cubicTo(f44, f45, fArr[i6], fArr[i36], fArr[i37], fArr[i38]);
                                    f21 = fArr[i6];
                                    f22 = fArr[i36];
                                    f10 = fArr[i37];
                                    f2 = fArr[i38];
                                }
                                i10 = i12;
                                eVar = eVar3;
                                c6 = c10;
                            } else {
                                fArr = fArr3;
                                i6 = i14;
                                path2.rLineTo(0.0f, fArr[i6]);
                                f14 = fArr[i6];
                            }
                            f28 += f14;
                        } else {
                            fArr = fArr3;
                            i6 = i14;
                            int i39 = i6 + 1;
                            int i40 = i6 + 2;
                            int i41 = i6 + 3;
                            path2.rQuadTo(fArr[i6], fArr[i39], fArr[i40], fArr[i41]);
                            f11 = fArr[i6] + f27;
                            f12 = fArr[i39] + f28;
                            f27 += fArr[i40];
                            f13 = fArr[i41];
                        }
                        f28 += f13;
                        f21 = f11;
                        f22 = f12;
                    } else {
                        fArr = fArr3;
                        i6 = i14;
                        path2.rLineTo(fArr[i6], 0.0f);
                        f27 += fArr[i6];
                    }
                    eVar = eVar3;
                    f10 = f27;
                    f2 = f28;
                    i10 = i12;
                    c6 = c10;
                } else {
                    fArr = fArr3;
                    i6 = i14;
                    int i42 = i6 + 5;
                    float f46 = fArr[i42] + f27;
                    int i43 = i6 + 6;
                    float f47 = fArr[i43] + f28;
                    float f48 = fArr[i6];
                    float f49 = fArr[i6 + 1];
                    float f50 = fArr[i6 + 2];
                    if (fArr[i6 + 3] != 0.0f) {
                        eVar2 = eVar3;
                        z5 = 1;
                    } else {
                        eVar2 = eVar3;
                        z5 = i13;
                    }
                    eVar = eVar2;
                    float f51 = f27;
                    c6 = c10;
                    float f52 = f28;
                    i10 = i12;
                    b1.e.a(path, f51, f52, f46, f47, f48, f49, f50, z5, fArr[i6 + 4] != 0.0f ? 1 : i13);
                    f10 = f51 + fArr[i42];
                    f2 = f52 + fArr[i43];
                    f21 = f10;
                    f22 = f2;
                }
                i14 = i6 + i5;
                path2 = path;
                eVar3 = eVar;
                c10 = c6;
                i12 = i10;
                f27 = f10;
                f28 = f2;
                c8 = c10;
                fArr3 = fArr;
            }
            fArr2[i13] = f27;
            fArr2[1] = f28;
            fArr2[2] = f21;
            fArr2[3] = f22;
            fArr2[4] = f25;
            fArr2[5] = f26;
            c8 = eVar3.a;
            i12++;
            eVarArr2 = eVarArr;
            path2 = path;
            i11 = i13;
        }
    }

    public static Metadata t(qc.k kVar, boolean z5) {
        i7.a aVar = z5 ? null : id.i.f10635b;
        w wVar = new w(10);
        Metadata metadata = null;
        int i5 = 0;
        while (true) {
            try {
                kVar.C(wVar.a, 0, 10);
                wVar.F(0);
                if (wVar.w() != 4801587) {
                    break;
                }
                wVar.G(3);
                int t5 = wVar.t();
                int i6 = t5 + 10;
                if (metadata == null) {
                    byte[] bArr = new byte[i6];
                    System.arraycopy(wVar.a, 0, bArr, 0, 10);
                    kVar.C(bArr, 10, t5);
                    metadata = new id.i(aVar).M(bArr, i6);
                } else {
                    kVar.l(t5);
                }
                i5 += i6;
            } catch (EOFException unused) {
            }
        }
        kVar.t();
        kVar.l(i5);
        if (metadata == null || metadata.f5427d.length == 0) {
            return null;
        }
        return metadata;
    }

    public static l2.b u(MappedByteBuffer mappedByteBuffer) {
        long j;
        ByteBuffer duplicate = mappedByteBuffer.duplicate();
        duplicate.order(ByteOrder.BIG_ENDIAN);
        duplicate.position(duplicate.position() + 4);
        int i5 = duplicate.getShort() & 65535;
        if (i5 > 100) {
            throw new IOException("Cannot read metadata.");
        }
        duplicate.position(duplicate.position() + 6);
        int i6 = 0;
        while (true) {
            if (i6 >= i5) {
                j = -1;
                break;
            }
            int i10 = duplicate.getInt();
            duplicate.position(duplicate.position() + 4);
            j = duplicate.getInt() & 4294967295L;
            duplicate.position(duplicate.position() + 4);
            if (1835365473 == i10) {
                break;
            }
            i6++;
        }
        if (j != -1) {
            duplicate.position(duplicate.position() + ((int) (j - duplicate.position())));
            duplicate.position(duplicate.position() + 12);
            long j5 = duplicate.getInt() & 4294967295L;
            for (int i11 = 0; i11 < j5; i11++) {
                int i12 = duplicate.getInt();
                long j7 = duplicate.getInt() & 4294967295L;
                duplicate.getInt();
                if (1164798569 == i12 || 1701669481 == i12) {
                    duplicate.position((int) (j7 + j));
                    l2.b bVar = new l2.b();
                    duplicate.order(ByteOrder.LITTLE_ENDIAN);
                    int position = duplicate.position() + duplicate.getInt(duplicate.position());
                    bVar.f1594v = duplicate;
                    bVar.f1591d = position;
                    int i13 = position - duplicate.getInt(position);
                    bVar.f1592e = i13;
                    bVar.f1593i = ((ByteBuffer) bVar.f1594v).getShort(i13);
                    return bVar;
                }
            }
        }
        throw new IOException("Cannot read metadata.");
    }

    public static e4.l v(w wVar) {
        wVar.G(1);
        int w5 = wVar.w();
        long j = wVar.f13363b + w5;
        int i5 = w5 / 18;
        long[] jArr = new long[i5];
        long[] jArr2 = new long[i5];
        int i6 = 0;
        while (true) {
            if (i6 >= i5) {
                break;
            }
            long o6 = wVar.o();
            if (o6 == -1) {
                jArr = Arrays.copyOf(jArr, i6);
                jArr2 = Arrays.copyOf(jArr2, i6);
                break;
            }
            jArr[i6] = o6;
            jArr2[i6] = wVar.o();
            wVar.G(2);
            i6++;
        }
        wVar.G((int) (j - wVar.f13363b));
        return new e4.l(19, jArr, jArr2);
    }

    public static final boolean w(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        ip.i a10 = yVar.r0().a();
        if (a10 != null) {
            if (kq.g.b(a10)) {
                Intrinsics.checkNotNullParameter(a10, "<this>");
                if (kq.g.f(a10) && !Intrinsics.areEqual(oq.e.g((ip.f) a10), fp.p.f8913h)) {
                    return true;
                }
            }
            if (kq.g.h(yVar)) {
                return true;
            }
        }
        ip.i a11 = yVar.r0().a();
        s0 s0Var = a11 instanceof s0 ? (s0) a11 : null;
        return s0Var != null && w(com.facebook.imagepipeline.nativecode.c.F(s0Var));
    }

    public static final String x(Object obj) {
        Intrinsics.checkNotNullParameter(obj, "obj");
        String name = obj.getClass().isAnonymousClass() ? obj.getClass().getName() : obj.getClass().getSimpleName();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(name);
        sb2.append('@');
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        String format = String.format("%07x", Arrays.copyOf(new Object[]{Integer.valueOf(System.identityHashCode(obj))}, 1));
        Intrinsics.checkNotNullExpressionValue(format, "format(format, *args)");
        sb2.append(format);
        return sb2.toString();
    }

    public static final ip.p y(a1 a1Var) {
        Intrinsics.checkNotNullParameter(a1Var, "<this>");
        if (a1Var == null) {
            rp.p.a(4);
            throw null;
        }
        ip.p pVar = (ip.p) rp.p.f17480d.get(a1Var);
        if (pVar == null) {
            pVar = q.f(a1Var);
        }
        Intrinsics.checkNotNullExpressionValue(pVar, "toDescriptorVisibility(...)");
        return pVar;
    }

    public static void z(Parcel parcel, int i5, Bundle bundle) {
        if (bundle == null) {
            return;
        }
        int I = I(i5, parcel);
        parcel.writeBundle(bundle);
        J(I, parcel);
    }

    public abstract String d();
}
