package androidx.appcompat.widget;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.res.ColorStateList;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.PorterDuff;
import android.graphics.Shader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import android.util.Log;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import com.appsflyer.AppsFlyerProperties;
import com.discord.R;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.gms.cloudmessaging.Rpc;
import com.google.android.gms.tasks.Task;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.lang.annotation.Annotation;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ExecutionException;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.text.StringsKt;

/* loaded from: classes.dex */
public final class w implements uq.b, uq.d, uh.g {

    /* renamed from: d, reason: collision with root package name */
    public Object f1141d;

    /* renamed from: e, reason: collision with root package name */
    public Object f1142e;

    /* renamed from: i, reason: collision with root package name */
    public Object f1143i;

    /* renamed from: v, reason: collision with root package name */
    public Object f1144v;

    /* renamed from: w, reason: collision with root package name */
    public Object f1145w;

    /* renamed from: x, reason: collision with root package name */
    public Object f1146x;

    public w(String str, String str2, Set set) {
        Set unmodifiableSet = set == null ? Collections.EMPTY_SET : Collections.unmodifiableSet(set);
        this.f1141d = unmodifiableSet;
        Map map = Collections.EMPTY_MAP;
        this.f1143i = str;
        this.f1144v = str2;
        this.f1145w = gg.a.f9242d;
        HashSet hashSet = new HashSet(unmodifiableSet);
        Iterator it = map.values().iterator();
        if (it.hasNext()) {
            throw s4.h.b(it);
        }
        this.f1142e = Collections.unmodifiableSet(hashSet);
    }

    public static LayerDrawable A(n2 n2Var, Context context, int i5) {
        BitmapDrawable bitmapDrawable;
        BitmapDrawable bitmapDrawable2;
        BitmapDrawable bitmapDrawable3;
        int dimensionPixelSize = context.getResources().getDimensionPixelSize(i5);
        Drawable c6 = n2Var.c(context, R.drawable.abc_star_black_48dp);
        Drawable c8 = n2Var.c(context, R.drawable.abc_star_half_black_48dp);
        if ((c6 instanceof BitmapDrawable) && c6.getIntrinsicWidth() == dimensionPixelSize && c6.getIntrinsicHeight() == dimensionPixelSize) {
            bitmapDrawable = (BitmapDrawable) c6;
            bitmapDrawable2 = new BitmapDrawable(bitmapDrawable.getBitmap());
        } else {
            Bitmap createBitmap = Bitmap.createBitmap(dimensionPixelSize, dimensionPixelSize, Bitmap.Config.ARGB_8888);
            Canvas canvas = new Canvas(createBitmap);
            c6.setBounds(0, 0, dimensionPixelSize, dimensionPixelSize);
            c6.draw(canvas);
            bitmapDrawable = new BitmapDrawable(createBitmap);
            bitmapDrawable2 = new BitmapDrawable(createBitmap);
        }
        bitmapDrawable2.setTileModeX(Shader.TileMode.REPEAT);
        if ((c8 instanceof BitmapDrawable) && c8.getIntrinsicWidth() == dimensionPixelSize && c8.getIntrinsicHeight() == dimensionPixelSize) {
            bitmapDrawable3 = (BitmapDrawable) c8;
        } else {
            Bitmap createBitmap2 = Bitmap.createBitmap(dimensionPixelSize, dimensionPixelSize, Bitmap.Config.ARGB_8888);
            Canvas canvas2 = new Canvas(createBitmap2);
            c8.setBounds(0, 0, dimensionPixelSize, dimensionPixelSize);
            c8.draw(canvas2);
            bitmapDrawable3 = new BitmapDrawable(createBitmap2);
        }
        LayerDrawable layerDrawable = new LayerDrawable(new Drawable[]{bitmapDrawable, bitmapDrawable3, bitmapDrawable2});
        layerDrawable.setId(0, android.R.id.background);
        layerDrawable.setId(1, android.R.id.secondaryProgress);
        layerDrawable.setId(2, android.R.id.progress);
        return layerDrawable;
    }

    public static boolean F(nd.s sVar, Object obj, boolean z5, int i5, int i6, int i10) {
        Object obj2 = sVar.a;
        int i11 = sVar.f15167b;
        if (!obj2.equals(obj)) {
            return false;
        }
        if (z5 && i11 == i5 && sVar.f15168c == i6) {
            return true;
        }
        return !z5 && i11 == -1 && sVar.f15170e == i10;
    }

    public static void M(Drawable drawable, int i5, PorterDuff.Mode mode) {
        Drawable mutate = drawable.mutate();
        if (mode == null) {
            mode = x.f1158b;
        }
        mutate.setColorFilter(x.c(i5, mode));
    }

    public static je.o b(DataInputStream dataInputStream) {
        int readInt = dataInputStream.readInt();
        HashMap hashMap = new HashMap();
        for (int i5 = 0; i5 < readInt; i5++) {
            String readUTF = dataInputStream.readUTF();
            int readInt2 = dataInputStream.readInt();
            if (readInt2 < 0) {
                throw new IOException(k0.d.i(readInt2, "Invalid value size: "));
            }
            int min = Math.min(readInt2, 10485760);
            byte[] bArr = ke.d0.f13298f;
            int i6 = 0;
            while (i6 != readInt2) {
                int i10 = i6 + min;
                bArr = Arrays.copyOf(bArr, i10);
                dataInputStream.readFully(bArr, i6, min);
                min = Math.min(readInt2 - i10, 10485760);
                i6 = i10;
            }
            hashMap.put(readUTF, bArr);
        }
        return new je.o(hashMap);
    }

    public static void d(je.o oVar, DataOutputStream dataOutputStream) {
        Set<Map.Entry> entrySet = oVar.f12750b.entrySet();
        dataOutputStream.writeInt(entrySet.size());
        for (Map.Entry entry : entrySet) {
            dataOutputStream.writeUTF((String) entry.getKey());
            byte[] bArr = (byte[]) entry.getValue();
            dataOutputStream.writeInt(bArr.length);
            dataOutputStream.write(bArr);
        }
    }

    public static final mq.g f(w wVar, hq.e eVar, Object obj) {
        mq.g b10 = mq.h.b(obj, (lp.a0) wVar.f1143i);
        if (b10 != null) {
            return b10;
        }
        String message = "Unsupported annotation argument: " + eVar;
        Intrinsics.checkNotNullParameter(message, "message");
        return new mq.j(message);
    }

    public static boolean k(int i5, int[] iArr) {
        for (int i6 : iArr) {
            if (i6 == i5) {
                return true;
            }
        }
        return false;
    }

    public static ColorStateList q(Context context, int i5) {
        int c6 = k3.c(context, R.attr.colorControlHighlight);
        int b10 = k3.b(context, R.attr.colorButtonNormal);
        int[] iArr = k3.f1017b;
        int[] iArr2 = k3.f1019d;
        int c8 = b1.c.c(c6, i5);
        return new ColorStateList(new int[][]{iArr, iArr2, k3.f1018c, k3.f1021f}, new int[]{b10, c8, b1.c.c(c6, i5), i5});
    }

    public static /* synthetic */ List u(w wVar, a3.r rVar, aq.q qVar, Boolean bool, boolean z5, int i5) {
        boolean z6 = (i5 & 4) == 0;
        if ((i5 & 16) != 0) {
            bool = null;
        }
        return wVar.s(rVar, qVar, z6, false, bool, (i5 & 32) != 0 ? false : z5);
    }

    public static nd.s v(Player player, fi.e0 e0Var, nd.s sVar, hc.s1 s1Var) {
        Timeline J = player.J();
        int j = player.j();
        Object l6 = J.p() ? null : J.l(j);
        int b10 = (player.c() || J.p()) ? -1 : J.f(j, s1Var, false).b(ke.d0.I(player.S()) - s1Var.f9873w);
        for (int i5 = 0; i5 < e0Var.size(); i5++) {
            nd.s sVar2 = (nd.s) e0Var.get(i5);
            if (F(sVar2, l6, player.c(), player.C(), player.o(), b10)) {
                return sVar2;
            }
        }
        if (e0Var.isEmpty() && sVar != null && F(sVar, l6, player.c(), player.C(), player.o(), b10)) {
            return sVar;
        }
        return null;
    }

    public static aq.q y(iq.a proto, eq.g nameResolver, a4.i typeTable, uq.a kind, boolean z5) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(kind, "kind");
        if (proto instanceof cq.n) {
            iq.g gVar = gq.g.a;
            gq.e a = gq.g.a((cq.n) proto, nameResolver, typeTable);
            if (a != null) {
                return jb.a.l(a);
            }
        } else if (proto instanceof cq.a0) {
            iq.g gVar2 = gq.g.a;
            gq.e c6 = gq.g.c((cq.a0) proto, nameResolver, typeTable);
            if (c6 != null) {
                return jb.a.l(c6);
            }
        } else if (proto instanceof cq.i0) {
            iq.m propertySignature = fq.k.f8996d;
            Intrinsics.checkNotNullExpressionValue(propertySignature, "propertySignature");
            fq.e eVar = (fq.e) zk.a.q((iq.k) proto, propertySignature);
            if (eVar != null) {
                int ordinal = kind.ordinal();
                if (ordinal == 1) {
                    return d9.a.v((cq.i0) proto, nameResolver, typeTable, true, true, z5);
                }
                if (ordinal == 2) {
                    if ((eVar.f8960e & 4) != 4) {
                        return null;
                    }
                    fq.c signature = eVar.f8963w;
                    Intrinsics.checkNotNullExpressionValue(signature, "getGetter(...)");
                    Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
                    Intrinsics.checkNotNullParameter(signature, "signature");
                    String name = nameResolver.getString(signature.f8949i);
                    String desc = nameResolver.getString(signature.f8950v);
                    Intrinsics.checkNotNullParameter(name, "name");
                    Intrinsics.checkNotNullParameter(desc, "desc");
                    return new aq.q(k0.d.k(name, desc));
                }
                if (ordinal != 3 || (eVar.f8960e & 8) != 8) {
                    return null;
                }
                fq.c signature2 = eVar.f8964x;
                Intrinsics.checkNotNullExpressionValue(signature2, "getSetter(...)");
                Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
                Intrinsics.checkNotNullParameter(signature2, "signature");
                String name2 = nameResolver.getString(signature2.f8949i);
                String desc2 = nameResolver.getString(signature2.f8950v);
                Intrinsics.checkNotNullParameter(name2, "name");
                Intrinsics.checkNotNullParameter(desc2, "desc");
                return new aq.q(k0.d.k(name2, desc2));
            }
        }
        return null;
    }

    @Override // uq.d
    public ArrayList B(uq.u container) {
        Intrinsics.checkNotNullParameter(container, "container");
        ip.o0 o0Var = (ip.o0) container.f102d;
        aq.p pVar = o0Var instanceof aq.p ? (aq.p) o0Var : null;
        np.b kotlinClass = pVar != null ? pVar.f2650d : null;
        if (kotlinClass == null) {
            throw new IllegalStateException(("Class for loading annotations is not found: " + container.f19065g.a()).toString());
        }
        ArrayList arrayList = new ArrayList(1);
        e4.c visitor = new e4.c(4, this, arrayList);
        Intrinsics.checkNotNullParameter(kotlinClass, "kotlinClass");
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        Class klass = kotlinClass.a;
        Intrinsics.checkNotNullParameter(klass, "klass");
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        Iterator it = ArrayIteratorKt.iterator(klass.getDeclaredAnnotations());
        while (it.hasNext()) {
            Annotation annotation = (Annotation) it.next();
            Intrinsics.checkNotNull(annotation);
            android.support.v4.media.session.b.v(visitor, annotation);
        }
        return arrayList;
    }

    public ColorStateList C(Context context, int i5) {
        if (i5 == R.drawable.abc_edit_text_material) {
            return y0.b.c(context, R.color.abc_tint_edittext);
        }
        if (i5 == 2131230862) {
            return y0.b.c(context, R.color.abc_tint_switch_track);
        }
        if (i5 != R.drawable.abc_switch_thumb_material) {
            if (i5 == R.drawable.abc_btn_default_mtrl_shape) {
                return q(context, k3.c(context, R.attr.colorButtonNormal));
            }
            if (i5 == R.drawable.abc_btn_borderless_material) {
                return q(context, 0);
            }
            if (i5 == R.drawable.abc_btn_colored_material) {
                return q(context, k3.c(context, R.attr.colorAccent));
            }
            if (i5 == 2131230857 || i5 == R.drawable.abc_spinner_textfield_background_material) {
                return y0.b.c(context, R.color.abc_tint_spinner);
            }
            if (k(i5, (int[]) this.f1142e)) {
                return k3.d(context, R.attr.colorControlNormal);
            }
            if (k(i5, (int[]) this.f1145w)) {
                return y0.b.c(context, R.color.abc_tint_default);
            }
            if (k(i5, (int[]) this.f1146x)) {
                return y0.b.c(context, R.color.abc_tint_btn_checkable);
            }
            if (i5 == R.drawable.abc_seekbar_thumb_material) {
                return y0.b.c(context, R.color.abc_tint_seek_thumb);
            }
            return null;
        }
        int[][] iArr = new int[3][];
        int[] iArr2 = new int[3];
        ColorStateList d6 = k3.d(context, R.attr.colorSwitchThumbNormal);
        if (d6 == null || !d6.isStateful()) {
            iArr[0] = k3.f1017b;
            iArr2[0] = k3.b(context, R.attr.colorSwitchThumbNormal);
            iArr[1] = k3.f1020e;
            iArr2[1] = k3.c(context, R.attr.colorControlActivated);
            iArr[2] = k3.f1021f;
            iArr2[2] = k3.c(context, R.attr.colorSwitchThumbNormal);
        } else {
            int[] iArr3 = k3.f1017b;
            iArr[0] = iArr3;
            iArr2[0] = d6.getColorForState(iArr3, 0);
            iArr[1] = k3.f1020e;
            iArr2[1] = k3.c(context, R.attr.colorControlActivated);
            iArr[2] = k3.f1021f;
            iArr2[2] = d6.getDefaultColor();
        }
        return new ColorStateList(iArr, iArr2);
    }

    public void D(long j) {
        je.m mVar;
        SparseArray sparseArray = (SparseArray) this.f1142e;
        HashMap hashMap = (HashMap) this.f1141d;
        je.m mVar2 = (je.m) this.f1145w;
        mVar2.f(j);
        je.m mVar3 = (je.m) this.f1146x;
        if (mVar3 != null) {
            mVar3.f(j);
        }
        if (mVar2.d() || (mVar = (je.m) this.f1146x) == null || !mVar.d()) {
            mVar2.g(hashMap, sparseArray);
        } else {
            ((je.m) this.f1146x).g(hashMap, sparseArray);
            mVar2.a(hashMap);
        }
        je.m mVar4 = (je.m) this.f1146x;
        if (mVar4 != null) {
            mVar4.h();
            this.f1146x = null;
        }
    }

    public boolean E(hq.b classId) {
        np.b klass;
        Intrinsics.checkNotNullParameter(classId, "classId");
        if (classId.e() == null || !Intrinsics.areEqual(classId.f().b(), "Container") || (klass = io.sentry.config.a.o((ha.l) this.f1141d, classId, (eq.f) this.f1146x)) == null) {
            return false;
        }
        LinkedHashSet linkedHashSet = ep.b.a;
        Intrinsics.checkNotNullParameter(klass, "klass");
        Ref.BooleanRef booleanRef = new Ref.BooleanRef();
        ep.a visitor = new ep.a(booleanRef);
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        Class klass2 = klass.a;
        Intrinsics.checkNotNullParameter(klass2, "klass");
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        Iterator it = ArrayIteratorKt.iterator(klass2.getDeclaredAnnotations());
        while (it.hasNext()) {
            Annotation annotation = (Annotation) it.next();
            Intrinsics.checkNotNull(annotation);
            android.support.v4.media.session.b.v(visitor, annotation);
        }
        return booleanRef.element;
    }

    public b4 G(hq.b annotationClassId, ip.o0 source, List result) {
        Intrinsics.checkNotNullParameter(annotationClassId, "annotationClassId");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(result, "result");
        ip.f l6 = nf.e.l((lp.a0) this.f1143i, annotationClassId, (e4.i) this.f1144v);
        b4 b4Var = new b4();
        b4Var.f929i = this;
        b4Var.f930v = l6;
        b4Var.f931w = annotationClassId;
        b4Var.f932x = result;
        b4Var.f933y = source;
        b4Var.f927d = this;
        b4Var.f928e = new HashMap();
        return b4Var;
    }

    public b4 H(hq.b annotationClassId, np.a source, List result) {
        Intrinsics.checkNotNullParameter(annotationClassId, "annotationClassId");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(result, "result");
        if (ep.b.a.contains(annotationClassId)) {
            return null;
        }
        return G(annotationClassId, source, result);
    }

    public Object I(a3.r container, cq.i0 i0Var, uq.a aVar, yq.y yVar, Function2 function2) {
        Object constant;
        np.b G = com.facebook.imagepipeline.nativecode.c.G(container, true, true, eq.e.B.g(i0Var.f7123v), gq.g.d(i0Var), (ha.l) this.f1141d, (eq.f) this.f1146x);
        Intrinsics.checkNotNullParameter(container, "container");
        if (G == null) {
            if (container instanceof uq.u) {
                ip.o0 o0Var = (ip.o0) ((uq.u) container).f102d;
                aq.p pVar = o0Var instanceof aq.p ? (aq.p) o0Var : null;
                if (pVar != null) {
                    G = pVar.f2650d;
                }
            }
            G = null;
        }
        if (G != null) {
            eq.f fVar = (eq.f) G.f15583b.f637e;
            eq.f version = aq.f.f2631e;
            Intrinsics.checkNotNullParameter(version, "version");
            aq.q y5 = y(i0Var, (eq.g) container.f100b, (a4.i) container.f101c, aVar, fVar.a(version.f8186b, version.f8187c, version.f8188d));
            if (y5 != null && (constant = function2.invoke(((xq.e) this.f1142e).invoke(G), y5)) != null) {
                if (fp.t.a(yVar)) {
                    constant = (mq.g) constant;
                    Intrinsics.checkNotNullParameter(constant, "constant");
                    if (constant instanceof mq.d) {
                        return new mq.z(((Number) ((mq.d) constant).a).byteValue());
                    }
                    if (constant instanceof mq.w) {
                        return new mq.z(((Number) ((mq.w) constant).a).shortValue());
                    }
                    if (constant instanceof mq.k) {
                        return new mq.z(((Number) ((mq.k) constant).a).intValue());
                    }
                    if (constant instanceof mq.u) {
                        return new mq.z(((Number) ((mq.u) constant).a).longValue());
                    }
                }
                return constant;
            }
        }
        return null;
    }

    public List J(a3.r rVar, cq.i0 i0Var, aq.c cVar) {
        aq.q v5;
        aq.q v6;
        a4.i iVar = (a4.i) rVar.f101c;
        eq.g gVar = (eq.g) rVar.f100b;
        Boolean g6 = eq.e.B.g(i0Var.f7123v);
        Intrinsics.checkNotNullExpressionValue(g6, "get(...)");
        boolean d6 = gq.g.d(i0Var);
        if (cVar == aq.c.f2621d) {
            v6 = d9.a.v(i0Var, gVar, iVar, (r12 & 8) == 0, (r12 & 16) == 0, true);
            return v6 == null ? kotlin.collections.m0.f13512d : u(this, rVar, v6, g6, d6, 8);
        }
        v5 = d9.a.v(i0Var, gVar, iVar, (r12 & 8) == 0, (r12 & 16) == 0, true);
        if (v5 == null) {
            return kotlin.collections.m0.f13512d;
        }
        return StringsKt.D(v5.a, "$delegate", false) != (cVar == aq.c.f2623i) ? kotlin.collections.m0.f13512d : s(rVar, v5, true, true, g6, d6);
    }

    public void K(String str) {
        SparseArray sparseArray = (SparseArray) this.f1142e;
        SparseBooleanArray sparseBooleanArray = (SparseBooleanArray) this.f1144v;
        HashMap hashMap = (HashMap) this.f1141d;
        je.k kVar = (je.k) hashMap.get(str);
        if (kVar != null && kVar.f12742c.isEmpty() && kVar.f12743d.isEmpty()) {
            hashMap.remove(str);
            int i5 = kVar.a;
            boolean z5 = sparseBooleanArray.get(i5);
            ((je.m) this.f1145w).b(kVar, z5);
            if (z5) {
                sparseArray.remove(i5);
                sparseBooleanArray.delete(i5);
            } else {
                sparseArray.put(i5, null);
                ((SparseBooleanArray) this.f1143i).put(i5, true);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x0102 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x015f A[ADDED_TO_REGION, ORIG_RETURN, RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void L(String str, String str2, Bundle bundle) {
        int i5;
        String str3;
        String str4;
        wi.f fVar;
        boolean g6;
        int i6;
        PackageInfo d6;
        bundle.putString("scope", str2);
        bundle.putString("sender", str);
        bundle.putString("subtype", str);
        ki.g gVar = (ki.g) this.f1141d;
        gVar.a();
        bundle.putString("gmp_app_id", gVar.f13383c.f13395b);
        com.google.firebase.messaging.p pVar = (com.google.firebase.messaging.p) this.f1142e;
        synchronized (pVar) {
            try {
                if (pVar.a == 0 && (d6 = pVar.d("com.google.android.gms")) != null) {
                    pVar.a = d6.versionCode;
                }
                i5 = pVar.a;
            } finally {
            }
        }
        bundle.putString("gmsv", Integer.toString(i5));
        bundle.putString("osv", Integer.toString(Build.VERSION.SDK_INT));
        bundle.putString("app_ver", ((com.google.firebase.messaging.p) this.f1142e).b());
        com.google.firebase.messaging.p pVar2 = (com.google.firebase.messaging.p) this.f1142e;
        synchronized (pVar2) {
            try {
                if (((String) pVar2.f6255e) == null) {
                    pVar2.g();
                }
                str3 = (String) pVar2.f6255e;
            } finally {
            }
        }
        bundle.putString("app_ver_name", str3);
        ki.g gVar2 = (ki.g) this.f1141d;
        gVar2.a();
        try {
            str4 = Base64.encodeToString(MessageDigest.getInstance("SHA-1").digest(gVar2.f13382b.getBytes()), 11);
        } catch (NoSuchAlgorithmException unused) {
            str4 = "[HASH-ERROR]";
        }
        bundle.putString("firebase-app-name-hash", str4);
        try {
            String str5 = ((zi.a) a5.k0.h(((zi.c) ((zi.d) this.f1146x)).d())).a;
            if (TextUtils.isEmpty(str5)) {
                Log.w("FirebaseMessaging", "FIS auth token is empty");
            } else {
                bundle.putString("Goog-Firebase-Installations-Auth", str5);
            }
        } catch (InterruptedException e9) {
            e = e9;
            Log.e("FirebaseMessaging", "Failed to get FIS auth token", e);
            bundle.putString(AppsFlyerProperties.APP_ID, (String) a5.k0.h(((zi.c) ((zi.d) this.f1146x)).c()));
            bundle.putString("cliv", "fcm-24.0.0");
            fVar = (wi.f) ((yi.a) this.f1145w).get();
            gj.b bVar = (gj.b) ((yi.a) this.f1144v).get();
            if (fVar == null) {
                return;
            } else {
                return;
            }
        } catch (ExecutionException e10) {
            e = e10;
            Log.e("FirebaseMessaging", "Failed to get FIS auth token", e);
            bundle.putString(AppsFlyerProperties.APP_ID, (String) a5.k0.h(((zi.c) ((zi.d) this.f1146x)).c()));
            bundle.putString("cliv", "fcm-24.0.0");
            fVar = (wi.f) ((yi.a) this.f1145w).get();
            gj.b bVar2 = (gj.b) ((yi.a) this.f1144v).get();
            if (fVar == null) {
            }
        }
        bundle.putString(AppsFlyerProperties.APP_ID, (String) a5.k0.h(((zi.c) ((zi.d) this.f1146x)).c()));
        bundle.putString("cliv", "fcm-24.0.0");
        fVar = (wi.f) ((yi.a) this.f1145w).get();
        gj.b bVar22 = (gj.b) ((yi.a) this.f1144v).get();
        if (fVar == null || bVar22 == null) {
            return;
        }
        wi.c cVar = (wi.c) fVar;
        synchronized (cVar) {
            long currentTimeMillis = System.currentTimeMillis();
            wi.g gVar3 = (wi.g) cVar.a.get();
            synchronized (gVar3) {
                g6 = gVar3.g(currentTimeMillis);
            }
            if (g6) {
                synchronized (gVar3) {
                    String d7 = gVar3.d(System.currentTimeMillis());
                    gVar3.a.edit().putString("last-used-date", d7).commit();
                    gVar3.f(d7);
                }
                i6 = 3;
            } else {
                i6 = 1;
            }
        }
        if (i6 != 1) {
            bundle.putString("Firebase-Client-Log-Type", Integer.toString(f0.e.b(i6)));
            bundle.putString("Firebase-Client", bVar22.a());
        }
    }

    public Task N(String str, String str2, Bundle bundle) {
        int i5;
        try {
            L(str, str2, bundle);
            Rpc rpc = (Rpc) this.f1143i;
            xe.g gVar = xe.g.f20405i;
            a5.g gVar2 = rpc.f5645c;
            if (gVar2.h() < 12000000) {
                return gVar2.i() != 0 ? rpc.a(bundle).g(gVar, new e4.c(26, rpc, bundle)) : a5.k0.r(new IOException("MISSING_INSTANCEID_SERVICE"));
            }
            xe.k b10 = xe.k.b(rpc.f5644b);
            synchronized (b10) {
                i5 = b10.a;
                b10.a = i5 + 1;
            }
            return b10.c(new xe.j(i5, 1, bundle, 1)).f(gVar, xe.c.f20399e);
        } catch (InterruptedException | ExecutionException e9) {
            return a5.k0.r(e9);
        }
    }

    public void O() {
        ((je.m) this.f1145w).e((HashMap) this.f1141d);
        SparseBooleanArray sparseBooleanArray = (SparseBooleanArray) this.f1143i;
        int size = sparseBooleanArray.size();
        for (int i5 = 0; i5 < size; i5++) {
            ((SparseArray) this.f1142e).remove(sparseBooleanArray.keyAt(i5));
        }
        sparseBooleanArray.clear();
        ((SparseBooleanArray) this.f1144v).clear();
    }

    public void P(Timeline timeline) {
        a1.d dVar = new a1.d(4, 9);
        if (((fi.e0) this.f1142e).isEmpty()) {
            i(dVar, (nd.s) this.f1145w, timeline);
            if (!w3.q.j((nd.s) this.f1146x, (nd.s) this.f1145w)) {
                i(dVar, (nd.s) this.f1146x, timeline);
            }
            if (!w3.q.j((nd.s) this.f1144v, (nd.s) this.f1145w) && !w3.q.j((nd.s) this.f1144v, (nd.s) this.f1146x)) {
                i(dVar, (nd.s) this.f1144v, timeline);
            }
        } else {
            for (int i5 = 0; i5 < ((fi.e0) this.f1142e).size(); i5++) {
                i(dVar, (nd.s) ((fi.e0) this.f1142e).get(i5), timeline);
            }
            if (!((fi.e0) this.f1142e).contains((nd.s) this.f1144v)) {
                i(dVar, (nd.s) this.f1144v, timeline);
            }
        }
        this.f1143i = dVar.b();
    }

    @Override // uh.g
    public Object a() {
        Object a = ((uh.f) this.f1141d).a();
        uh.f fVar = new uh.f(new rd.u(7, (qa.t) this.f1142e));
        Object a10 = ((uh.f) this.f1143i).a();
        return new th.d1((th.s) a, fVar, (th.v0) a10, new uh.f(new rd.u(7, (uh.f) this.f1144v)), (th.p0) ((uh.f) this.f1145w).a(), (th.g1) ((uh.f) this.f1146x).a());
    }

    @Override // uq.b
    public Object c(a3.r container, cq.i0 proto, yq.y expectedType) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(expectedType, "expectedType");
        return I(container, proto, uq.a.f18998i, expectedType, aq.b.f2618e);
    }

    /* JADX WARN: Code restructure failed: missing block: B:18:0x0050, code lost:
    
        if ((r12 & 64) == 64) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0069, code lost:
    
        if (r12.f19067i != false) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x003b, code lost:
    
        if ((r12 & 64) == 64) goto L11;
     */
    @Override // uq.d
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public List e(a3.r container, iq.a callableProto, uq.a kind, int i5, cq.a1 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(callableProto, "callableProto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        Intrinsics.checkNotNullParameter(proto, "proto");
        int i6 = 0;
        aq.q signature = y(callableProto, (eq.g) container.f100b, (a4.i) container.f101c, kind, false);
        if (signature == null) {
            return kotlin.collections.m0.f13512d;
        }
        if (callableProto instanceof cq.a0) {
            cq.a0 a0Var = (cq.a0) callableProto;
            Intrinsics.checkNotNullParameter(a0Var, "<this>");
            int i10 = a0Var.f7005i;
            if ((i10 & 32) != 32) {
            }
            i6 = 1;
        } else if (callableProto instanceof cq.i0) {
            cq.i0 i0Var = (cq.i0) callableProto;
            Intrinsics.checkNotNullParameter(i0Var, "<this>");
            int i11 = i0Var.f7122i;
            if ((i11 & 32) != 32) {
            }
            i6 = 1;
        } else {
            if (!(callableProto instanceof cq.n)) {
                throw new UnsupportedOperationException("Unsupported message: " + callableProto.getClass());
            }
            Intrinsics.checkNotNull(container, "null cannot be cast to non-null type org.jetbrains.kotlin.serialization.deserialization.ProtoContainer.Class");
            uq.u uVar = (uq.u) container;
            if (uVar.f19066h == cq.j.ENUM_CLASS) {
                i6 = 2;
            }
        }
        Intrinsics.checkNotNullParameter(signature, "signature");
        return u(this, container, new aq.q(signature.a + '@' + (i5 + i6)), null, false, 60);
    }

    @Override // uq.d
    public List g(a3.r container, iq.a proto, uq.a kind) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        if (kind == uq.a.f18997e) {
            return J(container, (cq.i0) proto, aq.c.f2621d);
        }
        aq.q y5 = y(proto, (eq.g) container.f100b, (a4.i) container.f101c, kind, false);
        return y5 == null ? kotlin.collections.m0.f13512d : u(this, container, y5, null, false, 60);
    }

    public void h(String str, String str2) {
        HashMap hashMap = (HashMap) this.f1146x;
        if (hashMap == null) {
            throw new IllegalStateException("Property \"autoMetadata\" has not been set");
        }
        hashMap.put(str, str2);
    }

    public void i(a1.d dVar, nd.s sVar, Timeline timeline) {
        if (sVar == null) {
            return;
        }
        if (timeline.b(sVar.a) != -1) {
            dVar.w(sVar, timeline);
            return;
        }
        Timeline timeline2 = (Timeline) ((fi.w0) this.f1143i).get(sVar);
        if (timeline2 != null) {
            dVar.w(sVar, timeline2);
        }
    }

    @Override // uq.b
    public Object j(a3.r container, cq.i0 proto, yq.y expectedType) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(expectedType, "expectedType");
        return I(container, proto, uq.a.f18997e, expectedType, aq.b.f2619i);
    }

    @Override // uq.d
    public List l(a3.r container, cq.i0 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        return J(container, proto, aq.c.f2622e);
    }

    @Override // uq.d
    public List m(a3.r container, iq.a proto, uq.a kind) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(kind, "kind");
        aq.q signature = y(proto, (eq.g) container.f100b, (a4.i) container.f101c, kind, false);
        if (signature == null) {
            return kotlin.collections.m0.f13512d;
        }
        Intrinsics.checkNotNullParameter(signature, "signature");
        return u(this, container, new aq.q(com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), signature.a, "@0")), null, false, 60);
    }

    @Override // uq.d
    public ArrayList n(cq.x0 proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Object k = proto.k(fq.k.f9000h);
        Intrinsics.checkNotNullExpressionValue(k, "getExtension(...)");
        Iterable<cq.h> iterable = (Iterable) k;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(iterable, 10));
        for (cq.h proto2 : iterable) {
            Intrinsics.checkNotNull(proto2);
            Intrinsics.checkNotNullParameter(proto2, "proto");
            Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
            arrayList.add(((e4.c) this.f1145w).N0(proto2, nameResolver));
        }
        return arrayList;
    }

    @Override // uq.d
    public List o(a3.r container, cq.v proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        String name = ((eq.g) container.f100b).getString(proto.f7265v);
        String desc = gq.b.b(((uq.u) container).f19065g.b());
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(desc, "desc");
        return u(this, container, new aq.q(name + '#' + desc), null, false, 60);
    }

    public wb.h p() {
        String str = ((String) this.f1141d) == null ? " transportName" : "";
        if (((wb.l) this.f1143i) == null) {
            str = str.concat(" encodedPayload");
        }
        if (((Long) this.f1144v) == null) {
            str = k0.d.k(str, " eventMillis");
        }
        if (((Long) this.f1145w) == null) {
            str = k0.d.k(str, " uptimeMillis");
        }
        if (((HashMap) this.f1146x) == null) {
            str = k0.d.k(str, " autoMetadata");
        }
        if (str.isEmpty()) {
            return new wb.h((String) this.f1141d, (Integer) this.f1142e, (wb.l) this.f1143i, ((Long) this.f1144v).longValue(), ((Long) this.f1145w).longValue(), (HashMap) this.f1146x);
        }
        throw new IllegalStateException("Missing required properties:".concat(str));
    }

    public Task r(Task task) {
        return task.f(new com.discord.misc.utilities.threading.a(1), new com.google.firebase.messaging.m(this));
    }

    public List s(a3.r container, aq.q qVar, boolean z5, boolean z6, Boolean bool, boolean z7) {
        np.b binaryClass = com.facebook.imagepipeline.nativecode.c.G(container, z5, z6, bool, z7, (ha.l) this.f1141d, (eq.f) this.f1146x);
        Intrinsics.checkNotNullParameter(container, "container");
        if (binaryClass == null) {
            if (container instanceof uq.u) {
                ip.o0 o0Var = (ip.o0) ((uq.u) container).f102d;
                aq.p pVar = o0Var instanceof aq.p ? (aq.p) o0Var : null;
                if (pVar != null) {
                    binaryClass = pVar.f2650d;
                }
            }
            binaryClass = null;
        }
        if (binaryClass == null) {
            return kotlin.collections.m0.f13512d;
        }
        Intrinsics.checkNotNullParameter(binaryClass, "binaryClass");
        List list = (List) ((aq.d) ((xq.e) this.f1142e).invoke(binaryClass)).a.get(qVar);
        return list == null ? kotlin.collections.m0.f13512d : list;
    }

    @Override // uq.d
    public List t(a3.r container, cq.i0 proto) {
        Intrinsics.checkNotNullParameter(container, "container");
        Intrinsics.checkNotNullParameter(proto, "proto");
        return J(container, proto, aq.c.f2623i);
    }

    public je.k w(String str) {
        return (je.k) ((HashMap) this.f1141d).get(str);
    }

    @Override // uq.d
    public ArrayList x(cq.s0 proto, eq.g nameResolver) {
        Intrinsics.checkNotNullParameter(proto, "proto");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Object k = proto.k(fq.k.f8998f);
        Intrinsics.checkNotNullExpressionValue(k, "getExtension(...)");
        Iterable<cq.h> iterable = (Iterable) k;
        ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(iterable, 10));
        for (cq.h proto2 : iterable) {
            Intrinsics.checkNotNull(proto2);
            Intrinsics.checkNotNullParameter(proto2, "proto");
            Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
            arrayList.add(((e4.c) this.f1145w).N0(proto2, nameResolver));
        }
        return arrayList;
    }

    public je.k z(String str) {
        HashMap hashMap = (HashMap) this.f1141d;
        je.k kVar = (je.k) hashMap.get(str);
        if (kVar != null) {
            return kVar;
        }
        SparseArray sparseArray = (SparseArray) this.f1142e;
        int size = sparseArray.size();
        int i5 = 0;
        int keyAt = size == 0 ? 0 : sparseArray.keyAt(size - 1) + 1;
        if (keyAt < 0) {
            while (i5 < size && i5 == sparseArray.keyAt(i5)) {
                i5++;
            }
            keyAt = i5;
        }
        je.k kVar2 = new je.k(keyAt, str, je.o.f12749c);
        hashMap.put(str, kVar2);
        sparseArray.put(keyAt, str);
        ((SparseBooleanArray) this.f1144v).put(keyAt, true);
        ((je.m) this.f1145w).c(kVar2);
        return kVar2;
    }
}
