package m3;

import android.R;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import android.util.AttributeSet;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import androidx.recyclerview.widget.RecyclerView;
import bg.y0;
import bs.h1;
import bs.r1;
import com.facebook.drawee.generic.GenericDraweeHierarchyBuilder;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import cp.w1;
import cq.f1;
import hc.g1;
import ip.m0;
import ip.o0;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.TreeSet;
import java.util.concurrent.ScheduledExecutorService;
import kotlin.Pair;
import kotlin.Result;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlin.reflect.KTypeProjection;
import kotlin.text.StringsKt;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.modules.SerializersModule;
import lp.j0;
import lp.k0;
import lp.l0;
import lp.r0;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okio.ByteString;
import yq.b1;
import yq.c1;
import yq.p0;
import yq.q0;
import yq.s0;
import yq.w0;
import yq.z0;

/* loaded from: classes.dex */
public final class n implements o {

    /* renamed from: b, reason: collision with root package name */
    public static ScheduledExecutorService f14371b;
    public final /* synthetic */ int a;

    public /* synthetic */ n(int i5) {
        this.a = i5;
    }

    public static l0 A(lp.b bVar) {
        if (bVar == null) {
            c(24);
            throw null;
        }
        l0 M0 = l0.M0(bVar, fp.p.f8908c, ip.c.f12126v, bVar.d());
        r0 r0Var = new r0(M0, null, 0, jp.g.a, hq.e.e("value"), oq.e.e(bVar).v(), false, false, false, null, bVar.d());
        List list = Collections.EMPTY_LIST;
        return M0.G0(null, null, list, list, Collections.singletonList(r0Var), bVar.k(), ip.z.f12180e, ip.q.f12159e);
    }

    public static r4.a A0(w4.b bVar, l4.i iVar, int i5) {
        p9.d dVar = new p9.d(10);
        dVar.f16329e = i5;
        ArrayList a = v4.p.a(bVar, iVar, 1.0f, dVar, false);
        for (int i6 = 0; i6 < a.size(); i6++) {
            y4.a aVar = (y4.a) a.get(i6);
            s4.c cVar = (s4.c) aVar.f20651b;
            s4.c cVar2 = (s4.c) aVar.f20652c;
            if (cVar != null && cVar2 != null) {
                float[] fArr = cVar.a;
                int length = fArr.length;
                float[] fArr2 = cVar2.a;
                if (length != fArr2.length) {
                    int length2 = fArr.length + fArr2.length;
                    float[] fArr3 = new float[length2];
                    System.arraycopy(fArr, 0, fArr3, 0, fArr.length);
                    System.arraycopy(fArr2, 0, fArr3, fArr.length, fArr2.length);
                    Arrays.sort(fArr3);
                    float f2 = Float.NaN;
                    int i10 = 0;
                    for (int i11 = 0; i11 < length2; i11++) {
                        float f10 = fArr3[i11];
                        if (f10 != f2) {
                            fArr3[i10] = f10;
                            i10++;
                            f2 = fArr3[i11];
                        }
                    }
                    float[] copyOfRange = Arrays.copyOfRange(fArr3, 0, i10);
                    aVar = new y4.a(cVar.b(copyOfRange), cVar2.b(copyOfRange));
                }
            }
            a.set(i6, aVar);
        }
        return new r4.a(a, 1);
    }

    public static l0 B(lp.b bVar) {
        if (bVar == null) {
            c(22);
            throw null;
        }
        l0 M0 = l0.M0(bVar, fp.p.a, ip.c.f12126v, bVar.d());
        List list = Collections.EMPTY_LIST;
        fp.i e9 = oq.e.e(bVar);
        c1 c1Var = c1.f21013i;
        return M0.G0(null, null, list, list, list, e9.h(bVar.k()), ip.z.f12180e, ip.q.f12159e);
    }

    public static r4.a B0(w4.a aVar, l4.i iVar) {
        return new r4.a(v4.p.a(aVar, iVar, 1.0f, v4.f.f19238v, false), 2);
    }

    public static lp.u C(ip.b bVar, yq.y yVar, jp.h hVar) {
        if (yVar == null) {
            return null;
        }
        return new lp.u(bVar, new sq.b(bVar, yVar), hVar);
    }

    public static r4.a C0(w4.b bVar, l4.i iVar) {
        return new r4.a(v4.p.a(bVar, iVar, x4.h.c(), v4.f.f19240x, true), 3);
    }

    public static b1 D(zq.b bVar, cr.e lowerBound, cr.e upperBound) {
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        if (!(lowerBound instanceof yq.c0)) {
            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + bVar + ", " + Reflection.getOrCreateKotlinClass(bVar.getClass())).toString());
        }
        if (upperBound instanceof yq.c0) {
            return yq.c.e((yq.c0) lowerBound, (yq.c0) upperBound);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + bVar + ", " + Reflection.getOrCreateKotlinClass(bVar.getClass())).toString());
    }

    public static Collection D0(zq.b bVar, cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        p0 w02 = bVar.w0(receiver);
        if (w02 instanceof mq.o) {
            return ((mq.o) w02).a;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static j0 E(m0 m0Var, jp.h hVar, boolean z5, o0 o0Var) {
        if (m0Var == null) {
            c(17);
            throw null;
        }
        if (hVar == null) {
            c(18);
            throw null;
        }
        if (o0Var != null) {
            return new j0(m0Var, hVar, m0Var.e(), m0Var.getVisibility(), z5, false, false, ip.c.f12123d, null, o0Var);
        }
        c(19);
        throw null;
    }

    public static s0 E0(lq.b receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof zq.j) {
            return ((zq.j) receiver).a;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static k0 F(m0 m0Var, jp.h hVar, jp.h hVar2, boolean z5, ip.p pVar, o0 o0Var) {
        if (m0Var == null) {
            c(7);
            throw null;
        }
        if (hVar == null) {
            c(8);
            throw null;
        }
        if (hVar2 == null) {
            c(9);
            throw null;
        }
        if (pVar == null) {
            c(10);
            throw null;
        }
        if (o0Var == null) {
            c(11);
            throw null;
        }
        k0 k0Var = new k0(m0Var, hVar, m0Var.e(), pVar, z5, false, false, ip.c.f12123d, null, o0Var);
        k0Var.K = k0.D0(k0Var, m0Var.getType(), hVar2);
        return k0Var;
    }

    public static byte[] F0(long j, String str) {
        File file = new File(str);
        if (!file.exists()) {
            throw new IOException(s4.h.f("File '", file.getName(), "' doesn't exists"));
        }
        if (!file.isFile()) {
            throw new IOException(s4.h.f("Reading path ", str, " failed, because it's not a file."));
        }
        if (!file.canRead()) {
            throw new IOException(s4.h.f("Reading the item ", str, " failed, because can't read the file."));
        }
        if (file.length() > j) {
            throw new IOException(String.format("Reading file failed, because size located at '%s' with %d bytes is bigger than the maximum allowed size of %d bytes.", str, Long.valueOf(file.length()), Long.valueOf(j)));
        }
        FileInputStream fileInputStream = new FileInputStream(str);
        try {
            BufferedInputStream bufferedInputStream = new BufferedInputStream(fileInputStream);
            try {
                ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                    while (true) {
                        int read = bufferedInputStream.read(bArr);
                        if (read == -1) {
                            byte[] byteArray = byteArrayOutputStream.toByteArray();
                            byteArrayOutputStream.close();
                            bufferedInputStream.close();
                            fileInputStream.close();
                            return byteArray;
                        }
                        byteArrayOutputStream.write(bArr, 0, read);
                    }
                } finally {
                }
            } finally {
            }
        } catch (Throwable th2) {
            try {
                fileInputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static boolean G(File file) {
        if (file == null || !file.exists()) {
            return true;
        }
        if (file.isFile()) {
            return file.delete();
        }
        File[] listFiles = file.listFiles();
        if (listFiles == null) {
            return true;
        }
        for (File file2 : listFiles) {
            if (!G(file2)) {
                return false;
            }
        }
        return file.delete();
    }

    public static int G0(et.r source) {
        Intrinsics.checkNotNullParameter(source, "source");
        try {
            long i5 = source.i();
            String y5 = source.y(LongCompanionObject.MAX_VALUE);
            if (i5 >= 0 && i5 <= 2147483647L && y5.length() <= 0) {
                return (int) i5;
            }
            throw new IOException("expected an int but was \"" + i5 + y5 + '\"');
        } catch (NumberFormatException e9) {
            throw new IOException(e9.getMessage());
        }
    }

    public static s0 H(cr.d receiver, int i5) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return (s0) ((yq.y) receiver).l0().get(i5);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static String H0(File file) {
        if (file == null || !file.exists() || !file.isFile() || !file.canRead()) {
            return null;
        }
        StringBuilder sb2 = new StringBuilder();
        BufferedReader bufferedReader = new BufferedReader(new FileReader(file));
        try {
            String readLine = bufferedReader.readLine();
            if (readLine != null) {
                sb2.append(readLine);
            }
            while (true) {
                String readLine2 = bufferedReader.readLine();
                if (readLine2 == null) {
                    bufferedReader.close();
                    return sb2.toString();
                }
                sb2.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
                sb2.append(readLine2);
            }
        } catch (Throwable th2) {
            try {
                bufferedReader.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static /* synthetic */ Collection I(rq.q qVar, rq.f fVar, int i5) {
        if ((i5 & 1) != 0) {
            fVar = rq.f.f17534m;
        }
        rq.o.a.getClass();
        return qVar.e(fVar, rq.l.f17552e);
    }

    public static TypedValue I0(Context context, int i5) {
        TypedValue typedValue = new TypedValue();
        if (context.getTheme().resolveAttribute(i5, typedValue, true)) {
            return typedValue;
        }
        return null;
    }

    public static Drawable J(Context context, TypedArray typedArray, int i5) {
        int resourceId = typedArray.getResourceId(i5, 0);
        if (resourceId == 0) {
            return null;
        }
        return context.getDrawable(resourceId);
    }

    public static boolean J0(Context context, int i5, boolean z5) {
        TypedValue I0 = I0(context, i5);
        return (I0 == null || I0.type != 18) ? z5 : I0.data != 0;
    }

    public static String K(String str, gk.k kVar) {
        try {
            try {
                return gk.m.a(str, kVar);
            } catch (gk.l unused) {
                return gk.m.a(str.substring(0, str.indexOf("_")), kVar);
            }
        } catch (gk.l | IndexOutOfBoundsException unused2) {
            return (String) gk.m.a.get(kVar);
        }
    }

    public static int K0(Context context, int i5) {
        Intrinsics.checkNotNullParameter(context, "context");
        TypedValue typedValue = new TypedValue();
        if (context.getTheme().resolveAttribute(i5, typedValue, true)) {
            return typedValue.data;
        }
        Log.w("ColorUtils", "[RNScreens] Failed to resolve color attribute. Falling back to 0.");
        return 0;
    }

    public static ip.s0 L(cr.h receiver, int i5) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            Object obj = ((p0) receiver).getParameters().get(i5);
            Intrinsics.checkNotNullExpressionValue(obj, "get(...)");
            return (ip.s0) obj;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static TypedValue L0(Context context, String str, int i5) {
        TypedValue I0 = I0(context, i5);
        if (I0 != null) {
            return I0;
        }
        throw new IllegalArgumentException(String.format("%1$s requires a value for the %2$s attribute to be set in your app theme. You can either set the attribute in your theme or update your theme to inherit from Theme.MaterialComponents (or a descendant).", str, context.getResources().getResourceName(i5)));
    }

    public static j9.b M(GenericDraweeHierarchyBuilder genericDraweeHierarchyBuilder) {
        if (genericDraweeHierarchyBuilder.f4497q == null) {
            genericDraweeHierarchyBuilder.f4497q = new j9.b();
        }
        return genericDraweeHierarchyBuilder.f4497q;
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x0098  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x009c  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x00d2  */
    /* JADX WARN: Removed duplicated region for block: B:61:0x00d6  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static nj.b M0(nj.b bVar, int i5, int i6, nj.e eVar) {
        int i10 = i6;
        if (i5 <= 0 || i10 <= 0) {
            throw jj.g.f12795i;
        }
        nj.b bVar2 = new nj.b(i5, i10);
        int i11 = i5 * 2;
        float[] fArr = new float[i11];
        int i12 = 0;
        while (i12 < i10) {
            float f2 = i12 + 0.5f;
            for (int i13 = 0; i13 < i11; i13 += 2) {
                fArr[i13] = (i13 / 2) + 0.5f;
                fArr[i13 + 1] = f2;
            }
            float f10 = eVar.a;
            float f11 = eVar.f15523b;
            float f12 = eVar.f15524c;
            float f13 = eVar.f15525d;
            float f14 = eVar.f15526e;
            float f15 = eVar.f15527f;
            float f16 = eVar.f15528g;
            float f17 = eVar.f15529h;
            float f18 = eVar.f15530i;
            for (int i14 = 0; i14 < i11; i14 += 2) {
                float f19 = fArr[i14];
                int i15 = i14 + 1;
                float f20 = fArr[i15];
                float f21 = (f15 * f20) + (f12 * f19) + f18;
                fArr[i14] = (((f13 * f20) + (f10 * f19)) + f16) / f21;
                fArr[i15] = (((f20 * f14) + (f19 * f11)) + f17) / f21;
            }
            int i16 = bVar.f15510d;
            int i17 = bVar.f15511e;
            boolean z5 = true;
            for (int i18 = 0; i18 < i11 && z5; i18 += 2) {
                int i19 = (int) fArr[i18];
                int i20 = i18 + 1;
                int i21 = (int) fArr[i20];
                if (i19 < -1 || i19 > i16 || i21 < -1 || i21 > i17) {
                    throw jj.g.f12795i;
                }
                if (i19 == -1) {
                    fArr[i18] = 0.0f;
                } else if (i19 == i16) {
                    fArr[i18] = i16 - 1;
                } else {
                    z5 = false;
                    if (i21 != -1) {
                        fArr[i20] = 0.0f;
                    } else if (i21 == i17) {
                        fArr[i20] = i17 - 1;
                    }
                    z5 = true;
                }
                z5 = true;
                if (i21 != -1) {
                }
                z5 = true;
            }
            boolean z6 = true;
            for (int i22 = i11 - 2; i22 >= 0 && z6; i22 -= 2) {
                int i23 = (int) fArr[i22];
                int i24 = i22 + 1;
                int i25 = (int) fArr[i24];
                if (i23 < -1 || i23 > i16 || i25 < -1 || i25 > i17) {
                    throw jj.g.f12795i;
                }
                if (i23 == -1) {
                    fArr[i22] = 0.0f;
                } else if (i23 == i16) {
                    fArr[i22] = i16 - 1;
                } else {
                    z6 = false;
                    if (i25 != -1) {
                        fArr[i24] = 0.0f;
                    } else if (i25 == i17) {
                        fArr[i24] = i17 - 1;
                    }
                    z6 = true;
                }
                z6 = true;
                if (i25 != -1) {
                }
                z6 = true;
            }
            for (int i26 = 0; i26 < i11; i26 += 2) {
                try {
                    if (bVar.b((int) fArr[i26], (int) fArr[i26 + 1])) {
                        bVar2.f(i26 / 2, i12);
                    }
                } catch (ArrayIndexOutOfBoundsException unused) {
                    throw jj.g.f12795i;
                }
            }
            i12++;
            i10 = i6;
        }
        return bVar2;
    }

    public static com.facebook.drawee.drawable.n N(TypedArray typedArray, int i5) {
        switch (typedArray.getInt(i5, -2)) {
            case -1:
                return null;
            case 0:
                return com.facebook.drawee.drawable.o.f4476i;
            case 1:
                return com.facebook.drawee.drawable.o.f4475h;
            case 2:
                return com.facebook.drawee.drawable.o.f4473f;
            case 3:
                return com.facebook.drawee.drawable.o.f4474g;
            case 4:
                return com.facebook.drawee.drawable.o.f4469b;
            case 5:
                return com.facebook.drawee.drawable.o.f4471d;
            case 6:
                return com.facebook.drawee.drawable.o.f4470c;
            case 7:
                return com.facebook.drawee.drawable.o.j;
            case 8:
                return com.facebook.drawee.drawable.o.f4472e;
            default:
                throw new RuntimeException("XML attribute not specified!");
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:20:0x006d, code lost:
    
        if (r6 != null) goto L32;
     */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00a4 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00a5  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x00e8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final KSerializer N0(SerializersModule serializersModule, KType kType, boolean z5) {
        KSerializer kSerializer;
        KSerializer kSerializer2;
        xr.c cVar;
        KClass clazz = h1.i(kType);
        boolean isMarkedNullable = kType.isMarkedNullable();
        List<KTypeProjection> arguments = kType.getArguments();
        ArrayList types = new ArrayList(kotlin.collections.d0.l(arguments, 10));
        for (KTypeProjection kTypeProjection : arguments) {
            Intrinsics.checkNotNullParameter(kTypeProjection, "<this>");
            KType kType2 = kTypeProjection.f13550b;
            if (kType2 == null) {
                throw new IllegalArgumentException(("Star projections in type arguments are not allowed, but had " + kTypeProjection.f13550b).toString());
            }
            types.add(kType2);
        }
        if (types.isEmpty()) {
            if (h1.h(clazz)) {
                SerializersModule.c(serializersModule, clazz);
            }
            r1 r1Var = xr.h.a;
            Intrinsics.checkNotNullParameter(clazz, "clazz");
            kSerializer = !isMarkedNullable ? xr.h.a.c(clazz) : xr.h.f20561b.c(clazz);
            if (kSerializer != null) {
                return kSerializer;
            }
            if (types.isEmpty()) {
                kSerializer2 = zk.a.D(clazz);
                if (kSerializer2 == null) {
                    SerializersModule.c(serializersModule, clazz);
                    if (h1.h(clazz)) {
                        cVar = new xr.c(clazz);
                        kSerializer2 = cVar;
                    }
                    kSerializer2 = null;
                }
                if (kSerializer2 != null) {
                    if (isMarkedNullable) {
                        return nf.e.o(kSerializer2);
                    }
                    Intrinsics.checkNotNull(kSerializer2, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<T of kotlinx.serialization.SerializersKt__SerializersKt.nullable?>");
                    return kSerializer2;
                }
            } else {
                ArrayList E = zk.a.E(serializersModule, types, z5);
                if (E != null) {
                    KSerializer x5 = zk.a.x(clazz, E, new com.facebook.react.uimanager.b(2, types));
                    if (x5 == null) {
                        serializersModule.b(clazz, E);
                        if (h1.h(clazz)) {
                            cVar = new xr.c(clazz);
                            kSerializer2 = cVar;
                            if (kSerializer2 != null) {
                            }
                        }
                        kSerializer2 = null;
                        if (kSerializer2 != null) {
                        }
                    } else {
                        kSerializer2 = x5;
                        if (kSerializer2 != null) {
                        }
                    }
                }
            }
            return null;
        }
        if (!serializersModule.d()) {
            r1 r1Var2 = xr.h.a;
            Intrinsics.checkNotNullParameter(clazz, "clazz");
            Intrinsics.checkNotNullParameter(types, "types");
            Object q5 = !isMarkedNullable ? xr.h.f20562c.q(clazz, types) : xr.h.f20563d.q(clazz, types);
            fo.q qVar = Result.f13476e;
            if (q5 instanceof fo.r) {
                q5 = null;
            }
            kSerializer = (KSerializer) q5;
            if (kSerializer != null) {
            }
        }
        kSerializer = null;
        if (kSerializer != null) {
        }
    }

    public static String O(String tableName, String triggerType) {
        Intrinsics.checkNotNullParameter(tableName, "tableName");
        Intrinsics.checkNotNullParameter(triggerType, "triggerType");
        return "`room_table_modification_trigger_" + tableName + '_' + triggerType + '`';
    }

    public static bd.f O0(int i5, qc.k kVar, ke.w wVar) {
        bd.f b10 = bd.f.b(kVar, wVar);
        while (true) {
            int i6 = b10.a;
            if (i6 == i5) {
                return b10;
            }
            com.discord.chat.bridge.botuikit.a.q(i6, "Ignoring unknown WAV chunk: ", "WavHeaderReader");
            long j = b10.f2806b + 8;
            if (j > 2147483647L) {
                throw g1.c("Chunk is too large (~2GB+) to skip; id: " + i6);
            }
            kVar.u((int) j);
            b10 = bd.f.b(kVar, wVar);
        }
    }

    public static b1 P(zq.b bVar, s0 receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (bVar.t(receiver)) {
            return null;
        }
        if (receiver instanceof s0) {
            return receiver.b().w0();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static zq.a P0(zq.b bVar, cr.e type) {
        Intrinsics.checkNotNullParameter(type, "type");
        if (type instanceof yq.c0) {
            yq.y kotlinType = (yq.y) type;
            Intrinsics.checkNotNullParameter(kotlinType, "kotlinType");
            return new zq.a(bVar, q0.f21064b.f(kotlinType.r0(), kotlinType.l0()).c());
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + type + ", " + Reflection.getOrCreateKotlinClass(type.getClass())).toString());
    }

    public static ip.s0 Q(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            ip.i a = ((p0) receiver).a();
            if (a instanceof ip.s0) {
                return (ip.s0) a;
            }
            return null;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static Collection Q0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            Collection b10 = ((p0) receiver).b();
            Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
            return b10;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static cr.i R(ip.s0 receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver != null) {
            c1 variance = receiver.getVariance();
            Intrinsics.checkNotNullExpressionValue(variance, "getVariance(...)");
            return android.support.v4.media.session.b.d(variance);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static p0 R0(cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            return ((yq.c0) receiver).r0();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static cr.i S(s0 receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof s0) {
            c1 a = receiver.a();
            Intrinsics.checkNotNullExpressionValue(a, "getProjectionKind(...)");
            return android.support.v4.media.session.b.d(a);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static zq.j S0(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof zq.h) {
            return ((zq.h) receiver).f21384i;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean T(cr.d receiver, hq.c fqName) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        if (receiver instanceof yq.y) {
            return ((yq.y) receiver).getAnnotations().r(fqName);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static yq.c0 T0(yq.s receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.s) {
            return receiver.f21069i;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean U(ip.s0 receiver, cr.h hVar) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (hVar == null ? true : hVar instanceof p0) {
            return com.facebook.imagepipeline.nativecode.c.K(receiver, (p0) hVar, 4);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static Set U0(Headers headers) {
        int size = headers.size();
        TreeSet treeSet = null;
        int i5 = 0;
        while (i5 < size) {
            int i6 = i5 + 1;
            if ("Vary".equalsIgnoreCase(headers.b(i5))) {
                String h6 = headers.h(i5);
                if (treeSet == null) {
                    Intrinsics.checkNotNullParameter(StringCompanionObject.INSTANCE, "<this>");
                    Comparator CASE_INSENSITIVE_ORDER = String.CASE_INSENSITIVE_ORDER;
                    Intrinsics.checkNotNullExpressionValue(CASE_INSENSITIVE_ORDER, "CASE_INSENSITIVE_ORDER");
                    treeSet = new TreeSet(CASE_INSENSITIVE_ORDER);
                }
                Iterator it = StringsKt.S(h6, new char[]{','}).iterator();
                while (it.hasNext()) {
                    treeSet.add(StringsKt.b0((String) it.next()).toString());
                }
            }
            i5 = i6;
        }
        return treeSet == null ? kotlin.collections.o0.f13515d : treeSet;
    }

    public static boolean V(cr.e a, cr.e b10) {
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        if (!(a instanceof yq.c0)) {
            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + a + ", " + Reflection.getOrCreateKotlinClass(a.getClass())).toString());
        }
        if (b10 instanceof yq.c0) {
            return ((yq.c0) a).l0() == ((yq.c0) b10).l0();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + b10 + ", " + Reflection.getOrCreateKotlinClass(b10.getClass())).toString());
    }

    public static cr.d V0(zq.b bVar, cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof cr.e) {
            return bVar.h((cr.e) receiver);
        }
        if (!(receiver instanceof yq.s)) {
            throw new IllegalStateException("sealed");
        }
        yq.s sVar = (yq.s) receiver;
        return bVar.d(bVar.h(bVar.D(sVar)), bVar.h(bVar.J(sVar)));
    }

    /* JADX WARN: Code restructure failed: missing block: B:136:0x0202, code lost:
    
        if (r13 != false) goto L132;
     */
    /* JADX WARN: Code restructure failed: missing block: B:137:0x0204, code lost:
    
        r16 = true;
     */
    /* JADX WARN: Code restructure failed: missing block: B:174:0x0228, code lost:
    
        if (r15 != false) goto L132;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static GenericDraweeHierarchyBuilder W(Context context, AttributeSet attributeSet) {
        float f2;
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        int i5;
        int i6;
        boolean z10;
        boolean z11;
        boolean z12;
        int i10;
        Context context2 = context;
        ta.a.D();
        GenericDraweeHierarchyBuilder genericDraweeHierarchyBuilder = new GenericDraweeHierarchyBuilder(context2.getResources());
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = context2.obtainStyledAttributes(attributeSet, c9.a.a);
            try {
                int i11 = 0;
                int i12 = 0;
                boolean z13 = true;
                boolean z14 = true;
                boolean z15 = true;
                boolean z16 = true;
                boolean z17 = true;
                boolean z18 = true;
                boolean z19 = true;
                boolean z20 = true;
                int i13 = 0;
                for (int indexCount = obtainStyledAttributes.getIndexCount(); i12 < indexCount; indexCount = i10) {
                    try {
                        int index = obtainStyledAttributes.getIndex(i12);
                        if (index == 0) {
                            genericDraweeHierarchyBuilder.f4492l = N(obtainStyledAttributes, index);
                        } else if (index == 6) {
                            genericDraweeHierarchyBuilder.f4486d = J(context2, obtainStyledAttributes, index);
                        } else {
                            i10 = indexCount;
                            if (index == 8) {
                                Drawable J = J(context2, obtainStyledAttributes, index);
                                if (J == null) {
                                    genericDraweeHierarchyBuilder.f4496p = null;
                                } else {
                                    StateListDrawable stateListDrawable = new StateListDrawable();
                                    stateListDrawable.addState(new int[]{R.attr.state_pressed}, J);
                                    genericDraweeHierarchyBuilder.f4496p = stateListDrawable;
                                }
                            } else if (index == 10) {
                                genericDraweeHierarchyBuilder.j = J(context2, obtainStyledAttributes, index);
                            } else if (index == 2) {
                                genericDraweeHierarchyBuilder.f4484b = obtainStyledAttributes.getInt(index, 0);
                            } else if (index == 28) {
                                genericDraweeHierarchyBuilder.f4485c = obtainStyledAttributes.getFloat(index, 0.0f);
                            } else if (index == 7) {
                                genericDraweeHierarchyBuilder.f4487e = N(obtainStyledAttributes, index);
                            } else if (index == 12) {
                                genericDraweeHierarchyBuilder.f4488f = J(context2, obtainStyledAttributes, index);
                            } else if (index == 13) {
                                genericDraweeHierarchyBuilder.f4489g = N(obtainStyledAttributes, index);
                            } else if (index == 3) {
                                genericDraweeHierarchyBuilder.f4490h = J(context2, obtainStyledAttributes, index);
                            } else if (index == 4) {
                                genericDraweeHierarchyBuilder.f4491i = N(obtainStyledAttributes, index);
                            } else if (index == 11) {
                                genericDraweeHierarchyBuilder.k = N(obtainStyledAttributes, index);
                            } else if (index == 9) {
                                i11 = obtainStyledAttributes.getInteger(index, i11);
                            } else if (index == 1) {
                                genericDraweeHierarchyBuilder.f4494n = J(context2, obtainStyledAttributes, index);
                            } else if (index == 5) {
                                Drawable J2 = J(context2, obtainStyledAttributes, index);
                                if (J2 == null) {
                                    genericDraweeHierarchyBuilder.f4495o = null;
                                } else {
                                    genericDraweeHierarchyBuilder.f4495o = Arrays.asList(J2);
                                }
                            } else if (index == 14) {
                                M(genericDraweeHierarchyBuilder).f12431b = obtainStyledAttributes.getBoolean(index, false);
                            } else if (index == 24) {
                                i13 = obtainStyledAttributes.getDimensionPixelSize(index, i13);
                            } else {
                                int i14 = i13;
                                if (index == 20) {
                                    z13 = obtainStyledAttributes.getBoolean(index, z13);
                                } else if (index == 21) {
                                    z15 = obtainStyledAttributes.getBoolean(index, z15);
                                } else if (index == 16) {
                                    z19 = obtainStyledAttributes.getBoolean(index, z19);
                                } else if (index == 17) {
                                    z17 = obtainStyledAttributes.getBoolean(index, z17);
                                } else if (index == 22) {
                                    z14 = obtainStyledAttributes.getBoolean(index, z14);
                                } else if (index == 19) {
                                    z16 = obtainStyledAttributes.getBoolean(index, z16);
                                } else if (index == 18) {
                                    z20 = obtainStyledAttributes.getBoolean(index, z20);
                                } else if (index == 15) {
                                    z18 = obtainStyledAttributes.getBoolean(index, z18);
                                } else if (index == 23) {
                                    j9.b M = M(genericDraweeHierarchyBuilder);
                                    M.f12433d = obtainStyledAttributes.getColor(index, 0);
                                    M.a = 1;
                                } else if (index == 27) {
                                    j9.b M2 = M(genericDraweeHierarchyBuilder);
                                    float dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                                    M2.getClass();
                                    i13 = i14;
                                    o8.h.b("the border width cannot be < 0", dimensionPixelSize >= 0.0f);
                                    M2.f12434e = dimensionPixelSize;
                                } else {
                                    i13 = i14;
                                    if (index == 25) {
                                        M(genericDraweeHierarchyBuilder).f12435f = obtainStyledAttributes.getColor(index, 0);
                                    } else if (index == 26) {
                                        j9.b M3 = M(genericDraweeHierarchyBuilder);
                                        float dimensionPixelSize2 = obtainStyledAttributes.getDimensionPixelSize(index, 0);
                                        M3.getClass();
                                        o8.h.b("the padding cannot be < 0", dimensionPixelSize2 >= 0.0f);
                                        M3.f12436g = dimensionPixelSize2;
                                        i12++;
                                        context2 = context;
                                    }
                                }
                                i13 = i14;
                            }
                            i12++;
                            context2 = context;
                        }
                        i10 = indexCount;
                        i12++;
                        context2 = context;
                    } catch (Throwable th2) {
                        th = th2;
                        obtainStyledAttributes.recycle();
                        context.getResources().getConfiguration().getLayoutDirection();
                        throw th;
                    }
                }
                f2 = 0.0f;
                obtainStyledAttributes.recycle();
                if (context.getResources().getConfiguration().getLayoutDirection() == 1) {
                    z10 = z13 && z16;
                    z11 = z15 && z14;
                    z12 = z17 && z20;
                    if (z19) {
                    }
                    z8 = false;
                } else {
                    z10 = z13 && z14;
                    z11 = z15 && z16;
                    z12 = z17 && z18;
                    if (z19) {
                    }
                    z8 = false;
                }
                int i15 = i11;
                z7 = z10;
                i6 = i15;
                z6 = z12;
                z5 = z11;
                i5 = i13;
            } catch (Throwable th3) {
                th = th3;
            }
        } else {
            f2 = 0.0f;
            z5 = true;
            z6 = true;
            z7 = true;
            z8 = true;
            i5 = 0;
            i6 = 0;
        }
        if (genericDraweeHierarchyBuilder.j != null && i6 > 0) {
            genericDraweeHierarchyBuilder.j = new com.facebook.drawee.drawable.b(genericDraweeHierarchyBuilder.j, i6);
        }
        if (i5 > 0) {
            M(genericDraweeHierarchyBuilder).a(z7 ? i5 : f2, z5 ? i5 : f2, z6 ? i5 : f2, z8 ? i5 : f2);
        }
        ta.a.D();
        return genericDraweeHierarchyBuilder;
    }

    public static yq.c0 W0(cr.e receiver, boolean z5) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            return ((yq.c0) receiver).x0(z5);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean X(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return fp.i.I((p0) receiver, fp.o.a);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean Y(int i5, Rect rect, Rect rect2) {
        if (i5 == 17) {
            int i6 = rect.right;
            int i10 = rect2.right;
            return (i6 > i10 || rect.left >= i10) && rect.left > rect2.left;
        }
        if (i5 == 33) {
            int i11 = rect.bottom;
            int i12 = rect2.bottom;
            return (i11 > i12 || rect.top >= i12) && rect.top > rect2.top;
        }
        if (i5 == 66) {
            int i13 = rect.left;
            int i14 = rect2.left;
            return (i13 < i14 || rect.right <= i14) && rect.right < rect2.right;
        }
        if (i5 != 130) {
            throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
        }
        int i15 = rect.top;
        int i16 = rect2.top;
        return (i15 < i16 || rect.bottom <= i16) && rect.bottom < rect2.bottom;
    }

    public static boolean Z(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return ((p0) receiver).a() instanceof ip.f;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean a0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (!(receiver instanceof p0)) {
            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
        }
        ip.i a = ((p0) receiver).a();
        ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
        if (fVar != null) {
            Intrinsics.checkNotNullParameter(fVar, "<this>");
            if (fVar.e() == ip.z.f12180e && fVar.b() != ip.g.f12140i && fVar.b() != ip.g.f12141v && fVar.b() != ip.g.f12142w) {
                return true;
            }
        }
        return false;
    }

    public static boolean b0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return ((p0) receiver).c();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static /* synthetic */ void c(int i5) {
        String str = (i5 == 12 || i5 == 23 || i5 == 25) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 12 || i5 == 23 || i5 == 25) ? 2 : 3];
        switch (i5) {
            case 1:
            case 4:
            case 8:
            case 14:
            case 16:
            case 18:
            case 31:
            case 33:
            case 35:
                objArr[0] = "annotations";
                break;
            case 2:
            case 5:
            case 9:
                objArr[0] = "parameterAnnotations";
                break;
            case 3:
            case 7:
            case 13:
            case 15:
            case 17:
            default:
                objArr[0] = "propertyDescriptor";
                break;
            case 6:
            case 11:
            case 19:
                objArr[0] = "sourceElement";
                break;
            case 10:
                objArr[0] = "visibility";
                break;
            case 12:
            case 23:
            case 25:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/resolve/DescriptorFactory";
                break;
            case 20:
                objArr[0] = "containingClass";
                break;
            case 21:
                objArr[0] = "source";
                break;
            case 22:
            case 24:
            case 26:
                objArr[0] = "enumClass";
                break;
            case 27:
            case 28:
            case 29:
                objArr[0] = "descriptor";
                break;
            case 30:
            case 32:
            case 34:
                objArr[0] = "owner";
                break;
        }
        if (i5 == 12) {
            objArr[1] = "createSetter";
        } else if (i5 == 23) {
            objArr[1] = "createEnumValuesMethod";
        } else if (i5 != 25) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/resolve/DescriptorFactory";
        } else {
            objArr[1] = "createEnumValueOfMethod";
        }
        switch (i5) {
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                objArr[2] = "createSetter";
                break;
            case 12:
            case 23:
            case 25:
                break;
            case 13:
            case 14:
                objArr[2] = "createDefaultGetter";
                break;
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
                objArr[2] = "createGetter";
                break;
            case 20:
            case 21:
                objArr[2] = "createPrimaryConstructorForObject";
                break;
            case 22:
                objArr[2] = "createEnumValuesMethod";
                break;
            case 24:
                objArr[2] = "createEnumValueOfMethod";
                break;
            case 26:
                objArr[2] = "createEnumEntriesProperty";
                break;
            case 27:
                objArr[2] = "isEnumValuesMethod";
                break;
            case 28:
                objArr[2] = "isEnumValueOfMethod";
                break;
            case 29:
                objArr[2] = "isEnumSpecialMethod";
                break;
            case 30:
            case 31:
                objArr[2] = "createExtensionReceiverParameterForCallable";
                break;
            case 32:
            case 33:
                objArr[2] = "createContextReceiverParameterForCallable";
                break;
            case 34:
            case 35:
                objArr[2] = "createContextReceiverParameterForClass";
                break;
            default:
                objArr[2] = "createDefaultSetter";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 12 && i5 != 23 && i5 != 25) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    public static boolean c0(ip.v vVar) {
        if (vVar.b() != ip.c.f12126v) {
            return false;
        }
        ip.l h6 = vVar.h();
        int i5 = kq.e.a;
        return kq.e.n(h6, ip.g.f12140i);
    }

    public static void d(th.u uVar, InputStream inputStream, th.o0 o0Var, long j) {
        th.o0 o0Var2;
        DataInputStream dataInputStream;
        th.u uVar2;
        int readUnsignedShort;
        byte[] bArr = new byte[16384];
        DataInputStream dataInputStream2 = new DataInputStream(new BufferedInputStream(inputStream, RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT));
        int readInt = dataInputStream2.readInt();
        if (readInt != -771763713) {
            throw new y0("Unexpected magic=".concat(String.format("%x", Integer.valueOf(readInt))));
        }
        int read = dataInputStream2.read();
        if (read != 4) {
            throw new y0(k0.d.i(read, "Unexpected version="));
        }
        long j5 = 0;
        while (true) {
            long j7 = j - j5;
            try {
                int read2 = dataInputStream2.read();
                if (read2 == -1) {
                    throw new IOException("Patch file overrun");
                }
                if (read2 == 0) {
                    o0Var.flush();
                    return;
                }
                switch (read2) {
                    case 247:
                        o0Var2 = o0Var;
                        read2 = dataInputStream2.readUnsignedShort();
                        q(bArr, dataInputStream2, o0Var2, read2, j7);
                        j5 += read2;
                        o0Var = o0Var2;
                    case 248:
                        o0Var2 = o0Var;
                        read2 = dataInputStream2.readInt();
                        q(bArr, dataInputStream2, o0Var2, read2, j7);
                        j5 += read2;
                        o0Var = o0Var2;
                    case 249:
                        o0Var2 = o0Var;
                        DataInputStream dataInputStream3 = dataInputStream2;
                        th.u uVar3 = uVar;
                        long readUnsignedShort2 = dataInputStream3.readUnsignedShort();
                        int read3 = dataInputStream3.read();
                        if (read3 == -1) {
                            throw new IOException("Unexpected end of patch");
                        }
                        n(bArr, uVar3, o0Var2, readUnsignedShort2, read3, j7);
                        uVar = uVar3;
                        dataInputStream2 = dataInputStream3;
                        read2 = read3;
                        j5 += read2;
                        o0Var = o0Var2;
                    case androidx.recyclerview.widget.h0.DEFAULT_SWIPE_ANIMATION_DURATION /* 250 */:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        uVar2 = uVar;
                        long readUnsignedShort3 = dataInputStream.readUnsignedShort();
                        readUnsignedShort = dataInputStream.readUnsignedShort();
                        n(bArr, uVar2, o0Var2, readUnsignedShort3, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    case 251:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        uVar2 = uVar;
                        long readUnsignedShort4 = dataInputStream.readUnsignedShort();
                        readUnsignedShort = dataInputStream.readInt();
                        n(bArr, uVar2, o0Var2, readUnsignedShort4, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    case 252:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        uVar2 = uVar;
                        long readInt2 = dataInputStream.readInt();
                        readUnsignedShort = dataInputStream.read();
                        if (readUnsignedShort == -1) {
                            throw new IOException("Unexpected end of patch");
                        }
                        n(bArr, uVar2, o0Var2, readInt2, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    case 253:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        uVar2 = uVar;
                        long readInt3 = dataInputStream.readInt();
                        readUnsignedShort = dataInputStream.readUnsignedShort();
                        n(bArr, uVar2, o0Var2, readInt3, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    case 254:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        uVar2 = uVar;
                        long readInt4 = dataInputStream.readInt();
                        readUnsignedShort = dataInputStream.readInt();
                        n(bArr, uVar2, o0Var2, readInt4, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    case 255:
                        o0Var2 = o0Var;
                        dataInputStream = dataInputStream2;
                        long readLong = dataInputStream.readLong();
                        readUnsignedShort = dataInputStream.readInt();
                        uVar2 = uVar;
                        n(bArr, uVar2, o0Var2, readLong, readUnsignedShort, j7);
                        uVar = uVar2;
                        read2 = readUnsignedShort;
                        dataInputStream2 = dataInputStream;
                        j5 += read2;
                        o0Var = o0Var2;
                    default:
                        o0Var2 = o0Var;
                        try {
                            q(bArr, dataInputStream2, o0Var2, read2, j7);
                            dataInputStream = dataInputStream2;
                            dataInputStream2 = dataInputStream;
                            j5 += read2;
                            o0Var = o0Var2;
                        } catch (Throwable th2) {
                            th = th2;
                            Throwable th3 = th;
                            o0Var2.flush();
                            throw th3;
                        }
                }
            } catch (Throwable th4) {
                th = th4;
                o0Var2 = o0Var;
            }
        }
    }

    public static boolean d0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return yq.c.j((yq.y) receiver);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean e(cr.h c12, cr.h c22) {
        Intrinsics.checkNotNullParameter(c12, "c1");
        Intrinsics.checkNotNullParameter(c22, "c2");
        if (!(c12 instanceof p0)) {
            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + c12 + ", " + Reflection.getOrCreateKotlinClass(c12.getClass())).toString());
        }
        if (c22 instanceof p0) {
            return Intrinsics.areEqual(c12, c22);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + c22 + ", " + Reflection.getOrCreateKotlinClass(c22.getClass())).toString());
    }

    public static boolean e0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            ip.i a = ((p0) receiver).a();
            ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
            return (fVar != null ? fVar.i0() : null) instanceof ip.w;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static int f(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return ((yq.y) receiver).l0().size();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean f0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return receiver instanceof mq.o;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static cr.g g(cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            return (cr.g) receiver;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean g0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return receiver instanceof yq.x;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static cr.c h(zq.b bVar, cr.f receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            if (receiver instanceof yq.f0) {
                return bVar.e(((yq.f0) receiver).f21034e);
            }
            if (receiver instanceof zq.h) {
                return (zq.h) receiver;
            }
            return null;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean h0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return (receiver instanceof yq.c0) && ((yq.c0) receiver).t0();
    }

    public static yq.o i(cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            if (receiver instanceof yq.o) {
                return (yq.o) receiver;
            }
            return null;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean i0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return fp.i.I((p0) receiver, fp.o.f8878b);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static void j(yq.s receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
    }

    public static boolean j0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return z0.e((yq.y) receiver);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static yq.s k(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            b1 w02 = ((yq.y) receiver).w0();
            if (w02 instanceof yq.s) {
                return (yq.s) w02;
            }
            return null;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static boolean k0(cr.f receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return fp.i.G((yq.y) receiver);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static yq.c0 l(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            b1 w02 = ((yq.y) receiver).w0();
            if (w02 instanceof yq.c0) {
                return (yq.c0) w02;
            }
            return null;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean l0(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof zq.h) {
            return ((zq.h) receiver).f21388y;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static yq.h0 m(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.y) {
            return com.facebook.imagepipeline.nativecode.c.d((yq.y) receiver);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean m0(s0 receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof s0) {
            return receiver.c();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static void n(byte[] bArr, th.u uVar, th.o0 o0Var, long j, int i5, long j5) {
        InputStream c6;
        if (i5 < 0) {
            throw new IOException("copyLength negative");
        }
        if (j < 0) {
            throw new IOException("inputOffset negative");
        }
        long j7 = i5;
        if (j7 > j5) {
            throw new IOException("Output length overrun");
        }
        try {
            uh.e eVar = new uh.e(uVar, j, j7);
            synchronized (eVar) {
                c6 = eVar.c(0L, eVar.f18907i - eVar.f18906e);
            }
            int i6 = i5;
            while (i6 > 0) {
                try {
                    int min = Math.min(i6, 16384);
                    int i10 = 0;
                    while (i10 < min) {
                        int read = c6.read(bArr, i10, min - i10);
                        if (read == -1) {
                            throw new IOException("truncated input stream");
                        }
                        i10 += read;
                    }
                    o0Var.write(bArr, 0, min);
                    i6 -= min;
                } finally {
                }
            }
            c6.close();
        } catch (EOFException e9) {
            throw new IOException("patch underrun", e9);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void n0(cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            Intrinsics.checkNotNullParameter((yq.y) receiver, "<this>");
            return;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0025, code lost:
    
        if (r9.bottom <= r11.top) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:13:0x0042, code lost:
    
        if (r8 == 17) goto L41;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x0044, code lost:
    
        if (r8 != 66) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0047, code lost:
    
        r10 = t0(r8, r9, r10);
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x004b, code lost:
    
        if (r8 == 17) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x004d, code lost:
    
        if (r8 == 33) goto L37;
     */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x004f, code lost:
    
        if (r8 == 66) goto L36;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x0051, code lost:
    
        if (r8 != 130) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0053, code lost:
    
        r8 = r11.bottom;
        r9 = r9.bottom;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0072, code lost:
    
        if (r10 >= java.lang.Math.max(1, r8 - r9)) goto L44;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:?, code lost:
    
        return false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x005e, code lost:
    
        throw new java.lang.IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x005f, code lost:
    
        r8 = r11.right;
        r9 = r9.right;
     */
    /* JADX WARN: Code restructure failed: missing block: B:28:0x0064, code lost:
    
        r8 = r9.top;
        r9 = r11.top;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0069, code lost:
    
        r8 = r9.left;
        r9 = r11.left;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x0032, code lost:
    
        if (r9.right <= r11.left) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0039, code lost:
    
        if (r9.top >= r11.bottom) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x0040, code lost:
    
        if (r9.left >= r11.right) goto L24;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean o(int i5, Rect rect, Rect rect2, Rect rect3) {
        boolean p3 = p(i5, rect, rect2);
        if (p(i5, rect, rect3) || !p3) {
            return false;
        }
        if (i5 != 17) {
            if (i5 != 33) {
                if (i5 != 66) {
                    if (i5 != 130) {
                        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
                    }
                }
            }
        }
        return true;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static void o0(cr.e receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.c0) {
            Intrinsics.checkNotNullParameter((yq.y) receiver, "<this>");
            return;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static boolean p(int i5, Rect rect, Rect rect2) {
        if (i5 != 17) {
            if (i5 != 33) {
                if (i5 != 66) {
                    if (i5 != 130) {
                        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
                    }
                }
            }
            return rect2.right >= rect.left && rect2.left <= rect.right;
        }
        return rect2.bottom >= rect.top && rect2.top <= rect.bottom;
    }

    public static String p0(HttpUrl url) {
        Intrinsics.checkNotNullParameter(url, "url");
        ByteString byteString = ByteString.f16115v;
        return io.sentry.hints.j.D(url.f16038h).b("MD5").d();
    }

    public static void q(byte[] bArr, DataInputStream dataInputStream, th.o0 o0Var, int i5, long j) {
        if (i5 < 0) {
            throw new IOException("copyLength negative");
        }
        if (i5 > j) {
            throw new IOException("Output length overrun");
        }
        while (i5 > 0) {
            try {
                int min = Math.min(i5, 16384);
                dataInputStream.readFully(bArr, 0, min);
                o0Var.write(bArr, 0, min);
                i5 -= min;
            } catch (EOFException unused) {
                throw new IOException("patch underrun");
            }
        }
    }

    public static w1 q0(ip.d dVar, Function0 function0) {
        if (function0 != null) {
            return new w1(dVar, function0);
        }
        throw new IllegalArgumentException("Argument for @NotNull parameter 'initializer' of kotlin/reflect/jvm/internal/ReflectProperties.lazySoft must not be null");
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0197 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0186  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static yq.c0 r(cr.e type) {
        List l02;
        ArrayList arrayList;
        zq.e eVar;
        cr.b captureStatus = cr.b.f7316d;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(captureStatus, "status");
        if (!(type instanceof yq.c0)) {
            throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + type + ", " + Reflection.getOrCreateKotlinClass(type.getClass())).toString());
        }
        yq.c0 type2 = (yq.c0) type;
        Intrinsics.checkNotNullParameter(type2, "type");
        Intrinsics.checkNotNullParameter(captureStatus, "status");
        wq.e eVar2 = null;
        if (type2.l0().size() == type2.r0().getParameters().size() && ((l02 = type2.l0()) == null || !l02.isEmpty())) {
            Iterator it = l02.iterator();
            while (it.hasNext()) {
                if (((s0) it.next()).a() != c1.f21013i) {
                    List parameters = type2.r0().getParameters();
                    Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
                    ArrayList n02 = CollectionsKt.n0(l02, parameters);
                    arrayList = new ArrayList(kotlin.collections.d0.l(n02, 10));
                    Iterator it2 = n02.iterator();
                    while (it2.hasNext()) {
                        Pair pair = (Pair) it2.next();
                        s0 projection = (s0) pair.f13474d;
                        ip.s0 typeParameter = (ip.s0) pair.f13475e;
                        if (projection.a() != c1.f21013i) {
                            b1 w02 = (projection.c() || projection.a() != c1.f21014v) ? null : projection.b().w0();
                            Intrinsics.checkNotNull(typeParameter);
                            Intrinsics.checkNotNullParameter(captureStatus, "captureStatus");
                            Intrinsics.checkNotNullParameter(projection, "projection");
                            Intrinsics.checkNotNullParameter(typeParameter, "typeParameter");
                            projection = com.facebook.imagepipeline.nativecode.c.d(new zq.h(captureStatus, new zq.j(projection, eVar2, typeParameter, 6), w02, (yq.k0) null, false, 56));
                        }
                        arrayList.add(projection);
                    }
                    w0 c6 = q0.f21064b.f(type2.r0(), arrayList).c();
                    int size = l02.size();
                    for (int i5 = 0; i5 < size; i5++) {
                        s0 s0Var = (s0) l02.get(i5);
                        s0 s0Var2 = (s0) arrayList.get(i5);
                        if (s0Var.a() != c1.f21013i) {
                            List upperBounds = ((ip.s0) type2.r0().getParameters().get(i5)).getUpperBounds();
                            Intrinsics.checkNotNullExpressionValue(upperBounds, "getUpperBounds(...)");
                            ArrayList supertypes = new ArrayList();
                            Iterator it3 = upperBounds.iterator();
                            while (true) {
                                boolean hasNext = it3.hasNext();
                                eVar = zq.e.a;
                                if (!hasNext) {
                                    break;
                                }
                                supertypes.add(eVar.a(c6.h((yq.y) it3.next(), c1.f21013i).w0()));
                            }
                            if (!s0Var.c() && s0Var.a() == c1.f21015w) {
                                supertypes.add(eVar.a(s0Var.b().w0()));
                            }
                            yq.y b10 = s0Var2.b();
                            Intrinsics.checkNotNull(b10, "null cannot be cast to non-null type org.jetbrains.kotlin.types.checker.NewCapturedType");
                            zq.j jVar = ((zq.h) b10).f21384i;
                            jVar.getClass();
                            Intrinsics.checkNotNullParameter(supertypes, "supertypes");
                            jVar.f21391b = new wq.e(2, supertypes);
                        }
                    }
                    if (arrayList == null) {
                        return yq.c.t(arrayList, type2.q0(), type2.r0(), type2.t0());
                    }
                    return null;
                }
            }
        }
        arrayList = null;
        if (arrayList == null) {
        }
    }

    public static yq.c0 r0(yq.s receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof yq.s) {
            return receiver.f21068e;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static cr.b s(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof zq.h) {
            return ((zq.h) receiver).f21383e;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static b1 s0(cr.c receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof zq.h) {
            return ((zq.h) receiver).f21385v;
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static void t(dp.g gVar, Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        if (a5.k0.t(gVar) == args.length) {
            return;
        }
        StringBuilder sb2 = new StringBuilder("Callable expects ");
        sb2.append(a5.k0.t(gVar));
        sb2.append(" arguments, but ");
        throw new IllegalArgumentException(k0.d.m(sb2, args.length, " were provided."));
    }

    public static int t0(int i5, Rect rect, Rect rect2) {
        int i6;
        int i10;
        if (i5 == 17) {
            i6 = rect.left;
            i10 = rect2.right;
        } else if (i5 == 33) {
            i6 = rect.top;
            i10 = rect2.bottom;
        } else if (i5 == 66) {
            i6 = rect2.left;
            i10 = rect.right;
        } else {
            if (i5 != 130) {
                throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
            }
            i6 = rect2.top;
            i10 = rect.bottom;
        }
        return Math.max(0, i6 - i10);
    }

    public static boolean u(qc.k kVar) {
        ke.w wVar = new ke.w(8);
        int i5 = bd.f.b(kVar, wVar).a;
        if (i5 != 1380533830 && i5 != 1380333108) {
            return false;
        }
        kVar.C(wVar.a, 0, 4);
        wVar.F(0);
        int g6 = wVar.g();
        if (g6 == 1463899717) {
            return true;
        }
        ke.b.r("WavHeaderReader", "Unsupported form type: " + g6);
        return false;
    }

    public static b1 u0(cr.d receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof b1) {
            return yq.c.m((b1) receiver, false);
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static eq.h v(f1 table) {
        Intrinsics.checkNotNullParameter(table, "table");
        if (table.f7091e.size() == 0) {
            return eq.h.f8219b;
        }
        List list = table.f7091e;
        Intrinsics.checkNotNullExpressionValue(list, "getRequirementList(...)");
        return new eq.h(list);
    }

    public static int v0(int i5, Rect rect, Rect rect2) {
        if (i5 != 17) {
            if (i5 != 33) {
                if (i5 != 66) {
                    if (i5 != 130) {
                        throw new IllegalArgumentException("direction must be one of {FOCUS_UP, FOCUS_DOWN, FOCUS_LEFT, FOCUS_RIGHT}.");
                    }
                }
            }
            return Math.abs(((rect.width() / 2) + rect.left) - ((rect2.width() / 2) + rect2.left));
        }
        return Math.abs(((rect.height() / 2) + rect.top) - ((rect2.height() / 2) + rect2.top));
    }

    public static lp.u w(ip.b bVar, yq.y yVar, hq.e eVar, jp.h hVar, int i5) {
        if (hVar == null) {
            c(33);
            throw null;
        }
        if (yVar == null) {
            return null;
        }
        return new lp.u(bVar, new sq.a(bVar, yVar, eVar), hVar, hq.f.a(i5));
    }

    public static yq.c0 w0(yq.o receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        return receiver.f21054e;
    }

    public static j0 x(m0 m0Var, jp.h hVar) {
        if (m0Var != null) {
            return E(m0Var, hVar, true, m0Var.d());
        }
        c(13);
        throw null;
    }

    public static int x0(cr.h receiver) {
        Intrinsics.checkNotNullParameter(receiver, "$receiver");
        if (receiver instanceof p0) {
            return ((p0) receiver).getParameters().size();
        }
        throw new IllegalArgumentException(("ClassicTypeSystemContext couldn't handle: " + receiver + ", " + Reflection.getOrCreateKotlinClass(receiver.getClass())).toString());
    }

    public static k0 y(m0 m0Var, jp.h hVar) {
        if (m0Var == null) {
            c(0);
            throw null;
        }
        o0 d6 = m0Var.d();
        if (d6 != null) {
            return F(m0Var, hVar, jp.g.a, true, m0Var.getVisibility(), d6);
        }
        c(6);
        throw null;
    }

    public static r4.a y0(w4.b bVar, l4.i iVar) {
        return new r4.a(v4.p.a(bVar, iVar, 1.0f, v4.f.f19236e, false), 0);
    }

    public static lp.i0 z(lp.b bVar) {
        if (bVar == null) {
            c(26);
            throw null;
        }
        ip.a0 moduleDescriptor = kq.e.d(bVar);
        a5.n nVar = kq.q.a;
        Intrinsics.checkNotNullParameter(moduleDescriptor, "<this>");
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        ip.f j = nf.e.j(moduleDescriptor, hq.h.f10237w);
        if (j == null) {
            return null;
        }
        ip.z zVar = ip.z.f12180e;
        ip.p pVar = ip.q.f12159e;
        hq.e eVar = fp.p.f8907b;
        o0 d6 = bVar.d();
        ip.c cVar = ip.c.f12126v;
        lp.i0 C0 = lp.i0.C0(bVar, zVar, pVar, false, eVar, cVar, d6);
        j0 j0Var = new j0(C0, jp.g.a, zVar, pVar, false, false, false, cVar, null, bVar.d());
        C0.F0(j0Var, null, null, null);
        yq.k0.f21045e.getClass();
        yq.k0 attributes = yq.k0.f21046i;
        p0 constructor = j.n();
        List arguments = Collections.singletonList(new yq.h0(bVar.k()));
        Intrinsics.checkNotNullParameter(attributes, "attributes");
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        yq.c0 t5 = yq.c.t(arguments, attributes, constructor, false);
        List list = Collections.EMPTY_LIST;
        C0.I0(t5, list, null, null, list);
        j0Var.E0(C0.getReturnType());
        return C0;
    }

    public static r4.b z0(w4.a aVar, l4.i iVar, boolean z5) {
        return new r4.b(6, v4.p.a(aVar, iVar, z5 ? x4.h.c() : 1.0f, v4.f.f19237i, false));
    }

    @Override // m3.o
    public float a(View view, ViewGroup viewGroup) {
        return view.getTranslationX();
    }

    @Override // m3.o
    public final float b(View view, ViewGroup viewGroup) {
        switch (this.a) {
            case 0:
                return view.getTranslationY() - viewGroup.getHeight();
            default:
                return view.getTranslationY() + viewGroup.getHeight();
        }
    }
}
