package d9;

import aa.d;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Path;
import android.graphics.RectF;
import android.media.MediaFormat;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.os.UserManager;
import androidx.appcompat.widget.v;
import aq.q;
import com.discord.chat.presentation.message.view.y;
import com.facebook.drawee.view.SimpleDraweeView;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import com.facebook.imagepipeline.request.ImageRequestBuilder;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.UiThreadUtil;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.PixelUtil;
import com.facebook.react.uimanager.ViewProps;
import com.horcrux.svg.h0;
import com.horcrux.svg.k0;
import cp.r1;
import cp.u1;
import cq.i0;
import cs.k;
import e4.f;
import ha.l;
import ij.g;
import ip.i;
import java.io.BufferedReader;
import java.io.File;
import java.io.InputStream;
import java.io.Reader;
import java.io.StringWriter;
import java.lang.reflect.InvocationTargetException;
import java.util.AbstractCollection;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.collections.w;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlin.reflect.KType;
import kotlin.text.StringsKt;
import kotlin.text.x;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.modules.SerializersModule;
import kq.n;
import lp.r0;
import okhttp3.Headers;
import okio.Buffer;
import org.webrtc.MediaStreamTrack;
import s4.h;
import um.e;
import v3.p;
import vp.j;
import w3.m;
import zo.t;

/* loaded from: classes3.dex */
public abstract class a {

    /* renamed from: b, reason: collision with root package name */
    public static c f7432b = null;

    /* renamed from: c, reason: collision with root package name */
    public static volatile boolean f7433c = false;

    /* renamed from: d, reason: collision with root package name */
    public static float f7434d;

    /* renamed from: e, reason: collision with root package name */
    public static int f7435e;

    /* renamed from: f, reason: collision with root package name */
    public static int f7436f;

    /* renamed from: g, reason: collision with root package name */
    public static String f7437g;

    /* renamed from: h, reason: collision with root package name */
    public static Path f7438h;

    /* renamed from: i, reason: collision with root package name */
    public static ArrayList f7439i;
    public static float j;
    public static float k;

    /* renamed from: l, reason: collision with root package name */
    public static float f7440l;

    /* renamed from: m, reason: collision with root package name */
    public static float f7441m;

    /* renamed from: n, reason: collision with root package name */
    public static float f7442n;

    /* renamed from: o, reason: collision with root package name */
    public static float f7443o;

    /* renamed from: p, reason: collision with root package name */
    public static boolean f7444p;

    /* renamed from: q, reason: collision with root package name */
    public static volatile u4.c f7445q;

    /* renamed from: r, reason: collision with root package name */
    public static volatile u4.b f7446r;

    /* renamed from: s, reason: collision with root package name */
    public static final /* synthetic */ int f7447s = 0;
    public final /* synthetic */ int a;

    public /* synthetic */ a(int i5) {
        this.a = i5;
    }

    public static boolean A(Context context) {
        return ((UserManager) context.getSystemService(UserManager.class)).isUserUnlocked();
    }

    public static final kr.a B(BufferedReader bufferedReader) {
        Intrinsics.checkNotNullParameter(bufferedReader, "<this>");
        w wVar = new w(bufferedReader);
        Intrinsics.checkNotNullParameter(wVar, "<this>");
        return new kr.a(wVar);
    }

    public static void C(float f2, float f10) {
        P();
        j = f2;
        f7440l = f2;
        k = f10;
        f7441m = f10;
        Path path = f7438h;
        float f11 = f7434d;
        path.lineTo(f2 * f11, f11 * f10);
        f7439i.add(new h0(4, new k0[]{new k0(f2, f10)}));
    }

    public static final void D(Context context, String uri, Function1 onComplete) {
        Uri m5;
        String scheme;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(onComplete, "onComplete");
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        if (uri == null) {
            m5 = null;
        } else {
            try {
                Uri parse = Uri.parse(uri);
                m5 = parse.getScheme() == null ? f.m(context, uri) : parse;
            } catch (Exception unused) {
                m5 = f.m(context, uri);
            }
        }
        if ((m5 == null || (scheme = m5.getScheme()) == null) ? false : x.o(scheme, "res", false)) {
            Intrinsics.checkNotNull(m5);
            String uri2 = m5.toString();
            Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
            m5 = Uri.parse(x.l(uri2, "res:/", h.f("android.resource://", context.getPackageName(), "/"), false));
        }
        if (m5 == null) {
            new Handler(Looper.getMainLooper()).post(new com.appsflyer.a(onComplete, 2));
        } else {
            r().a(ImageRequestBuilder.d(m5).a(), context, null, null, null).d(new e(new y(onComplete, 6), context, m5), m8.a.f14400d);
        }
    }

    public static final void E(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        File databasePath = context.getDatabasePath("androidx.work.workdb");
        Intrinsics.checkNotNullExpressionValue(databasePath, "context.getDatabasePath(WORK_DATABASE_NAME)");
        if (databasePath.exists()) {
            p.d().a(m.a, "Migrating WorkDatabase to the no-backup directory");
            Intrinsics.checkNotNullParameter(context, "context");
            Intrinsics.checkNotNullParameter(context, "context");
            File databasePath2 = context.getDatabasePath("androidx.work.workdb");
            Intrinsics.checkNotNullExpressionValue(databasePath2, "context.getDatabasePath(WORK_DATABASE_NAME)");
            Intrinsics.checkNotNullParameter(context, "context");
            File file = new File(w3.a.a.a(context), "androidx.work.workdb");
            String[] strArr = m.f19658b;
            int a = u0.a(strArr.length);
            if (a < 16) {
                a = 16;
            }
            LinkedHashMap linkedHashMap = new LinkedHashMap(a);
            for (String str : strArr) {
                linkedHashMap.put(new File(databasePath2.getPath() + str), new File(file.getPath() + str));
            }
            for (Map.Entry entry : v0.j(linkedHashMap, new Pair(databasePath2, file)).entrySet()) {
                File file2 = (File) entry.getKey();
                File file3 = (File) entry.getValue();
                if (file2.exists()) {
                    if (file3.exists()) {
                        p.d().g(m.a, "Over-writing contents of " + file3);
                    }
                    p.d().a(m.a, file2.renameTo(file3) ? "Migrated " + file2 + "to " + file3 : "Renaming " + file2 + " to " + file3 + " failed");
                }
            }
        }
    }

    public static void F(float f2, float f10) {
        j = f2;
        f7440l = f2;
        f7442n = f2;
        k = f10;
        f7441m = f10;
        f7443o = f10;
        Path path = f7438h;
        float f11 = f7434d;
        path.moveTo(f2 * f11, f11 * f10);
        f7439i.add(new h0(3, new k0[]{new k0(f2, f10)}));
    }

    public static Headers G(String... namesAndValues) {
        Intrinsics.checkNotNullParameter(namesAndValues, "namesAndValues");
        if (namesAndValues.length % 2 != 0) {
            throw new IllegalArgumentException("Expected alternating header names and values");
        }
        String[] strArr = (String[]) namesAndValues.clone();
        int length = strArr.length;
        int i5 = 0;
        int i6 = 0;
        while (i6 < length) {
            int i10 = i6 + 1;
            String str = strArr[i6];
            if (str == null) {
                throw new IllegalArgumentException("Headers cannot be null");
            }
            strArr[i6] = StringsKt.b0(str).toString();
            i6 = i10;
        }
        int a = no.c.a(0, strArr.length - 1, 2);
        if (a >= 0) {
            while (true) {
                int i11 = i5 + 2;
                String str2 = strArr[i5];
                String str3 = strArr[i5 + 1];
                f(str2);
                g(str3, str2);
                if (i5 == a) {
                    break;
                }
                i5 = i11;
            }
        }
        return new Headers(strArr);
    }

    public static boolean H() {
        R();
        char charAt = f7437g.charAt(f7435e);
        if (charAt != '0' && charAt != '1') {
            throw new Error(String.format("Unexpected flag '%c' (i=%d, s=%s)", Character.valueOf(charAt), Integer.valueOf(f7435e), f7437g));
        }
        int i5 = f7435e + 1;
        f7435e = i5;
        if (i5 < f7436f && f7437g.charAt(i5) == ',') {
            f7435e++;
        }
        R();
        return charAt == '1';
    }

    public static float I() {
        int i5;
        char charAt;
        if (f7435e == f7436f) {
            throw new Error(h.f("Unexpected end (s=", f7437g, ")"));
        }
        R();
        int i6 = f7435e;
        if (i6 == f7436f) {
            throw new Error(h.f("Unexpected end (s=", f7437g, ")"));
        }
        char charAt2 = f7437g.charAt(i6);
        if (charAt2 == '-' || charAt2 == '+') {
            int i10 = f7435e + 1;
            f7435e = i10;
            charAt2 = f7437g.charAt(i10);
        }
        if (charAt2 >= '0' && charAt2 <= '9') {
            Q();
            int i11 = f7435e;
            if (i11 < f7436f) {
                charAt2 = f7437g.charAt(i11);
            }
        } else if (charAt2 != '.') {
            throw new IllegalArgumentException(String.format("Invalid number formating character '%c' (i=%d, s=%s)", Character.valueOf(charAt2), Integer.valueOf(f7435e), f7437g));
        }
        if (charAt2 == '.') {
            f7435e++;
            Q();
            int i12 = f7435e;
            if (i12 < f7436f) {
                charAt2 = f7437g.charAt(i12);
            }
        }
        if ((charAt2 == 'e' || charAt2 == 'E') && (i5 = f7435e + 1) < f7436f && (charAt = f7437g.charAt(i5)) != 'm' && charAt != 'x') {
            int i13 = f7435e + 1;
            f7435e = i13;
            char charAt3 = f7437g.charAt(i13);
            if (charAt3 == '+' || charAt3 == '-') {
                f7435e++;
                Q();
            } else {
                if (charAt3 < '0' || charAt3 > '9') {
                    throw new IllegalArgumentException(String.format("Invalid number formating character '%c' (i=%d, s=%s)", Character.valueOf(charAt3), Integer.valueOf(f7435e), f7437g));
                }
                Q();
            }
        }
        String substring = f7437g.substring(i6, f7435e);
        float parseFloat = Float.parseFloat(substring);
        if (Float.isInfinite(parseFloat) || Float.isNaN(parseFloat)) {
            throw new IllegalArgumentException(String.format("Invalid number '%s' (start=%d, i=%d, s=%s)", substring, Integer.valueOf(i6), Integer.valueOf(f7435e), f7437g));
        }
        R();
        int i14 = f7435e;
        if (i14 < f7436f && f7437g.charAt(i14) == ',') {
            f7435e++;
        }
        return parseFloat;
    }

    public static void J(float f2, float f10, float f11, float f12) {
        f7440l = f2;
        f7441m = f10;
        float f13 = f2 * 2.0f;
        float f14 = f10 * 2.0f;
        j((j + f13) / 3.0f, (k + f14) / 3.0f, (f11 + f13) / 3.0f, (f12 + f14) / 3.0f, f11, f12);
    }

    public static final String K(Reader reader) {
        Intrinsics.checkNotNullParameter(reader, "<this>");
        StringWriter out = new StringWriter();
        Intrinsics.checkNotNullParameter(reader, "<this>");
        Intrinsics.checkNotNullParameter(out, "out");
        char[] cArr = new char[8192];
        int read = reader.read(cArr);
        while (read >= 0) {
            out.write(cArr, 0, read);
            read = reader.read(cArr);
        }
        String stringWriter = out.toString();
        Intrinsics.checkNotNullExpressionValue(stringWriter, "toString(...)");
        return stringWriter;
    }

    public static void L(Object obj, String str) {
        if (obj == null) {
            throw new IllegalArgumentException(str);
        }
    }

    public static LinkedHashSet M(hq.e eVar, Collection collection, Collection collection2, ip.f fVar, uq.m mVar, n nVar, boolean z5) {
        if (eVar == null) {
            a(12);
            throw null;
        }
        if (collection == null) {
            a(13);
            throw null;
        }
        if (collection2 == null) {
            a(14);
            throw null;
        }
        if (fVar == null) {
            a(15);
            throw null;
        }
        if (mVar == null) {
            a(16);
            throw null;
        }
        if (nVar == null) {
            a(17);
            throw null;
        }
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        nVar.h(eVar, collection, collection2, fVar, new sp.a(mVar, linkedHashSet, z5));
        return linkedHashSet;
    }

    public static LinkedHashSet N(hq.e eVar, AbstractCollection abstractCollection, Collection collection, ip.f fVar, uq.m mVar, n nVar) {
        if (eVar == null) {
            a(0);
            throw null;
        }
        if (collection == null) {
            a(2);
            throw null;
        }
        if (fVar == null) {
            a(3);
            throw null;
        }
        if (mVar == null) {
            a(4);
            throw null;
        }
        if (nVar != null) {
            return M(eVar, abstractCollection, collection, fVar, mVar, nVar, false);
        }
        a(5);
        throw null;
    }

    public static LinkedHashSet O(hq.e eVar, Collection collection, AbstractCollection abstractCollection, j jVar, uq.m mVar, n nVar) {
        if (eVar == null) {
            a(6);
            throw null;
        }
        if (collection == null) {
            a(7);
            throw null;
        }
        if (jVar == null) {
            a(9);
            throw null;
        }
        if (mVar == null) {
            a(10);
            throw null;
        }
        if (nVar != null) {
            return M(eVar, collection, abstractCollection, jVar, mVar, nVar, true);
        }
        a(11);
        throw null;
    }

    public static void P() {
        if (f7444p) {
            return;
        }
        f7442n = j;
        f7443o = k;
        f7444p = true;
    }

    public static void Q() {
        while (true) {
            int i5 = f7435e;
            if (i5 >= f7436f || !Character.isDigit(f7437g.charAt(i5))) {
                return;
            } else {
                f7435e++;
            }
        }
    }

    public static void R() {
        while (true) {
            int i5 = f7435e;
            if (i5 >= f7436f || !Character.isWhitespace(f7437g.charAt(i5))) {
                return;
            } else {
                f7435e++;
            }
        }
    }

    public static void S(et.e cursor, byte[] key) {
        long j5;
        Intrinsics.checkNotNullParameter(cursor, "cursor");
        Intrinsics.checkNotNullParameter(key, "key");
        int length = key.length;
        int i5 = 0;
        do {
            byte[] bArr = cursor.f8239w;
            int i6 = cursor.f8240x;
            int i10 = cursor.f8241y;
            if (bArr != null) {
                while (i6 < i10) {
                    int i11 = i5 % length;
                    bArr[i6] = (byte) (bArr[i6] ^ key[i11]);
                    i6++;
                    i5 = i11 + 1;
                }
            }
            long j7 = cursor.f8238v;
            Buffer buffer = cursor.f8235d;
            Intrinsics.checkNotNull(buffer);
            if (j7 == buffer.f16114e) {
                throw new IllegalStateException("no more bytes");
            }
            j5 = cursor.f8238v;
        } while (cursor.f(j5 == -1 ? 0L : j5 + (cursor.f8241y - cursor.f8240x)) != -1);
    }

    public static /* synthetic */ void a(int i5) {
        String str = i5 != 18 ? "Argument for @NotNull parameter '%s' of %s.%s must not be null" : "@NotNull method %s.%s must not return null";
        Object[] objArr = new Object[i5 != 18 ? 3 : 2];
        switch (i5) {
            case 1:
            case 7:
            case 13:
                objArr[0] = "membersFromSupertypes";
                break;
            case 2:
            case 8:
            case 14:
                objArr[0] = "membersFromCurrent";
                break;
            case 3:
            case 9:
            case 15:
                objArr[0] = "classDescriptor";
                break;
            case 4:
            case 10:
            case 16:
                objArr[0] = "errorReporter";
                break;
            case 5:
            case 11:
            case 17:
                objArr[0] = "overridingUtil";
                break;
            case 6:
            case 12:
            case 19:
            default:
                objArr[0] = StackTraceHelper.NAME_KEY;
                break;
            case 18:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/load/java/components/DescriptorResolverUtils";
                break;
            case 20:
                objArr[0] = "annotationClass";
                break;
        }
        if (i5 != 18) {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/load/java/components/DescriptorResolverUtils";
        } else {
            objArr[1] = "resolveOverrides";
        }
        switch (i5) {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
                objArr[2] = "resolveOverridesForStaticMembers";
                break;
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
                objArr[2] = "resolveOverrides";
                break;
            case 18:
                break;
            case 19:
            case 20:
                objArr[2] = "getAnnotationParameterByName";
                break;
            default:
                objArr[2] = "resolveOverridesForNonStaticMembers";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 == 18) {
            throw new IllegalStateException(format);
        }
    }

    public static Headers b(Map headers) {
        Intrinsics.checkNotNullParameter(headers, "headers");
        Intrinsics.checkNotNullParameter(headers, "<this>");
        String[] strArr = new String[headers.size() * 2];
        int i5 = 0;
        for (Map.Entry entry : headers.entrySet()) {
            String str = (String) entry.getKey();
            String str2 = (String) entry.getValue();
            String obj = StringsKt.b0(str).toString();
            String obj2 = StringsKt.b0(str2).toString();
            f(obj);
            g(obj2, obj);
            strArr[i5] = obj;
            strArr[i5 + 1] = obj2;
            i5 += 2;
        }
        return new Headers(strArr);
    }

    public static k c(Function1 builderAction) {
        cs.b json = Json.f13606d;
        Intrinsics.checkNotNullParameter(json, "from");
        Intrinsics.checkNotNullParameter(builderAction, "builderAction");
        Intrinsics.checkNotNullParameter(json, "json");
        JsonBuilder jsonBuilder = new JsonBuilder();
        v vVar = json.a;
        jsonBuilder.a = vVar.f1129e;
        jsonBuilder.f13609b = vVar.f1128d;
        String str = (String) vVar.f1131g;
        String str2 = (String) vVar.f1126b;
        cs.a aVar = (cs.a) vVar.f1127c;
        boolean z5 = vVar.f1130f;
        SerializersModule module = json.f13607b;
        builderAction.invoke(jsonBuilder);
        if (!Intrinsics.areEqual(str, "    ")) {
            throw new IllegalArgumentException("Indent should not be specified when default printing mode is used");
        }
        v configuration = new v(jsonBuilder.f13609b, jsonBuilder.a, str, str2, z5, aVar);
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(module, "module");
        k kVar = new k(configuration, module);
        if (Intrinsics.areEqual(module, es.b.a)) {
            return kVar;
        }
        module.a(new a5.n(str2, 1));
        return kVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x01d0 A[LOOP:0: B:42:0x01ce->B:43:0x01d0, LOOP_END] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void d(float f2, float f10, float f11, boolean z5, boolean z6, float f12, float f13) {
        float f14;
        float f15;
        float f16;
        float f17;
        float f18;
        double d6;
        int ceil;
        int i5;
        float f19 = j;
        float f20 = k;
        float abs = Math.abs(f10 == 0.0f ? f2 == 0.0f ? f13 - f20 : f2 : f10);
        float abs2 = Math.abs(f2 == 0.0f ? f12 - f19 : f2);
        if (abs2 == 0.0f || abs == 0.0f || (f12 == f19 && f13 == f20)) {
            C(f12, f13);
            return;
        }
        float radians = (float) Math.toRadians(f11);
        double d7 = radians;
        float cos = (float) Math.cos(d7);
        float sin = (float) Math.sin(d7);
        float f21 = f12 - f19;
        float f22 = f13 - f20;
        float f23 = ((sin * f22) / 2.0f) + ((cos * f21) / 2.0f);
        float f24 = -sin;
        float f25 = ((cos * f22) / 2.0f) + ((f24 * f21) / 2.0f);
        float f26 = abs2 * abs2;
        float f27 = f26 * abs * abs;
        float f28 = (f27 - ((f26 * f25) * f25)) - (((abs * abs) * f23) * f23);
        if (f28 < 0.0f) {
            float f29 = f28 / f27;
            f16 = 0.0f;
            f14 = f19;
            f15 = f20;
            float sqrt = (float) Math.sqrt(1.0f - f29);
            abs2 *= sqrt;
            abs *= sqrt;
            f18 = f21 / 2.0f;
            f17 = f22 / 2.0f;
        } else {
            f14 = f19;
            f15 = f20;
            f16 = 0.0f;
            float sqrt2 = (float) Math.sqrt(f28 / (r17 + r20));
            if (z5 == z6) {
                sqrt2 = -sqrt2;
            }
            float f30 = (((-sqrt2) * f25) * abs2) / abs;
            float f31 = ((sqrt2 * f23) * abs) / abs2;
            float f32 = (cos * f30) - (sin * f31);
            f17 = (f22 / 2.0f) + (f31 * cos) + (f30 * sin);
            f18 = (f21 / 2.0f) + f32;
        }
        float f33 = cos / abs2;
        float f34 = sin / abs2;
        float f35 = f24 / abs;
        float f36 = cos / abs;
        float f37 = -f18;
        float f38 = -f17;
        float f39 = f18;
        float f40 = f17;
        float atan2 = (float) Math.atan2((f36 * f38) + (f35 * f37), (f34 * f38) + (f37 * f33));
        float f41 = f21 - f39;
        float f42 = f22 - f40;
        float atan22 = (float) Math.atan2((f36 * f42) + (f35 * f41), (f34 * f42) + (f33 * f41));
        float f43 = f39 + f14;
        float f44 = f40 + f15;
        float f45 = f21 + f14;
        float f46 = f22 + f15;
        P();
        f7440l = f45;
        j = f45;
        f7441m = f46;
        k = f46;
        if (abs2 == abs && radians == f16) {
            float degrees = (float) Math.toDegrees(atan2);
            float abs3 = Math.abs((degrees - ((float) Math.toDegrees(atan22))) % 360.0f);
            if (!z5 ? abs3 > 180.0f : abs3 < 180.0f) {
                abs3 = 360.0f - abs3;
            }
            if (!z6) {
                abs3 = -abs3;
            }
            float f47 = f7434d;
            f7438h.arcTo(new RectF((f43 - abs2) * f47, (f44 - abs2) * f47, (f43 + abs2) * f47, (f44 + abs2) * f47), degrees, abs3);
            f7439i.add(new h0(1, new k0[]{new k0(f45, f46)}));
            return;
        }
        float cos2 = (float) Math.cos(d7);
        float sin2 = (float) Math.sin(d7);
        float f48 = cos2 * abs2;
        float f49 = (-sin2) * abs;
        float f50 = sin2 * abs2;
        float f51 = cos2 * abs;
        float f52 = atan22 - atan2;
        if (f52 >= f16 || !z6) {
            if (f52 > f16 && !z6) {
                d6 = f52 - 6.283185307179586d;
            }
            ceil = (int) Math.ceil(Math.abs(Math.round((f52 / 1.5707963267948966d) * r11) / Math.pow(10.0d, 4.0d)));
            float f53 = f52 / ceil;
            float tan = (float) (Math.tan(f53 / 4.0f) * 1.3333333333333333d);
            double d8 = atan2;
            float cos3 = (float) Math.cos(d8);
            float sin3 = (float) Math.sin(d8);
            i5 = 0;
            while (i5 < ceil) {
                float f54 = cos3 - (tan * sin3);
                float f55 = (cos3 * tan) + sin3;
                float f56 = atan2 + f53;
                double d10 = f56;
                float f57 = f53;
                float cos4 = (float) Math.cos(d10);
                sin3 = (float) Math.sin(d10);
                float f58 = (tan * sin3) + cos4;
                float f59 = sin3 - (tan * cos4);
                float f60 = (f49 * f55) + (f48 * f54) + f43;
                float f61 = (f55 * f51) + (f54 * f50) + f44;
                float f62 = (f49 * f59) + (f48 * f58) + f43;
                float f63 = (f59 * f51) + (f58 * f50) + f44;
                float f64 = (f49 * sin3) + (f48 * cos4) + f43;
                float f65 = (f51 * sin3) + (f50 * cos4) + f44;
                Path path = f7438h;
                float f66 = f7434d;
                path.cubicTo(f60 * f66, f61 * f66, f62 * f66, f63 * f66, f64 * f66, f65 * f66);
                f7439i.add(new h0(1, new k0[]{new k0(f60, f61), new k0(f62, f63), new k0(f64, f65)}));
                i5++;
                atan2 = f56;
                f51 = f51;
                f43 = f43;
                f44 = f44;
                f48 = f48;
                ceil = ceil;
                tan = tan;
                cos3 = cos4;
                f50 = f50;
                f53 = f57;
            }
        }
        d6 = f52 + 6.283185307179586d;
        f52 = (float) d6;
        ceil = (int) Math.ceil(Math.abs(Math.round((f52 / 1.5707963267948966d) * r11) / Math.pow(10.0d, 4.0d)));
        float f532 = f52 / ceil;
        float tan2 = (float) (Math.tan(f532 / 4.0f) * 1.3333333333333333d);
        double d82 = atan2;
        float cos32 = (float) Math.cos(d82);
        float sin32 = (float) Math.sin(d82);
        i5 = 0;
        while (i5 < ceil) {
        }
    }

    public static final void e(String sectionName) {
        Intrinsics.checkNotNullParameter(sectionName, "sectionName");
        com.facebook.imagepipeline.nativecode.c.e(sectionName);
    }

    public static void f(String str) {
        if (str.length() <= 0) {
            throw new IllegalArgumentException("name is empty");
        }
        int length = str.length();
        int i5 = 0;
        while (i5 < length) {
            int i6 = i5 + 1;
            char charAt = str.charAt(i5);
            if ('!' > charAt || charAt >= 127) {
                throw new IllegalArgumentException(qs.b.h("Unexpected char %#04x at %d in header name: %s", Integer.valueOf(charAt), Integer.valueOf(i5), str).toString());
            }
            i5 = i6;
        }
    }

    public static void g(String str, String str2) {
        int length = str.length();
        int i5 = 0;
        while (i5 < length) {
            int i6 = i5 + 1;
            char charAt = str.charAt(i5);
            if (charAt != '\t' && (' ' > charAt || charAt >= 127)) {
                throw new IllegalArgumentException(Intrinsics.stringPlus(qs.b.h("Unexpected char %#04x at %d in %s value", Integer.valueOf(charAt), Integer.valueOf(i5), str2), qs.b.p(str2) ? "" : Intrinsics.stringPlus(": ", str)).toString());
            }
            i5 = i6;
        }
    }

    public static void j(float f2, float f10, float f11, float f12, float f13, float f14) {
        P();
        j = f13;
        k = f14;
        Path path = f7438h;
        float f15 = f7434d;
        path.cubicTo(f2 * f15, f10 * f15, f11 * f15, f12 * f15, f13 * f15, f15 * f14);
        f7439i.add(new h0(1, new k0[]{new k0(f2, f10), new k0(f11, f12), new k0(f13, f14)}));
    }

    public static boolean k(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static String l(g gVar) {
        StringBuilder sb2 = new StringBuilder(gVar.size());
        for (int i5 = 0; i5 < gVar.size(); i5++) {
            byte a = gVar.a(i5);
            if (a == 34) {
                sb2.append("\\\"");
            } else if (a == 39) {
                sb2.append("\\'");
            } else if (a != 92) {
                switch (a) {
                    case 7:
                        sb2.append("\\a");
                        break;
                    case 8:
                        sb2.append("\\b");
                        break;
                    case 9:
                        sb2.append("\\t");
                        break;
                    case 10:
                        sb2.append("\\n");
                        break;
                    case 11:
                        sb2.append("\\v");
                        break;
                    case 12:
                        sb2.append("\\f");
                        break;
                    case 13:
                        sb2.append("\\r");
                        break;
                    default:
                        if (a < 32 || a > 126) {
                            sb2.append('\\');
                            sb2.append((char) (((a >>> 6) & 3) + 48));
                            sb2.append((char) (((a >>> 3) & 7) + 48));
                            sb2.append((char) ((a & 7) + 48));
                            break;
                        } else {
                            sb2.append((char) a);
                            break;
                        }
                        break;
                }
            } else {
                sb2.append("\\\\");
            }
        }
        return sb2.toString();
    }

    public static int m(vk.a aVar, int i5) {
        float f2;
        float f10;
        float duration;
        MediaFormat trackFormat = aVar.getTrackFormat(i5);
        if (trackFormat.containsKey("bitrate")) {
            return trackFormat.getInteger("bitrate");
        }
        float f11 = 1000.0f;
        float f12 = 1000000.0f;
        float f13 = trackFormat.containsKey("durationUs") ? trackFormat.getLong("durationUs") / 1000000.0f : aVar.getDuration() / 1000.0f;
        float f14 = 0.0f;
        if (f13 <= 0.0f) {
            return -1;
        }
        float size = aVar.getSize();
        int trackCount = aVar.getTrackCount();
        int i6 = 0;
        float f15 = 0.0f;
        while (i6 < trackCount) {
            MediaFormat trackFormat2 = aVar.getTrackFormat(i6);
            float f16 = f11;
            if (trackFormat2.containsKey("mime")) {
                if (trackFormat2.containsKey("bitrate") && trackFormat2.containsKey("durationUs")) {
                    size -= ((trackFormat2.getLong("durationUs") / f12) * trackFormat2.getInteger("bitrate")) / 8.0f;
                } else if (trackFormat2.getString("mime").startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                    if (trackFormat2.containsKey("durationUs")) {
                        f2 = f12;
                        f10 = f14;
                        duration = trackFormat2.getLong("durationUs") / f2;
                    } else {
                        f2 = f12;
                        f10 = f14;
                        duration = aVar.getDuration() / f16;
                    }
                    if (duration > f10) {
                        f15 += trackFormat2.getInteger("height") * trackFormat2.getInteger("width") * duration;
                    }
                    i6++;
                    f12 = f2;
                    f14 = f10;
                    f11 = f16;
                }
            }
            f2 = f12;
            f10 = f14;
            i6++;
            f12 = f2;
            f14 = f10;
            f11 = f16;
        }
        float integer = trackFormat.getInteger("height") * trackFormat.getInteger("width") * f13;
        if (f15 > f14) {
            size = (size * integer) / f15;
        }
        return (int) ((size * 8.0f) / f13);
    }

    public static final void n(Reader reader, Function1 action) {
        Intrinsics.checkNotNullParameter(reader, "<this>");
        Intrinsics.checkNotNullParameter(action, "action");
        BufferedReader bufferedReader = reader instanceof BufferedReader ? (BufferedReader) reader : new BufferedReader(reader, 8192);
        try {
            Iterator it = B(bufferedReader).iterator();
            while (it.hasNext()) {
                action.invoke(it.next());
            }
            Unit unit = Unit.a;
            bufferedReader.close();
        } finally {
        }
    }

    public static r0 o(hq.e eVar, ip.f fVar) {
        if (eVar == null) {
            a(19);
            throw null;
        }
        if (fVar == null) {
            a(20);
            throw null;
        }
        Collection q5 = fVar.q();
        if (q5.size() != 1) {
            return null;
        }
        for (r0 r0Var : ((lp.h) q5.iterator().next()).P()) {
            if (r0Var.getName().equals(eVar)) {
                return r0Var;
            }
        }
        return null;
    }

    public static long p(pk.a aVar) {
        MediaFormat trackFormat = aVar.a.getTrackFormat(aVar.f16415g);
        if (!trackFormat.containsKey("durationUs")) {
            return -1L;
        }
        long j5 = trackFormat.getLong("durationUs");
        aVar.a.getSelection().getClass();
        return Math.min(j5, LongCompanionObject.MAX_VALUE) - Math.max(0L, 0L);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x01c0 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x01c1 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:89:0x014e  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0152  */
    /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.Object, kotlin.Lazy] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static aa.c q(InputStream is2) {
        int i5;
        boolean z5;
        boolean z6;
        aa.c cVar;
        Intrinsics.checkNotNullParameter(is2, "is");
        d dVar = (d) d.f277d.getValue();
        dVar.getClass();
        Intrinsics.checkNotNullParameter(is2, "is");
        int i6 = dVar.a;
        byte[] headerBytes = new byte[i6];
        if (is2.markSupported()) {
            try {
                is2.mark(i6);
                i5 = o8.h.i(is2, headerBytes, i6);
            } finally {
                is2.reset();
            }
        } else {
            i5 = o8.h.i(is2, headerBytes, i6);
        }
        dVar.f278b.getClass();
        Intrinsics.checkNotNullParameter(headerBytes, "headerBytes");
        if (i5 >= 20) {
            byte[] bArr = x8.a.f20290b;
            if (x8.a.b(0, headerBytes, bArr)) {
                byte[] bArr2 = x8.a.f20291c;
                if (x8.a.b(8, headerBytes, bArr2)) {
                    if (i5 < 20 || !x8.a.b(0, headerBytes, bArr) || !x8.a.b(8, headerBytes, bArr2)) {
                        throw new IllegalStateException("Check failed.");
                    }
                    if (x8.a.b(12, headerBytes, x8.a.f20292d)) {
                        cVar = aa.b.f267f;
                    } else if (x8.a.b(12, headerBytes, x8.a.f20293e)) {
                        cVar = aa.b.f268g;
                    } else {
                        if (i5 >= 21) {
                            byte[] bArr3 = x8.a.f20294f;
                            if (x8.a.b(12, headerBytes, bArr3)) {
                                cVar = (x8.a.b(12, headerBytes, bArr3) && ((headerBytes[20] & 2) == 2)) ? aa.b.j : (x8.a.b(12, headerBytes, bArr3) && ((headerBytes[20] & 16) == 16)) ? aa.b.f270i : aa.b.f269h;
                            }
                        }
                        cVar = aa.c.f275c;
                    }
                    if (Intrinsics.areEqual(cVar, aa.b.f272m) && !dVar.f279c) {
                        cVar = aa.c.f275c;
                    }
                    aa.c cVar2 = aa.c.f275c;
                    return cVar == cVar2 ? cVar : cVar2;
                }
            }
        } else {
            boolean z7 = x8.a.a;
        }
        byte[] bArr4 = aa.a.f247b;
        if (i5 < 3 || !f.L(headerBytes, bArr4)) {
            byte[] bArr5 = aa.a.f249d;
            if (i5 >= 8 && f.L(headerBytes, bArr5)) {
                cVar = aa.b.f263b;
            } else if (i5 >= 6 && (f.L(headerBytes, aa.a.f251f) || f.L(headerBytes, aa.a.f252g))) {
                cVar = aa.b.f264c;
            } else {
                byte[] bArr6 = aa.a.f253h;
                if (i5 < bArr6.length ? false : f.L(headerBytes, bArr6)) {
                    cVar = aa.b.f265d;
                } else {
                    byte[] bArr7 = aa.a.j;
                    if (i5 < bArr7.length ? false : f.L(headerBytes, bArr7)) {
                        cVar = aa.b.f266e;
                    } else {
                        if (i5 >= 12) {
                            if ((headerBytes.length < 4 ? -1 : ((headerBytes[1] & 255) << 16) | ((headerBytes[0] & 255) << 24) | ((headerBytes[2] & 255) << 8) | (headerBytes[3] & 255)) >= 8 && f.z(4, headerBytes, aa.a.f261r)) {
                                z5 = f.z(8, headerBytes, aa.a.f262s);
                                if (z5) {
                                    if (i5 >= 12 && headerBytes[3] >= 8 && f.z(4, headerBytes, aa.a.f255l)) {
                                        for (byte[] bArr8 : aa.a.f256m) {
                                            if (f.z(8, headerBytes, bArr8)) {
                                                z6 = true;
                                                break;
                                            }
                                        }
                                    }
                                    z6 = false;
                                    if (z6) {
                                        cVar = aa.b.k;
                                    } else if (i5 >= 4 && f.L(headerBytes, aa.a.f260q)) {
                                        cVar = aa.b.f272m;
                                    } else {
                                        if (i5 < aa.a.f259p || (!f.L(headerBytes, aa.a.f257n) && !f.L(headerBytes, aa.a.f258o))) {
                                            r6 = false;
                                        }
                                        cVar = r6 ? aa.b.f271l : aa.c.f275c;
                                    }
                                } else {
                                    cVar = aa.b.f273n;
                                }
                            }
                        }
                        z5 = false;
                        if (z5) {
                        }
                    }
                }
            }
        } else {
            cVar = aa.b.a;
        }
        if (Intrinsics.areEqual(cVar, aa.b.f272m)) {
            cVar = aa.c.f275c;
        }
        aa.c cVar22 = aa.c.f275c;
        if (cVar == cVar22) {
        }
    }

    public static ImagePipeline r() {
        com.facebook.imagepipeline.core.c cVar = com.facebook.imagepipeline.core.c.f4653p;
        o8.h.d(cVar, "ImagePipelineFactory was not initialized!");
        return cVar.e();
    }

    public static final KClass s(KType kType) {
        KClass t5;
        Intrinsics.checkNotNullParameter(kType, "<this>");
        zo.c classifier = kType.getClassifier();
        if (classifier != null && (t5 = t(classifier)) != null) {
            return t5;
        }
        throw new u1("Cannot calculate JVM erasure for type: " + kType);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static final KClass t(zo.c cVar) {
        ip.f fVar;
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        if (cVar instanceof KClass) {
            return (KClass) cVar;
        }
        if (!(cVar instanceof t)) {
            throw new u1("Cannot calculate JVM erasure for type: " + cVar);
        }
        List upperBounds = ((t) cVar).getUpperBounds();
        Iterator it = upperBounds.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            Object next = it.next();
            KType kType = (KType) next;
            Intrinsics.checkNotNull(kType, "null cannot be cast to non-null type kotlin.reflect.jvm.internal.KTypeImpl");
            i a = ((r1) kType).f6947d.r0().a();
            fVar = a instanceof ip.f ? (ip.f) a : null;
            if (fVar != null && fVar.b() != ip.g.f12139e && fVar.b() != ip.g.f12142w) {
                fVar = next;
                break;
            }
        }
        KType kType2 = (KType) fVar;
        if (kType2 == null) {
            kType2 = (KType) CollectionsKt.firstOrNull(upperBounds);
        }
        return kType2 != null ? s(kType2) : Reflection.getOrCreateKotlinClass(Object.class);
    }

    public static final q v(i0 proto, eq.g nameResolver, a4.i typeTable, boolean z5, boolean z6, boolean z7) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        iq.m propertySignature = fq.k.f8996d;
        Intrinsics.checkNotNullExpressionValue(propertySignature, "propertySignature");
        fq.e eVar = (fq.e) zk.a.q(proto, propertySignature);
        if (eVar != null) {
            if (z5) {
                iq.g gVar = gq.g.a;
                gq.d b10 = gq.g.b(proto, nameResolver, typeTable, z7);
                if (b10 != null) {
                    return jb.a.l(b10);
                }
            } else if (z6 && (eVar.f8960e & 2) == 2) {
                fq.c signature = eVar.f8962v;
                Intrinsics.checkNotNullExpressionValue(signature, "getSyntheticMethod(...)");
                Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
                Intrinsics.checkNotNullParameter(signature, "signature");
                String name = nameResolver.getString(signature.f8949i);
                String desc = nameResolver.getString(signature.f8950v);
                Intrinsics.checkNotNullParameter(name, "name");
                Intrinsics.checkNotNullParameter(desc, "desc");
                return new q(k0.d.k(name, desc));
            }
        }
        return null;
    }

    public static h3.c y(u4.b refHolder, SQLiteDatabase sqLiteDatabase) {
        Intrinsics.checkNotNullParameter(refHolder, "refHolder");
        Intrinsics.checkNotNullParameter(sqLiteDatabase, "sqLiteDatabase");
        h3.c cVar = (h3.c) refHolder.f18810e;
        if (cVar != null) {
            Intrinsics.checkNotNullParameter(sqLiteDatabase, "sqLiteDatabase");
            if (Intrinsics.areEqual(cVar.f9487d, sqLiteDatabase)) {
                return cVar;
            }
        }
        h3.c cVar2 = new h3.c(sqLiteDatabase);
        refHolder.f18810e = cVar2;
        return cVar2;
    }

    public static void z(Context context, ImagePipelineConfig imagePipelineConfig, l lVar) {
        ta.a.D();
        if (f7433c) {
            p8.a.r(a.class, "Fresco has already been initialized! `Fresco.initialize(...)` should only be called 1 single time to avoid memory leaks!");
        } else {
            f7433c = true;
        }
        if (!jb.a.z()) {
            ta.a.D();
            int i5 = 10;
            try {
                try {
                    try {
                        Class.forName("com.facebook.imagepipeline.nativecode.NativeCodeInitializer").getMethod("init", Context.class).invoke(null, context);
                    } catch (ClassNotFoundException unused) {
                        jb.a.x(new l8.a(i5));
                    } catch (InvocationTargetException unused2) {
                        jb.a.x(new l8.a(i5));
                    }
                } catch (IllegalAccessException unused3) {
                    jb.a.x(new l8.a(i5));
                } catch (NoSuchMethodException unused4) {
                    jb.a.x(new l8.a(i5));
                }
                ta.a.D();
            } finally {
                ta.a.D();
            }
        }
        Context context2 = context.getApplicationContext();
        if (imagePipelineConfig == null) {
            synchronized (com.facebook.imagepipeline.core.c.class) {
                ta.a.D();
                Intrinsics.checkNotNullParameter(context2, "context");
                com.facebook.imagepipeline.core.c.h(new ImagePipelineConfig(new ImagePipelineConfig.Builder(context2)));
            }
        } else {
            com.facebook.imagepipeline.core.c.h(imagePipelineConfig);
        }
        ta.a.D();
        c cVar = new c(context2, lVar);
        f7432b = cVar;
        SimpleDraweeView.initialize(cVar);
        ta.a.D();
    }

    public void T(jm.f handler, ReadableMap config) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(config, "config");
        if (config.hasKey("shouldCancelWhenOutside")) {
            handler.E = config.getBoolean("shouldCancelWhenOutside");
        }
        if (config.hasKey(ViewProps.ENABLED)) {
            boolean z5 = config.getBoolean(ViewProps.ENABLED);
            if (handler.f12876f != null && handler.f12880l != z5) {
                UiThreadUtil.runOnUiThread(new jm.c(0, handler));
            }
            handler.f12880l = z5;
        }
        if (config.hasKey("hitSlop")) {
            if (config.getType("hitSlop") == ReadableType.Number) {
                float pixelFromDIP = PixelUtil.toPixelFromDIP(config.getDouble("hitSlop"));
                handler.F(pixelFromDIP, pixelFromDIP, pixelFromDIP, pixelFromDIP, Float.NaN, Float.NaN);
            } else {
                ReadableMap map = config.getMap("hitSlop");
                Intrinsics.checkNotNull(map);
                float pixelFromDIP2 = map.hasKey("horizontal") ? PixelUtil.toPixelFromDIP(map.getDouble("horizontal")) : Float.NaN;
                float f2 = pixelFromDIP2;
                float pixelFromDIP3 = map.hasKey("vertical") ? PixelUtil.toPixelFromDIP(map.getDouble("vertical")) : Float.NaN;
                float f10 = pixelFromDIP3;
                if (map.hasKey(ViewProps.LEFT)) {
                    pixelFromDIP2 = PixelUtil.toPixelFromDIP(map.getDouble(ViewProps.LEFT));
                }
                if (map.hasKey(ViewProps.TOP)) {
                    pixelFromDIP3 = PixelUtil.toPixelFromDIP(map.getDouble(ViewProps.TOP));
                }
                if (map.hasKey(ViewProps.RIGHT)) {
                    f2 = PixelUtil.toPixelFromDIP(map.getDouble(ViewProps.RIGHT));
                }
                if (map.hasKey(ViewProps.BOTTOM)) {
                    f10 = PixelUtil.toPixelFromDIP(map.getDouble(ViewProps.BOTTOM));
                }
                float pixelFromDIP4 = map.hasKey("width") ? PixelUtil.toPixelFromDIP(map.getDouble("width")) : Float.NaN;
                handler.F(pixelFromDIP2, pixelFromDIP3, f2, f10, pixelFromDIP4, map.hasKey("height") ? PixelUtil.toPixelFromDIP(map.getDouble("height")) : Float.NaN);
            }
        }
        if (config.hasKey("needsPointerData")) {
            handler.f12887s = config.getBoolean("needsPointerData");
        }
        if (config.hasKey("dispatchesAnimatedEvents")) {
            handler.f12888t = config.getBoolean("dispatchesAnimatedEvents");
        }
        if (config.hasKey("dispatchesReanimatedEvents")) {
            handler.f12889u = config.getBoolean("dispatchesReanimatedEvents");
        }
        if (config.hasKey("manualActivation")) {
            handler.A = config.getBoolean("manualActivation");
        }
        if (config.hasKey("mouseButton")) {
            handler.J = config.getInt("mouseButton");
        }
        if (config.hasKey(ViewProps.TEST_ID)) {
            handler.f12875e = config.getString(ViewProps.TEST_ID);
        }
        if (config.hasKey("cancelsJSResponder")) {
            handler.f12890v = config.getBoolean("cancelsJSResponder");
        }
    }

    public abstract jm.f h(ReactApplicationContext reactApplicationContext);

    public int hashCode() {
        switch (this.a) {
            case 21:
                return toString().hashCode();
            default:
                return super.hashCode();
        }
    }

    public abstract mm.b i(jm.f fVar);

    public String toString() {
        switch (this.a) {
            case 21:
                String simpleName = Reflection.getOrCreateKotlinClass(getClass()).getSimpleName();
                Intrinsics.checkNotNull(simpleName);
                return simpleName;
            default:
                return super.toString();
        }
    }

    public abstract String u();

    public abstract Class x();
}
