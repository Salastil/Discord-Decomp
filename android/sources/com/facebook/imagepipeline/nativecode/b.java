package com.facebook.imagepipeline.nativecode;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcelable;
import android.text.TextUtils;
import android.util.Log;
import android.util.Size;
import android.util.SizeF;
import android.view.ViewGroup;
import bf.t;
import bn.d;
import bn.l;
import bn.q;
import bs.q1;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.views.scroll.ReactScrollViewHelper;
import com.google.android.gms.internal.play_billing.e3;
import com.google.android.gms.internal.play_billing.k1;
import com.google.android.gms.internal.play_billing.l1;
import com.google.android.gms.internal.play_billing.s;
import com.google.firebase.messaging.FirebaseMessaging;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.google.firebase.messaging.m;
import cp.c0;
import cp.r1;
import cp.u1;
import cs.h;
import fj.e;
import fo.n;
import io.sentry.u4;
import ip.i;
import ip.s0;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.GregorianCalendar;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.ExecutionException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import ki.g;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.ranges.IntRange;
import kotlin.reflect.KClass;
import kotlin.reflect.KTypeProjection;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.x;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.JsonObjectBuilder;
import okhttp3.Cookie;
import okhttp3.HttpUrl;
import okhttp3.internal.publicsuffix.PublicSuffixDatabase;
import tb.f;
import wb.o;
import yo.j;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.p0;
import yq.y;
import zo.w;

/* loaded from: classes3.dex */
public abstract class b {

    /* renamed from: e, reason: collision with root package name */
    public static boolean f4675e = false;

    /* renamed from: i, reason: collision with root package name */
    public static boolean f4676i = true;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4677d;

    public /* synthetic */ b(int i5) {
        this.f4677d = i5;
    }

    public static final void A(JsonObjectBuilder jsonObjectBuilder, String key, String str) {
        Intrinsics.checkNotNullParameter(jsonObjectBuilder, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        jsonObjectBuilder.b(key, h.c(str));
    }

    public static final void B(JsonObjectBuilder jsonObjectBuilder, String key, Function1 builderAction) {
        Intrinsics.checkNotNullParameter(jsonObjectBuilder, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(builderAction, "builderAction");
        JsonObjectBuilder jsonObjectBuilder2 = new JsonObjectBuilder();
        builderAction.invoke(jsonObjectBuilder2);
        jsonObjectBuilder.b(key, jsonObjectBuilder2.a());
    }

    public static final byte[] E(InputStream inputStream) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(Math.max(8192, inputStream.available()));
        h(inputStream, byteArrayOutputStream, 8192);
        byte[] byteArray = byteArrayOutputStream.toByteArray();
        Intrinsics.checkNotNullExpressionValue(byteArray, "toByteArray(...)");
        return byteArray;
    }

    public static dq.a F(InputStream stream) {
        Intrinsics.checkNotNullParameter(stream, "stream");
        DataInputStream dataInputStream = new DataInputStream(stream);
        IntRange intRange = new IntRange(1, dataInputStream.readInt(), 1);
        ArrayList arrayList = new ArrayList(d0.l(intRange, 10));
        Iterator it = intRange.iterator();
        while (((yo.b) it).f20994i) {
            ((r0) it).nextInt();
            arrayList.add(Integer.valueOf(dataInputStream.readInt()));
        }
        int[] h0 = CollectionsKt.h0(arrayList);
        return new dq.a(Arrays.copyOf(h0, h0.length));
    }

    public static Boolean G(ReadableMap readableMap, String str) {
        if (readableMap.hasKey(str)) {
            return readableMap.isNull(str) ? Boolean.FALSE : Boolean.valueOf(readableMap.getBoolean(str));
        }
        return null;
    }

    public static d H(ReadableMap readableMap, Context context, String str) {
        Integer w5;
        if (readableMap.hasKey(str)) {
            return (readableMap.isNull(str) || (w5 = io.sentry.config.a.w(readableMap, context, str)) == null) ? bn.b.a : new bn.c(w5);
        }
        return null;
    }

    public static d I(ReadableMap readableMap, String str) {
        String string;
        if (readableMap.hasKey(str)) {
            return (readableMap.isNull(str) || (string = readableMap.getString(str)) == null) ? bn.b.a : new bn.c(string);
        }
        return null;
    }

    public static boolean J(Intent intent) {
        Bundle extras;
        if (intent == null || FirebaseMessagingService.ACTION_DIRECT_BOOT_REMOTE_INTENT.equals(intent.getAction()) || (extras = intent.getExtras()) == null) {
            return false;
        }
        return "1".equals(extras.getString("google.c.a.e"));
    }

    public static void K(ViewGroup viewGroup, boolean z5) {
        if (Build.VERSION.SDK_INT >= 29) {
            ah.d.o(viewGroup, z5);
        } else if (f4676i) {
            try {
                ah.d.o(viewGroup, z5);
            } catch (NoSuchMethodError unused) {
                f4676i = false;
            }
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static q L(String str) {
        switch (str.hashCode()) {
            case -1962930485:
                if (str.equals("ifRoomWithText")) {
                    return q.f3097v;
                }
                break;
            case -1414557169:
                if (str.equals(ReactScrollViewHelper.OVER_SCROLL_ALWAYS)) {
                    return q.f3094d;
                }
                break;
            case -1192154216:
                if (str.equals("ifRoom")) {
                    return q.f3096i;
                }
                break;
            case 104712844:
                if (str.equals(ReactScrollViewHelper.OVER_SCROLL_NEVER)) {
                    return q.f3098w;
                }
                break;
            case 264769090:
                if (str.equals("alwaysWithText")) {
                    return q.f3095e;
                }
                break;
        }
        throw new JSApplicationIllegalArgumentException(s4.h.f("[RNScreens] Invalid value for StackHeaderToolbarMenuItemShowAsAction: ", str, "."));
    }

    public static final Class M(ClassLoader classLoader, String fqName) {
        Intrinsics.checkNotNullParameter(classLoader, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        try {
            return Class.forName(fqName, false, classLoader);
        } catch (ClassNotFoundException unused) {
            return null;
        }
    }

    public static Bundle N(l1 l1Var, e3 e3Var) {
        Bundle bundle = new Bundle();
        bundle.putByteArray("REQUEST_METADATA", l1Var.b());
        bundle.putByteArray("REQUEST_PARAMS", e3Var.b());
        return bundle;
    }

    public static l1 O(Context context) {
        String str;
        k1 r5 = l1.r();
        r5.c();
        l1.v((l1) r5.f5728e);
        r5.c();
        l1.w((l1) r5.f5728e);
        String packageName = context.getPackageName();
        r5.c();
        l1.t((l1) r5.f5728e, packageName);
        r5.c();
        l1.u((l1) r5.f5728e);
        try {
            str = String.valueOf(context.getPackageManager().getPackageInfo(context.getPackageName(), 0).versionCode);
        } catch (PackageManager.NameNotFoundException unused) {
            s.h("DelegationApiParamsBuilder", "No version code is found!");
            str = null;
        }
        if (str != null) {
            r5.c();
            l1.s((l1) r5.f5728e, str);
        }
        return (l1) r5.a();
    }

    public static void a(String str) {
        u4.d().a(str);
    }

    public static final Bundle c(Pair... pairArr) {
        Bundle bundle = new Bundle(pairArr.length);
        for (Pair pair : pairArr) {
            String str = (String) pair.f13474d;
            Object obj = pair.f13475e;
            if (obj == null) {
                bundle.putString(str, null);
            } else if (obj instanceof Boolean) {
                bundle.putBoolean(str, ((Boolean) obj).booleanValue());
            } else if (obj instanceof Byte) {
                bundle.putByte(str, ((Number) obj).byteValue());
            } else if (obj instanceof Character) {
                bundle.putChar(str, ((Character) obj).charValue());
            } else if (obj instanceof Double) {
                bundle.putDouble(str, ((Number) obj).doubleValue());
            } else if (obj instanceof Float) {
                bundle.putFloat(str, ((Number) obj).floatValue());
            } else if (obj instanceof Integer) {
                bundle.putInt(str, ((Number) obj).intValue());
            } else if (obj instanceof Long) {
                bundle.putLong(str, ((Number) obj).longValue());
            } else if (obj instanceof Short) {
                bundle.putShort(str, ((Number) obj).shortValue());
            } else if (obj instanceof Bundle) {
                bundle.putBundle(str, (Bundle) obj);
            } else if (obj instanceof CharSequence) {
                bundle.putCharSequence(str, (CharSequence) obj);
            } else if (obj instanceof Parcelable) {
                bundle.putParcelable(str, (Parcelable) obj);
            } else if (obj instanceof boolean[]) {
                bundle.putBooleanArray(str, (boolean[]) obj);
            } else if (obj instanceof byte[]) {
                bundle.putByteArray(str, (byte[]) obj);
            } else if (obj instanceof char[]) {
                bundle.putCharArray(str, (char[]) obj);
            } else if (obj instanceof double[]) {
                bundle.putDoubleArray(str, (double[]) obj);
            } else if (obj instanceof float[]) {
                bundle.putFloatArray(str, (float[]) obj);
            } else if (obj instanceof int[]) {
                bundle.putIntArray(str, (int[]) obj);
            } else if (obj instanceof long[]) {
                bundle.putLongArray(str, (long[]) obj);
            } else if (obj instanceof short[]) {
                bundle.putShortArray(str, (short[]) obj);
            } else if (obj instanceof Object[]) {
                Class<?> componentType = obj.getClass().getComponentType();
                Intrinsics.checkNotNull(componentType);
                if (Parcelable.class.isAssignableFrom(componentType)) {
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Array<android.os.Parcelable>");
                    bundle.putParcelableArray(str, (Parcelable[]) obj);
                } else if (String.class.isAssignableFrom(componentType)) {
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Array<kotlin.String>");
                    bundle.putStringArray(str, (String[]) obj);
                } else if (CharSequence.class.isAssignableFrom(componentType)) {
                    Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Array<kotlin.CharSequence>");
                    bundle.putCharSequenceArray(str, (CharSequence[]) obj);
                } else {
                    if (!Serializable.class.isAssignableFrom(componentType)) {
                        throw new IllegalArgumentException("Illegal value array type " + componentType.getCanonicalName() + " for key \"" + str + '\"');
                    }
                    bundle.putSerializable(str, (Serializable) obj);
                }
            } else if (obj instanceof Serializable) {
                bundle.putSerializable(str, (Serializable) obj);
            } else if (obj instanceof IBinder) {
                bundle.putBinder(str, (IBinder) obj);
            } else if (obj instanceof Size) {
                f1.a.a(bundle, str, (Size) obj);
            } else {
                if (!(obj instanceof SizeF)) {
                    throw new IllegalArgumentException("Illegal value type " + obj.getClass().getCanonicalName() + " for key \"" + str + '\"');
                }
                f1.a.b(bundle, str, (SizeF) obj);
            }
        }
        return bundle;
    }

    public static Float g(String str) {
        String[] split = str.split(",", 3);
        String[] split2 = split[0].split("/", 2);
        double doubleValue = Double.valueOf(split2[0]).doubleValue() / Double.valueOf(split2[1]).doubleValue();
        String[] split3 = split[1].split("/", 2);
        double doubleValue2 = Double.valueOf(split3[0]).doubleValue() / Double.valueOf(split3[1]).doubleValue();
        String[] split4 = split[2].split("/", 2);
        return Float.valueOf((float) (((Double.valueOf(split4[0]).doubleValue() / Double.valueOf(split4[1]).doubleValue()) / 3600.0d) + (doubleValue2 / 60.0d) + doubleValue));
    }

    public static final long h(InputStream inputStream, OutputStream out, int i5) {
        Intrinsics.checkNotNullParameter(inputStream, "<this>");
        Intrinsics.checkNotNullParameter(out, "out");
        byte[] bArr = new byte[i5];
        int read = inputStream.read(bArr);
        long j = 0;
        while (read >= 0) {
            out.write(bArr, 0, read);
            j += read;
            read = inputStream.read(bArr);
        }
        return j;
    }

    public static final r1 j(zo.c cVar, List arguments, boolean z5, List annotations) {
        i descriptor;
        k0 k0Var;
        h0 h0Var;
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        c0 c0Var = cVar instanceof c0 ? (c0) cVar : null;
        if (c0Var == null || (descriptor = c0Var.getDescriptor()) == null) {
            throw new u1("Cannot create type for an unsupported classifier: " + cVar + " (" + cVar.getClass() + ')');
        }
        p0 n6 = descriptor.n();
        Intrinsics.checkNotNullExpressionValue(n6, "getTypeConstructor(...)");
        List parameters = n6.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters, "getParameters(...)");
        if (parameters.size() != arguments.size()) {
            throw new IllegalArgumentException("Class declares " + parameters.size() + " type parameters, but " + arguments.size() + " were provided.");
        }
        if (annotations.isEmpty()) {
            k0.f21045e.getClass();
            k0Var = k0.f21046i;
        } else {
            k0.f21045e.getClass();
            k0Var = k0.f21046i;
        }
        List parameters2 = n6.getParameters();
        Intrinsics.checkNotNullExpressionValue(parameters2, "getParameters(...)");
        ArrayList arrayList = new ArrayList(d0.l(arguments, 10));
        int i5 = 0;
        for (Object obj : arguments) {
            int i6 = i5 + 1;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            KTypeProjection kTypeProjection = (KTypeProjection) obj;
            r1 r1Var = (r1) kTypeProjection.f13550b;
            y yVar = r1Var != null ? r1Var.f6947d : null;
            w wVar = kTypeProjection.a;
            int i10 = wVar == null ? -1 : ap.b.a[wVar.ordinal()];
            if (i10 == -1) {
                Object obj2 = parameters2.get(i5);
                Intrinsics.checkNotNullExpressionValue(obj2, "get(...)");
                h0Var = new h0((s0) obj2);
            } else if (i10 == 1) {
                c1 c1Var = c1.f21013i;
                Intrinsics.checkNotNull(yVar);
                h0Var = new h0(yVar, c1Var);
            } else if (i10 == 2) {
                c1 c1Var2 = c1.f21014v;
                Intrinsics.checkNotNull(yVar);
                h0Var = new h0(yVar, c1Var2);
            } else {
                if (i10 != 3) {
                    throw new n();
                }
                c1 c1Var3 = c1.f21015w;
                Intrinsics.checkNotNull(yVar);
                h0Var = new h0(yVar, c1Var3);
            }
            arrayList.add(h0Var);
            i5 = i6;
        }
        return new r1(yq.c.t(arrayList, k0Var, n6, z5), null);
    }

    public static int k(String str, int i5, int i6, boolean z5) {
        while (i5 < i6) {
            int i10 = i5 + 1;
            char charAt = str.charAt(i5);
            if (((charAt < ' ' && charAt != '\t') || charAt >= 127 || (charAt <= '9' && '0' <= charAt) || ((charAt <= 'z' && 'a' <= charAt) || ((charAt <= 'Z' && 'A' <= charAt) || charAt == ':'))) == (!z5)) {
                return i5;
            }
            i5 = i10;
        }
        return i6;
    }

    public static boolean l() {
        ApplicationInfo applicationInfo;
        Bundle bundle;
        try {
            g.b();
            g b10 = g.b();
            b10.a();
            Context context = b10.a;
            SharedPreferences sharedPreferences = context.getSharedPreferences("com.google.firebase.messaging", 0);
            if (sharedPreferences.contains("export_to_big_query")) {
                return sharedPreferences.getBoolean("export_to_big_query", false);
            }
            try {
                PackageManager packageManager = context.getPackageManager();
                if (packageManager != null && (applicationInfo = packageManager.getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT)) != null && (bundle = applicationInfo.metaData) != null && bundle.containsKey("delivery_metrics_exported_to_big_query_enabled")) {
                    return applicationInfo.metaData.getBoolean("delivery_metrics_exported_to_big_query_enabled", false);
                }
            } catch (PackageManager.NameNotFoundException unused) {
            }
            return false;
        } catch (IllegalStateException unused2) {
            Log.i("FirebaseMessaging", "FirebaseApp has not being initialized. Device might be in direct boot mode. Skip exporting delivery metrics to Big Query");
            return false;
        }
    }

    public static synchronized void m() {
        synchronized (b.class) {
            if (!f4675e) {
                jb.a.C("native-imagetranscoder");
                f4675e = true;
            }
        }
    }

    public static final KClass p(SerialDescriptor serialDescriptor) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        if (serialDescriptor instanceof zr.b) {
            return ((zr.b) serialDescriptor).f21411b;
        }
        if (serialDescriptor instanceof q1) {
            return p(((q1) serialDescriptor).a);
        }
        return null;
    }

    public static vf.b q(Context context) {
        t.g(context);
        return new vf.b(context, new se.h());
    }

    public static y8.g r(Exception exc) {
        y8.g gVar = new y8.g();
        exc.getClass();
        gVar.h(exc, null);
        return gVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:64:0x017f  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0181  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void s(Intent intent) {
        long parseLong;
        if (J(intent)) {
            t("_nr", intent.getExtras());
        }
        int i5 = 0;
        if ((intent == null || FirebaseMessagingService.ACTION_DIRECT_BOOT_REMOTE_INTENT.equals(intent.getAction())) ? false : l()) {
            f fVar = (f) FirebaseMessaging.f6189l.get();
            if (fVar == null) {
                Log.e("FirebaseMessaging", "TransportFactory is null. Skip exporting message delivery metrics to Big Query");
                return;
            }
            int i6 = 2;
            fj.d dVar = null;
            r5 = null;
            String str = null;
            if (intent != null) {
                Bundle extras = intent.getExtras();
                if (extras == null) {
                    extras = Bundle.EMPTY;
                }
                Object obj = extras.get("google.ttl");
                if (obj instanceof Integer) {
                    i5 = ((Integer) obj).intValue();
                } else if (obj instanceof String) {
                    try {
                        i5 = Integer.parseInt((String) obj);
                    } catch (NumberFormatException unused) {
                        Log.w("FirebaseMessaging", "Invalid TTL: " + obj);
                    }
                }
                int i10 = i5;
                String string = extras.getString("google.to");
                if (TextUtils.isEmpty(string)) {
                    try {
                        g b10 = g.b();
                        try {
                            Object obj2 = zi.c.f21253m;
                            b10.a();
                            string = (String) a5.k0.h(((zi.c) b10.f13384d.b(zi.d.class)).c());
                        } catch (InterruptedException e9) {
                            e = e9;
                            throw new RuntimeException(e);
                        }
                    } catch (InterruptedException | ExecutionException e10) {
                        e = e10;
                    }
                }
                String str2 = string;
                g b11 = g.b();
                b11.a();
                String packageName = b11.a.getPackageName();
                fj.b bVar = gj.c.P(extras) ? fj.b.DISPLAY_NOTIFICATION : fj.b.DATA_MESSAGE;
                String string2 = extras.getString("google.message_id");
                if (string2 == null) {
                    string2 = extras.getString("message_id");
                }
                String str3 = string2 != null ? string2 : "";
                String string3 = extras.getString("from");
                if (string3 != null && string3.startsWith("/topics/")) {
                    str = string3;
                }
                String str4 = str != null ? str : "";
                String string4 = extras.getString("collapse_key");
                String str5 = string4 != null ? string4 : "";
                String string5 = extras.getString("google.c.a.m_l");
                String str6 = string5 != null ? string5 : "";
                String string6 = extras.getString("google.c.a.c_l");
                String str7 = string6 != null ? string6 : "";
                if (extras.containsKey("google.c.sender.id")) {
                    try {
                        parseLong = Long.parseLong(extras.getString("google.c.sender.id"));
                    } catch (NumberFormatException e11) {
                        Log.w("FirebaseMessaging", "error parsing project number", e11);
                    }
                    dVar = new fj.d(parseLong > 0 ? parseLong : 0L, str3, str2, bVar, packageName, str5, i10, str4, str6, str7);
                }
                g b12 = g.b();
                ki.i iVar = b12.f13383c;
                b12.a();
                String str8 = iVar.f13398e;
                if (str8 != null) {
                    try {
                        parseLong = Long.parseLong(str8);
                    } catch (NumberFormatException e12) {
                        Log.w("FirebaseMessaging", "error parsing sender ID", e12);
                    }
                    dVar = new fj.d(parseLong > 0 ? parseLong : 0L, str3, str2, bVar, packageName, str5, i10, str4, str6, str7);
                }
                b12.a();
                String str9 = iVar.f13395b;
                if (str9.startsWith("1:")) {
                    String[] split = str9.split(":");
                    if (split.length >= 2) {
                        String str10 = split[1];
                        if (!str10.isEmpty()) {
                            try {
                                parseLong = Long.parseLong(str10);
                            } catch (NumberFormatException e13) {
                                Log.w("FirebaseMessaging", "error parsing app ID", e13);
                            }
                        }
                    }
                    parseLong = 0;
                } else {
                    try {
                        parseLong = Long.parseLong(str9);
                    } catch (NumberFormatException e14) {
                        Log.w("FirebaseMessaging", "error parsing app ID", e14);
                    }
                }
                dVar = new fj.d(parseLong > 0 ? parseLong : 0L, str3, str2, bVar, packageName, str5, i10, str4, str6, str7);
            }
            if (dVar == null) {
                return;
            }
            try {
                ((o) fVar).a("FCM_CLIENT_EVENT_LOGGING", new tb.c("proto"), new m(i6)).c(new tb.a(new e(dVar), new tb.b(Integer.valueOf(intent.getIntExtra("google.product_id", 111881503)))));
            } catch (RuntimeException e15) {
                Log.w("FirebaseMessaging", "Failed to send big query analytics payload.", e15);
            }
        }
    }

    public static void t(String str, Bundle bundle) {
        try {
            g.b();
            if (bundle == null) {
                bundle = new Bundle();
            }
            Bundle bundle2 = new Bundle();
            String string = bundle.getString("google.c.a.c_id");
            if (string != null) {
                bundle2.putString("_nmid", string);
            }
            String string2 = bundle.getString("google.c.a.c_l");
            if (string2 != null) {
                bundle2.putString("_nmn", string2);
            }
            String string3 = bundle.getString("google.c.a.m_l");
            if (!TextUtils.isEmpty(string3)) {
                bundle2.putString("label", string3);
            }
            String string4 = bundle.getString("google.c.a.m_c");
            if (!TextUtils.isEmpty(string4)) {
                bundle2.putString("message_channel", string4);
            }
            String string5 = bundle.getString("from");
            if (string5 == null || !string5.startsWith("/topics/")) {
                string5 = null;
            }
            if (string5 != null) {
                bundle2.putString("_nt", string5);
            }
            String string6 = bundle.getString("google.c.a.ts");
            if (string6 != null) {
                try {
                    bundle2.putInt("_nmt", Integer.parseInt(string6));
                } catch (NumberFormatException e9) {
                    Log.w("FirebaseMessaging", "Error while parsing timestamp in GCM event", e9);
                }
            }
            String string7 = bundle.containsKey("google.c.a.udt") ? bundle.getString("google.c.a.udt") : null;
            if (string7 != null) {
                try {
                    bundle2.putInt("_ndt", Integer.parseInt(string7));
                } catch (NumberFormatException e10) {
                    Log.w("FirebaseMessaging", "Error while parsing use_device_time in GCM event", e10);
                }
            }
            String str2 = gj.c.P(bundle) ? ViewProps.DISPLAY : "data";
            if ("_nr".equals(str) || "_nf".equals(str)) {
                bundle2.putString("_nmc", str2);
            }
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "Logging to scion event=" + str + " scionPayload=" + bundle2);
            }
            g b10 = g.b();
            b10.a();
            if (b10.f13384d.b(li.a.class) != null) {
                throw new ClassCastException();
            }
            Log.w("FirebaseMessaging", "Unable to log event: analytics library is missing");
        } catch (IllegalStateException unused) {
            Log.e("FirebaseMessaging", "Default FirebaseApp has not been initialized. Skip logging event to GA.");
        }
    }

    public static final Pair u(tm.a event) {
        Intrinsics.checkNotNullParameter(event, "event");
        return new Pair(event.getName(), v0.f(new Pair("registrationName", event.d())));
    }

    /* JADX WARN: Code restructure failed: missing block: B:100:0x017c, code lost:
    
        if (qs.b.f17055f.d(r0) == false) goto L88;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Cookie v(HttpUrl url, String setCookie) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(setCookie, "setCookie");
        long currentTimeMillis = System.currentTimeMillis();
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(setCookie, "setCookie");
        char c6 = ';';
        int g6 = qs.b.g(';', 0, 0, 6, setCookie);
        char c8 = '=';
        int g10 = qs.b.g('=', 0, g6, 2, setCookie);
        String str = null;
        if (g10 != g6) {
            String y5 = qs.b.y(0, g10, setCookie);
            if (y5.length() != 0 && qs.b.l(y5) == -1) {
                boolean z5 = true;
                String y6 = qs.b.y(g10 + 1, g6, setCookie);
                if (qs.b.l(y6) == -1) {
                    int i5 = g6 + 1;
                    int length = setCookie.length();
                    long j = 253402300799999L;
                    boolean z6 = false;
                    boolean z7 = false;
                    boolean z8 = false;
                    String str2 = null;
                    boolean z10 = true;
                    long j5 = 253402300799999L;
                    long j7 = -1;
                    while (true) {
                        long j10 = LongCompanionObject.MAX_VALUE;
                        if (i5 >= length) {
                            if (j7 == Long.MIN_VALUE) {
                                j = Long.MIN_VALUE;
                            } else if (j7 != -1) {
                                if (j7 <= 9223372036854775L) {
                                    j10 = j7 * 1000;
                                }
                                long j11 = currentTimeMillis + j10;
                                if (j11 >= currentTimeMillis && j11 <= 253402300799999L) {
                                    j = j11;
                                }
                            } else {
                                j = j5;
                            }
                            String str3 = url.f16034d;
                            if (str == null) {
                                str = str3;
                            } else if (!Intrinsics.areEqual(str3, str)) {
                                if (x.h(str3, str, false) && str3.charAt((str3.length() - str.length()) - 1) == '.') {
                                    Intrinsics.checkNotNullParameter(str3, "<this>");
                                }
                                return null;
                            }
                            if (str3.length() == str.length() || PublicSuffixDatabase.f16109g.a(str) != null) {
                                String str4 = "/";
                                if (str2 == null || !x.o(str2, "/", false)) {
                                    String b10 = url.b();
                                    int L = StringsKt.L('/', 0, 6, b10);
                                    if (L != 0) {
                                        str4 = b10.substring(0, L);
                                        Intrinsics.checkNotNullExpressionValue(str4, "this as java.lang.String…ing(startIndex, endIndex)");
                                    }
                                    str2 = str4;
                                }
                                return new Cookie(y5, y6, j, str, str2, z8, z6, z7, z10);
                            }
                            return null;
                        }
                        int e9 = qs.b.e(c6, i5, length, setCookie);
                        int e10 = qs.b.e(c8, i5, e9, setCookie);
                        String y10 = qs.b.y(i5, e10, setCookie);
                        String y11 = e10 < e9 ? qs.b.y(e10 + 1, e9, setCookie) : "";
                        if (x.i(y10, "expires", z5)) {
                            try {
                                j5 = x(y11.length(), y11);
                                z7 = z5;
                            } catch (NumberFormatException | IllegalArgumentException unused) {
                            }
                        } else if (x.i(y10, "max-age", z5)) {
                            try {
                                j7 = Long.parseLong(y11);
                                if (j7 <= 0) {
                                    j7 = Long.MIN_VALUE;
                                }
                            } catch (NumberFormatException e11) {
                                if (!new Regex("-?\\d+").d(y11)) {
                                    throw e11;
                                }
                                if (x.o(y11, "-", false)) {
                                    j10 = Long.MIN_VALUE;
                                }
                                j7 = j10;
                            }
                            z7 = true;
                        } else if (x.i(y10, "domain", true)) {
                            if (x.h(y11, ".", false)) {
                                throw new IllegalArgumentException("Failed requirement.");
                            }
                            String M = e4.f.M(StringsKt.N(y11, "."));
                            if (M == null) {
                                throw new IllegalArgumentException();
                            }
                            str = M;
                            z10 = false;
                        } else if (x.i(y10, "path", true)) {
                            str2 = y11;
                        } else if (x.i(y10, "secure", true)) {
                            z8 = true;
                        } else if (x.i(y10, "httponly", true)) {
                            z6 = true;
                        }
                        i5 = e9 + 1;
                        c6 = ';';
                        c8 = '=';
                        z5 = true;
                    }
                }
            }
        }
        return null;
    }

    /*  JADX ERROR: JadxRuntimeException in pass: ModVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't remove SSA var: r6v0 bn.n, still in use, count: 2, list:
          (r6v0 bn.n) from 0x00cd: MOVE (r21v1 bn.n) = (r6v0 bn.n) (LINE:206)
          (r6v0 bn.n) from 0x00c4: MOVE (r21v4 bn.n) = (r6v0 bn.n) (LINE:197)
        	at jadx.core.utils.InsnRemover.removeSsaVar(InsnRemover.java:162)
        	at jadx.core.utils.InsnRemover.unbindResult(InsnRemover.java:127)
        	at jadx.core.utils.InsnRemover.unbindInsn(InsnRemover.java:91)
        	at jadx.core.utils.InsnRemover.addAndUnbind(InsnRemover.java:57)
        	at jadx.core.dex.visitors.ModVisitor.removeStep(ModVisitor.java:447)
        	at jadx.core.dex.visitors.ModVisitor.visit(ModVisitor.java:96)
        */
    public static java.util.List w(android.content.Context r25, com.facebook.react.bridge.ReadableMap r26, java.util.LinkedHashMap r27) {
        /*
            Method dump skipped, instructions count: 388
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.facebook.imagepipeline.nativecode.b.w(android.content.Context, com.facebook.react.bridge.ReadableMap, java.util.LinkedHashMap):java.util.List");
    }

    public static long x(int i5, String str) {
        int k = k(str, 0, i5, false);
        Matcher matcher = Cookie.f16016m.matcher(str);
        int i6 = -1;
        int i10 = -1;
        int i11 = -1;
        int i12 = -1;
        int i13 = -1;
        int i14 = -1;
        while (k < i5) {
            int k5 = k(str, k + 1, i5, true);
            matcher.region(k, k5);
            if (i10 == -1 && matcher.usePattern(Cookie.f16016m).matches()) {
                String group = matcher.group(1);
                Intrinsics.checkNotNullExpressionValue(group, "matcher.group(1)");
                i10 = Integer.parseInt(group);
                String group2 = matcher.group(2);
                Intrinsics.checkNotNullExpressionValue(group2, "matcher.group(2)");
                i13 = Integer.parseInt(group2);
                String group3 = matcher.group(3);
                Intrinsics.checkNotNullExpressionValue(group3, "matcher.group(3)");
                i14 = Integer.parseInt(group3);
            } else if (i11 == -1 && matcher.usePattern(Cookie.f16015l).matches()) {
                String group4 = matcher.group(1);
                Intrinsics.checkNotNullExpressionValue(group4, "matcher.group(1)");
                i11 = Integer.parseInt(group4);
            } else {
                if (i12 == -1) {
                    Pattern pattern = Cookie.k;
                    if (matcher.usePattern(pattern).matches()) {
                        String group5 = matcher.group(1);
                        Intrinsics.checkNotNullExpressionValue(group5, "matcher.group(1)");
                        Locale locale = Locale.US;
                        String o6 = a3.e.o(locale, "US", group5, locale, "this as java.lang.String).toLowerCase(locale)");
                        String pattern2 = pattern.pattern();
                        Intrinsics.checkNotNullExpressionValue(pattern2, "MONTH_PATTERN.pattern()");
                        i12 = StringsKt.J(pattern2, o6, 0, false, 6) / 4;
                    }
                }
                if (i6 == -1 && matcher.usePattern(Cookie.j).matches()) {
                    String group6 = matcher.group(1);
                    Intrinsics.checkNotNullExpressionValue(group6, "matcher.group(1)");
                    i6 = Integer.parseInt(group6);
                }
            }
            k = k(str, k5 + 1, i5, false);
        }
        if (70 <= i6 && i6 < 100) {
            i6 += 1900;
        }
        if (i6 >= 0 && i6 < 70) {
            i6 += 2000;
        }
        if (i6 < 1601) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (i12 == -1) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (1 > i11 || i11 >= 32) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (i10 < 0 || i10 >= 24) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (i13 < 0 || i13 >= 60) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        if (i14 < 0 || i14 >= 60) {
            throw new IllegalArgumentException("Failed requirement.");
        }
        GregorianCalendar gregorianCalendar = new GregorianCalendar(qs.b.f17054e);
        gregorianCalendar.setLenient(false);
        gregorianCalendar.set(1, i6);
        gregorianCalendar.set(2, i12 - 1);
        gregorianCalendar.set(5, i11);
        gregorianCalendar.set(11, i10);
        gregorianCalendar.set(12, i13);
        gregorianCalendar.set(13, i14);
        gregorianCalendar.set(14, 0);
        return gregorianCalendar.getTimeInMillis();
    }

    public static List y(ReadableMap readableMap) {
        ReadableArray array = readableMap.getArray("groups");
        if (array == null) {
            return m0.f13512d;
        }
        IntRange i5 = j.i(0, array.size());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (((yo.b) it).f20994i) {
            ReadableMap map = array.getMap(((r0) it).nextInt());
            if (map == null) {
                throw new IllegalArgumentException("[RNScreens] Menu groups array must contain valid group specification objects.");
            }
            arrayList.add(new l(io.sentry.config.a.H(map, "groupId"), io.sentry.config.a.z(map, "singleSelection")));
        }
        return arrayList;
    }

    public static final void z(JsonObjectBuilder jsonObjectBuilder, String key, Number number) {
        Intrinsics.checkNotNullParameter(jsonObjectBuilder, "<this>");
        Intrinsics.checkNotNullParameter(key, "key");
        jsonObjectBuilder.b(key, h.b(number));
    }

    public abstract void C(ii.l lVar, ii.l lVar2);

    public abstract void D(ii.l lVar, Thread thread);

    public abstract String b();

    public abstract boolean d(ii.m mVar, ii.c cVar, ii.c cVar2);

    public abstract boolean e(ii.m mVar, Object obj, Object obj2);

    public abstract boolean f(ii.m mVar, ii.l lVar, ii.l lVar2);

    public abstract ii.c n(ii.m mVar);

    public abstract ii.l o(ii.m mVar);

    public String toString() {
        switch (this.f4677d) {
            case 8:
                return b();
            default:
                return super.toString();
        }
    }

    public /* synthetic */ b(boolean z5) {
        this.f4677d = 12;
    }
}
