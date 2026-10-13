package nt;

import a3.o;
import android.content.Context;
import android.database.Cursor;
import android.os.Build;
import android.os.Bundle;
import android.os.Looper;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import androidx.appcompat.widget.a4;
import androidx.appcompat.widget.w;
import androidx.appcompat.widget.y3;
import androidx.work.impl.WorkDatabase;
import com.google.android.exoplayer2.metadata.Metadata;
import fp.p;
import gp.j;
import hq.e;
import ip.f;
import ip.i;
import ip.i0;
import ip.s0;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Proxy;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import jp.b;
import jp.h;
import jq.m;
import k0.d;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import kotlin.text.x;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.encoding.Encoder;
import mq.g;
import mq.k;
import n1.n;
import n1.u;
import o1.q;
import org.json.JSONObject;
import r3.c;
import xq.l;
import yq.a0;
import yq.c0;
import yq.c1;
import yq.h0;
import yq.k0;
import yq.u0;
import yq.v;
import yq.y;

/* loaded from: classes.dex */
public abstract class a {
    public static boolean A(String str) {
        HashSet hashSet = new HashSet();
        for (c cVar : c.values()) {
            hashSet.add(cVar);
        }
        HashSet hashSet2 = new HashSet();
        Iterator it = hashSet.iterator();
        while (it.hasNext()) {
            c cVar2 = (c) it.next();
            if (cVar2.f17122d.equals(str)) {
                hashSet2.add(cVar2);
            }
        }
        if (hashSet2.isEmpty()) {
            throw new RuntimeException("Unknown feature ".concat(str));
        }
        Iterator it2 = hashSet2.iterator();
        while (it2.hasNext()) {
            c cVar3 = (c) it2.next();
            int i5 = cVar3.f17124i;
            if ((i5 != -1 && Build.VERSION.SDK_INT >= i5) || cVar3.a()) {
                return true;
            }
        }
        return false;
    }

    public static final boolean B(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        i a = yVar.r0().a();
        return Intrinsics.areEqual(a != null ? t(a) : null, j.f9431c);
    }

    public static final ArrayList C(i0 i0Var, hq.c fqName) {
        Intrinsics.checkNotNullParameter(i0Var, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        ArrayList arrayList = new ArrayList();
        f(i0Var, fqName, arrayList);
        return arrayList;
    }

    public static final Cursor D(WorkDatabase db, o sqLiteQuery) {
        Intrinsics.checkNotNullParameter(db, "db");
        Intrinsics.checkNotNullParameter(sqLiteQuery, "sqLiteQuery");
        return db.m(sqLiteQuery);
    }

    public static final String E(e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<this>");
        String b10 = eVar.b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        if (!m.a.contains(b10)) {
            int i5 = 0;
            while (true) {
                if (i5 < b10.length()) {
                    char charAt = b10.charAt(i5);
                    if (!Character.isLetterOrDigit(charAt) && charAt != '_') {
                        break;
                    }
                    i5++;
                } else if (b10.length() != 0 && Character.isJavaIdentifierStart(b10.codePointAt(0))) {
                    String b11 = eVar.b();
                    Intrinsics.checkNotNullExpressionValue(b11, "asString(...)");
                    return b11;
                }
            }
        }
        StringBuilder sb2 = new StringBuilder();
        String b12 = eVar.b();
        Intrinsics.checkNotNullExpressionValue(b12, "asString(...)");
        sb2.append("`" + b12);
        sb2.append('`');
        return sb2.toString();
    }

    public static final String F(List pathSegments) {
        Intrinsics.checkNotNullParameter(pathSegments, "pathSegments");
        StringBuilder sb2 = new StringBuilder();
        Iterator it = pathSegments.iterator();
        while (it.hasNext()) {
            e eVar = (e) it.next();
            if (sb2.length() > 0) {
                sb2.append(".");
            }
            sb2.append(E(eVar));
        }
        return sb2.toString();
    }

    public static final String G(String lowerRendered, String lowerPrefix, String upperRendered, String upperPrefix, String foldedPrefix) {
        Intrinsics.checkNotNullParameter(lowerRendered, "lowerRendered");
        Intrinsics.checkNotNullParameter(lowerPrefix, "lowerPrefix");
        Intrinsics.checkNotNullParameter(upperRendered, "upperRendered");
        Intrinsics.checkNotNullParameter(upperPrefix, "upperPrefix");
        Intrinsics.checkNotNullParameter(foldedPrefix, "foldedPrefix");
        if (!x.o(lowerRendered, lowerPrefix, false) || !x.o(upperRendered, upperPrefix, false)) {
            return null;
        }
        String substring = lowerRendered.substring(lowerPrefix.length());
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        String substring2 = upperRendered.substring(upperPrefix.length());
        Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
        String k = d.k(foldedPrefix, substring);
        if (Intrinsics.areEqual(substring, substring2)) {
            return k;
        }
        if (!K(substring, substring2)) {
            return null;
        }
        return k + '!';
    }

    public static void I(View view, CharSequence charSequence) {
        if (Build.VERSION.SDK_INT >= 26) {
            y3.a(view, charSequence);
            return;
        }
        a4 a4Var = a4.H;
        if (a4Var != null && a4Var.f915d == view) {
            a4.b(null);
        }
        if (!TextUtils.isEmpty(charSequence)) {
            new a4(view, charSequence);
            return;
        }
        a4 a4Var2 = a4.I;
        if (a4Var2 != null && a4Var2.f915d == view) {
            a4Var2.a();
        }
        view.setOnLongClickListener(null);
        view.setLongClickable(false);
        view.setOnHoverListener(null);
    }

    public static final u.y J(Function0 function0) {
        return new u.y(function0);
    }

    public static final boolean K(String lower, String upper) {
        Intrinsics.checkNotNullParameter(lower, "lower");
        Intrinsics.checkNotNullParameter(upper, "upper");
        if (Intrinsics.areEqual(lower, x.l(upper, "?", "", false))) {
            return true;
        }
        if (x.h(upper, "?", false)) {
            if (Intrinsics.areEqual(lower + '?', upper)) {
                return true;
            }
        }
        StringBuilder sb2 = new StringBuilder("(");
        sb2.append(lower);
        sb2.append(")?");
        return Intrinsics.areEqual(sb2.toString(), upper);
    }

    public static u0 L(u0 u0Var) {
        Intrinsics.checkNotNullParameter(u0Var, "<this>");
        if (!(u0Var instanceof v)) {
            return new lq.d(u0Var, 0);
        }
        v vVar = (v) u0Var;
        s0[] s0VarArr = vVar.f21072b;
        ArrayList K = kotlin.collections.x.K(vVar.f21073c, s0VarArr);
        ArrayList arrayList = new ArrayList(d0.l(K, 10));
        Iterator it = K.iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            arrayList.add(h((yq.s0) pair.f13474d, (s0) pair.f13475e));
        }
        return new v(s0VarArr, (yq.s0[]) arrayList.toArray(new yq.s0[0]), true);
    }

    public static Object a(Parcel parcel) {
        Parcelable.Creator creator = Bundle.CREATOR;
        if (parcel.readInt() != 0) {
            return creator.createFromParcel(parcel);
        }
        return null;
    }

    public static void b(Parcel parcel, Bundle bundle) {
        if (bundle == null) {
            parcel.writeInt(0);
        } else {
            parcel.writeInt(1);
            bundle.writeToParcel(parcel, 0);
        }
    }

    public static Object e(Class cls, InvocationHandler invocationHandler) {
        if (invocationHandler == null) {
            return null;
        }
        return cls.cast(Proxy.newProxyInstance(a.class.getClassLoader(), new Class[]{cls}, invocationHandler));
    }

    public static final void f(i0 i0Var, hq.c fqName, ArrayList packageFragments) {
        Intrinsics.checkNotNullParameter(i0Var, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(packageFragments, "packageFragments");
        if (i0Var != null) {
            i0Var.a(fqName, packageFragments);
        } else {
            packageFragments.addAll(i0Var.c(fqName));
        }
    }

    public static final int g(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b Q = yVar.getAnnotations().Q(fp.o.f8897q);
        if (Q == null) {
            return 0;
        }
        g gVar = (g) v0.e(Q.b(), p.f8910e);
        Intrinsics.checkNotNull(gVar, "null cannot be cast to non-null type org.jetbrains.kotlin.resolve.constants.IntValue");
        return ((Number) ((k) gVar).a).intValue();
    }

    public static final yq.s0 h(yq.s0 typeProjection, s0 s0Var) {
        if (s0Var == null || typeProjection.a() == c1.f21013i) {
            return typeProjection;
        }
        if (s0Var.getVariance() != typeProjection.a()) {
            Intrinsics.checkNotNullParameter(typeProjection, "typeProjection");
            lq.c cVar = new lq.c(typeProjection);
            k0.f21045e.getClass();
            return new h0(new lq.a(typeProjection, cVar, false, k0.f21046i));
        }
        if (!typeProjection.c()) {
            return new h0(typeProjection.b());
        }
        xq.b NO_LOCKS = l.f20551e;
        Intrinsics.checkNotNullExpressionValue(NO_LOCKS, "NO_LOCKS");
        return new h0(new a0(NO_LOCKS, new cp.d0(15, typeProjection)));
    }

    public static bq.b i(String type, Bundle data) {
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNullParameter(data, "data");
        try {
            switch (type.hashCode()) {
                case -1678407252:
                    if (type.equals("androidx.credentials.TYPE_DIGITAL_CREDENTIAL")) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        try {
                            Object obj = data.get("androidx.credentials.BUNDLE_KEY_REQUEST_JSON");
                            Intrinsics.checkNotNull(obj);
                            return obj instanceof byte[] ? new n1.o(new String((byte[]) obj, Charsets.UTF_8), data) : new n1.o((String) obj, data);
                        } catch (Exception unused) {
                            throw new r1.a();
                        }
                    }
                    throw new r1.a();
                case -1072734346:
                    if (type.equals("androidx.credentials.TYPE_RESTORE_CREDENTIAL")) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        String jsonString = data.getString("androidx.credentials.BUNDLE_KEY_GET_RESTORE_CREDENTIAL_RESPONSE");
                        if (jsonString == null) {
                            throw new q("The device does not contain a restore credential.");
                        }
                        n nVar = new n("androidx.credentials.TYPE_RESTORE_CREDENTIAL", data);
                        Intrinsics.checkNotNullParameter(jsonString, "jsonString");
                        if (jsonString.length() != 0) {
                            try {
                                new JSONObject(jsonString);
                                return nVar;
                            } catch (Exception unused2) {
                            }
                        }
                        throw new IllegalArgumentException("authenticationResponseJson must not be empty, and must be a valid JSON");
                    }
                    throw new r1.a();
                case -543568185:
                    if (type.equals("android.credentials.TYPE_PASSWORD_CREDENTIAL")) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        try {
                            String string = data.getString("androidx.credentials.BUNDLE_KEY_ID");
                            String string2 = data.getString("androidx.credentials.BUNDLE_KEY_PASSWORD");
                            Intrinsics.checkNotNull(string);
                            Intrinsics.checkNotNull(string2);
                            return new n(1, string2, data);
                        } catch (Exception unused3) {
                            throw new r1.a();
                        }
                    }
                    throw new r1.a();
                case -95037569:
                    if (type.equals("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL")) {
                        Intrinsics.checkNotNullParameter(data, "data");
                        try {
                            String string3 = data.getString("androidx.credentials.BUNDLE_KEY_AUTHENTICATION_RESPONSE_JSON");
                            Intrinsics.checkNotNull(string3);
                            return new u(string3, data);
                        } catch (Exception unused4) {
                            throw new r1.a();
                        }
                    }
                    throw new r1.a();
                default:
                    throw new r1.a();
            }
        } catch (r1.a unused5) {
            return new n(0, type, data);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:38:0x0108  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final c0 j(fp.i builtIns, h annotations, y yVar, List contextReceiverTypes, ArrayList parameterTypes, y returnType, boolean z5) {
        f k;
        h hVar;
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        Intrinsics.checkNotNullParameter(annotations, "annotations");
        Intrinsics.checkNotNullParameter(contextReceiverTypes, "contextReceiverTypes");
        Intrinsics.checkNotNullParameter(parameterTypes, "parameterTypes");
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        Intrinsics.checkNotNullParameter(contextReceiverTypes, "contextReceiverTypes");
        Intrinsics.checkNotNullParameter(parameterTypes, "parameterTypes");
        Intrinsics.checkNotNullParameter(returnType, "returnType");
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        ArrayList arrayList = new ArrayList(contextReceiverTypes.size() + parameterTypes.size() + (yVar != null ? 1 : 0) + 1);
        ArrayList arrayList2 = new ArrayList(d0.l(contextReceiverTypes, 10));
        Iterator it = contextReceiverTypes.iterator();
        while (it.hasNext()) {
            arrayList2.add(com.facebook.imagepipeline.nativecode.c.d((y) it.next()));
        }
        arrayList.addAll(arrayList2);
        ir.n.b(arrayList, yVar != null ? com.facebook.imagepipeline.nativecode.c.d(yVar) : null);
        Iterator it2 = parameterTypes.iterator();
        int i5 = 0;
        while (it2.hasNext()) {
            Object next = it2.next();
            int i6 = i5 + 1;
            if (i5 < 0) {
                kotlin.collections.c0.k();
                throw null;
            }
            arrayList.add(com.facebook.imagepipeline.nativecode.c.d((y) next));
            i5 = i6;
        }
        arrayList.add(com.facebook.imagepipeline.nativecode.c.d(returnType));
        int size = contextReceiverTypes.size() + parameterTypes.size() + (yVar == null ? 0 : 1);
        Intrinsics.checkNotNullParameter(builtIns, "builtIns");
        if (z5) {
            k = builtIns.w(size);
        } else {
            builtIns.getClass();
            e eVar = p.a;
            k = builtIns.k("Function" + size);
        }
        Intrinsics.checkNotNull(k);
        h hVar2 = jp.g.a;
        if (yVar != null) {
            Intrinsics.checkNotNullParameter(annotations, "<this>");
            Intrinsics.checkNotNullParameter(builtIns, "builtIns");
            hq.c cVar = fp.o.f8896p;
            if (!annotations.r(cVar)) {
                ArrayList annotations2 = CollectionsKt.U(annotations, new jp.j(builtIns, cVar, v0.d()));
                Intrinsics.checkNotNullParameter(annotations2, "annotations");
                hVar = annotations2.isEmpty() ? hVar2 : new jp.i(annotations2, 0);
                if (!contextReceiverTypes.isEmpty()) {
                    int size2 = contextReceiverTypes.size();
                    Intrinsics.checkNotNullParameter(hVar, "<this>");
                    Intrinsics.checkNotNullParameter(builtIns, "builtIns");
                    hq.c cVar2 = fp.o.f8897q;
                    if (!hVar.r(cVar2)) {
                        ArrayList annotations3 = CollectionsKt.U(hVar, new jp.j(builtIns, cVar2, kotlin.collections.u0.b(new Pair(p.f8910e, new k(size2)))));
                        Intrinsics.checkNotNullParameter(annotations3, "annotations");
                        if (!annotations3.isEmpty()) {
                            hVar2 = new jp.i(annotations3, 0);
                        }
                        hVar = hVar2;
                    }
                }
                return yq.c.s(yq.c.C(hVar), k, arrayList);
            }
        }
        hVar = annotations;
        if (!contextReceiverTypes.isEmpty()) {
        }
        return yq.c.s(yq.c.C(hVar), k, arrayList);
    }

    public static final yq.i0 k(f from, f to2) {
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(to2, "to");
        from.l().size();
        to2.l().size();
        List l6 = from.l();
        Intrinsics.checkNotNullExpressionValue(l6, "getDeclaredTypeParameters(...)");
        ArrayList arrayList = new ArrayList(d0.l(l6, 10));
        Iterator it = l6.iterator();
        while (it.hasNext()) {
            arrayList.add(((s0) it.next()).n());
        }
        List l7 = to2.l();
        Intrinsics.checkNotNullExpressionValue(l7, "getDeclaredTypeParameters(...)");
        ArrayList arrayList2 = new ArrayList(d0.l(l7, 10));
        Iterator it2 = l7.iterator();
        while (it2.hasNext()) {
            c0 k = ((s0) it2.next()).k();
            Intrinsics.checkNotNullExpressionValue(k, "getDefaultType(...)");
            arrayList2.add(com.facebook.imagepipeline.nativecode.c.d(k));
        }
        Map map = v0.m(CollectionsKt.n0(arrayList, arrayList2));
        Intrinsics.checkNotNullParameter(map, "map");
        return new yq.i0(1, map);
    }

    public static void n(Encoder encoder, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        if (serializer.getDescriptor().d()) {
            encoder.M(serializer, obj);
        } else if (obj == null) {
            encoder.a();
        } else {
            encoder.w();
            encoder.M(serializer, obj);
        }
    }

    public static final e o(y yVar) {
        String str;
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        b Q = yVar.getAnnotations().Q(fp.o.f8898r);
        if (Q != null) {
            Object a0 = CollectionsKt.a0(Q.b().values());
            mq.x xVar = a0 instanceof mq.x ? (mq.x) a0 : null;
            if (xVar != null && (str = (String) xVar.a) != null) {
                if (!e.f(str)) {
                    str = null;
                }
                if (str != null) {
                    return e.e(str);
                }
            }
        }
        return null;
    }

    public static View p(int i5, View view) {
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        int childCount = viewGroup.getChildCount();
        for (int i6 = 0; i6 < childCount; i6++) {
            View findViewById = viewGroup.getChildAt(i6).findViewById(i5);
            if (findViewById != null) {
                return findViewById;
            }
        }
        return null;
    }

    public static String q() {
        byte[] bArr = new byte[16];
        io.sentry.util.j.a().b(bArr);
        byte b10 = (byte) (bArr[6] & 15);
        bArr[6] = b10;
        bArr[6] = (byte) (b10 | 64);
        byte b11 = (byte) (bArr[8] & 63);
        bArr[8] = b11;
        bArr[8] = (byte) (b11 | ByteCompanionObject.MIN_VALUE);
        long j = 0;
        long j5 = 0;
        for (int i5 = 0; i5 < 8; i5++) {
            j5 = (j5 << 8) | (bArr[i5] & 255);
        }
        for (int i6 = 8; i6 < 16; i6++) {
            j = (j << 8) | (bArr[i6] & 255);
        }
        UUID uuid = new UUID(j5, j);
        char[] cArr = io.sentry.util.n.a;
        long mostSignificantBits = uuid.getMostSignificantBits();
        long leastSignificantBits = uuid.getLeastSignificantBits();
        char[] cArr2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, r3[(int) (((-1152921504606846976L) & leastSignificantBits) >>> 60)], r3[(int) ((1080863910568919040L & leastSignificantBits) >>> 56)], r3[(int) ((67553994410557440L & leastSignificantBits) >>> 52)], r3[(int) ((4222124650659840L & leastSignificantBits) >>> 48)], r3[(int) ((263882790666240L & leastSignificantBits) >>> 44)], r3[(int) ((16492674416640L & leastSignificantBits) >>> 40)], r3[(int) ((1030792151040L & leastSignificantBits) >>> 36)], r3[(int) ((64424509440L & leastSignificantBits) >>> 32)], r3[(int) ((4026531840L & leastSignificantBits) >>> 28)], r3[(int) ((251658240 & leastSignificantBits) >>> 24)], r3[(int) ((15728640 & leastSignificantBits) >>> 20)], r3[(int) ((983040 & leastSignificantBits) >>> 16)], r3[(int) ((61440 & leastSignificantBits) >>> 12)], r3[(int) ((3840 & leastSignificantBits) >>> 8)], r3[(int) ((240 & leastSignificantBits) >>> 4)], r3[(int) (15 & leastSignificantBits)]};
        io.sentry.util.n.a(cArr2, mostSignificantBits);
        char[] cArr3 = io.sentry.util.n.a;
        return new String(cArr2);
    }

    public static final hq.b r(eq.g gVar, int i5) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        return ta.a.v(gVar.h(i5), gVar.l(i5));
    }

    public static final List s(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        y(yVar);
        int g6 = g(yVar);
        if (g6 == 0) {
            return m0.f13512d;
        }
        List subList = yVar.l0().subList(0, g6);
        ArrayList arrayList = new ArrayList(d0.l(subList, 10));
        Iterator it = subList.iterator();
        while (it.hasNext()) {
            arrayList.add(((yq.s0) it.next()).b());
        }
        return arrayList;
    }

    public static final gp.k t(i iVar) {
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        if (!(iVar instanceof f) || !fp.i.J(iVar)) {
            return null;
        }
        hq.d h6 = oq.e.h(iVar);
        if (!h6.d() || h6.c()) {
            return null;
        }
        gp.m mVar = gp.m.f9434c;
        hq.c packageFqName = h6.g().b();
        String className = h6.f().b();
        Intrinsics.checkNotNullExpressionValue(className, "asString(...)");
        mVar.getClass();
        Intrinsics.checkNotNullParameter(packageFqName, "packageFqName");
        Intrinsics.checkNotNullParameter(className, "className");
        gp.l a = mVar.a(packageFqName, className);
        if (a != null) {
            return a.a;
        }
        return null;
    }

    public static final e u(eq.g gVar, int i5) {
        Intrinsics.checkNotNullParameter(gVar, "<this>");
        e d6 = e.d(gVar.getString(i5));
        Intrinsics.checkNotNullExpressionValue(d6, "guessByFirstCharacter(...)");
        return d6;
    }

    public static final y v(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        y(yVar);
        if (yVar.getAnnotations().Q(fp.o.f8896p) == null) {
            return null;
        }
        return ((yq.s0) yVar.l0().get(g(yVar))).b();
    }

    public static final List w(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        y(yVar);
        List l02 = yVar.l0();
        int g6 = g(yVar);
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        return l02.subList(((!y(yVar) || yVar.getAnnotations().Q(fp.o.f8896p) == null) ? 0 : 1) + g6, l02.size() - 1);
    }

    public static boolean x(ip.d callableMemberDescriptor) {
        Intrinsics.checkNotNullParameter(callableMemberDescriptor, "callableMemberDescriptor");
        if (!rp.f.f17454d.contains(callableMemberDescriptor.getName())) {
            return false;
        }
        if (CollectionsKt.E(rp.f.f17453c, oq.e.c(callableMemberDescriptor)) && callableMemberDescriptor.P().isEmpty()) {
            return true;
        }
        if (!fp.i.A(callableMemberDescriptor)) {
            return false;
        }
        Collection i5 = callableMemberDescriptor.i();
        Intrinsics.checkNotNullExpressionValue(i5, "getOverriddenDescriptors(...)");
        Collection<ip.d> collection = i5;
        if (collection.isEmpty()) {
            return false;
        }
        for (ip.d dVar : collection) {
            Intrinsics.checkNotNull(dVar);
            if (x(dVar)) {
                return true;
            }
        }
        return false;
    }

    public static final boolean y(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        i a = yVar.r0().a();
        if (a == null) {
            return false;
        }
        Intrinsics.checkNotNullParameter(a, "<this>");
        gp.k t5 = t(a);
        return Intrinsics.areEqual(t5, gp.g.f9428c) || Intrinsics.areEqual(t5, j.f9431c);
    }

    public static final boolean z(i0 i0Var, hq.c fqName) {
        Intrinsics.checkNotNullParameter(i0Var, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        return i0Var != null ? i0Var.b(fqName) : C(i0Var, fqName).isEmpty();
    }

    public abstract void H(boolean z5);

    public ze.c c(Context context, Looper looper, w wVar, Object obj, ze.j jVar, ze.k kVar) {
        return d(context, looper, wVar, obj, (af.q) jVar, (af.q) kVar);
    }

    public ze.c d(Context context, Looper looper, w wVar, Object obj, af.q qVar, af.q qVar2) {
        throw new UnsupportedOperationException("buildClient must be implemented");
    }

    public Metadata l(dd.d dVar) {
        ByteBuffer byteBuffer = dVar.f14436v;
        byteBuffer.getClass();
        ke.b.g(byteBuffer.position() == 0 && byteBuffer.hasArray() && byteBuffer.arrayOffset() == 0);
        if (dVar.c(Integer.MIN_VALUE)) {
            return null;
        }
        return m(dVar, byteBuffer);
    }

    public abstract Metadata m(dd.d dVar, ByteBuffer byteBuffer);
}
