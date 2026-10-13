package tn;

import android.content.Context;
import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.ProviderInfo;
import android.content.pm.ResolveInfo;
import android.content.pm.Signature;
import android.database.Cursor;
import android.os.Build;
import android.os.Process;
import android.util.Log;
import android.view.MotionEvent;
import app.rive.Result;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.devsupport.StackTraceHelper;
import fp.o;
import java.io.File;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.TreeMap;
import k2.s;
import k2.t;
import ke.w;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import lp.r0;
import qc.v;
import w3.q;
import yq.y;

/* loaded from: classes3.dex */
public abstract class g {
    public static String A(int i5, int i6, int i10) {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(i5);
        sb2.append('-');
        if (i6 < 10) {
            sb2.append('0');
        }
        sb2.append(i6);
        sb2.append('-');
        if (i10 < 10) {
            sb2.append('0');
        }
        sb2.append(i10);
        return sb2.toString();
    }

    public static String B(String str) {
        int length = str.length();
        int i5 = 0;
        while (i5 < length) {
            char charAt = str.charAt(i5);
            if (charAt >= 'a' && charAt <= 'z') {
                char[] charArray = str.toCharArray();
                while (i5 < length) {
                    char c6 = charArray[i5];
                    if (c6 >= 'a' && c6 <= 'z') {
                        charArray[i5] = (char) (c6 ^ ' ');
                    }
                    i5++;
                }
                return String.valueOf(charArray);
            }
            i5++;
        }
        return str;
    }

    public static hq.c C(hq.e shortName) {
        Intrinsics.checkNotNullParameter(shortName, "shortName");
        hq.e eVar = hq.d.f10205e;
        Intrinsics.checkNotNullParameter(shortName, "shortName");
        String b10 = shortName.b();
        Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
        return new hq.c(new hq.d(b10, hq.c.f10203c.a, shortName));
    }

    public static void D(File file, n8.a aVar) {
        aVar.c(file);
        File[] listFiles = file.listFiles();
        if (listFiles != null) {
            for (File file2 : listFiles) {
                if (file2.isDirectory()) {
                    D(file2, aVar);
                } else {
                    aVar.a(file2);
                }
            }
        }
        aVar.d(file);
    }

    public static void E(int i5, Object[] objArr) {
        for (int i6 = 0; i6 < i5; i6++) {
            if (objArr[i6] == null) {
                StringBuilder sb2 = new StringBuilder(String.valueOf(i6).length() + 9);
                sb2.append("at index ");
                sb2.append(i6);
                throw new NullPointerException(sb2.toString());
            }
        }
    }

    public static final long a(float f2, float f10) {
        long floatToIntBits = (Float.floatToIntBits(f10) & 4294967295L) | (Float.floatToIntBits(f2) << 32);
        int i5 = b0.a.f2701b;
        return floatToIntBits;
    }

    public static int b(int i5) {
        if (i5 < 8191) {
            return 13;
        }
        if (i5 < 32767) {
            return 15;
        }
        if (i5 < 65535) {
            return 16;
        }
        if (i5 < 262143) {
            return 18;
        }
        throw new IllegalArgumentException(s4.h.e(i5, "Can't represent a size of ", " in Constraints"));
    }

    public static void c(int i5, int i6, int i10) {
        if (i5 < -999999999 || i5 > 999999999) {
            throw new IllegalArgumentException(k0.d.i(i5, "YEAR out of range: "));
        }
        if (i6 < 1 || i6 > 12) {
            throw new IllegalArgumentException(k0.d.i(i6, "MONTH out of range: "));
        }
        if (i10 < 1 || i10 > 31) {
            throw new IllegalArgumentException(k0.d.i(i10, "DAY_OF_MONTH out of range: "));
        }
        if (i10 <= l(i5, i6)) {
            return;
        }
        throw new IllegalArgumentException("DAY_OF_MONTH exceeds month length in given year: " + A(i5, i6, i10));
    }

    public static void d(long j, w wVar, v[] vVarArr) {
        int i5;
        while (true) {
            if (wVar.a() <= 1) {
                return;
            }
            int i6 = 0;
            while (true) {
                if (wVar.a() == 0) {
                    i5 = -1;
                    break;
                }
                int u5 = wVar.u();
                i6 += u5;
                if (u5 != 255) {
                    i5 = i6;
                    break;
                }
            }
            int i10 = 0;
            while (true) {
                if (wVar.a() == 0) {
                    i10 = -1;
                    break;
                }
                int u6 = wVar.u();
                i10 += u6;
                if (u6 != 255) {
                    break;
                }
            }
            int i11 = wVar.f13363b + i10;
            if (i10 == -1 || i10 > wVar.a()) {
                ke.b.N("CeaUtil", "Skipping remainder of malformed SEI NAL unit.");
                i11 = wVar.f13364c;
            } else if (i5 == 4 && i10 >= 8) {
                int u10 = wVar.u();
                int z5 = wVar.z();
                int g6 = z5 == 49 ? wVar.g() : 0;
                int u11 = wVar.u();
                if (z5 == 47) {
                    wVar.G(1);
                }
                boolean z6 = u10 == 181 && (z5 == 49 || z5 == 47) && u11 == 3;
                if (z5 == 49) {
                    z6 &= g6 == 1195456820;
                }
                if (z6) {
                    e(j, wVar, vVarArr);
                }
            }
            wVar.F(i11);
        }
    }

    public static void e(long j, w wVar, v[] vVarArr) {
        long j5;
        int u5 = wVar.u();
        if ((u5 & 64) != 0) {
            wVar.G(1);
            int i5 = (u5 & 31) * 3;
            int i6 = wVar.f13363b;
            int length = vVarArr.length;
            int i10 = 0;
            while (i10 < length) {
                v vVar = vVarArr[i10];
                wVar.F(i6);
                vVar.d(i5, wVar);
                if (j != -9223372036854775807L) {
                    j5 = j;
                    vVar.b(j5, 1, i5, 0, null);
                } else {
                    j5 = j;
                }
                i10++;
                j = j5;
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x007f  */
    /* JADX WARN: Removed duplicated region for block: B:22:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static t f(Context context) {
        ProviderInfo providerInfo;
        i1.c cVar;
        ApplicationInfo applicationInfo;
        j8.c cVar2 = Build.VERSION.SDK_INT >= 28 ? new k2.c() : new j8.c();
        PackageManager packageManager = context.getPackageManager();
        ta.a.k(packageManager, "Package manager required to locate emoji font provider");
        Iterator<ResolveInfo> it = packageManager.queryIntentContentProviders(new Intent("androidx.content.action.LOAD_EMOJI_FONT"), 0).iterator();
        while (true) {
            if (!it.hasNext()) {
                providerInfo = null;
                break;
            }
            providerInfo = it.next().providerInfo;
            if (providerInfo != null && (applicationInfo = providerInfo.applicationInfo) != null && (applicationInfo.flags & 1) == 1) {
                break;
            }
        }
        if (providerInfo != null) {
            try {
                String str = providerInfo.authority;
                String str2 = providerInfo.packageName;
                Signature[] m5 = cVar2.m(packageManager, str2);
                ArrayList arrayList = new ArrayList();
                for (Signature signature : m5) {
                    arrayList.add(signature.toByteArray());
                }
                cVar = new i1.c(Collections.singletonList(arrayList), str, str2, "emojicompat-emoji-font", null, null);
            } catch (PackageManager.NameNotFoundException e9) {
                Log.wtf("emoji2.text.DefaultEmojiConfig", e9);
            }
            if (cVar != null) {
                return null;
            }
            return new t(new s(context, cVar));
        }
        cVar = null;
        if (cVar != null) {
        }
    }

    public static WritableMap g(String str, String str2, boolean z5) {
        WritableMap createMap = Arguments.createMap();
        createMap.putNull("UTType");
        createMap.putBoolean("isKnown", z5);
        createMap.putString("preferredFilenameExtension", str);
        createMap.putString("mimeType", str2);
        return createMap;
    }

    public static boolean h(File file) {
        File[] listFiles;
        if (file.isDirectory() && (listFiles = file.listFiles()) != null) {
            for (File file2 : listFiles) {
                h(file2);
            }
        }
        return file.delete();
    }

    public static boolean i(ip.b superDescriptor, ip.b subDescriptor) {
        Intrinsics.checkNotNullParameter(superDescriptor, "superDescriptor");
        Intrinsics.checkNotNullParameter(subDescriptor, "subDescriptor");
        if (!(subDescriptor instanceof tp.e) || !(superDescriptor instanceof ip.v)) {
            return false;
        }
        tp.e eVar = (tp.e) subDescriptor;
        eVar.P().size();
        ip.v vVar = (ip.v) superDescriptor;
        vVar.P().size();
        List P = eVar.a().P();
        Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
        List P2 = vVar.a().P();
        Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
        Iterator it = CollectionsKt.n0(P, P2).iterator();
        while (it.hasNext()) {
            Pair pair = (Pair) it.next();
            r0 r0Var = (r0) pair.f13474d;
            r0 r0Var2 = (r0) pair.f13475e;
            Intrinsics.checkNotNull(r0Var);
            boolean z5 = r((ip.v) subDescriptor, r0Var) instanceof aq.k;
            Intrinsics.checkNotNull(r0Var2);
            if (z5 != (r(vVar, r0Var2) instanceof aq.k)) {
                return true;
            }
        }
        return false;
    }

    /*  JADX ERROR: NullPointerException in pass: LoopRegionVisitor
        java.lang.NullPointerException: Cannot invoke "jadx.core.dex.instructions.args.SSAVar.use(jadx.core.dex.instructions.args.RegisterArg)" because "ssaVar" is null
        	at jadx.core.dex.nodes.InsnNode.rebindArgs(InsnNode.java:493)
        	at jadx.core.dex.instructions.mods.TernaryInsn.rebindArgs(TernaryInsn.java:92)
        	at jadx.core.dex.visitors.regions.TernaryMod.replaceWithTernary(TernaryMod.java:340)
        	at jadx.core.dex.visitors.regions.TernaryMod.processOneBranchTernary(TernaryMod.java:272)
        	at jadx.core.dex.visitors.regions.TernaryMod.makeTernaryInsn(TernaryMod.java:77)
        	at jadx.core.dex.visitors.regions.TernaryMod.processRegion(TernaryMod.java:62)
        	at jadx.core.dex.visitors.regions.TernaryMod.enterRegion(TernaryMod.java:45)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:67)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at java.base/java.util.Collections$UnmodifiableCollection.forEach(Collections.java:1117)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.lambda$traverseInternal$0(DepthRegionTraversal.java:68)
        	at java.base/java.util.ArrayList.forEach(ArrayList.java:1596)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverseInternal(DepthRegionTraversal.java:68)
        	at jadx.core.dex.visitors.regions.DepthRegionTraversal.traverse(DepthRegionTraversal.java:19)
        	at jadx.core.dex.visitors.regions.TernaryMod.process(TernaryMod.java:35)
        	at jadx.core.dex.visitors.regions.IfRegionVisitor.process(IfRegionVisitor.java:34)
        	at jadx.core.dex.visitors.regions.LoopRegionVisitor.visit(LoopRegionVisitor.java:57)
        */
    public static boolean j(java.lang.String r6, java.lang.String r7) {
        /*
            int r0 = r6.length()
            if (r6 != r7) goto L7
            goto L31
        L7:
            int r1 = r7.length()
            r2 = 0
            if (r0 == r1) goto Lf
            goto L30
        Lf:
            r1 = r2
        L10:
            if (r1 >= r0) goto L31
            char r3 = r6.charAt(r1)
            char r4 = r7.charAt(r1)
            if (r3 != r4) goto L1d
            goto L2d
        L1d:
            r3 = r3 | 32
            int r3 = r3 + (-97)
            char r3 = (char) r3
            r5 = 26
            if (r3 >= r5) goto L30
            r4 = r4 | 32
            int r4 = r4 + (-97)
            char r4 = (char) r4
            if (r3 != r4) goto L30
        L2d:
            int r1 = r1 + 1
            goto L10
        L30:
            return r2
        L31:
            r6 = 1
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: tn.g.j(java.lang.String, java.lang.String):boolean");
    }

    public static int k(int i5, int i6, int i10) {
        if (i10 >= 1) {
            int i11 = 31;
            if (i10 <= 31) {
                if (i10 > l(i5, i6)) {
                    throw new IllegalArgumentException("Day exceeds month length: " + A(i5, i6, i10));
                }
                switch (i6) {
                    case 1:
                        i11 = 28;
                        break;
                    case 2:
                        break;
                    case 3:
                        i11 = 2;
                        break;
                    case 4:
                        i11 = 5;
                        break;
                    case 5:
                        i11 = 7;
                        break;
                    case 6:
                        i11 = 10;
                        break;
                    case 7:
                        i11 = 12;
                        break;
                    case 8:
                        i11 = 15;
                        break;
                    case 9:
                        i11 = 18;
                        break;
                    case 10:
                        i11 = 20;
                        break;
                    case 11:
                        i11 = 23;
                        break;
                    case 12:
                        i11 = 25;
                        break;
                    default:
                        throw new IllegalArgumentException(k0.d.i(i6, "Month out of range: "));
                }
                int i12 = i5 % 100;
                int l6 = q.l(i5, 100);
                if (i12 < 0) {
                    i12 += 100;
                }
                if (i6 <= 2 && i12 - 1 < 0) {
                    l6--;
                    i12 = 99;
                }
                int l7 = ((((i12 / 4) + ((i10 + i11) + i12)) + q.l(l6, 4)) - (l6 * 2)) % 7;
                return l7 <= 0 ? l7 + 7 : l7;
            }
        }
        throw new IllegalArgumentException(k0.d.i(i10, "Day out of range: "));
    }

    public static int l(int i5, int i6) {
        switch (i6) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 2:
                return p(i5) ? 29 : 28;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                throw new IllegalArgumentException(k0.d.i(i6, "Invalid month: "));
        }
    }

    public static boolean m(Context context) {
        d9.a.L(context, "The application context is required.");
        return context.checkPermission("android.permission.ACCESS_NETWORK_STATE", Process.myPid(), Process.myUid()) == 0;
    }

    public static String n(fr.e eVar, tp.e functionDescriptor) {
        Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
        if (eVar.a(functionDescriptor)) {
            return null;
        }
        return eVar.getDescription();
    }

    public static boolean o(MotionEvent motionEvent, int i5) {
        return (motionEvent.getSource() & i5) == i5;
    }

    public static boolean p(int i5) {
        return (i5 <= 1900 || i5 >= 2100) ? ((i5 & 3) == 0 && i5 % 100 != 0) || i5 % ReactFontManager.TypefaceStyle.NORMAL == 0 : (i5 & 3) == 0;
    }

    public static float q(float f2, float f10, float f11) {
        return (f11 * f10) + ((1.0f - f11) * f2);
    }

    /* JADX WARN: Code restructure failed: missing block: B:25:0x00c3, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(((aq.j) r5).f2641i, "java/lang/Object") != false) goto L52;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x0119, code lost:
    
        r7 = r8.getType();
        kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, "getType(...)");
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x012a, code lost:
    
        return ks.n.r(com.facebook.imagepipeline.nativecode.c.S(r7));
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0117, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(oq.e.g(r3), oq.e.g(r0)) == false) goto L54;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static aq.l r(ip.v f2, r0 r0Var) {
        ip.v a;
        Intrinsics.checkNotNullParameter(f2, "f");
        if (f2 != 0 && Intrinsics.areEqual(((lp.l) f2).getName().b(), "remove") && f2.P().size() == 1) {
            Intrinsics.checkNotNullParameter(f2, "<this>");
            Intrinsics.checkNotNullParameter(f2, "<this>");
            if (!(oq.e.k(f2).h() instanceof tp.c) && !fp.i.A(f2)) {
                List P = f2.a().P();
                Intrinsics.checkNotNullExpressionValue(P, "getValueParameters(...)");
                y type = ((r0) CollectionsKt.Z(P)).getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                aq.l r5 = ks.n.r(type);
                aq.k kVar = r5 instanceof aq.k ? (aq.k) r5 : null;
                if ((kVar != null ? kVar.f2642i : null) == pq.c.INT && (a = rp.e.a(f2)) != null) {
                    List P2 = a.a().P();
                    Intrinsics.checkNotNullExpressionValue(P2, "getValueParameters(...)");
                    y type2 = ((r0) CollectionsKt.Z(P2)).getType();
                    Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                    aq.l r7 = ks.n.r(type2);
                    ip.l h6 = a.h();
                    Intrinsics.checkNotNullExpressionValue(h6, "getContainingDeclaration(...)");
                    if (Intrinsics.areEqual(oq.e.h(h6), o.K.a)) {
                        if (r7 instanceof aq.j) {
                        }
                    }
                }
            }
        }
        if (f2.P().size() == 1) {
            ip.l h7 = f2.h();
            ip.f fVar = h7 instanceof ip.f ? (ip.f) h7 : null;
            if (fVar != null) {
                List P3 = f2.P();
                Intrinsics.checkNotNullExpressionValue(P3, "getValueParameters(...)");
                ip.i a10 = ((r0) CollectionsKt.Z(P3)).getType().r0().a();
                ip.f fVar2 = a10 instanceof ip.f ? (ip.f) a10 : null;
                if (fVar2 != null) {
                    if (fp.i.u(fVar) != null) {
                    }
                }
            }
        }
        y type3 = r0Var.getType();
        Intrinsics.checkNotNullExpressionValue(type3, "getType(...)");
        return ks.n.r(type3);
    }

    public static u.n s(Result.Loading loading) {
        u.i iVar = u.i.f18760w;
        Intrinsics.checkNotNull(iVar, "null cannot be cast to non-null type androidx.compose.runtime.SnapshotMutationPolicy<T of androidx.compose.runtime.SnapshotStateKt__SnapshotMutationPolicyKt.structuralEqualityPolicy>");
        return new u.n(loading, iVar);
    }

    public static final boolean t(String method) {
        Intrinsics.checkNotNullParameter(method, "method");
        return (Intrinsics.areEqual(method, "GET") || Intrinsics.areEqual(method, "HEAD")) ? false : true;
    }

    public static final List u(Cursor cursor) {
        int columnIndex = cursor.getColumnIndex(StackTraceHelper.ID_KEY);
        int columnIndex2 = cursor.getColumnIndex("seq");
        int columnIndex3 = cursor.getColumnIndex("from");
        int columnIndex4 = cursor.getColumnIndex("to");
        go.e b10 = b0.b();
        while (cursor.moveToNext()) {
            int i5 = cursor.getInt(columnIndex);
            int i6 = cursor.getInt(columnIndex2);
            String string = cursor.getString(columnIndex3);
            Intrinsics.checkNotNullExpressionValue(string, "cursor.getString(fromColumnIndex)");
            String string2 = cursor.getString(columnIndex4);
            Intrinsics.checkNotNullExpressionValue(string2, "cursor.getString(toColumnIndex)");
            b10.add(new c3.c(i5, i6, string, string2));
        }
        return CollectionsKt.d0(b0.a(b10));
    }

    public static final c3.d v(h3.c cVar, String str, boolean z5) {
        Cursor x5 = cVar.x("PRAGMA index_xinfo(`" + str + "`)");
        try {
            int columnIndex = x5.getColumnIndex("seqno");
            int columnIndex2 = x5.getColumnIndex("cid");
            int columnIndex3 = x5.getColumnIndex(StackTraceHelper.NAME_KEY);
            int columnIndex4 = x5.getColumnIndex("desc");
            if (columnIndex != -1 && columnIndex2 != -1 && columnIndex3 != -1 && columnIndex4 != -1) {
                TreeMap treeMap = new TreeMap();
                TreeMap treeMap2 = new TreeMap();
                while (x5.moveToNext()) {
                    if (x5.getInt(columnIndex2) >= 0) {
                        int i5 = x5.getInt(columnIndex);
                        String columnName = x5.getString(columnIndex3);
                        String str2 = x5.getInt(columnIndex4) > 0 ? "DESC" : "ASC";
                        Integer valueOf = Integer.valueOf(i5);
                        Intrinsics.checkNotNullExpressionValue(columnName, "columnName");
                        treeMap.put(valueOf, columnName);
                        treeMap2.put(Integer.valueOf(i5), str2);
                    }
                }
                Collection values = treeMap.values();
                Intrinsics.checkNotNullExpressionValue(values, "columnsMap.values");
                List i02 = CollectionsKt.i0(values);
                Collection values2 = treeMap2.values();
                Intrinsics.checkNotNullExpressionValue(values2, "ordersMap.values");
                c3.d dVar = new c3.d(str, z5, i02, CollectionsKt.i0(values2));
                x5.close();
                return dVar;
            }
            x5.close();
            return null;
        } finally {
        }
    }

    public static String x(String str) {
        int length = str.length();
        int i5 = 0;
        while (i5 < length) {
            char charAt = str.charAt(i5);
            if (charAt >= 'A' && charAt <= 'Z') {
                char[] charArray = str.toCharArray();
                while (i5 < length) {
                    char c6 = charArray[i5];
                    if (c6 >= 'A' && c6 <= 'Z') {
                        charArray[i5] = (char) (c6 ^ ' ');
                    }
                    i5++;
                }
                return String.valueOf(charArray);
            }
            i5++;
        }
        return str;
    }

    public static long y(int i5, int i6, int i10) {
        c(i5, i6, i10);
        long j = i5;
        if (i6 < 3) {
            j--;
            i6 += 12;
        }
        return ((((q.m(ReactFontManager.TypefaceStyle.NORMAL, j) + ((q.m(4, j) + (365 * j)) - q.m(100, j))) + (((i6 + 1) * 153) / 5)) - 123) + i10) - 678881;
    }

    public static long z(long j) {
        long j5;
        long z5 = q.z(j, 678881L);
        long m5 = q.m(146097, z5);
        int o6 = q.o(146097, z5);
        int i5 = 29;
        int i6 = 2;
        if (o6 == 146096) {
            j5 = (m5 + 1) * 400;
        } else {
            int i10 = o6 / 36524;
            int i11 = o6 % 36524;
            int i12 = i11 / 1461;
            int i13 = i11 % 1461;
            if (i13 == 1460) {
                j5 = (m5 * 400) + (i10 * 100) + ((i12 + 1) * 4);
            } else {
                int i14 = i13 / 365;
                int i15 = i13 % 365;
                j5 = (m5 * 400) + (i10 * 100) + (i12 * 4) + i14;
                int i16 = ((i15 + 31) * 5) / 153;
                i6 = i16 + 2;
                i5 = (i15 - (((i16 + 3) * 153) / 5)) + 123;
                if (i6 > 12) {
                    j5++;
                    i6 = i16 - 10;
                }
            }
        }
        if (j5 < -999999999 || j5 > 999999999) {
            throw new IllegalArgumentException(k0.d.j(j5, "Year out of range: "));
        }
        return (j5 << 32) | (i6 << 16) | i5;
    }

    public abstract void w();
}
